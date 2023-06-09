/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64
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
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
N_LIB_PRIVATE N_NIMCALL(void, openDefaultBrowserImpl__pureZbrowsers_u9)(NimStringV2 url_p0);
N_LIB_PRIVATE N_NIMCALL(NI, nosexecShellCmd)(NimStringV2 command_p0);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nospquoteShell)(NimStringV2 s_p0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, prepare__pureZbrowsers_u6)(NimStringV2 s_p0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__pureZstrutils_u1896)(NimStringV2 s_p0, NimStringV2 sub_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, absolutePath__stdZprivateZospaths50_u348)(NimStringV2 path_p0, NimStringV2 root_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nosgetCurrentDir)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
static const struct {
  NI cap; NIM_CHAR data[78+1];
} TM__CZNeKGdQ8AWxD1HSDIq5DQ_2 = { 78 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\pure\\browsers.nim(75, 3) `url.len > 0` URL must not be empty string" };
static const NimStringV2 TM__CZNeKGdQ8AWxD1HSDIq5DQ_3 = {78, (NimStrPayload*)&TM__CZNeKGdQ8AWxD1HSDIq5DQ_2};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__CZNeKGdQ8AWxD1HSDIq5DQ_4 = { 5 | NIM_STRLIT_FLAG, "open " };
static const NimStringV2 TM__CZNeKGdQ8AWxD1HSDIq5DQ_5 = {5, (NimStrPayload*)&TM__CZNeKGdQ8AWxD1HSDIq5DQ_4};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__CZNeKGdQ8AWxD1HSDIq5DQ_8 = { 3 | NIM_STRLIT_FLAG, "://" };
static const NimStringV2 TM__CZNeKGdQ8AWxD1HSDIq5DQ_9 = {3, (NimStrPayload*)&TM__CZNeKGdQ8AWxD1HSDIq5DQ_8};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__CZNeKGdQ8AWxD1HSDIq5DQ_10 = { 7 | NIM_STRLIT_FLAG, "file://" };
static const NimStringV2 TM__CZNeKGdQ8AWxD1HSDIq5DQ_11 = {7, (NimStrPayload*)&TM__CZNeKGdQ8AWxD1HSDIq5DQ_10};
extern NIM_BOOL nimInErrorMode__system_u4097;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest_p0, source_p1, ((size_t) (size_p2)));
}
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2) {
	nimCopyMem(dest_p0, source_p1, size_p2);
}
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2) {
	NIM_BOOL result;
	NI r;
	result = (NIM_BOOL)0;
	r = ((NI) ((NU)((NU64)(((NU) (a_p0))) + (NU64)(((NU) (b_p1))))));
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
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1) {
{	{
		NI TM__CZNeKGdQ8AWxD1HSDIq5DQ_6;
		NI TM__CZNeKGdQ8AWxD1HSDIq5DQ_7;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__CZNeKGdQ8AWxD1HSDIq5DQ_6)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__CZNeKGdQ8AWxD1HSDIq5DQ_6)) < ((NI)0) || ((NI)(TM__CZNeKGdQ8AWxD1HSDIq5DQ_6)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__CZNeKGdQ8AWxD1HSDIq5DQ_6), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__CZNeKGdQ8AWxD1HSDIq5DQ_6))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__CZNeKGdQ8AWxD1HSDIq5DQ_7)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__CZNeKGdQ8AWxD1HSDIq5DQ_7);
	}
LA3_: ;
	}
BeforeRet_: ;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4097);
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, prepare__pureZbrowsers_u6)(NimStringV2 s_p0) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
	nimfr_("prepare", "D:\\nim\\lib\\pure\\browsers.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(38, "D:\\nim\\lib\\pure\\browsers.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = contains__pureZstrutils_u1896(s_p0, TM__CZNeKGdQ8AWxD1HSDIq5DQ_9);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqcopy___stdZassertions_u19((&result), s_p0);
	}
	goto LA1_;
LA4_: ;
	{
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		NimStringV2 T8_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		nimlf_(41, "D:\\nim\\lib\\pure\\browsers.nim");
		T8_.len = 0; T8_.p = NIM_NIL;
		nimlf_(879, "D:\\nim\\lib\\std\\private\\ospaths2.nim");
		colontmpD_ = nosgetCurrentDir();
		if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		nimlf_(41, "D:\\nim\\lib\\pure\\browsers.nim");
		colontmpD__2 = absolutePath__stdZprivateZospaths50_u348(s_p0, colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		T8_ = rawNewString(colontmpD__2.len + 7);
appendString((&T8_), TM__CZNeKGdQ8AWxD1HSDIq5DQ_11);
appendString((&T8_), colontmpD__2);
		result = T8_;
		{
			LA7_:;
		}
		{
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__2));
			eqdestroy___stdZassertions_u16((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA1_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, openDefaultBrowserImpl__pureZbrowsers_u9)(NimStringV2 url_p0) {
	NimStringV2 colontmpD_;
	NimStringV2 colontmpD__2;
	NimStringV2 colontmpD__3;
	NimStringV2 T2_;
	NI T3_;
NIM_BOOL* nimErr_;
	nimfr_("openDefaultBrowserImpl", "D:\\nim\\lib\\pure\\browsers.nim");
{nimErr_ = nimErrorFlag();
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
	nimlf_(49, "D:\\nim\\lib\\pure\\browsers.nim");
	T2_.len = 0; T2_.p = NIM_NIL;
	colontmpD_ = prepare__pureZbrowsers_u6(url_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD__2 = nospquoteShell(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T2_ = rawNewString(colontmpD__2.len + 5);
appendString((&T2_), TM__CZNeKGdQ8AWxD1HSDIq5DQ_5);
appendString((&T2_), colontmpD__2);
	colontmpD__3 = T2_;
	T3_ = (NI)0;
	T3_ = nosexecShellCmd(colontmpD__3);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	(void)(T3_);
	{
		LA1_:;
	}
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD__3));
		eqdestroy___stdZassertions_u16((&colontmpD__2));
		eqdestroy___stdZassertions_u16((&colontmpD_));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, openDefaultBrowser__pureZbrowsers_u11)(NimStringV2 url_p0) {
NIM_BOOL* nimErr_;
	nimfr_("openDefaultBrowser", "D:\\nim\\lib\\pure\\browsers.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(75, "D:\\nim\\lib\\pure\\browsers.nim");
	{
		if (!!((((NI)0) < url_p0.len))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__CZNeKGdQ8AWxD1HSDIq5DQ_3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(76);
	openDefaultBrowserImpl__pureZbrowsers_u9(url_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
