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
typedef struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg tyTuple__7q7q3E6Oj24ZNVJb9aonhAg;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg {
NimStringV2 Field0;
NimStringV2 Field1;
NimStringV2 Field2;
};
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___stdZassertions_u13)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosrelativePath)(NimStringV2 path_p0, NimStringV2 base_p1, NIM_CHAR sep_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NIM_BOOL, eqImpl__pathutils_u106)(NimStringV2 x_p0, NimStringV2 y_p1);
N_LIB_PRIVATE N_NIMCALL(NI, noscmpPaths)(NimStringV2 pathA_p0, NimStringV2 pathB_p1);
static N_INLINE(NIM_BOOL, isEmpty__pathutils_u121)(NimStringV2 x_p0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosgetCurrentDir)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosisAbsolute)(NimStringV2 path_p0);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
N_NIMCALL(NimStringV2, rawNewString)(NI cap_p0);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_u83)(NimStringV2 x_p0, NimStringV2* result_p1, NI* state_p2, NIM_CHAR dirSep_p3);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
static N_INLINE(NimStringV2, slash___stdZprivateZospaths50_u91)(NimStringV2 head_p0, NimStringV2 tail_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosjoinPath)(NimStringV2 head_p0, NimStringV2 tail_p1);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
N_LIB_PRIVATE N_NIMCALL(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg, nossplitFile)(NimStringV2 path_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZos_u169)(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* dest_p0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, customPathImpl__pathutils_u220)(NimStringV2 x_p0);
N_LIB_PRIVATE N_NIMCALL(NI, skipHomeDir__pathutils_u200)(NimStringV2 x_p0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringV2 s_p0, NimStringV2 prefix_p1);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuContinuesWith)(NimStringV2 s_p0, NimStringV2 substr_p1, NI start_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, relevantPart__pathutils_u203)(NimStringV2 s_p0, NI afterSlashX_p1);
static N_INLINE(NIM_BOOL, nimSubInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, slash___pathutils_u117)(NimStringV2 base_p0, NimStringV2 f_p1);
static const struct {
  NI cap; NIM_CHAR data[65+1];
} TM__dje9awFf9c1DXjDuKVU9cWH6g_2 = { 65 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\pathutils.nim(81, 11) `not isAbsolute(f.string)` " };
static const NimStringV2 TM__dje9awFf9c1DXjDuKVU9cWH6g_3 = {65, (NimStrPayload*)&TM__dje9awFf9c1DXjDuKVU9cWH6g_2};
static const struct {
  NI cap; NIM_CHAR data[65+1];
} TM__dje9awFf9c1DXjDuKVU9cWH6g_5 = { 65 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\pathutils.nim(73, 11) `not isAbsolute(f.string)` " };
static const NimStringV2 TM__dje9awFf9c1DXjDuKVU9cWH6g_6 = {65, (NimStrPayload*)&TM__dje9awFf9c1DXjDuKVU9cWH6g_5};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__dje9awFf9c1DXjDuKVU9cWH6g_10 = { 6 | NIM_STRLIT_FLAG, "/home/" };
static const NimStringV2 TM__dje9awFf9c1DXjDuKVU9cWH6g_11 = {6, (NimStrPayload*)&TM__dje9awFf9c1DXjDuKVU9cWH6g_10};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__dje9awFf9c1DXjDuKVU9cWH6g_12 = { 7 | NIM_STRLIT_FLAG, "/Users/" };
static const NimStringV2 TM__dje9awFf9c1DXjDuKVU9cWH6g_13 = {7, (NimStrPayload*)&TM__dje9awFf9c1DXjDuKVU9cWH6g_12};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__dje9awFf9c1DXjDuKVU9cWH6g_14 = { 5 | NIM_STRLIT_FLAG, "/mnt/" };
static const NimStringV2 TM__dje9awFf9c1DXjDuKVU9cWH6g_15 = {5, (NimStrPayload*)&TM__dje9awFf9c1DXjDuKVU9cWH6g_14};
static const NimStringV2 TM__dje9awFf9c1DXjDuKVU9cWH6g_16 = {7, (NimStrPayload*)&TM__dje9awFf9c1DXjDuKVU9cWH6g_12};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__dje9awFf9c1DXjDuKVU9cWH6g_17 = { 7 | NIM_STRLIT_FLAG, "//user/" };
static const NimStringV2 TM__dje9awFf9c1DXjDuKVU9cWH6g_18 = {7, (NimStrPayload*)&TM__dje9awFf9c1DXjDuKVU9cWH6g_17};
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern NIM_BOOL nimInErrorMode__system_u4097;
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___options_u5665)(NimStringV2 x_p0) {
	NimStringV2 result;
	NimStringV2 colontmpD_;
	nimfr_("$", "D:\\nim\\compiler\\pathutils.nim");
	result.len = 0; result.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	nimlf_(52, "D:\\nim\\compiler\\pathutils.nim");
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqwasMoved___stdZassertions_u13((&colontmpD_));
	eqcopy___stdZassertions_u19((&colontmpD_), x_p0);
	result = colontmpD_;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___options_u5759)(NimStringV2 x_p0) {
	NimStringV2 result;
	NimStringV2 colontmpD_;
	nimfr_("$", "D:\\nim\\compiler\\pathutils.nim");
	result.len = 0; result.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	nimlf_(52, "D:\\nim\\compiler\\pathutils.nim");
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqwasMoved___stdZassertions_u13((&colontmpD_));
	eqcopy___stdZassertions_u19((&colontmpD_), x_p0);
	result = colontmpD_;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4097);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, relativeTo__pathutils_u176)(NimStringV2 fullPath_p0, NimStringV2 baseFilename_p1, NIM_CHAR sep_p2) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
	nimfr_("relativeTo", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(92, "D:\\nim\\compiler\\pathutils.nim");
	result = nosrelativePath(fullPath_p0, baseFilename_p1, sep_p2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, eqImpl__pathutils_u106)(NimStringV2 x_p0, NimStringV2 y_p1) {
	NIM_BOOL result;
	NI T1_;
NIM_BOOL* nimErr_;
	nimfr_("eqImpl", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimlf_(56, "D:\\nim\\compiler\\pathutils.nim");
	T1_ = (NI)0;
	T1_ = noscmpPaths(x_p0, y_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = (T1_ == ((NI)0));
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___options_u5361)(NimStringV2 x_p0, NimStringV2 y_p1) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
	nimfr_("==", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimlf_(58, "D:\\nim\\compiler\\pathutils.nim");
	result = eqImpl__pathutils_u106(x_p0, y_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, isEmpty__pathutils_u121)(NimStringV2 x_p0) {
	NIM_BOOL result;
	nimfr_("isEmpty", "D:\\nim\\compiler\\pathutils.nim");
	result = (NIM_BOOL)0;
	nimlf_(25, "D:\\nim\\compiler\\pathutils.nim");
	result = (x_p0.len == ((NI)0));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2) {
	NIM_BOOL result;
	NI r;
	result = (NIM_BOOL)0;
	r = ((NI) ((NU)((NU32)(((NU) (a_p0))) + (NU32)(((NU) (b_p1))))));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI)0) <= (NI)(r ^ a_p0));
		if (T3_) goto LA4_;
		T3_ = (((NI)0) <= (NI)(r ^ b_p1));
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, slash___pathutils_u147)(NimStringV2 base_p0, NimStringV2 f_p1) {
	NimStringV2 result;
	NimStringV2 base_2;
	NimStringV2 T2_;
	NI TM__dje9awFf9c1DXjDuKVU9cWH6g_4;
	NI state;
	NimStringV2 T14_;
	NimStringV2 T15_;
NIM_BOOL* nimErr_;
	nimfr_("/", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	base_2.len = 0; base_2.p = NIM_NIL;
	T2_.len = 0; T2_.p = NIM_NIL;
	nimlf_(80, "D:\\nim\\compiler\\pathutils.nim");
	{
		NIM_BOOL T5_;
		nimln_(69);
		T5_ = (NIM_BOOL)0;
		T5_ = isEmpty__pathutils_u121(base_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!T5_) goto LA6_;
		nimln_(80);
		nimln_(69);
		base_2 = nosgetCurrentDir();
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	goto LA3_;
LA6_: ;
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqcopy___stdZassertions_u19((&base_2), base_p0);
	}
LA3_: ;
	nimlf_(81, "D:\\nim\\compiler\\pathutils.nim");
	{
		NIM_BOOL T11_;
		T11_ = (NIM_BOOL)0;
		T11_ = nosisAbsolute(f_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!!(!(T11_))) goto LA12_;
		failedAssertImpl__stdZassertions_u274(TM__dje9awFf9c1DXjDuKVU9cWH6g_3);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA12_: ;
	nimln_(82);
	if (nimAddInt(base_2.len, f_p1.len, &TM__dje9awFf9c1DXjDuKVU9cWH6g_4)) { raiseOverflow(); goto LA1_;
	};
	if (((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_4)) < ((NI)0) || ((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_4)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_4), ((NI)0), ((NI)2147483647)); goto LA1_;
	}
	result = rawNewString(((NI) ((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_4))));
	nimln_(83);
	state = ((NI)0);
	nimln_(84);
	T14_.len = 0; T14_.p = NIM_NIL;
	T14_ = base_2;
	addNormalizePath__pureZpathnorm_u83(T14_, (&result), (&state), 47);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(85);
	T15_.len = 0; T15_.p = NIM_NIL;
	T15_ = f_p1;
	addNormalizePath__pureZpathnorm_u83(T15_, (&result), (&state), 47);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&base_2));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NimStringV2, slash___stdZprivateZospaths50_u91)(NimStringV2 head_p0, NimStringV2 tail_p1) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
	nimfr_("/", "D:\\nim\\lib\\std\\private\\ospaths2.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(180, "D:\\nim\\lib\\std\\private\\ospaths2.nim");
	result = nosjoinPath(head_p0, tail_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toAbsoluteDir__pathutils_u99)(NimStringV2 path_p0) {
	NimStringV2 result;
	NimStringV2 T1_;
NIM_BOOL* nimErr_;
	nimfr_("toAbsoluteDir", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	T1_.len = 0; T1_.p = NIM_NIL;
	nimlf_(49, "D:\\nim\\compiler\\pathutils.nim");
	{
		NIM_BOOL T4_;
		NimStringV2 colontmpD_;
		T4_ = (NIM_BOOL)0;
		T4_ = nosisAbsolute(path_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T4_) goto LA5_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqwasMoved___stdZassertions_u13((&colontmpD_));
		eqcopy___stdZassertions_u19((&colontmpD_), path_p0);
		result = colontmpD_;
	}
	goto LA2_;
LA5_: ;
	{
		NimStringV2 colontmpD__2;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		nimlf_(49, "D:\\nim\\compiler\\pathutils.nim");
		nimln_(50);
		colontmpD__2 = nosgetCurrentDir();
		if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
		result = slash___stdZprivateZospaths50_u91(colontmpD__2, path_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
		{
			LA8_:;
		}
		{
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__2));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA2_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest_p0, source_p1, ((size_t) (size_p2)));
}
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2) {
	nimCopyMem(dest_p0, source_p1, size_p2);
}
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1) {
{	{
		NI TM__dje9awFf9c1DXjDuKVU9cWH6g_7;
		NI TM__dje9awFf9c1DXjDuKVU9cWH6g_8;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__dje9awFf9c1DXjDuKVU9cWH6g_7)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_7)) < ((NI)0) || ((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_7)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_7), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_7))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__dje9awFf9c1DXjDuKVU9cWH6g_8)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_8);
	}
