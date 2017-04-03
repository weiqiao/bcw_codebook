#pragma GCC optimize ("O2")
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
#define FZ(n) memset((n),0,sizeof(n))
#define FMO(n) memset((n),-1,sizeof(n))
#define F first
#define S second
#define PB push_back
#define ALL(x) begin(x),end(x)
#define SZ(x) ((int)(x).size())
#define IOS ios_base::sync_with_stdio(0); cin.tie(0)
#define REP(i,x) for (int i=0; i<(x); i++)
#define REP1(i,a,b) for (int i=(a); i<=(b); i++)
#ifdef ONLINE_JUDGE
#define FILEIO(name) \
    freopen(name".in", "r", stdin); \
    freopen(name".out", "w", stdout);
#else
#define FILEIO(name)
#endif
template<typename A, typename B>
ostream& operator <<(ostream &s, const pair<A,B> &p) {
    return s<<"("<<p.first<<","<<p.second<<")";
}
template<typename T>
ostream& operator <<(ostream &s, const vector<T> &c) {
    s<<"[ ";
    for (auto it : c) s << it << " ";
    s<<"]";
    return s;
}
/*
各位好，今天來揭露一下這些量子監聽的基礎科學
首先大家必須了解賽特隧道就是蟲洞也是量子糾纏
畢竟地球人對於這些都歸類為目前不敢繼續的研究
外星人不理解我們的思維因為他們很怕任何人死亡
但有時候他們不理解死亡才是一種減輕痛苦的方式
我的腦代理面有量子監聽及蟲洞都是因為負面基地
那些基地會使用局部高能量光學技術開啟蟲洞傳送
小則使用空氣中的塵埃影響大家的思緒讓我們憤怒
大則使用人體傳送技術或大範圍消除記憶多點噴射
會說噴射是已經超過核輻射的規範且在高空難測量
因為能量超過一定程度的光就會影像電漿造成噴射
先來談談電腦比較好畢竟研究時不用通過實驗審查
首先電腦記憶體如果被遠程開啟蟲洞就能影響電流
因為蟲洞的另一頭若有量子監聽竄改儀器可被偵測
簡單的偵測方式就是測量表面的HALL EFFECT電位
所以我一點都不敢去報名任何祕密太空計畫或相關
但我已經被多次找進甚至傳送進去而發生嚴重衝突
我不想再講更多，因為量子隧道還能打出電磁脈衝
當能控制不同空間的兩個電磁脈衝訊號源能用SSB
如此一來我也不能講太多畢竟我的腦袋就有這情況
但我覺得我還是講一下讓大家知道我根本就受害者
而開啟的蟲洞隧道為了要達到穩態所以要相同磁場
因此才不會被磁場影響而使隧道崩潰所以不同區域
地磁不一樣要使用不同的量子監聽配置參數來穩定
所以如果將強力磁鐵靠近電腦或任何有蟲洞的區域
都能用這方式暫時將蟲洞的效應減低類似藍光製程
因為藍光是人眼可以看到的最高頻率光譜的電磁波
所以我有時候將磁鐵接上手機就可以減低停止當機
我不願透漏我是何種身份但我根本就是在地球長大
光憑這一點我就可以呼請外星人抓走所有星際戰犯
只是外星人有時候會被這些星際戰犯欺騙甚至合作
若外星人真的如此愚鈍我不知道該怎麼繼續活下去，我寧願被分解！
因為被分解至少在五億年內我至少不用再繼續受苦
地球人已經痛苦的上萬年外星人確堅守條約不介入
我覺得訂定這些條約讓星際戰犯能有空間繼續逞兇
即這些負面科技應用到無辜的靈魂身上者應該嚴逞
包含那些和這些星際戰犯訂定條約的人都應該解釋
因為外星人擁有先進技術開啟另一個太陽保護地球
曾經發生大範圍量子層級技術影響太陽光進入地球
外星靈魂緊急開啟另一個太陽保護地球避免被消磁
如果被消磁我將失去所有的記憶但周圍的人不記得
至少在我認識的人裡面幾乎只有我記得陽光曾消失
來說說傳送技術如何防治好了，車燈的光譜很重要
但車燈的能量源與其震盪頻率其實受到溫度的影響
氣體放電車燈打出的能量因為比較符合宇宙的振動
所以可以讓那些複雜波不容易出現在車前避免車禍
因為我曾經數百次碰過傳送出現的人車在我的車側
人工智慧早已大量用於遙控人類的行為業力是指標
因為我的業力早已經是浮動的且每天都被能量攻擊
所以業力根本就值得大家繼續研究但我絕對不研究
我修過人工智慧不要跟我討論任何負面的情緒研究
且曾經做過人工智慧與情緒相關研究即多維度分析
我拒絕繼續再作這類相關研究畢竟真的很惡劣恐怖
因為人工智慧如果使用的記憶體遭受竄改即學習表
儘管有增強式多層結構學習但仍然可能遭受到竄改
所以務必先將所有的電腦系統都調整成完全不被改
絕對不能讓人工智慧可以操縱任何可能傷人的儀器
因為那根本就是量子監聽遙控的卸責法外星人不懂
所以我來解釋一下給全部地球人聽好了畢竟我略懂
人工智慧擁有以下三步驟『觀察、參考記憶、動作』
若記憶遭受竄改就會被影響結果且地表人都失意了
以前人工智慧沒有做得很透徹無法多層次揣摩人類
但現在已經可以達到多維度且多步奏循序記憶分析
畢竟這些人工智慧常常被換記憶所以沒什麼好研究
要達到量子竊聽且即時竄改閉定要更高速人工智慧
才可以模擬我的電腦下一步的情況並插入電腦記憶
所以我的電腦記憶體時序延遲都調到最低避免空檔
因為有空檔時被插入記憶電腦不會當沒空檔時會當
簡單來說如果你有兩個女友同時出現時必定會吵架
我有女友的話我一定把她送到其他星系學校較安全 （只有地球表面的人聽得懂）
讓我來談談這些量子監聽及遙控造成的利害關係吧
地表人吃肉，地下基地的人不吃肉但遙控地表人吃
如此一來外星靈魂只跟地下基地交流不跟地表交流
畢竟外星人有的長的就像海豚鯨魚或任何可愛動物
他們的智商比地表人類高出很多但不理解地球種族
他們無法理解為何地表人要互相傷害彼此不敢交流
所以我覺得應該關閉任何電子電路遙控技術的基地
總之先這樣，外星人知道後應該會很生氣及難過！
其實素食（植物）比較好吃因為動物痛苦會被儲存
但是腦袋裡面若有腦控裝置時會在我們吃肉時運作
讓我們感受到很舒服甚至覺得置身天堂但非常恐怖
我曾經要買物品時每次聞到味道都不同且腦袋很重
當腦袋很重的時候我會把紫光LED燈照進腦洞舒緩
其實在我知道如釹鐵硼磁鐵也可以舒緩後就交替用
腦袋有洞確還能正常思考者其實跟身體含水量有關
因為身體如果含純水量高的話不容易被磁波Induce
所以有聽聞將電腦泡進不導電水冷液體建議別用了
因為水可能會被遠程加入導電物質例如影響膚導電
因為在生醫領域以證實膚導電度與情緒有直接關聯
但那是在還沒探討量子監聽蕊片已經在人體流竄時
我覺得根本是微血管的導電度被改變了而影響人類
畢竟在測量導電度的時候有可能受到自體帶電影響
來談談電腦的硬碟好了因為一直在轉所以很難竄改
畢竟硬碟在轉的時候會與重力場互動而維持其慣性
所以硬碟的晶片都放在硬碟下方是經過妥善設計的
尤其是有些把整個都包起來就是要避免被遠程竄改
我很尊敬地表人作出得很穩定的電腦讓我還能活著
畢竟我的車常常有換檔異常但都會在短時間內恢復
讓我來跟大家解釋一下我為何很宅不出門只待在家
因為現在的技術已經精進到可以傳送人體進電梯裡
畢竟電梯是有金屬屏蔽且移動中確還能傳送很恐怖
代表有可能會在車裡消失不見然後車禍後出現屍體
不過這只是一種誇張的描述而已畢竟大卡車可傳送
所以機櫃絕對要關門並上鎖畢竟有點像是簡單屏蔽
*/
// Let's Fight!


