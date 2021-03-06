//bcw0x1bd2 {{{
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
#define SZ(x) ((int)((x).size()))
#define ALL(x) begin(x),end(x)
#define REP(i,x) for (int i=0; i<(x); i++)
#define REP1(i,a,b) for (int i=(a); i<=(b); i++)

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef long double ld;

#ifdef HAO123
#define FILEIO(name)
#else
#define FILEIO(name) \
  freopen(name".in", "r", stdin); \
  freopen(name".out", "w", stdout);
#endif

#ifdef HAO123
template<typename T>
void _dump( const char* s, T&& head ) { cerr<<s<<"="<<head<<endl; }

template<typename T, typename... Args>
void _dump( const char* s, T&& head, Args&&... tail ) {
  int c=0;
  while ( *s!=',' || c!=0 ) {
    if ( *s=='(' || *s=='[' || *s=='{' ) c++;
    if ( *s==')' || *s==']' || *s=='}' ) c--;
    cerr<<*s++;
  }
  cerr<<"="<<head<<", ";
  _dump(s+1,tail...);
}

#define dump(...) do { \
  fprintf(stderr, "%s:%d - ", __PRETTY_FUNCTION__, __LINE__); \
  _dump(#__VA_ARGS__, __VA_ARGS__); \
} while (0)

template<typename Iter>
ostream& _out( ostream &s, Iter b, Iter e ) {
  s<<"[";
  for ( auto it=b; it!=e; it++ ) s<<(it==b?"":" ")<<*it;
  s<<"]";
  return s;
}

template<typename A, typename B>
ostream& operator <<( ostream &s, const pair<A,B> &p ) { return s<<"("<<p.first<<","<<p.second<<")"; }
template<typename T>
ostream& operator <<( ostream &s, const vector<T> &c ) { return _out(s,ALL(c)); }
template<typename T, size_t N>
ostream& operator <<( ostream &s, const array<T,N> &c ) { return _out(s,ALL(c)); }
template<typename T>
ostream& operator <<( ostream &s, const set<T> &c ) { return _out(s,ALL(c)); }
template<typename A, typename B>
ostream& operator <<( ostream &s, const map<A,B> &c ) { return _out(s,ALL(c)); }
#else
#define dump(...)
#endif
// }}}
// Let's Fight! ~OAO~~

using ll = long long;
const int MAXN = 200005;
const int SQ = 514;

struct ZZZZZ {
  int a,b,id,s;
};

ostream& operator<<(ostream &s, const ZZZZZ &a) {
  return s<<"("<<a.a<<","<<a.b<<","<<a.id<<","<<a.s<<")";
}

int N,Q;
ll cnt1[MAXN],cnt2[MAXN];
ll ans[MAXN];
vector<int> F;
vector<ZZZZZ> qry;

int main() {
  IOS;
  cin>>N>>Q;
  F.resize(N+1);
  REP1(i,1,N) cin>>F[i];
  REP1(i,1,Q) {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    qry.PB({b,d,i,1});
    qry.PB({a-1,d,i,-1});
    qry.PB({b,c-1,i,-1});
    qry.PB({a-1,c-1,i,1});
  }

  sort(ALL(qry), [](ZZZZZ a, ZZZZZ b) { return make_tuple(a.a/SQ,a.b) < make_tuple(b.a/SQ,b.b);});

  int curL = 1;
  int curR = 0;
  ll p = 0;
  for (auto it:qry) {
    int ql = it.a;
    int qr = it.b;

    while (curR < qr) {
      curR++;
      p += cnt1[F[curR]];
      cnt2[F[curR]]++;
    }
    while (curR > qr) {
      p -= cnt1[F[curR]];
      cnt2[F[curR]]--;
      curR--;
    }
    while (curL < ql) {
      curL++;
      p += cnt2[F[curL]];
      cnt1[F[curL]]++;
    }
    while (curL > ql) {
      p -= cnt2[F[curL]];
      cnt1[F[curL]]--;
      curL--;
    }

    //cout<<ql<<" "<<qr<<": "<<p<<endl;

    ans[it.id] += p * it.s;
  }

  REP1(i,1,Q) cout<<ans[i]<<"\n";


  return 0;
}