LA3_: ;
	}
BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, slash___pathutils_u117)(NimStringV2 base_p0, NimStringV2 f_p1) {
	NimStringV2 result;
	NimStringV2 base_2;
	NimStringV2 T2_;
	NI TM__dje9awFf9c1DXjDuKVU9cWH6g_9;
	NI state;
	NimStringV2 T15_;
	NimStringV2 T16_;
NIM_BOOL* nimErr_;
	nimfr_("/", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	base_2.len = 0; base_2.p = NIM_NIL;
	T2_.len = 0; T2_.p = NIM_NIL;
	nimlf_(72, "D:\\nim\\compiler\\pathutils.nim");
	{
		NIM_BOOL T5_;
		nimln_(69);
		T5_ = (NIM_BOOL)0;
		T5_ = isEmpty__pathutils_u121(base_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!T5_) goto LA6_;
		nimln_(72);
		nimln_(69);
		base_2 = nosgetCurrentDir();
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	goto LA3_;
LA6_: ;
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqcopy___stdZassertions_u19((&base_2), base_p0);
	}
LA3_: ;
	nimlf_(73, "D:\\nim\\compiler\\pathutils.nim");
	{
		NIM_BOOL T11_;
		NimStringV2 colontmpD_;
		NimStringV2 T14_;
		T11_ = (NIM_BOOL)0;
		T11_ = nosisAbsolute(f_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!!(!(T11_))) goto LA12_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		T14_.len = 0; T14_.p = NIM_NIL;
		T14_ = rawNewString(f_p1.len + 65);
appendString((&T14_), TM__dje9awFf9c1DXjDuKVU9cWH6g_6);
appendString((&T14_), f_p1);
		colontmpD_ = T14_;
		failedAssertImpl__stdZassertions_u274(colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD_));
	}
LA12_: ;
	nimlf_(74, "D:\\nim\\compiler\\pathutils.nim");
	if (nimAddInt(base_2.len, f_p1.len, &TM__dje9awFf9c1DXjDuKVU9cWH6g_9)) { raiseOverflow(); goto LA1_;
	};
	if (((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_9)) < ((NI)0) || ((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_9)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_9), ((NI)0), ((NI)2147483647)); goto LA1_;
	}
	result = rawNewString(((NI) ((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_9))));
	nimln_(75);
	state = ((NI)0);
	nimln_(76);
	T15_.len = 0; T15_.p = NIM_NIL;
	T15_ = base_2;
	addNormalizePath__pureZpathnorm_u83(T15_, (&result), (&state), 47);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(77);
	T16_.len = 0; T16_.p = NIM_NIL;
	T16_ = f_p1;
	addNormalizePath__pureZpathnorm_u83(T16_, (&result), (&state), 47);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&base_2));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a_p0, v_p1, ((size_t) (size_p2)));
}
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_u7(p_p0, ((int)0), size_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg, splitFile__pathutils_u35)(NimStringV2 x_p0) {
	tyTuple__7q7q3E6Oj24ZNVJb9aonhAg result;
	tyTuple__7q7q3E6Oj24ZNVJb9aonhAg tmpTuple;
	NimStringV2 a;
	NimStringV2 b;
	NimStringV2 c;
	NimStringV2 colontmp_;
	NimStringV2 colontmp__2;
	NimStringV2 colontmp__3;
	NimStringV2 blitTmp;
	NimStringV2 blitTmp_2;
	NimStringV2 blitTmp_3;
	NimStringV2 blitTmp_4;
NIM_BOOL* nimErr_;
	nimfr_("splitFile", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg));
	nimZeroMem((void*)(&tmpTuple), sizeof(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg));
	a.len = 0; a.p = NIM_NIL;
	b.len = 0; b.p = NIM_NIL;
	c.len = 0; c.p = NIM_NIL;
	colontmp_.len = 0; colontmp_.p = NIM_NIL;
	colontmp__2.len = 0; colontmp__2.p = NIM_NIL;
	colontmp__3.len = 0; colontmp__3.p = NIM_NIL;
	nimlf_(33, "D:\\nim\\compiler\\pathutils.nim");
	tmpTuple = nossplitFile(x_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	a = tmpTuple.Field0;
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqwasMoved___stdZassertions_u13((&tmpTuple.Field0));
	nimlf_(33, "D:\\nim\\compiler\\pathutils.nim");
	b = tmpTuple.Field1;
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqwasMoved___stdZassertions_u13((&tmpTuple.Field1));
	nimlf_(33, "D:\\nim\\compiler\\pathutils.nim");
	c = tmpTuple.Field2;
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqwasMoved___stdZassertions_u13((&tmpTuple.Field2));
	nimlf_(34, "D:\\nim\\compiler\\pathutils.nim");
	blitTmp = a;
	colontmp_ = blitTmp;
	colontmp__2 = b;
	colontmp__3 = c;
	blitTmp_2 = colontmp_;
	result.Field0 = blitTmp_2;
	blitTmp_3 = colontmp__2;
	result.Field1 = blitTmp_3;
	blitTmp_4 = colontmp__3;
	result.Field2 = blitTmp_4;
	nimlf_(685, "D:\\nim\\lib\\pure\\os.nim");
	eqdestroy___pureZos_u169((&tmpTuple));
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pathutils_u66)(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* dest_p0) {
	eqdestroy___stdZassertions_u16((&(*dest_p0).Field0));
	eqdestroy___stdZassertions_u16((&(*dest_p0).Field1));
	eqdestroy___stdZassertions_u16((&(*dest_p0).Field2));
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___nimconf_u321)(NimStringV2 x_p0, NimStringV2 y_p1) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
	nimfr_("==", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimlf_(58, "D:\\nim\\compiler\\pathutils.nim");
	result = eqImpl__pathutils_u106(x_p0, y_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, skipHomeDir__pathutils_u200)(NimStringV2 x_p0) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("skipHomeDir", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(113, "D:\\nim\\compiler\\pathutils.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nsuStartsWith(x_p0, TM__dje9awFf9c1DXjDuKVU9cWH6g_11);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (T3_) goto LA4_;
		T3_ = nsuStartsWith(x_p0, TM__dje9awFf9c1DXjDuKVU9cWH6g_13);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(114);
		result = ((NI)3);
	}
	goto LA1_;
LA5_: ;
	{
		NIM_BOOL T8_;
		nimln_(115);
		T8_ = (NIM_BOOL)0;
		T8_ = nsuStartsWith(x_p0, TM__dje9awFf9c1DXjDuKVU9cWH6g_15);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!(T8_)) goto LA9_;
		T8_ = nsuContinuesWith(x_p0, TM__dje9awFf9c1DXjDuKVU9cWH6g_16, ((NI)6));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
LA9_: ;
		if (!T8_) goto LA10_;
		nimln_(116);
		result = ((NI)5);
	}
	goto LA1_;
LA10_: ;
	{
		nimln_(118);
		result = ((NI)0);
	}
LA1_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
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
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1) {
	NI TM__dje9awFf9c1DXjDuKVU9cWH6g_20;
	NI TM__dje9awFf9c1DXjDuKVU9cWH6g_21;
{	prepareAdd(s_p0, ((NI)1));
	(*(*s_p0).p).data[(*s_p0).len] = c_p1;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__dje9awFf9c1DXjDuKVU9cWH6g_20)) { raiseOverflow(); goto BeforeRet_;
	};
	(*(*s_p0).p).data[(NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_20)] = 0;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__dje9awFf9c1DXjDuKVU9cWH6g_21)) { raiseOverflow(); goto BeforeRet_;
	};
	(*s_p0).len = (NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_21);
	}
BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, relevantPart__pathutils_u203)(NimStringV2 s_p0, NI afterSlashX_p1) {
	NimStringV2 result;
	NI TM__dje9awFf9c1DXjDuKVU9cWH6g_19;
	NI slashes;
	nimfr_("relevantPart", "D:\\nim\\compiler\\pathutils.nim");
{	result.len = 0; result.p = NIM_NIL;
	nimlf_(121, "D:\\nim\\compiler\\pathutils.nim");
	if (nimSubInt(s_p0.len, ((NI)8), &TM__dje9awFf9c1DXjDuKVU9cWH6g_19)) { raiseOverflow(); goto BeforeRet_;
	};
	if (((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_19)) < ((NI)0) || ((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_19)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_19), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	result = rawNewString(((NI) ((NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_19))));
	nimln_(122);
	slashes = afterSlashX_p1;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimlf_(117, "D:\\nim\\lib\\system\\iterators_1.nim");
		nimlf_(123, "D:\\nim\\compiler\\pathutils.nim");
		colontmp_ = s_p0.len;
		nimlf_(119, "D:\\nim\\lib\\system\\iterators_1.nim");
		i_2 = ((NI)0);
		{
			nimln_(120);
			while (1) {
				NI TM__dje9awFf9c1DXjDuKVU9cWH6g_23;
				if (!(i_2 < colontmp_)) goto LA3;
				nimlf_(123, "D:\\nim\\compiler\\pathutils.nim");
				i = i_2;
				{
					nimln_(124);
					if (!(slashes == ((NI)0))) goto LA6_;
					nimln_(125);
					if (i < 0 || i >= s_p0.len){ raiseIndexError2(i,s_p0.len-1); goto BeforeRet_;
					}
					nimAddCharV1((&result), s_p0.p->data[i]);
				}
				goto LA4_;
LA6_: ;
				{
					NI TM__dje9awFf9c1DXjDuKVU9cWH6g_22;
					nimln_(126);
					if (i < 0 || i >= s_p0.len){ raiseIndexError2(i,s_p0.len-1); goto BeforeRet_;
					}
					if (!((NU8)(s_p0.p->data[i]) == (NU8)(47))) goto LA9_;
					nimln_(127);
					if (nimSubInt(slashes, ((NI)1), &TM__dje9awFf9c1DXjDuKVU9cWH6g_22)) { raiseOverflow(); goto BeforeRet_;
					};
					slashes = (NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_22);
				}
				goto LA4_;
LA9_: ;
LA4_: ;
				nimlf_(122, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(i_2, ((NI)1), &TM__dje9awFf9c1DXjDuKVU9cWH6g_23)) { raiseOverflow(); goto BeforeRet_;
				};
				i_2 = (NI)(TM__dje9awFf9c1DXjDuKVU9cWH6g_23);
			} LA3: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, customPathImpl__pathutils_u220)(NimStringV2 x_p0) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
	nimfr_("customPathImpl", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(143, "D:\\nim\\compiler\\pathutils.nim");
	{
		NIM_BOOL T3_;
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		T3_ = (NIM_BOOL)0;
		T3_ = nosisAbsolute(x_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		nimln_(144);
		colontmpD_ = nosgetCurrentDir();
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		colontmpD__2 = slash___stdZprivateZospaths50_u91(colontmpD_, x_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		result = customPathImpl__pathutils_u220(colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			LA6_:;
		}
		{
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__2));
			eqdestroy___stdZassertions_u16((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
LA4_: ;
	{
		NI slashes;
		nimlf_(146, "D:\\nim\\compiler\\pathutils.nim");
		slashes = skipHomeDir__pathutils_u200(x_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(147);
		{
			NimStringV2 colontmpD__3;
			NimStringV2 T14_;
			if (!(((NI)0) < slashes)) goto LA12_;
			colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
			nimln_(148);
			T14_.len = 0; T14_.p = NIM_NIL;
			colontmpD__3 = relevantPart__pathutils_u203(x_p0, slashes);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T14_ = rawNewString(colontmpD__3.len + 7);
appendString((&T14_), TM__dje9awFf9c1DXjDuKVU9cWH6g_18);
appendString((&T14_), colontmpD__3);
			result = T14_;
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__3));
		}
		goto LA10_;
LA12_: ;
		{
			eqcopy___stdZassertions_u19((&result), x_p0);
		}
LA10_: ;
	}
LA1_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, customPath__pathutils_u224)(NimStringV2 x_p0) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
	nimfr_("customPath", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(152, "D:\\nim\\compiler\\pathutils.nim");
	nimln_(153);
	result = customPathImpl__pathutils_u220(x_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___docgen_u13743)(NimStringV2 x_p0) {
	NimStringV2 result;
	NimStringV2 colontmpD_;
	nimfr_("$", "D:\\nim\\compiler\\pathutils.nim");
	result.len = 0; result.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	nimlf_(52, "D:\\nim\\compiler\\pathutils.nim");
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqwasMoved___stdZassertions_u13((&colontmpD_));
	eqcopy___stdZassertions_u19((&colontmpD_), x_p0);
	result = colontmpD_;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___nimconf_u461)(NimStringV2 x_p0, NimStringV2 y_p1) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
	nimfr_("==", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimlf_(58, "D:\\nim\\compiler\\pathutils.nim");
	result = eqImpl__pathutils_u106(x_p0, y_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toAbsolute__pathutils_u181)(NimStringV2 file_p0, NimStringV2 base_p1) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
	nimfr_("toAbsolute", "D:\\nim\\compiler\\pathutils.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(95, "D:\\nim\\compiler\\pathutils.nim");
	{
		NIM_BOOL T3_;
		NimStringV2 colontmpD_;
		T3_ = (NIM_BOOL)0;
		T3_ = nosisAbsolute(file_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqwasMoved___stdZassertions_u13((&colontmpD_));
		eqcopy___stdZassertions_u19((&colontmpD_), file_p0);
		result = colontmpD_;
	}
	goto LA1_;
LA4_: ;
	{
		nimlf_(96, "D:\\nim\\compiler\\pathutils.nim");
		result = slash___pathutils_u117(base_p1, file_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA1_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
