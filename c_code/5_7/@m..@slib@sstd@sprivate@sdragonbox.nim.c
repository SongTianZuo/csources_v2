/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 32
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x)

#define nimlf_(x, y)
typedef struct tyObject_Double__A9bp44Zlm16kBP5sILlRTZw tyObject_Double__A9bp44Zlm16kBP5sILlRTZw;
typedef struct tyObject_uint64x2__sWc3PRyaiY9baH12u59cy0qg tyObject_uint64x2__sWc3PRyaiY9baH12u59cy0qg;
typedef struct tyObject_MulCmp__qYZX9aWRyQ0DSeROrcwsXaA tyObject_MulCmp__qYZX9aWRyQ0DSeROrcwsXaA;
struct tyObject_Double__A9bp44Zlm16kBP5sILlRTZw {
	NU64 bits;
};
struct tyObject_uint64x2__sWc3PRyaiY9baH12u59cy0qg {
	NU64 hi;
	NU64 lo;
};
typedef tyObject_uint64x2__sWc3PRyaiY9baH12u59cy0qg tyArray__t4hRD9cS4Hf2n9bP6e3yX32A[619];
struct tyObject_MulCmp__qYZX9aWRyQ0DSeROrcwsXaA {
	NU64 mul;
	NU64 cmp;
};
typedef tyObject_MulCmp__qYZX9aWRyQ0DSeROrcwsXaA tyArray__mdDpUfhLXSqSISg00pcf2A[25];
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE NIM_CONST tyArray__t4hRD9cS4Hf2n9bP6e3yX32A pow10__stdZprivateZdragonbox_u106 = {{18408377700990114895ULL, 2731688931043774331ULL}
,
{11505236063118821809ULL, 8624834609543440813ULL}
,
{14381545078898527261ULL, 15392729280356688920ULL}
,
{17976931348623159077ULL, 5405853545163697438ULL}
,
{11235582092889474423ULL, 5684501474941004851ULL}
,
{14044477616111843029ULL, 2493940825248868160ULL}
,
{17555597020139803786ULL, 7729112049988473104ULL}
,
{10972248137587377366ULL, 9442381049670183594ULL}
,
{13715310171984221708ULL, 2579604275232953684ULL}
,
{17144137714980277135ULL, 3224505344041192105ULL}
,
{10715086071862673209ULL, 8932844867666826922ULL}
,
{13393857589828341511ULL, 15777742103010921556ULL}
,
{16742321987285426889ULL, 15110491610336264041ULL}
,
{10463951242053391806ULL, 2526528228819083170ULL}
,
{13079939052566739757ULL, 12381532322878629771ULL}
,
{16349923815708424697ULL, 1641857348316123501ULL}
,
{10218702384817765435ULL, 12555375888766046948ULL}
,
{12773377981022206794ULL, 11082533842530170781ULL}
,
{15966722476277758493ULL, 4629795266307937668ULL}
,
{9979201547673599058ULL, 5199465050656154995ULL}
,
{12474001934591998822ULL, 15722703350174969552ULL}
,
{15592502418239998528ULL, 10430007150863936131ULL}
,
{9745314011399999080ULL, 6518754469289960082ULL}
,
{12181642514249998850ULL, 8148443086612450103ULL}
,
{15227053142812498563ULL, 962181821410786820ULL}
,
{9516908214257811601ULL, 16742264702877599427ULL}
,
{11896135267822264502ULL, 7092772823314835571ULL}
,
{14870169084777830627ULL, 18089338065998320272ULL}
,
{9293855677986144142ULL, 8999993282035256218ULL}
,
{11617319597482680178ULL, 2026619565689294465ULL}
,
{14521649496853350222ULL, 11756646493966393889ULL}
,
{18152061871066687778ULL, 5472436080603216553ULL}
,
{11345038669416679861ULL, 8031958568804398250ULL}
,
{14181298336770849826ULL, 14651634229432885716ULL}
,
{17726622920963562283ULL, 9091170749936331337ULL}
,
{11079139325602226427ULL, 3376138709496513134ULL}
,
{13848924157002783033ULL, 18055231442152805129ULL}
,
{17311155196253478792ULL, 8733981247408842699ULL}
,
{10819471997658424245ULL, 5458738279630526687ULL}
,
{13524339997073030306ULL, 11435108867965546263ULL}
,
{16905424996341287883ULL, 5070514048102157021ULL}
,
{10565890622713304927ULL, 863228270850154186ULL}
,
{13207363278391631158ULL, 14914093393844856444ULL}
,
{16509204097989538948ULL, 9419244705451294747ULL}
,
{10318252561243461842ULL, 15110399977761835025ULL}
,
{12897815701554327303ULL, 9664627935347517974ULL}
,
{16122269626942909129ULL, 7469098900757009563ULL}
,
{10076418516839318205ULL, 16197401859041600737ULL}
,
{12595523146049147757ULL, 6411694268519837209ULL}
,
{15744403932561434696ULL, 12626303854077184415ULL}
,
{9840252457850896685ULL, 7891439908798240260ULL}
,
{12300315572313620856ULL, 14475985904425188228ULL}
,
{15375394465392026070ULL, 18094982380531485285ULL}
,
{9609621540870016294ULL, 6697677969404790400ULL}
,
{12012026926087520367ULL, 17595469498610763807ULL}
,
{15015033657609400459ULL, 17382650854836066855ULL}
,
{9384396036005875287ULL, 8558313775058847833ULL}
,
{11730495045007344109ULL, 6086206200396171887ULL}
,
{14663118806259180136ULL, 12219443768922602762ULL}
,
{18328898507823975170ULL, 15274304711153253453ULL}
,
{11455561567389984481ULL, 14158126462898171312ULL}
,
{14319451959237480602ULL, 3862600023340550428ULL}
,
{17899314949046850752ULL, 14051622066030463843ULL}
,
{11187071843154281720ULL, 8782263791269039902ULL}
,
{13983839803942852150ULL, 10977829739086299877ULL}
,
{17479799754928565188ULL, 4498915137003099038ULL}
,
{10924874846830353242ULL, 12035193997481712707ULL}
,
{13656093558537941553ULL, 5820620459997365076ULL}
,
{17070116948172426941ULL, 11887461593424094249ULL}
,
{10668823092607766838ULL, 9735506505103752858ULL}
,
{13336028865759708548ULL, 2946011094524915264ULL}
,
{16670036082199635685ULL, 3682513868156144080ULL}
,
{10418772551374772303ULL, 4607414176811284002ULL}
,
{13023465689218465379ULL, 1147581702586717098ULL}
,
{16279332111523081723ULL, 15269535183515560085ULL}
,
{10174582569701926077ULL, 7237616480483531101ULL}
,
{12718228212127407596ULL, 13658706619031801780ULL}
,
{15897785265159259495ULL, 17073383273789752225ULL}
,
{9936115790724537184ULL, 17588393573759676997ULL}
,
{12420144738405671481ULL, 3538747893490044630ULL}
,
{15525180923007089351ULL, 9035120885289943692ULL}
,
{9703238076879430844ULL, 12564479580947296664ULL}
,
{12129047596099288555ULL, 15705599476184120829ULL}
,
{15161309495124110694ULL, 15020313326802763132ULL}
,
{9475818434452569184ULL, 4776009810824339054ULL}
,
{11844773043065711480ULL, 5970012263530423817ULL}
,
{14805966303832139350ULL, 7462515329413029772ULL}
,
{9253728939895087094ULL, 52386062455755703ULL}
,
{11567161174868858867ULL, 9288854614924470437ULL}
,
{14458951468586073584ULL, 6999382250228200142ULL}
,
{18073689335732591980ULL, 8749227812785250178ULL}
,
{11296055834832869987ULL, 14691639419845557169ULL}
,
{14120069793541087484ULL, 13752863256379558557ULL}
,
{17650087241926359355ULL, 17191079070474448197ULL}
,
{11031304526203974597ULL, 8438581409832836171ULL}
,
{13789130657754968246ULL, 15159912780718433118ULL}
,
{17236413322193710308ULL, 9726518939043265589ULL}
,
{10772758326371068942ULL, 15302446373756816801ULL}
,
{13465947907963836178ULL, 9904685930341245194ULL}
,
{16832434884954795223ULL, 3157485376071780684ULL}
,
{10520271803096747014ULL, 8890957387685944784ULL}
,
{13150339753870933768ULL, 1890324697752655171ULL}
,
{16437924692338667210ULL, 2362905872190818964ULL}
,
{10273702932711667006ULL, 6088502188546649757ULL}
,
{12842128665889583757ULL, 16833999772538088004ULL}
,
{16052660832361979697ULL, 7207441660390446293ULL}
,
{10032913020226237310ULL, 16033866083812498693ULL}
,
{12541141275282796638ULL, 10818960567910847558ULL}
,
{15676426594103495798ULL, 4300328673033783640ULL}
,
{9797766621314684873ULL, 16522763475928278487ULL}
,
{12247208276643356092ULL, 6818396289628184397ULL}
,
{15309010345804195115ULL, 8522995362035230496ULL}
,
{9568131466127621947ULL, 3021029092058325108ULL}
,
{11960164332659527433ULL, 17611344420355070097ULL}
,
{14950205415824409292ULL, 8179122470161673909ULL}
,
{9343878384890255807ULL, 14335323580705822001ULL}
,
{11679847981112819759ULL, 13307468457454889597ULL}
,
{14599809976391024699ULL, 12022649553391224093ULL}
,
{18249762470488780874ULL, 10416625923311642212ULL}
,
{11406101544055488046ULL, 11122077220497164287ULL}
,
{14257626930069360058ULL, 4679224488766679550ULL}
,
{17822033662586700072ULL, 15072402647813125245ULL}
,
{11138771039116687545ULL, 9420251654883203279ULL}
,
{13923463798895859431ULL, 16387000587031392002ULL}
,
{17404329748619824289ULL, 15872064715361852098ULL}
,
{10877706092887390181ULL, 3002511419460075706ULL}
,
{13597132616109237726ULL, 8364825292752482536ULL}
,
{16996415770136547158ULL, 1232659579085827362ULL}
,
{10622759856335341973ULL, 14605470292210805813ULL}
,
{13278449820419177467ULL, 4421779809981343555ULL}
,
{16598062275523971834ULL, 915538744049291539ULL}
,
{10373788922202482396ULL, 5183897733458195116ULL}
,
{12967236152753102995ULL, 6479872166822743895ULL}
,
{16209045190941378744ULL, 3488154190101041965ULL}
,
{10130653244338361715ULL, 2180096368813151228ULL}
,
{12663316555422952143ULL, 16560178516298602747ULL}
,
{15829145694278690179ULL, 16088537126945865530ULL}
,
{9893216058924181362ULL, 7749492695127472004ULL}
,
{12366520073655226703ULL, 463493832054564197ULL}
,
{15458150092069033378ULL, 14414425345350368958ULL}
,
{9661343807543145861ULL, 13620701859271368503ULL}
,
{12076679759428932327ULL, 3190819268807046917ULL}
,
{15095849699286165408ULL, 17823582141290972358ULL}
,
{9434906062053853380ULL, 11139738838306857724ULL}
,
{11793632577567316725ULL, 13924673547883572155ULL}
,
{14742040721959145907ULL, 3570783879572301481ULL}
,
{18427550902448932383ULL, 18298537904747540563ULL}
,
{11517219314030582739ULL, 18354115218108294708ULL}
,
{14396524142538228424ULL, 18330958004207980481ULL}
,
{17995655178172785531ULL, 4466953431550423985ULL}
,
{11247284486357990957ULL, 486002885505321039ULL}
,
{14059105607947488696ULL, 5219189625309039203ULL}
,
{17573882009934360870ULL, 6523987031636299003ULL}
,
{10983676256208975543ULL, 17912549950054850589ULL}
,
{13729595320261219429ULL, 17779001419141175332ULL}
,
{17161994150326524287ULL, 8388693718644305453ULL}
,
{10726246343954077679ULL, 12160462601793772765ULL}
,
{13407807929942597099ULL, 10588892233814828052ULL}
,
{16759759912428246374ULL, 8624429273841147160ULL}
,
{10474849945267653984ULL, 778582277723329071ULL}
,
{13093562431584567480ULL, 973227847154161339ULL}
,
{16366953039480709350ULL, 1216534808942701674ULL}
,
{10229345649675443343ULL, 14595392310871352258ULL}
,
{12786682062094304179ULL, 13632554370161802419ULL}
,
{15983352577617880224ULL, 12429006944274865119ULL}
,
{9989595361011175140ULL, 7768129340171790700ULL}
,
{12486994201263968925ULL, 9710161675214738375ULL}
,
{15608742751579961156ULL, 16749388112445810872ULL}
,
{9755464219737475723ULL, 1244995533423855987ULL}
,
{12194330274671844653ULL, 15391302472061983696ULL}
,
{15242912843339805817ULL, 5404070034795315908ULL}
,
{9526820527087378635ULL, 14906758817815542203ULL}
,
{11908525658859223294ULL, 14021762503842039849ULL}
,
{14885657073574029118ULL, 8303831092947774003ULL}
,
{9303535670983768199ULL, 578208414664970848ULL}
,
{11629419588729710248ULL, 14557818573613377272ULL}
,
{14536774485912137810ULL, 18197273217016721590ULL}
,
{18170968107390172263ULL, 13523219484416126179ULL}
,
{11356855067118857664ULL, 15369541205401160718ULL}
,
{14196068833898572081ULL, 765182433041899282ULL}
,
{17745086042373215101ULL, 5568164059729762006ULL}
,
{11090678776483259438ULL, 5785945546544795206ULL}
,
{13863348470604074297ULL, 16455803970035769815ULL}
,
{17329185588255092872ULL, 6734696907262548557ULL}
,
{10830740992659433045ULL, 4209185567039092848ULL}
,
{13538426240824291306ULL, 9873167977226253964ULL}
,
{16923032801030364133ULL, 3118087934678041647ULL}
,
{10576895500643977583ULL, 4254647968387469982ULL}
,
{13221119375804971979ULL, 706623942056949573ULL}
,
{16526399219756214973ULL, 14718337982853350678ULL}
,
{10328999512347634358ULL, 11504804248497038126ULL}
,
{12911249390434542948ULL, 5157633273766521850ULL}
,
{16139061738043178685ULL, 6447041592208152312ULL}
,
{10086913586276986678ULL, 6335244004343789147ULL}
,
{12608641982846233347ULL, 17142427042284512242ULL}
,
{15760802478557791684ULL, 16816347784428252398ULL}
,
{9850501549098619803ULL, 1286845328412881941ULL}
,
{12313126936373274753ULL, 15443614715798266138ULL}
,
{15391408670466593442ULL, 5469460339465668960ULL}
,
{9619630419041620901ULL, 8030098730593431004ULL}
,
{12024538023802026126ULL, 14649309431669176659ULL}
,
{15030672529752532658ULL, 9088264752731695016ULL}
,
{9394170331095332911ULL, 10291851488884697289ULL}
,
{11742712913869166139ULL, 8253128342678483707ULL}
,
{14678391142336457674ULL, 5704724409920716730ULL}
,
{18347988927920572092ULL, 16354277549255671721ULL}
,
{11467493079950357558ULL, 998051431430019018ULL}
,
{14334366349937946947ULL, 10470936326142299580ULL}
,
{17917957937422433684ULL, 8476984389250486571ULL}
,
{11198723710889021052ULL, 14521487280136329915ULL}
,
{13998404638611276315ULL, 18151859100170412393ULL}
,
{17498005798264095394ULL, 18078137856785627588ULL}
,
{10936253623915059621ULL, 15910522178918405147ULL}
,
{13670317029893824527ULL, 6053094668365842721ULL}
,
{17087896287367280659ULL, 2954682317029915497ULL}
,
{10679935179604550411ULL, 17987577512639554850ULL}
,
{13349918974505688014ULL, 17872785872372055658ULL}
,
{16687398718132110018ULL, 13117610303610293765ULL}
,
{10429624198832568761ULL, 12810192458183821507ULL}
,
{13037030248540710952ULL, 2177682517447613172ULL}
,
{16296287810675888690ULL, 2722103146809516465ULL}
,
{10185179881672430431ULL, 6313000485183335695ULL}
,
{12731474852090538039ULL, 3279564588051781714ULL}
,
{15914343565113172548ULL, 17934513790346890854ULL}
,
{9946464728195732843ULL, 1985699082112030976ULL}
,
{12433080910244666053ULL, 16317181907922202432ULL}
,
{15541351137805832567ULL, 6561419329620589328ULL}
,
{9713344461128645354ULL, 11018416108653950186ULL}
,
{12141680576410806693ULL, 4549648098962661925ULL}
,
{15177100720513508366ULL, 10298746142130715310ULL}
,
{9485687950320942729ULL, 1825030320404309165ULL}
,
{11857109937901178411ULL, 6892973918932774360ULL}
,
{14821387422376473014ULL, 4004531380238580046ULL}
,
{9263367138985295633ULL, 16337890167931276241ULL}
,
{11579208923731619542ULL, 6587304654631931589ULL}
,
{14474011154664524427ULL, 17457502855144690294ULL}
,
{18092513943330655534ULL, 17210192550503474963ULL}
,
{11307821214581659709ULL, 6144684325637283948ULL}
,
{14134776518227074636ULL, 12292541425473992839ULL}
,
{17668470647783843295ULL, 15365676781842491049ULL}
,
{11042794154864902059ULL, 16521077016292638762ULL}
,
{13803492693581127574ULL, 16039660251938410548ULL}
,
{17254365866976409468ULL, 10826203278068237377ULL}
,
{10783978666860255917ULL, 15989749085647424169ULL}
,
{13479973333575319897ULL, 6152128301777116499ULL}
,
{16849966666969149871ULL, 12301846395648783527ULL}
,
{10531229166855718669ULL, 14606183024921571561ULL}
,
{13164036458569648337ULL, 4422670725869800739ULL}
,
{16455045573212060421ULL, 10140024425764638827ULL}
,
{10284403483257537763ULL, 8643358275316593219ULL}
,
{12855504354071922204ULL, 6192511825718353620ULL}
,
{16069380442589902755ULL, 7740639782147942025ULL}
,
{10043362776618689222ULL, 2532056854628769814ULL}
,
{12554203470773361527ULL, 12388443105140738075ULL}
,
{15692754338466701909ULL, 10873867862998534690ULL}
,
{9807971461541688693ULL, 9102010423587778133ULL}
,
{12259964326927110866ULL, 15989199047912110570ULL}
,
{15324955408658888583ULL, 10763126773035362405ULL}
,
{9578097130411805364ULL, 13644483260788183359ULL}
,
{11972621413014756705ULL, 17055604075985229199ULL}
,
{14965776766268445882ULL, 7484447039699372787ULL}
,
{9353610478917778676ULL, 9289465418239495896ULL}
,
{11692013098647223345ULL, 11611831772799369870ULL}
,
{14615016373309029182ULL, 679731660717048625ULL}
,
{18268770466636286477ULL, 10073036612751086589ULL}
,
{11417981541647679048ULL, 8601490892183123070ULL}
,
{14272476927059598810ULL, 10751863615228903838ULL}
,
{17840596158824498513ULL, 4216457482181353989ULL}
,
{11150372599265311570ULL, 14164500972431816003ULL}
,
{13937965749081639463ULL, 8482254178684994196ULL}
,
{17422457186352049329ULL, 5991131704928854841ULL}
,
{10889035741470030830ULL, 15273672361649004036ULL}
,
{13611294676837538538ULL, 9868718415206479237ULL}
,
{17014118346046923173ULL, 3112525982153323238ULL}
,
{10633823966279326983ULL, 4251171748059520976ULL}
,
{13292279957849158729ULL, 702278666647013315ULL}
,
{16615349947311448411ULL, 5489534351736154548ULL}
,
{10384593717069655257ULL, 1125115960621402641ULL}
,
{12980742146337069071ULL, 6018080969204141205ULL}
,
{16225927682921336339ULL, 2910915193077788602ULL}
,
{10141204801825835211ULL, 17960223060169475540ULL}
,
{12676506002282294014ULL, 17838592806784456521ULL}
,
{15845632502852867518ULL, 13074868971625794844ULL}
,
{9903520314283042199ULL, 3560107088838733873ULL}
,
{12379400392853802748ULL, 18285191916330581054ULL}
,
{15474250491067253436ULL, 4409745821703674701ULL}
,
{9671406556917033397ULL, 11979463175419572496ULL}
,
{12089258196146291747ULL, 1139270913992301908ULL}
,
{15111572745182864683ULL, 15259146697772541097ULL}
,
{9444732965739290427ULL, 7231123676894144234ULL}
,
{11805916207174113034ULL, 4427218577690292388ULL}
,
{14757395258967641292ULL, 14757395258967641293ULL}
,
{9223372036854775808ULL, 0ULL}
,
{11529215046068469760ULL, 0ULL}
,
{14411518807585587200ULL, 0ULL}
,
{18014398509481984000ULL, 0ULL}
,
{11258999068426240000ULL, 0ULL}
,
{14073748835532800000ULL, 0ULL}
,
{17592186044416000000ULL, 0ULL}
,
{10995116277760000000ULL, 0ULL}
,
{13743895347200000000ULL, 0ULL}
,
{17179869184000000000ULL, 0ULL}
,
{10737418240000000000ULL, 0ULL}
,
{13421772800000000000ULL, 0ULL}
,
{16777216000000000000ULL, 0ULL}
,
{10485760000000000000ULL, 0ULL}
,
{13107200000000000000ULL, 0ULL}
,
{16384000000000000000ULL, 0ULL}
,
{10240000000000000000ULL, 0ULL}
,
{12800000000000000000ULL, 0ULL}
,
{16000000000000000000ULL, 0ULL}
,
{10000000000000000000ULL, 0ULL}
,
{12500000000000000000ULL, 0ULL}
,
{15625000000000000000ULL, 0ULL}
,
{9765625000000000000ULL, 0ULL}
,
{12207031250000000000ULL, 0ULL}
,
{15258789062500000000ULL, 0ULL}
,
{9536743164062500000ULL, 0ULL}
,
{11920928955078125000ULL, 0ULL}
,
{14901161193847656250ULL, 0ULL}
,
{9313225746154785156ULL, 4611686018427387904ULL}
,
{11641532182693481445ULL, 5764607523034234880ULL}
,
{14551915228366851806ULL, 11817445422220181504ULL}
,
{18189894035458564758ULL, 5548434740920451072ULL}
,
{11368683772161602973ULL, 17302829768357445632ULL}
,
{14210854715202003717ULL, 7793479155164643328ULL}
,
{17763568394002504646ULL, 14353534962383192064ULL}
,
{11102230246251565404ULL, 4359273333062107136ULL}
,
{13877787807814456755ULL, 5449091666327633920ULL}
,
{17347234759768070944ULL, 2199678564482154496ULL}
,
{10842021724855044340ULL, 1374799102801346560ULL}
,
{13552527156068805425ULL, 1718498878501683200ULL}
,
{16940658945086006781ULL, 6759809616554491904ULL}
,
{10587911840678754238ULL, 6530724019560251392ULL}
,
{13234889800848442797ULL, 17386777061305090048ULL}
,
{16543612251060553497ULL, 7898413271349198848ULL}
,
{10339757656912845935ULL, 16465723340661719040ULL}
,
{12924697071141057419ULL, 15970468157399760896ULL}
,
{16155871338926321774ULL, 15351399178322313216ULL}
,
{10097419586828951109ULL, 4982938468024057856ULL}
,
{12621774483536188886ULL, 10840359103457460224ULL}
,
{15777218104420236108ULL, 4327076842467049472ULL}
,
{9860761315262647567ULL, 11927795063396681728ULL}
,
{12325951644078309459ULL, 10298057810818464256ULL}
,
{15407439555097886824ULL, 8260886245095692416ULL}
,
{9629649721936179265ULL, 5163053903184807760ULL}
,
{12037062152420224081ULL, 11065503397408397604ULL}
,
{15046327690525280101ULL, 18443565265187884909ULL}
,
{9403954806578300063ULL, 13833071299956122020ULL}
,
{11754943508222875079ULL, 12679653106517764621ULL}
,
{14693679385278593849ULL, 11237880364719817872ULL}
,
{18367099231598242312ULL, 212292400617608628ULL}
,
{11479437019748901445ULL, 132682750386005392ULL}
,
{14349296274686126806ULL, 4777539456409894645ULL}
,
{17936620343357658507ULL, 15195296357367144114ULL}
,
{11210387714598536567ULL, 7191217214140771119ULL}
,
{14012984643248170709ULL, 4377335499248575995ULL}
,
{17516230804060213386ULL, 10083355392488107898ULL}
,
{10947644252537633366ULL, 10913783138732455340ULL}
,
{13684555315672041708ULL, 4418856886560793367ULL}
,
{17105694144590052135ULL, 5523571108200991709ULL}
,
{10691058840368782584ULL, 10369760970266701674ULL}
,
{13363823550460978230ULL, 12962201212833377092ULL}
,
{16704779438076222788ULL, 6979379479186945558ULL}
,
{10440487148797639242ULL, 13585484211346616781ULL}
,
{13050608935997049053ULL, 7758483227328495169ULL}
,
{16313261169996311316ULL, 14309790052588006865ULL}
,
{10195788231247694572ULL, 18166990819722280098ULL}
,
{12744735289059618216ULL, 4261994450943298507ULL}
,
{15930919111324522770ULL, 5327493063679123134ULL}
,
{9956824444577826731ULL, 7941369183226839863ULL}
,
{12446030555722283414ULL, 5315025460606161924ULL}
,
{15557538194652854267ULL, 15867153862612478214ULL}
,
{9723461371658033917ULL, 7611128154919104931ULL}
,
{12154326714572542396ULL, 14125596212076269068ULL}
,
{15192908393215677995ULL, 17656995265095336336ULL}
,
{9495567745759798747ULL, 8729779031470891258ULL}
,
{11869459682199748434ULL, 6300537770911226168ULL}
,
{14836824602749685542ULL, 17099044250493808518ULL}
,
{9273015376718553464ULL, 6075216638131242420ULL}
,
{11591269220898191830ULL, 7594020797664053025ULL}
,
{14489086526122739788ULL, 269153960225290473ULL}
,
{18111358157653424735ULL, 336442450281613091ULL}
,
{11319598848533390459ULL, 7127805559067090038ULL}
,
{14149498560666738074ULL, 4298070930406474644ULL}
,
{17686873200833422592ULL, 14595960699862869113ULL}
,
{11054295750520889120ULL, 9122475437414293195ULL}
,
{13817869688151111400ULL, 11403094296767866494ULL}
,
{17272337110188889250ULL, 14253867870959833118ULL}
,
{10795210693868055781ULL, 13520353437777283602ULL}
,
{13494013367335069727ULL, 3065383741939440791ULL}
,
{16867516709168837158ULL, 17666787732706464701ULL}
,
{10542197943230523224ULL, 6430056314514152534ULL}
,
{13177747429038154030ULL, 8037570393142690668ULL}
,
{16472184286297692538ULL, 823590954573587527ULL}
,
{10295115178936057836ULL, 5126430365035880108ULL}
,
{12868893973670072295ULL, 6408037956294850135ULL}
,
{16086117467087590369ULL, 3398361426941174765ULL}
,
{10053823416929743980ULL, 13653190937906703988ULL}
,
{12567279271162179975ULL, 17066488672383379985ULL}
,
{15709099088952724969ULL, 16721424822051837077ULL}
,
{9818186930595453106ULL, 3533361486141316317ULL}
,
{12272733663244316382ULL, 13640073894531421205ULL}
,
{15340917079055395478ULL, 7826720331309500698ULL}
,
{9588073174409622174ULL, 280014188641050032ULL}
,
{11985091468012027717ULL, 9573389772656088348ULL}
,
{14981364335015034646ULL, 16578423234247498339ULL}
,
{9363352709384396654ULL, 5749828502977298558ULL}
,
{11704190886730495817ULL, 16410657665576399005ULL}
,
{14630238608413119772ULL, 6678264026688335045ULL}
,
{18287798260516399715ULL, 8347830033360418806ULL}
,
{11429873912822749822ULL, 2911550761636567802ULL}
,
{14287342391028437277ULL, 12862810488900485560ULL}
,
{17859177988785546597ULL, 2243455055843443238ULL}
,
{11161986242990966623ULL, 3708002419115845976ULL}
,
{13952482803738708279ULL, 23317005467419566ULL}
,
{17440603504673385348ULL, 13864204312116438170ULL}
,
{10900377190420865842ULL, 17888499731927549664ULL}
,
{13625471488026082303ULL, 13137252628054661272ULL}
,
{17031839360032602879ULL, 11809879766640938686ULL}
,
{10644899600020376799ULL, 14298703881791668535ULL}
,
{13306124500025470999ULL, 13261693833812197764ULL}
,
{16632655625031838749ULL, 11965431273837859301ULL}
,
{10395409765644899218ULL, 9784237555362356015ULL}
,
{12994262207056124023ULL, 3006924907348169211ULL}
,
{16242827758820155028ULL, 17593714189467375226ULL}
,
{10151767349262596893ULL, 1772699331562333708ULL}
,
{12689709186578246116ULL, 6827560182880305039ULL}
,
{15862136483222807645ULL, 8534450228600381299ULL}
,
{9913835302014254778ULL, 7639874402088932264ULL}
,
{12392294127517818473ULL, 326470965756389522ULL}
,
{15490367659397273091ULL, 5019774725622874806ULL}
,
{9681479787123295682ULL, 831516194300602802ULL}
,
{12101849733904119602ULL, 10262767279730529310ULL}
,
{15127312167380149503ULL, 3605087062808385830ULL}
,
{9454570104612593439ULL, 9170708441896323000ULL}
,
{11818212630765741799ULL, 6851699533943015846ULL}
,
{14772765788457177249ULL, 3952938399001381903ULL}
,
{9232978617785735780ULL, 13999801545444333449ULL}
,
{11541223272232169725ULL, 17499751931805416812ULL}
,
{14426529090290212157ULL, 8039631859474607303ULL}
,
{18033161362862765196ULL, 14661225842770647033ULL}
,
{11270725851789228247ULL, 18386638188586430203ULL}
,
{14088407314736535309ULL, 18371611717305649850ULL}
,
{17610509143420669137ULL, 9129456591349898601ULL}
,
{11006568214637918210ULL, 17235125415662156385ULL}
,
{13758210268297397763ULL, 12320534732722919674ULL}
,
{17197762835371747204ULL, 10788982397476261688ULL}
,
{10748601772107342002ULL, 15966486035277439363ULL}
,
{13435752215134177503ULL, 10734735507242023396ULL}
,
{16794690268917721879ULL, 8806733365625141341ULL}
,
{10496681418073576174ULL, 12421737381156795194ULL}
,
{13120851772591970218ULL, 6303799689591218185ULL}
,
{16401064715739962772ULL, 17103121648843798539ULL}
,
{10250665447337476733ULL, 1466078993672598279ULL}
,
{12813331809171845916ULL, 6444284760518135752ULL}
,
{16016664761464807395ULL, 8055355950647669691ULL}
,
{10010415475915504622ULL, 2728754459941099604ULL}
,
{12513019344894380777ULL, 12634315111781150314ULL}
,
{15641274181117975972ULL, 1957835834444274180ULL}
,
{9775796363198734982ULL, 10447019433382447170ULL}
,
{12219745453998418728ULL, 3835402254873283155ULL}
,
{15274681817498023410ULL, 4794252818591603944ULL}
,
{9546676135936264631ULL, 7608094030047140369ULL}
,
{11933345169920330789ULL, 4898431519131537557ULL}
,
{14916681462400413486ULL, 10734725417341809851ULL}
,
{9322925914000258429ULL, 2097517367411243253ULL}
,
{11653657392500323036ULL, 7233582727691441970ULL}
,
{14567071740625403795ULL, 9041978409614302462ULL}
,
{18208839675781754744ULL, 6690786993590490174ULL}
,
{11380524797363596715ULL, 4181741870994056359ULL}
,
{14225655996704495894ULL, 615491320315182544ULL}
,
{17782069995880619867ULL, 9992736187248753989ULL}
,
{11113793747425387417ULL, 3939617107816777291ULL}
,
{13892242184281734271ULL, 9536207403198359517ULL}
,
{17365302730352167839ULL, 7308573235570561493ULL}
,
{10853314206470104899ULL, 11485387299872682789ULL}
,
{13566642758087631124ULL, 9745048106413465582ULL}
,
{16958303447609538905ULL, 12181310133016831978ULL}
,
{10598939654755961816ULL, 695789805494438130ULL}
,
{13248674568444952270ULL, 869737256868047663ULL}
,
{16560843210556190337ULL, 10310543607939835386ULL}
,
{10350527006597618960ULL, 17973304801030866876ULL}
,
{12938158758247023701ULL, 4019886927579031980ULL}
,
{16172698447808779626ULL, 9636544677901177879ULL}
,
{10107936529880487266ULL, 10634526442115624078ULL}
,
{12634920662350609083ULL, 4069786015789754290ULL}
,
{15793650827938261354ULL, 475546501309804958ULL}
,
{9871031767461413346ULL, 4908902581746016003ULL}
,
{12338789709326766682ULL, 15359500264037295811ULL}
,
{15423487136658458353ULL, 9976003293191843956ULL}
,
{9639679460411536470ULL, 17764217104313372233ULL}
,
{12049599325514420588ULL, 12981899343536939483ULL}
,
{15061999156893025735ULL, 16227374179421174354ULL}
,
{9413749473058141084ULL, 17059637889779315827ULL}
,
{11767186841322676356ULL, 2877803288514593168ULL}
,
{14708983551653345445ULL, 3597254110643241460ULL}
,
{18386229439566681806ULL, 9108253656731439729ULL}
,
{11491393399729176129ULL, 1080972517029761926ULL}
,
{14364241749661470161ULL, 5962901664714590312ULL}
,
{17955302187076837701ULL, 12065313099320625794ULL}
,
{11222063866923023563ULL, 9846663696289085073ULL}
,
{14027579833653779454ULL, 7696643601933968437ULL}
,
{17534474792067224318ULL, 397432465562684739ULL}
,
{10959046745042015198ULL, 14083453346258841674ULL}
,
{13698808431302518998ULL, 8380944645968776284ULL}
,
{17123510539128148748ULL, 1252808770606194547ULL}
,
{10702194086955092967ULL, 10006377518483647400ULL}
,
{13377742608693866209ULL, 7896285879677171346ULL}
,
{16722178260867332761ULL, 14482043368023852087ULL}
,
{10451361413042082976ULL, 2133748077373825698ULL}
,
{13064201766302603720ULL, 2667185096717282123ULL}
,
{16330252207878254650ULL, 3333981370896602653ULL}
,
{10206407629923909156ULL, 6695424375237764562ULL}
,
{12758009537404886445ULL, 8369280469047205703ULL}
,
{15947511921756108056ULL, 15073286604736395033ULL}
,
{9967194951097567535ULL, 9420804127960246895ULL}
,
{12458993688871959419ULL, 7164319141522920715ULL}
,
{15573742111089949274ULL, 4343712908476262990ULL}
,
{9733588819431218296ULL, 7326506586225052273ULL}
,
{12166986024289022870ULL, 9158133232781315341ULL}
,
{15208732530361278588ULL, 2224294504121868368ULL}
,
{9505457831475799117ULL, 10613556101930943538ULL}
,
{11881822289344748896ULL, 17878631145841067327ULL}
,
{14852277861680936121ULL, 3901544858591782542ULL}
,
{9282673663550585075ULL, 13967680582688333849ULL}
,
{11603342079438231344ULL, 12847914709933029407ULL}
,
{14504177599297789180ULL, 16059893387416286759ULL}
,
{18130221999122236476ULL, 1628122660560806833ULL}
,
{11331388749451397797ULL, 10240948699705280078ULL}
,
{14164235936814247246ULL, 17412871893058988002ULL}
,
{17705294921017809058ULL, 12542717829468959195ULL}
,
{11065809325636130661ULL, 12450884661845487401ULL}
,
{13832261657045163327ULL, 1728547772024695539ULL}
,
{17290327071306454158ULL, 15995742770313033136ULL}
,
{10806454419566533849ULL, 5385653213018257806ULL}
,
{13508068024458167311ULL, 11343752534700210161ULL}
,
{16885085030572709139ULL, 9568004649947874797ULL}
,
{10553178144107943212ULL, 3674159897003727796ULL}
,
{13191472680134929015ULL, 4592699871254659745ULL}
,
{16489340850168661269ULL, 1129188820640936778ULL}
,
{10305838031355413293ULL, 3011586022114279438ULL}
,
{12882297539194266616ULL, 8376168546070237202ULL}
,
{16102871923992833270ULL, 10470210682587796502ULL}
,
{10064294952495520794ULL, 1932195658189984910ULL}
,
{12580368690619400992ULL, 11638616609592256945ULL}
,
{15725460863274251240ULL, 14548270761990321182ULL}
,
{9828413039546407025ULL, 9092669226243950738ULL}
,
{12285516299433008781ULL, 15977522551232326327ULL}
,
{15356895374291260977ULL, 6136845133758244197ULL}
,
{9598059608932038110ULL, 15364743254667372383ULL}
,
{11997574511165047638ULL, 9982557031479439671ULL}
,
{14996968138956309548ULL, 3254824252494523781ULL}
,
{9373105086847693467ULL, 11257637194663853171ULL}
,
{11716381358559616834ULL, 9460360474902428559ULL}
,
{14645476698199521043ULL, 2602078556773259891ULL}
,
{18306845872749401303ULL, 17087656251248738576ULL}
,
{11441778670468375814ULL, 17597314184671543466ULL}
,
{14302223338085469768ULL, 12773270693984653525ULL}
,
{17877779172606837210ULL, 15966588367480816906ULL}
,
{11173611982879273256ULL, 14590803748102898470ULL}
,
{13967014978599091570ULL, 18238504685128623088ULL}
,
{17458768723248864463ULL, 13574758819556003052ULL}
,
{10911730452030540289ULL, 15401753289863583763ULL}
,
{13639663065038175362ULL, 5417133557047315992ULL}
,
{17049578831297719202ULL, 15994788983163920798ULL}
,
{10655986769561074501ULL, 14608429132904838403ULL}
,
{13319983461951343127ULL, 4425478360848884291ULL}
,
{16649979327439178909ULL, 920161932633717460ULL}
,
{10406237079649486818ULL, 2880944217109767365ULL}
,
{13007796349561858522ULL, 12824552308241985014ULL}
,
{16259745436952323153ULL, 6807318348447705459ULL}
,
{10162340898095201970ULL, 15783789013848285672ULL}
,
{12702926122619002463ULL, 10506364230455581282ULL}
,
{15878657653273753079ULL, 8521269269642088699ULL}
,
{9924161033296095674ULL, 12243322321167387293ULL}
,
{12405201291620119593ULL, 6080780864604458308ULL}
,
{15506501614525149491ULL, 12212662099182960789ULL}
,
{9691563509078218432ULL, 5327070802775656541ULL}
,
{12114454386347773040ULL, 6658838503469570676ULL}
,
{15143067982934716300ULL, 8323548129336963345ULL}
,
{9464417489334197687ULL, 14425589617690377899ULL}
,
{11830521861667747109ULL, 13420301003685584469ULL}
,
{14788152327084683887ULL, 2940318199324816875ULL}
,
{9242595204427927429ULL, 8755227902219092403ULL}
,
{11553244005534909286ULL, 15555720896201253407ULL}
,
{14441555006918636608ULL, 10221279083396790951ULL}
,
{18051943758648295760ULL, 12776598854245988689ULL}
,
{11282464849155184850ULL, 7985374283903742931ULL}
,
{14103081061443981063ULL, 758345818024902856ULL}
,
{17628851326804976328ULL, 14782990327813292282ULL}
,
{11018032079253110205ULL, 9239368954883307676ULL}
,
{13772540099066387756ULL, 16160897212031522499ULL}
,
{17215675123832984696ULL, 1754377441329851508ULL}
,
{10759796952395615435ULL, 1096485900831157192ULL}
,
{13449746190494519293ULL, 15205665431321110202ULL}
,
{16812182738118149117ULL, 5172023733869224041ULL}
,
{10507614211323843198ULL, 5538357842881958977ULL}
,
{13134517764154803997ULL, 16146319340457224530ULL}
,
{16418147205193504997ULL, 6347841120289366950ULL}
,
{10261342003245940623ULL, 6273243709394548296ULL}
,
{12826677504057425779ULL, 3229868618315797466ULL}
,
{16033346880071782223ULL, 17872393828176910545ULL}
,
{10020841800044863889ULL, 18087775170251650946ULL}
,
{12526052250056079862ULL, 8774660907532399971ULL}
,
{15657565312570099828ULL, 1744954097560724156ULL}
,
{9785978320356312392ULL, 10313968347830228405ULL}
,
{12232472900445390490ULL, 12892460434787785506ULL}
,
{15290591125556738113ULL, 6892203506629956075ULL}
,
{9556619453472961320ULL, 15836842237712192307ULL}
,
{11945774316841201651ULL, 1349308723430688768ULL}
,
{14932217896051502063ULL, 15521693959570524672ULL}
,
{9332636185032188789ULL, 16618587752372659776ULL}
,
{11665795231290235987ULL, 6938176635183661008ULL}
,
{14582244039112794984ULL, 4061034775552188356ULL}
,
{18227805048890993730ULL, 5076293469440235445ULL}
,
{11392378155556871081ULL, 7784369436827535057ULL}
,
{14240472694446088851ULL, 14342147814461806725ULL}
,
{17800590868057611064ULL, 13315998749649870503ULL}
}
;
N_LIB_PRIVATE NIM_CONST tyArray__mdDpUfhLXSqSISg00pcf2A mod5__stdZprivateZdragonbox_u180 = {{1ULL, 18446744073709551615ULL}
,
{14757395258967641293ULL, 3689348814741910323ULL}
,
{10330176681277348905ULL, 737869762948382064ULL}
,
{2066035336255469781ULL, 147573952589676412ULL}
,
{15170602326218735249ULL, 29514790517935282ULL}
,
{6723469279985657373ULL, 5902958103587056ULL}
,
{8723391485480952121ULL, 1180591620717411ULL}
,
{16502073556063831717ULL, 236118324143482ULL}
,
{14368461155438497313ULL, 47223664828696ULL}
,
{10252389860571520109ULL, 9444732965739ULL}
,
{5739826786856214345ULL, 1888946593147ULL}
,
{1147965357371242869ULL, 377789318629ULL}
,
{3918941886216158897ULL, 75557863725ULL}
,
{11851834821468962749ULL, 15111572745ULL}
,
{6059715779035702873ULL, 3022314549ULL}
,
{8590640785290961221ULL, 604462909ULL}
,
{16475523416025833537ULL, 120892581ULL}
,
{14363151127430897677ULL, 24178516ULL}
,
{13940676669711910505ULL, 4835703ULL}
,
{2788135333942382101ULL, 967140ULL}
,
{15315022325756117713ULL, 193428ULL}
,
{10441702094635044189ULL, 38685ULL}
,
{5777689233668919161ULL, 7737ULL}
,
{15912933105701425125ULL, 1547ULL}
,
{3182586621140285025ULL, 309ULL}
}
;
extern NIM_BOOL nimInErrorMode__system_u4115;
N_LIB_PRIVATE N_NIMCALL(NU64, physicalSignificand__stdZprivateZdragonbox_u35)(tyObject_Double__A9bp44Zlm16kBP5sILlRTZw this_p0) {
	NU64 result;
{	result = (NU64)0;
	result = (NU64)(this_p0.bits & 4503599627370495ULL);
	goto BeforeRet_;
	}
BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a_p0, v_p1, ((size_t) (size_p2)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4115);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_u7(p_p0, ((int)0), size_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Double__A9bp44Zlm16kBP5sILlRTZw, constructDouble__stdZprivateZdragonbox_u32)(NF value_p0) {
	tyObject_Double__A9bp44Zlm16kBP5sILlRTZw result;
	union { NF source; NU64 dest; } LOC1;
	nimZeroMem((void*)(&result), sizeof(tyObject_Double__A9bp44Zlm16kBP5sILlRTZw));
	LOC1.source = value_p0;
	result.bits = LOC1.dest;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NU64, physicalExponent__stdZprivateZdragonbox_u38)(tyObject_Double__A9bp44Zlm16kBP5sILlRTZw this_p0) {
	NU64 result;
{	result = (NU64)0;
	result = (NU64)((NU64)((NU64)(this_p0.bits & 9218868437227405312ULL)) >> (NU64)(((NI32)52)));
	goto BeforeRet_;
	}
BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, signBit__stdZprivateZdragonbox_u57)(tyObject_Double__A9bp44Zlm16kBP5sILlRTZw this_p0) {
	NI result;
{	result = (NI)0;
	result = !(((NU64)(this_p0.bits & 9223372036854775808ULL) == 0ULL));
	goto BeforeRet_;
	}
BeforeRet_: ;
	return result;
}
