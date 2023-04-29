/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 32

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
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getEnv__stdZenvvars_u15)(NimStringV2 key_p0, NimStringV2 default_p1);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4312)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NimStringV2, slash___stdZprivateZospaths50_u91)(NimStringV2 head_p0, NimStringV2 tail_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosjoinPath)(NimStringV2 head_p0, NimStringV2 tail_p1);
N_LIB_PRIVATE N_NIMCALL(void, normalizePathEnd__stdZprivateZospaths50_u23)(NimStringV2* path_p0, NIM_BOOL trailingSep_p1);
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__XnRPlAiwKKY6TokjvYVCvw_2 = { 4 | NIM_STRLIT_FLAG, "HOME" };
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_3 = {4, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_2};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__XnRPlAiwKKY6TokjvYVCvw_4 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_5 = {0, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__XnRPlAiwKKY6TokjvYVCvw_8 = { 1 | NIM_STRLIT_FLAG, "/" };
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_9 = {1, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_8};
static const struct {
  NI cap; NIM_CHAR data[15+1];
} TM__XnRPlAiwKKY6TokjvYVCvw_10 = { 15 | NIM_STRLIT_FLAG, "XDG_CONFIG_HOME" };
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_11 = {15, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_10};
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_12 = {4, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_2};
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_13 = {0, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_4};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__XnRPlAiwKKY6TokjvYVCvw_14 = { 7 | NIM_STRLIT_FLAG, ".config" };
static const NimStringV2 TM__XnRPlAiwKKY6TokjvYVCvw_15 = {7, (NimStrPayload*)&TM__XnRPlAiwKKY6TokjvYVCvw_14};
extern NIM_BOOL nimInErrorMode__system_u4115;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
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
		NI TM__XnRPlAiwKKY6TokjvYVCvw_6;
		NI TM__XnRPlAiwKKY6TokjvYVCvw_7;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__XnRPlAiwKKY6TokjvYVCvw_6)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__XnRPlAiwKKY6TokjvYVCvw_6)) < ((NI)0) || ((NI)(TM__XnRPlAiwKKY6TokjvYVCvw_6)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__XnRPlAiwKKY6TokjvYVCvw_6), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__XnRPlAiwKKY6TokjvYVCvw_6))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__XnRPlAiwKKY6TokjvYVCvw_7)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__XnRPlAiwKKY6TokjvYVCvw_7);
	}
LA3_: ;
	}
BeforeRet_: ;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4115);
	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s_p0) {
	{
		if (!(framePtr__system_u3761 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s_p0).calldepth = ((NI16)0);
	}
	goto LA1_;
LA3_: ;
	{
		(*s_p0).calldepth = (NI16)((*framePtr__system_u3761).calldepth + ((NI16)1));
	}
LA1_: ;
	(*s_p0).prev = framePtr__system_u3761;
	framePtr__system_u3761 = s_p0;
	{
		if (!((*s_p0).calldepth == ((NI16)2000))) goto LA8_;
		callDepthLimitReached__system_u4312();
	}
LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_u3761 = (*framePtr__system_u3761).prev;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosgetHomeDir)(void) {
	NimStringV2 result;
	NimStringV2 colontmpD_;
	NimStringV2 T2_;
NIM_BOOL* nimErr_;
	nimfr_("getHomeDir", "D:\\nim\\lib\\std\\private\\osappdirs.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	nimlf_(26, "D:\\nim\\lib\\std\\private\\osappdirs.nim");
	nimln_(7);
	nimln_(26);
	T2_.len = 0; T2_.p = NIM_NIL;
	colontmpD_ = getEnv__stdZenvvars_u15(TM__XnRPlAiwKKY6TokjvYVCvw_3, TM__XnRPlAiwKKY6TokjvYVCvw_5);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T2_ = rawNewString(colontmpD_.len + 1);
appendString((&T2_), colontmpD_);
appendString((&T2_), TM__XnRPlAiwKKY6TokjvYVCvw_9);
	result = T2_;
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqdestroy___stdZassertions_u16((&colontmpD_));
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_u16((&colontmpD_));
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosgetConfigDir)(void) {
	NimStringV2 result;
	NimStringV2 colontmpD_;
	NimStringV2 colontmpD__2;
NIM_BOOL* nimErr_;
	nimfr_("getConfigDir", "D:\\nim\\lib\\std\\private\\osappdirs.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	nimlf_(74, "D:\\nim\\lib\\std\\private\\osappdirs.nim");
	colontmpD_ = getEnv__stdZenvvars_u15(TM__XnRPlAiwKKY6TokjvYVCvw_12, TM__XnRPlAiwKKY6TokjvYVCvw_13);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	colontmpD__2 = slash___stdZprivateZospaths50_u91(colontmpD_, TM__XnRPlAiwKKY6TokjvYVCvw_15);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = getEnv__stdZenvvars_u15(TM__XnRPlAiwKKY6TokjvYVCvw_11, colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(75);
	normalizePathEnd__stdZprivateZospaths50_u23((&result), NIM_TRUE);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqdestroy___stdZassertions_u16((&colontmpD__2));
	eqdestroy___stdZassertions_u16((&colontmpD_));
	}
BeforeRet_: ;
	popFrame();
	return result;
}