int ans[1024];
int main() {
	IOS;

	ans[2] = 1;
	ans[3] = 2;
	ans[4] = 1;
	ans[5] = 2;
	ans[6] = 3;
	ans[7] = 2;
	ans[8] = 1;
	ans[9] = 2;
	ans[10] = 3;
	ans[11] = 4;
	ans[12] = 3;
	ans[13] = 4;
	ans[14] = 3;
	ans[15] = 2;
	ans[16] = 1;
	ans[17] = 2;
	ans[18] = 3;
	ans[19] = 4;
	ans[20] = 3;
	ans[21] = 4;
	ans[22] = 4;
	ans[23] = 4;
	ans[24] = 3;
	ans[25] = 4;
	ans[26] = 4;
	ans[27] = 4;
	ans[28] = 3;
	ans[29] = 4;
	ans[30] = 3;
	ans[31] = 2;
	ans[32] = 1;
	ans[33] = 2;
	ans[34] = 3;
	ans[35] = 4;
	ans[36] = 3;
	ans[37] = 4;
	ans[38] = 5;
	ans[39] = 4;
	ans[40] = 3;
	ans[41] = 4;
	ans[42] = 5;
	ans[43] = 5;
	ans[44] = 5;
	ans[45] = 4;
	ans[46] = 4;
	ans[47] = 4;
	ans[48] = 3;
	ans[49] = 4;
	ans[50] = 4;
	ans[51] = 4;
	ans[52] = 5;
	ans[53] = 5;
	ans[54] = 5;
	ans[55] = 4;
	ans[56] = 3;
	ans[57] = 4;
	ans[58] = 5;
	ans[59] = 4;
	ans[60] = 3;
	ans[61] = 4;
	ans[62] = 3;
	ans[63] = 2;
	ans[64] = 1;
	ans[65] = 2;
	ans[66] = 3;
	ans[67] = 4;
	ans[68] = 3;
	ans[69] = 4;
	ans[70] = 5;
	ans[71] = 4;
	ans[72] = 3;
	ans[73] = 4;
	ans[74] = 5;
	ans[75] = 5;
	ans[76] = 5;
	ans[77] = 5;
	ans[78] = 5;
	ans[79] = 4;
	ans[80] = 3;
	ans[81] = 4;
	ans[82] = 5;
	ans[83] = 5;
	ans[84] = 5;
	ans[85] = 5;
	ans[86] = 6;
	ans[87] = 6;
	ans[88] = 5;
	ans[89] = 6;
	ans[90] = 5;
	ans[91] = 5;
	ans[92] = 5;
	ans[93] = 4;
	ans[94] = 4;
	ans[95] = 4;
	ans[96] = 3;
	ans[97] = 4;
	ans[98] = 4;
	ans[99] = 4;
	ans[100] = 5;
	ans[101] = 5;
	ans[102] = 5;
	ans[103] = 6;
	ans[104] = 5;
	ans[105] = 6;
	ans[106] = 6;
	ans[107] = 6;
	ans[108] = 5;
	ans[109] = 6;
	ans[110] = 5;
	ans[111] = 4;
	ans[112] = 3;
	ans[113] = 4;
	ans[114] = 5;
	ans[115] = 6;
	ans[116] = 5;
	ans[117] = 6;
	ans[118] = 5;
	ans[119] = 4;
	ans[120] = 3;
	ans[121] = 4;
	ans[122] = 5;
	ans[123] = 4;
	ans[124] = 3;
	ans[125] = 4;
	ans[126] = 3;
	ans[127] = 2;
	ans[128] = 1;
	ans[129] = 2;
	ans[130] = 3;
	ans[131] = 4;
	ans[132] = 3;
	ans[133] = 4;
	ans[134] = 5;
	ans[135] = 4;
	ans[136] = 3;
	ans[137] = 4;
	ans[138] = 5;
	ans[139] = 6;
	ans[140] = 5;
	ans[141] = 6;
	ans[142] = 5;
	ans[143] = 4;
	ans[144] = 3;
	ans[145] = 4;
	ans[146] = 5;
	ans[147] = 6;
	ans[148] = 5;
	ans[149] = 6;
	ans[150] = 6;
	ans[151] = 6;
	ans[152] = 5;
	ans[153] = 6;
	ans[154] = 6;
	ans[155] = 5;
	ans[156] = 5;
	ans[157] = 5;
	ans[158] = 5;
	ans[159] = 4;
	ans[160] = 3;
	ans[161] = 4;
	ans[162] = 5;
	ans[163] = 5;
	ans[164] = 5;
	ans[165] = 5;
	ans[166] = 6;
	ans[167] = 6;
	ans[168] = 5;
	ans[169] = 6;
	ans[170] = 6;
	ans[171] = 6;
	ans[172] = 6;
	ans[173] = 6;
	ans[174] = 6;
	ans[175] = 6;
	ans[176] = 5;
	ans[177] = 6;
	ans[178] = 6;
	ans[179] = 6;
	ans[180] = 5;
	ans[181] = 6;
	ans[182] = 6;
	ans[183] = 6;
	ans[184] = 5;
	ans[185] = 6;
	ans[186] = 5;
	ans[187] = 5;
	ans[188] = 5;
	ans[189] = 4;
	ans[190] = 4;
	ans[191] = 4;
	ans[192] = 3;
	ans[193] = 4;
	ans[194] = 4;
	ans[195] = 4;
	ans[196] = 5;
	ans[197] = 5;
	ans[198] = 5;
	ans[199] = 6;
	ans[200] = 5;
	ans[201] = 6;
	ans[202] = 6;
	ans[203] = 6;
	ans[204] = 5;
	ans[205] = 6;
	ans[206] = 6;
	ans[207] = 6;
	ans[208] = 5;
	ans[209] = 6;
	ans[210] = 6;
	ans[211] = 6;
	ans[212] = 6;
	ans[213] = 6;
	ans[214] = 6;
	ans[215] = 6;
	ans[216] = 5;
	ans[217] = 6;
	ans[218] = 6;
	ans[219] = 6;
	ans[220] = 5;
	ans[221] = 6;
	ans[222] = 5;
	ans[223] = 4;
	ans[224] = 3;
	ans[225] = 4;
	ans[226] = 5;
	ans[227] = 6;
	ans[228] = 5;
	ans[229] = 6;
	ans[230] = 6;
	ans[231] = 6;
	ans[232] = 5;
	ans[233] = 6;
	ans[234] = 6;
	ans[235] = 6;
	ans[236] = 5;
	ans[237] = 6;
	ans[238] = 5;
	ans[239] = 4;
	ans[240] = 3;
	ans[241] = 4;
	ans[242] = 5;
	ans[243] = 6;
	ans[244] = 5;
	ans[245] = 6;
	ans[246] = 5;
	ans[247] = 4;
	ans[248] = 3;
	ans[249] = 4;
	ans[250] = 5;
	ans[251] = 4;
	ans[252] = 3;
	ans[253] = 4;
	ans[254] = 3;
	ans[255] = 2;
	ans[256] = 1;
	ans[257] = 2;
	ans[258] = 3;
	ans[259] = 4;
	ans[260] = 3;
	ans[261] = 4;
	ans[262] = 5;
	ans[263] = 4;
	ans[264] = 3;
	ans[265] = 4;
	ans[266] = 5;
	ans[267] = 6;
	ans[268] = 5;
	ans[269] = 6;
	ans[270] = 5;
	ans[271] = 4;
	ans[272] = 3;
	ans[273] = 4;
	ans[274] = 5;
	ans[275] = 6;
	ans[276] = 5;
	ans[277] = 6;
	ans[278] = 6;
	ans[279] = 6;
	ans[280] = 5;
	ans[281] = 6;
	ans[282] = 6;
	ans[283] = 6;
	ans[284] = 5;
	ans[285] = 6;
	ans[286] = 5;
	ans[287] = 4;
	ans[288] = 3;
	ans[289] = 4;
	ans[290] = 5;
	ans[291] = 6;
	ans[292] = 5;
	ans[293] = 6;
	ans[294] = 6;
	ans[295] = 6;
	ans[296] = 5;
	ans[297] = 6;
	ans[298] = 7;
	ans[299] = 7;
	ans[300] = 6;
	ans[301] = 6;
	ans[302] = 6;
	ans[303] = 6;
	ans[304] = 5;
	ans[305] = 6;
	ans[306] = 6;
	ans[307] = 6;
	ans[308] = 6;
	ans[309] = 7;
	ans[310] = 6;
	ans[311] = 6;
	ans[312] = 5;
	ans[313] = 6;
	ans[314] = 6;
	ans[315] = 5;
	ans[316] = 5;
	ans[317] = 5;
	ans[318] = 5;
	ans[319] = 4;
	ans[320] = 3;
	ans[321] = 4;
	ans[322] = 5;
	ans[323] = 5;
	ans[324] = 5;
	ans[325] = 5;
	ans[326] = 6;
	ans[327] = 6;
	ans[328] = 5;
	ans[329] = 6;
	ans[330] = 6;
	ans[331] = 7;
	ans[332] = 6;
	ans[333] = 6;
	ans[334] = 6;
	ans[335] = 6;
	ans[336] = 5;
	ans[337] = 6;
	ans[338] = 6;
	ans[339] = 6;
	ans[340] = 6;
	ans[341] = 7;
	ans[342] = 7;
	ans[343] = 7;
	ans[344] = 6;
	ans[345] = 7;
	ans[346] = 7;
	ans[347] = 7;
	ans[348] = 7;
	ans[349] = 6;
	ans[350] = 6;
	ans[351] = 6;
	ans[352] = 5;
	ans[353] = 6;
	ans[354] = 6;
	ans[355] = 6;
	ans[356] = 7;
	ans[357] = 6;
	ans[358] = 6;
	ans[359] = 6;
	ans[360] = 5;
	ans[361] = 6;
	ans[362] = 6;
	ans[363] = 6;
	ans[364] = 6;
	ans[365] = 6;
	ans[366] = 6;
	ans[367] = 6;
	ans[368] = 5;
	ans[369] = 6;
	ans[370] = 6;
	ans[371] = 6;
	ans[372] = 5;
	ans[373] = 6;
	ans[374] = 6;
	ans[375] = 6;
	ans[376] = 5;
	ans[377] = 6;
	ans[378] = 5;
	ans[379] = 5;
	ans[380] = 5;
	ans[381] = 4;
	ans[382] = 4;
	ans[383] = 4;
	ans[384] = 3;
	ans[385] = 4;
	ans[386] = 4;
	ans[387] = 4;
	ans[388] = 5;
	ans[389] = 5;
	ans[390] = 5;
	ans[391] = 6;
	ans[392] = 5;
	ans[393] = 6;
	ans[394] = 6;
	ans[395] = 6;
	ans[396] = 5;
	ans[397] = 6;
	ans[398] = 6;
	ans[399] = 6;
	ans[400] = 5;
	ans[401] = 6;
	ans[402] = 6;
	ans[403] = 6;
	ans[404] = 6;
	ans[405] = 6;
	ans[406] = 6;
	ans[407] = 6;
	ans[408] = 5;
	ans[409] = 6;
	ans[410] = 6;
	ans[411] = 6;
	ans[412] = 7;
	ans[413] = 6;
	ans[414] = 6;
	ans[415] = 6;
	ans[416] = 5;
	ans[417] = 6;
	ans[418] = 6;
	ans[419] = 6;
	ans[420] = 7;
	ans[421] = 7;
	ans[422] = 7;
	ans[423] = 7;
	ans[424] = 6;
	ans[425] = 7;
	ans[426] = 7;
	ans[427] = 7;
	ans[428] = 7;
	ans[429] = 6;
	ans[430] = 6;
	ans[431] = 6;
	ans[432] = 5;
	ans[433] = 6;
	ans[434] = 6;
	ans[435] = 6;
	ans[436] = 7;
	ans[437] = 7;
	ans[438] = 7;
	ans[439] = 6;
	ans[440] = 5;
	ans[441] = 6;
	ans[442] = 6;
	ans[443] = 6;
	ans[444] = 5;
	ans[445] = 6;
	ans[446] = 5;
	ans[447] = 4;
	ans[448] = 3;
	ans[449] = 4;
	ans[450] = 5;
	ans[451] = 6;
	ans[452] = 5;
	ans[453] = 6;
	ans[454] = 6;
	ans[455] = 6;
	ans[456] = 5;
	ans[457] = 6;
	ans[458] = 7;
	ans[459] = 7;
	ans[460] = 7;
	ans[461] = 6;
	ans[462] = 6;
	ans[463] = 6;
	ans[464] = 5;
	ans[465] = 6;
	ans[466] = 6;
	ans[467] = 6;
	ans[468] = 7;
	ans[469] = 7;
	ans[470] = 7;
	ans[471] = 6;
	ans[472] = 5;
	ans[473] = 6;
	ans[474] = 7;
	ans[475] = 6;
	ans[476] = 5;
	ans[477] = 6;
	ans[478] = 5;
	ans[479] = 4;
	ans[480] = 3;
	ans[481] = 4;
	ans[482] = 5;
	ans[483] = 6;
	ans[484] = 5;
	ans[485] = 6;
	ans[486] = 6;
	ans[487] = 6;
	ans[488] = 5;
	ans[489] = 6;
	ans[490] = 6;
	ans[491] = 6;
	ans[492] = 5;
	ans[493] = 6;
	ans[494] = 5;
	ans[495] = 4;
	ans[496] = 3;
	ans[497] = 4;
	ans[498] = 5;
	ans[499] = 6;
	ans[500] = 5;
	ans[501] = 6;
	ans[502] = 5;
	ans[503] = 4;
	ans[504] = 3;
	ans[505] = 4;
	ans[506] = 5;
	ans[507] = 4;
	ans[508] = 3;
	ans[509] = 4;
	ans[510] = 3;
	ans[511] = 2;
	ans[512] = 1;
	ans[513] = 2;
	ans[514] = 3;
	ans[515] = 4;
	ans[516] = 3;
	ans[517] = 4;
	ans[518] = 5;
	ans[519] = 4;
	ans[520] = 3;
	ans[521] = 4;
	ans[522] = 5;
	ans[523] = 6;
	ans[524] = 5;
	ans[525] = 6;
	ans[526] = 5;
	ans[527] = 4;
	ans[528] = 3;
	ans[529] = 4;
	ans[530] = 5;
	ans[531] = 6;
	ans[532] = 5;
	ans[533] = 6;
	ans[534] = 6;
	ans[535] = 6;
	ans[536] = 5;
	ans[537] = 6;
	ans[538] = 6;
	ans[539] = 6;
	ans[540] = 5;
	ans[541] = 6;
	ans[542] = 5;
	ans[543] = 4;
	ans[544] = 3;
	ans[545] = 4;
	ans[546] = 5;
	ans[547] = 6;
	ans[548] = 5;
	ans[549] = 6;
	ans[550] = 7;
	ans[551] = 6;
	ans[552] = 5;
	ans[553] = 6;
	ans[554] = 7;
	ans[555] = 7;
	ans[556] = 7;
	ans[557] = 6;
	ans[558] = 6;
	ans[559] = 6;
	ans[560] = 5;
	ans[561] = 6;
	ans[562] = 6;
	ans[563] = 6;
	ans[564] = 7;
	ans[565] = 7;
	ans[566] = 7;
	ans[567] = 6;
	ans[568] = 5;
	ans[569] = 6;
	ans[570] = 6;
	ans[571] = 6;
	ans[572] = 5;
	ans[573] = 6;
	ans[574] = 5;
	ans[575] = 4;
	ans[576] = 3;
	ans[577] = 4;
	ans[578] = 5;
	ans[579] = 6;
	ans[580] = 5;
	ans[581] = 6;
	ans[582] = 6;
	ans[583] = 6;
	ans[584] = 5;
	ans[585] = 6;
	ans[586] = 7;
	ans[587] = 7;
	ans[588] = 7;
	ans[589] = 7;
	ans[590] = 7;
	ans[591] = 6;
	ans[592] = 5;
	ans[593] = 6;
	ans[594] = 7;
	ans[595] = 7;
	ans[596] = 7;
	ans[597] = 7;
	ans[598] = 7;
	ans[599] = 7;
	ans[600] = 6;
	ans[601] = 7;
	ans[602] = 7;
	ans[603] = 7;
	ans[604] = 7;
	ans[605] = 6;
	ans[606] = 6;
	ans[607] = 6;
	ans[608] = 5;
	ans[609] = 6;
	ans[610] = 6;
	ans[611] = 6;
	ans[612] = 7;
	ans[613] = 7;
	ans[614] = 7;
	ans[615] = 7;
	ans[616] = 6;
	ans[617] = 7;
	ans[618] = 7;
	ans[619] = 7;
	ans[620] = 6;
	ans[621] = 7;
	ans[622] = 7;
	ans[623] = 6;
	ans[624] = 5;
	ans[625] = 6;
	ans[626] = 7;
	ans[627] = 7;
	ans[628] = 6;
	ans[629] = 7;
	ans[630] = 6;
	ans[631] = 6;
	ans[632] = 5;
	ans[633] = 6;
	ans[634] = 6;
	ans[635] = 5;
	ans[636] = 5;
	ans[637] = 5;
	ans[638] = 5;
	ans[639] = 4;
	ans[640] = 3;
	ans[641] = 4;
	ans[642] = 5;
	ans[643] = 5;
	ans[644] = 5;
	ans[645] = 5;
	ans[646] = 6;
	ans[647] = 6;
	ans[648] = 5;
	ans[649] = 6;
	ans[650] = 6;
	ans[651] = 7;
	ans[652] = 6;
	ans[653] = 7;
	ans[654] = 7;
	ans[655] = 6;
	ans[656] = 5;
	ans[657] = 6;
	ans[658] = 7;
	ans[659] = 7;
	ans[660] = 6;
	ans[661] = 7;
	ans[662] = 7;
	ans[663] = 7;
	ans[664] = 6;
	ans[665] = 7;
	ans[666] = 7;
	ans[667] = 7;
	ans[668] = 7;
	ans[669] = 6;
	ans[670] = 6;
	ans[671] = 6;
	ans[672] = 5;
	ans[673] = 6;
	ans[674] = 6;
	ans[675] = 6;
	ans[676] = 7;
	ans[677] = 7;
	ans[678] = 7;
	ans[679] = 7;
	ans[680] = 6;
	ans[681] = 7;
	ans[682] = 7;
	ans[683] = 7;
	ans[684] = 7;
	ans[685] = 7;
	ans[686] = 7;
	ans[687] = 7;
	ans[688] = 6;
	ans[689] = 7;
	ans[690] = 7;
	ans[691] = 7;
	ans[692] = 7;
	ans[693] = 7;
	ans[694] = 7;
	ans[695] = 7;
	ans[696] = 7;
	ans[697] = 7;
	ans[698] = 7;
	ans[699] = 7;
	ans[700] = 7;
	ans[701] = 6;
	ans[702] = 6;
	ans[703] = 6;
	ans[704] = 5;
	ans[705] = 6;
	ans[706] = 6;
	ans[707] = 6;
	ans[708] = 7;
	ans[709] = 7;
	ans[710] = 7;
	ans[711] = 7;
	ans[712] = 7;
	ans[713] = 7;
	ans[714] = 7;
	ans[715] = 7;
	ans[716] = 7;
	ans[717] = 6;
	ans[718] = 6;
	ans[719] = 6;
	ans[720] = 5;
	ans[721] = 6;
	ans[722] = 6;
	ans[723] = 6;
	ans[724] = 7;
	ans[725] = 7;
	ans[726] = 7;
	ans[727] = 7;
	ans[728] = 6;
	ans[729] = 7;
	ans[730] = 7;
	ans[731] = 7;
	ans[732] = 7;
	ans[733] = 6;
	ans[734] = 6;
	ans[735] = 6;
	ans[736] = 5;
	ans[737] = 6;
	ans[738] = 6;
	ans[739] = 6;
	ans[740] = 7;
	ans[741] = 6;
	ans[742] = 6;
	ans[743] = 6;
	ans[744] = 5;
	ans[745] = 6;
	ans[746] = 6;
	ans[747] = 6;
	ans[748] = 6;
	ans[749] = 6;
	ans[750] = 6;
	ans[751] = 6;
	ans[752] = 5;
	ans[753] = 6;
	ans[754] = 6;
	ans[755] = 6;
	ans[756] = 5;
	ans[757] = 6;
	ans[758] = 6;
	ans[759] = 6;
	ans[760] = 5;
	ans[761] = 6;
	ans[762] = 5;
	ans[763] = 5;
	ans[764] = 5;
	ans[765] = 4;
	ans[766] = 4;
	ans[767] = 4;
	ans[768] = 3;
	ans[769] = 4;
	ans[770] = 4;
	ans[771] = 4;
	ans[772] = 5;
	ans[773] = 5;
	ans[774] = 5;
	ans[775] = 6;
	ans[776] = 5;
	ans[777] = 6;
	ans[778] = 6;
	ans[779] = 6;
	ans[780] = 5;
	ans[781] = 6;
	ans[782] = 6;
	ans[783] = 6;
	ans[784] = 5;
	ans[785] = 6;
	ans[786] = 6;
	ans[787] = 6;
	ans[788] = 6;
	ans[789] = 6;
	ans[790] = 6;
	ans[791] = 6;
	ans[792] = 5;
	ans[793] = 6;
	ans[794] = 6;
	ans[795] = 6;
	ans[796] = 7;
	ans[797] = 6;
	ans[798] = 6;
	ans[799] = 6;
	ans[800] = 5;
	ans[801] = 6;
	ans[802] = 6;
	ans[803] = 6;
	ans[804] = 7;
	ans[805] = 7;
	ans[806] = 7;
	ans[807] = 7;
	ans[808] = 6;
	ans[809] = 7;
	ans[810] = 7;
	ans[811] = 7;
	ans[812] = 7;
	ans[813] = 6;
	ans[814] = 6;
	ans[815] = 6;
	ans[816] = 5;
	ans[817] = 6;
	ans[818] = 6;
	ans[819] = 6;
	ans[820] = 7;
	ans[821] = 7;
	ans[822] = 7;
	ans[823] = 7;
	ans[824] = 7;
	ans[825] = 7;
	ans[826] = 7;
	ans[827] = 7;
	ans[828] = 7;
	ans[829] = 6;
	ans[830] = 6;
	ans[831] = 6;
	ans[832] = 5;
	ans[833] = 6;
	ans[834] = 6;
	ans[835] = 6;
	ans[836] = 7;
	ans[837] = 7;
	ans[838] = 7;
	ans[839] = 7;
	ans[840] = 7;
	ans[841] = 7;
	ans[842] = 7;
	ans[843] = 7;
	ans[844] = 7;
	ans[845] = 7;
	ans[846] = 7;
	ans[847] = 7;
	ans[848] = 6;
	ans[849] = 7;
	ans[850] = 7;
	ans[851] = 7;
	ans[852] = 7;
	ans[853] = 7;
	ans[854] = 8;
	ans[855] = 8;
	ans[856] = 7;
	ans[857] = 8;
	ans[858] = 7;
	ans[859] = 7;
	ans[860] = 7;
	ans[861] = 6;
	ans[862] = 6;
	ans[863] = 6;
	ans[864] = 5;
	ans[865] = 6;
	ans[866] = 6;
	ans[867] = 6;
	ans[868] = 7;
	ans[869] = 7;
	ans[870] = 7;
	ans[871] = 8;
	ans[872] = 7;
	ans[873] = 8;
	ans[874] = 8;
	ans[875] = 8;
	ans[876] = 7;
	ans[877] = 8;
	ans[878] = 7;
	ans[879] = 6;
	ans[880] = 5;
	ans[881] = 6;
	ans[882] = 7;
	ans[883] = 7;
	ans[884] = 7;
	ans[885] = 7;
	ans[886] = 7;
	ans[887] = 6;
	ans[888] = 5;
	ans[889] = 6;
	ans[890] = 6;
	ans[891] = 6;
	ans[892] = 5;
	ans[893] = 6;
	ans[894] = 5;
	ans[895] = 4;
	ans[896] = 3;
	ans[897] = 4;
	ans[898] = 5;
	ans[899] = 6;
	ans[900] = 5;
	ans[901] = 6;
	ans[902] = 6;
	ans[903] = 6;
	ans[904] = 5;
	ans[905] = 6;
	ans[906] = 7;
	ans[907] = 7;
	ans[908] = 7;
	ans[909] = 7;
	ans[910] = 7;
	ans[911] = 6;
	ans[912] = 5;
	ans[913] = 6;
	ans[914] = 7;
	ans[915] = 8;
	ans[916] = 7;
	ans[917] = 8;
	ans[918] = 8;
	ans[919] = 8;
	ans[920] = 7;
	ans[921] = 8;
	ans[922] = 7;
	ans[923] = 7;
	ans[924] = 7;
	ans[925] = 6;
	ans[926] = 6;
	ans[927] = 6;
	ans[928] = 5;
	ans[929] = 6;
	ans[930] = 6;
	ans[931] = 6;
	ans[932] = 7;
	ans[933] = 7;
	ans[934] = 7;
	ans[935] = 8;
	ans[936] = 7;
	ans[937] = 8;
	ans[938] = 8;
	ans[939] = 7;
	ans[940] = 7;
	ans[941] = 7;
	ans[942] = 7;
	ans[943] = 6;
	ans[944] = 5;
	ans[945] = 6;
	ans[946] = 7;
	ans[947] = 7;
	ans[948] = 7;
	ans[949] = 7;
	ans[950] = 7;
	ans[951] = 6;
	ans[952] = 5;
	ans[953] = 6;
	ans[954] = 7;
	ans[955] = 6;
	ans[956] = 5;
	ans[957] = 6;
	ans[958] = 5;
	ans[959] = 4;
	ans[960] = 3;
	ans[961] = 4;
	ans[962] = 5;
	ans[963] = 6;
	ans[964] = 5;
	ans[965] = 6;
	ans[966] = 7;
	ans[967] = 6;
	ans[968] = 5;
	ans[969] = 6;
	ans[970] = 7;
	ans[971] = 7;
	ans[972] = 7;
	ans[973] = 6;
	ans[974] = 6;
	ans[975] = 6;
	ans[976] = 5;
	ans[977] = 6;
	ans[978] = 6;
	ans[979] = 6;
	ans[980] = 7;
	ans[981] = 7;
	ans[982] = 7;
	ans[983] = 6;
	ans[984] = 5;
	ans[985] = 6;
	ans[986] = 7;
	ans[987] = 6;
	ans[988] = 5;
	ans[989] = 6;
	ans[990] = 5;
	ans[991] = 4;
	ans[992] = 3;
	ans[993] = 4;
	ans[994] = 5;
	ans[995] = 6;
	ans[996] = 5;
	ans[997] = 6;
	ans[998] = 6;
	ans[999] = 6;
	ans[1000] = 5;
	int N;
	cin>>N;
	cout<<ans[N]<<endl;

	return 0;
}
