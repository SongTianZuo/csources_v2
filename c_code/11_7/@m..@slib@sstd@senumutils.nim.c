/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 32
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
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
#define nimfr_(proc, file) \
  TFrame FR_; \
  FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #define nimfrs_(proc, file, slots, length) \
    struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename;NI len;VarSlot s[slots];} FR_; \
    FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #define nimln_(n) \
    FR_.line = n;

  #define nimlf_(n, file) \
    FR_.line = n; FR_.filename = file;

typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
typedef NU8 tyEnum_MsgKind__8gtQE4nNf6KgYKnjWpG1uA;
typedef NimStringV2 tyArray__Qdg3zgcNlmwGTTeVxyC9bbw[20];
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(NIM_BOOL, nimSubInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
static const struct {
  NI cap; NIM_CHAR data[16+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_2 = { 16 | NIM_STRLIT_FLAG, "meCannotOpenFile" };
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_3 = { 10 | NIM_STRLIT_FLAG, "meExpected" };
static const struct {
  NI cap; NIM_CHAR data[16+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_4 = { 16 | NIM_STRLIT_FLAG, "meMissingClosing" };
static const struct {
  NI cap; NIM_CHAR data[25+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_5 = { 25 | NIM_STRLIT_FLAG, "meGridTableNotImplemented" };
static const struct {
  NI cap; NIM_CHAR data[24+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_6 = { 24 | NIM_STRLIT_FLAG, "meMarkdownIllformedTable" };
static const struct {
  NI cap; NIM_CHAR data[16+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_7 = { 16 | NIM_STRLIT_FLAG, "meIllformedTable" };
static const struct {
  NI cap; NIM_CHAR data[20+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_8 = { 20 | NIM_STRLIT_FLAG, "meNewSectionExpected" };
static const struct {
  NI cap; NIM_CHAR data[19+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_9 = { 19 | NIM_STRLIT_FLAG, "meGeneralParseError" };
static const struct {
  NI cap; NIM_CHAR data[18+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_10 = { 18 | NIM_STRLIT_FLAG, "meInvalidDirective" };
static const struct {
  NI cap; NIM_CHAR data[14+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_11 = { 14 | NIM_STRLIT_FLAG, "meInvalidField" };
static const struct {
  NI cap; NIM_CHAR data[18+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_12 = { 18 | NIM_STRLIT_FLAG, "meFootnoteMismatch" };
static const struct {
  NI cap; NIM_CHAR data[21+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_13 = { 21 | NIM_STRLIT_FLAG, "mwRedefinitionOfLabel" };
static const struct {
  NI cap; NIM_CHAR data[21+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_14 = { 21 | NIM_STRLIT_FLAG, "mwUnknownSubstitution" };
static const struct {
  NI cap; NIM_CHAR data[15+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_15 = { 15 | NIM_STRLIT_FLAG, "mwAmbiguousLink" };
static const struct {
  NI cap; NIM_CHAR data[12+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_16 = { 12 | NIM_STRLIT_FLAG, "mwBrokenLink" };
static const struct {
  NI cap; NIM_CHAR data[21+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_17 = { 21 | NIM_STRLIT_FLAG, "mwUnsupportedLanguage" };
static const struct {
  NI cap; NIM_CHAR data[18+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_18 = { 18 | NIM_STRLIT_FLAG, "mwUnsupportedField" };
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_19 = { 10 | NIM_STRLIT_FLAG, "mwRstStyle" };
static const struct {
  NI cap; NIM_CHAR data[17+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_20 = { 17 | NIM_STRLIT_FLAG, "mwUnusedImportdoc" };
static const struct {
  NI cap; NIM_CHAR data[20+1];
} TM__maw2pc4xuFyUqn39bqA2rNQ_21 = { 20 | NIM_STRLIT_FLAG, "meSandboxedDirective" };
N_LIB_PRIVATE NIM_CONST tyArray__Qdg3zgcNlmwGTTeVxyC9bbw names__packagesZdocutilsZrst_u633 = {{16, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_2},
{10, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_3},
{16, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_4},
{25, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_5},
{24, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_6},
{16, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_7},
{20, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_8},
{19, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_9},
{18, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_10},
{14, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_11},
{18, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_12},
{21, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_13},
{21, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_14},
{15, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_15},
{12, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_16},
{21, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_17},
{18, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_18},
{10, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_19},
{17, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_20},
{20, (NimStrPayload*)&TM__maw2pc4xuFyUqn39bqA2rNQ_21}}
;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
static N_INLINE(NIM_BOOL, nimSubInt)(NI a_p0, NI b_p1, NI* res_p2) {
	NIM_BOOL result;
	NI r;
	result = (NIM_BOOL)0;
	r = ((NI) ((NU)((NU32)(((NU) (a_p0))) - (NU32)(((NU) (b_p1))))));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI)0) <= (NI)(r ^ a_p0));
		if (T3_) goto LA4_;
		T3_ = (((NI)0) <= (NI)(r ^ (NI)((NU32) ~(b_p1))));
LA4_: ;
		if (!T3_) goto LA5_;
		(*res_p2) = r;
	}
	goto LA1_;
LA5_: ;
	{
		result = NIM_TRUE;
	}
LA1_: ;
	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s_p0) {
	{
		if (!(framePtr__system_u3743 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s_p0).calldepth = ((NI16)0);
	}
	goto LA1_;
LA3_: ;
	{
		(*s_p0).calldepth = (NI16)((*framePtr__system_u3743).calldepth + ((NI16)1));
	}
LA1_: ;
	(*s_p0).prev = framePtr__system_u3743;
	framePtr__system_u3743 = s_p0;
	{
		if (!((*s_p0).calldepth == ((NI16)2000))) goto LA8_;
		callDepthLimitReached__system_u4294();
	}
LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_u3743 = (*framePtr__system_u3743).prev;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, symbolName__packagesZdocutilsZrst_u619)(tyEnum_MsgKind__8gtQE4nNf6KgYKnjWpG1uA a_p0) {
	NimStringV2 result;
	NI TM__maw2pc4xuFyUqn39bqA2rNQ_22;
	nimfr_("symbolName", "D:\\nim\\lib\\std\\enumutils.nim");
{	result.len = 0; result.p = NIM_NIL;
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	nimlf_(172, "D:\\nim\\lib\\std\\enumutils.nim");
	if (nimSubInt(a_p0, ((NI)0), &TM__maw2pc4xuFyUqn39bqA2rNQ_22)) { raiseOverflow(); goto BeforeRet_;
	};
	if ((NU)((NI)(TM__maw2pc4xuFyUqn39bqA2rNQ_22)) > (NU)(19)){ raiseIndexError2((NI)(TM__maw2pc4xuFyUqn39bqA2rNQ_22), 19); goto BeforeRet_;
	}
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqcopy___stdZassertions_u19((&result), names__packagesZdocutilsZrst_u633[((NI)(TM__maw2pc4xuFyUqn39bqA2rNQ_22))- 0]);
	}
BeforeRet_: ;
	popFrame();
	return result;
}
