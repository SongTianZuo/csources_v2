/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <stdlib.h>
#include <errno.h>
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
typedef struct tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ;
typedef struct tySequence__lBgZ7a89beZGYPl8PiANMTA tySequence__lBgZ7a89beZGYPl8PiANMTA;
typedef struct tySequence__lBgZ7a89beZGYPl8PiANMTA_Content tySequence__lBgZ7a89beZGYPl8PiANMTA_Content;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ {
	NI bytes;
	NI16* data;
};
typedef NI16 tyUncheckedArray__Tyd4y3haUOOHTj71TPIRag[1];
struct tySequence__lBgZ7a89beZGYPl8PiANMTA {
  NI len; tySequence__lBgZ7a89beZGYPl8PiANMTA_Content* p;
};
typedef N_STDCALL_PTR(NI32, tyProc__bqj9c9cp9clcknaC0kHFkuNVg) (NI16* lpName_p0, NI16* lpValue_p1);


#ifndef tySequence__lBgZ7a89beZGYPl8PiANMTA_Content_PP
#define tySequence__lBgZ7a89beZGYPl8PiANMTA_Content_PP
struct tySequence__lBgZ7a89beZGYPl8PiANMTA_Content { NI cap; NIM_CHAR data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NI16*, toWideCString__stdZwidestrs_u45)(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ x_p0);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ, newWideCString__stdZwidestrs_u303)(NimStringV2 s_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZwidestrs_u6)(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ* a_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorNoArgs)(void);
N_LIB_PRIVATE N_NIMCALL(tySequence__lBgZ7a89beZGYPl8PiANMTA, newSeq__stdZprivateZwin95setenv_u149)(NI len_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZprivateZwin95setenv_u160)(tySequence__lBgZ7a89beZGYPl8PiANMTA* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringV2 path_p0);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringV2 path_p0);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib_p0, NCSTRING name_p1);
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__UOYsq9cbb0VE8vr3Xt181HA_4 = { 1 | NIM_STRLIT_FLAG, "=" };
static const NimStringV2 TM__UOYsq9cbb0VE8vr3Xt181HA_5 = {1, (NimStrPayload*)&TM__UOYsq9cbb0VE8vr3Xt181HA_4};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__UOYsq9cbb0VE8vr3Xt181HA_6 = { 3 | NIM_STRLIT_FLAG, "=  " };
static const NimStringV2 TM__UOYsq9cbb0VE8vr3Xt181HA_7 = {3, (NimStrPayload*)&TM__UOYsq9cbb0VE8vr3Xt181HA_6};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__UOYsq9cbb0VE8vr3Xt181HA_12 = { 8 | NIM_STRLIT_FLAG, "kernel32" };
static const NimStringV2 TM__UOYsq9cbb0VE8vr3Xt181HA_13 = {8, (NimStrPayload*)&TM__UOYsq9cbb0VE8vr3Xt181HA_12};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__UOYsq9cbb0VE8vr3Xt181HA_14 = { 8 | NIM_STRLIT_FLAG, "kernel32" };
static const NimStringV2 TM__UOYsq9cbb0VE8vr3Xt181HA_15 = {8, (NimStrPayload*)&TM__UOYsq9cbb0VE8vr3Xt181HA_14};
extern NIM_CHAR** _environ;
extern NIM_BOOL nimInErrorMode__system_u4097;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
static void* TM__UOYsq9cbb0VE8vr3Xt181HA_10;
tyProc__bqj9c9cp9clcknaC0kHFkuNVg Dl_1627389955_;
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a_p0, v_p1, ((size_t) (size_p2)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4097);
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
static N_INLINE(NI16*, toWideCString__stdZwidestrs_u45)(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ x_p0) {
	NI16* result;
	nimfr_("toWideCString", "D:\\nim\\lib\\std\\widestrs.nim");
	result = (NI16*)0;
	nimlf_(54, "D:\\nim\\lib\\std\\widestrs.nim");
	result = x_p0.data;
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
		NI TM__UOYsq9cbb0VE8vr3Xt181HA_2;
		NI TM__UOYsq9cbb0VE8vr3Xt181HA_3;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__UOYsq9cbb0VE8vr3Xt181HA_2)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_2)) < ((NI)0) || ((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_2)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_2), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_2))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__UOYsq9cbb0VE8vr3Xt181HA_3)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_3);
	}
LA3_: ;
	}
BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(int, setEnvImpl__stdZprivateZwin95setenv_u18)(NimStringV2 name_p0, NimStringV2 value_p1, int overwrite_p2) {
	int result;
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ colontmpD_;
	NimStringV2 colontmpD__2;
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ colontmpD__3;
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ colontmpD__4;
	NI16* wideName;
NIM_BOOL oldNimErrFin13_;
	NI16* envstring_2;
	NimStringV2 T21_;
	NI16* s;
	wchar_t* T27_;
	wchar_t* T28_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
	nimfr_("setEnvImpl", "D:\\nim\\lib\\std\\private\\win_setenv.nim");
{nimErr_ = nimErrorFlag();
	result = (int)0;
	nimZeroMem((void*)(&colontmpD_), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	nimZeroMem((void*)(&colontmpD__3), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	nimZeroMem((void*)(&colontmpD__4), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	nimlf_(48, "D:\\nim\\lib\\std\\private\\win_setenv.nim");
	colontmpD_ = newWideCString__stdZwidestrs_u303(name_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	wideName = toWideCString__stdZwidestrs_u45(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(49);
	{
		NIM_BOOL T4_;
		wchar_t* T6_;
		T4_ = (NIM_BOOL)0;
		T4_ = (overwrite_p2 == ((NI32)0));
		if (!(T4_)) goto LA5_;
		T6_ = (wchar_t*)0;
		T6_ = _wgetenv(((wchar_t*) (wideName)));
		T4_ = !((T6_ == ((wchar_t*) NIM_NIL)));
LA5_: ;
		if (!T4_) goto LA7_;
		nimln_(50);
		nimln_(46);
		nimln_(50);
		result = ((int)0);
		nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
		eqdestroy___stdZwidestrs_u6((&colontmpD__4));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZwidestrs_u6((&colontmpD__3));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD__2));
		nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
		eqdestroy___stdZwidestrs_u6((&colontmpD_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
LA7_: ;
	nimlf_(52, "D:\\nim\\lib\\std\\private\\win_setenv.nim");
	{
		NimStringV2 colontmpD__5;
		tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ colontmpD__6;
		NI16* envstring;
		NimStringV2 T14_;
		int e;
		if (!!((value_p1.len == 0))) goto LA11_;
		colontmpD__5.len = 0; colontmpD__5.p = NIM_NIL;
		nimZeroMem((void*)(&colontmpD__6), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
		nimln_(53);
		T14_.len = 0; T14_.p = NIM_NIL;
		T14_ = rawNewString(name_p0.len + value_p1.len + 1);
appendString((&T14_), name_p0);
appendString((&T14_), TM__UOYsq9cbb0VE8vr3Xt181HA_5);
appendString((&T14_), value_p1);
		colontmpD__5 = T14_;
		colontmpD__6 = newWideCString__stdZwidestrs_u303(colontmpD__5);
		if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
		envstring = toWideCString__stdZwidestrs_u45(colontmpD__6);
		if (NIM_UNLIKELY(*nimErr_)) goto LA13_;
		nimln_(54);
		e = _wputenv(((wchar_t*) (envstring)));
		nimln_(55);
		{
			if (!!((e == ((NI32)0)))) goto LA17_;
			nimln_(56);
			errno = ((int)22);
			nimln_(57);
			nimln_(46);
			nimln_(57);
			result = ((int)-1);
			nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
			eqdestroy___stdZwidestrs_u6((&colontmpD__6));
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__5));
			nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
			eqdestroy___stdZwidestrs_u6((&colontmpD__4));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			eqdestroy___stdZwidestrs_u6((&colontmpD__3));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__2));
			nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
			eqdestroy___stdZwidestrs_u6((&colontmpD_));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			goto BeforeRet_;
		}
LA17_: ;
		nimlf_(58, "D:\\nim\\lib\\std\\private\\win_setenv.nim");
		nimln_(46);
		nimln_(58);
		result = ((int)0);
		nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
		eqdestroy___stdZwidestrs_u6((&colontmpD__6));
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD__5));
		nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
		eqdestroy___stdZwidestrs_u6((&colontmpD__4));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZwidestrs_u6((&colontmpD__3));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD__2));
		nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
		eqdestroy___stdZwidestrs_u6((&colontmpD_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
		{
			LA13_:;
		}
		{
			oldNimErrFin13_ = *nimErr_; *nimErr_ = NIM_FALSE;
			eqdestroy___stdZwidestrs_u6((&colontmpD__6));
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__5));
			*nimErr_ = oldNimErrFin13_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA11_: ;
	nimlf_(65, "D:\\nim\\lib\\std\\private\\win_setenv.nim");
	T21_.len = 0; T21_.p = NIM_NIL;
	T21_ = rawNewString(name_p0.len + 3);
appendString((&T21_), name_p0);
appendString((&T21_), TM__UOYsq9cbb0VE8vr3Xt181HA_7);
	colontmpD__2 = T21_;
	colontmpD__3 = newWideCString__stdZwidestrs_u303(colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	envstring_2 = toWideCString__stdZwidestrs_u45(colontmpD__3);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(66);
	{
		int T24_;
		T24_ = (int)0;
		T24_ = _wputenv(((wchar_t*) (envstring_2)));
		if (!!((T24_ == ((NI32)0)))) goto LA25_;
		nimln_(67);
		errno = ((int)22);
		nimln_(68);
		nimln_(46);
		nimln_(68);
		result = ((int)-1);
		nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
		eqdestroy___stdZwidestrs_u6((&colontmpD__4));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZwidestrs_u6((&colontmpD__3));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD__2));
		nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
		eqdestroy___stdZwidestrs_u6((&colontmpD_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
LA25_: ;
	nimlf_(70, "D:\\nim\\lib\\std\\private\\win_setenv.nim");
	T27_ = (wchar_t*)0;
	T27_ = _wgetenv(((wchar_t*) (wideName)));
	s = ((NI16*) (T27_));
	nimln_(71);
	s[((NI)0)] = ((NI16)0);
	nimln_(77);
	T28_ = (wchar_t*)0;
	T28_ = _wgetenv(((wchar_t*) (wideName)));
	s = ((NI16*) (T28_));
	nimln_(78);
	s[((NI)1)] = ((NI16)61);
	nimln_(85);
	{
		size_t requiredSizeS;
		if (!!((_environ == ((NIM_CHAR**) NIM_NIL)))) goto LA31_;
		nimln_(91);
		requiredSizeS = wcstombs(((NIM_CHAR*) NIM_NIL), ((wchar_t*) (wideName)), ((size_t)0));
		nimln_(92);
		{
			tySequence__lBgZ7a89beZGYPl8PiANMTA buf;
			NI requiredSize;
			NI TM__UOYsq9cbb0VE8vr3Xt181HA_8;
			NIM_CHAR* buf2;
			if (!!((requiredSizeS == ((size_t)IL64(4294967295))))) goto LA35_;
			buf.len = 0; buf.p = NIM_NIL;
			nimln_(93);
			if (requiredSizeS > (size_t)(((NI)2147483647))){ raiseRangeErrorNoArgs(); goto LA1_;
			}
			requiredSize = ((NI) (requiredSizeS));
			nimln_(94);
			if (nimAddInt(requiredSize, ((NI)1), &TM__UOYsq9cbb0VE8vr3Xt181HA_8)) { raiseOverflow(); goto LA1_;
			};
			if (((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_8)) < ((NI)0) || ((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_8)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_8), ((NI)0), ((NI)2147483647)); goto LA1_;
			}
			buf = newSeq__stdZprivateZwin95setenv_u149(((NI) ((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_8))));
			nimln_(95);
			if (((NI)0) < 0 || ((NI)0) >= buf.len){ raiseIndexError2(((NI)0),buf.len-1); goto LA1_;
			}
			buf2 = (&buf.p->data[((NI)0)]);
			nimln_(96);
			{
				NI TM__UOYsq9cbb0VE8vr3Xt181HA_9;
				size_t T39_;
				NCSTRING ptrToEnv;
				if (nimAddInt(requiredSize, ((NI)1), &TM__UOYsq9cbb0VE8vr3Xt181HA_9)) { raiseOverflow(); goto LA1_;
				};
				T39_ = (size_t)0;
				T39_ = wcstombs(buf2, ((wchar_t*) (wideName)), ((size_t) ((NI)(TM__UOYsq9cbb0VE8vr3Xt181HA_9))));
				if (!!((T39_ == ((size_t)IL64(4294967295))))) goto LA40_;
				nimln_(97);
				ptrToEnv = getenv(((NCSTRING) (buf2)));
				nimln_(98);
				ptrToEnv[((NI)0)] = 0;
				nimln_(99);
				ptrToEnv = getenv(((NCSTRING) (buf2)));
				nimln_(100);
				ptrToEnv[((NI)1)] = 61;
			}
LA40_: ;
			nimlf_(597, "D:\\nim\\lib\\system.nim");
			eqdestroy___stdZprivateZwin95setenv_u160((&buf));
		}
LA35_: ;
	}
LA31_: ;
	nimlf_(103, "D:\\nim\\lib\\std\\private\\win_setenv.nim");
	{
		NI16* T44_;
		NI32 T45_;
		colontmpD__4 = newWideCString__stdZwidestrs_u303(value_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T44_ = (NI16*)0;
		T44_ = toWideCString__stdZwidestrs_u45(colontmpD__4);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T45_ = (NI32)0;
		T45_ = Dl_1627389955_(wideName, T44_);
		if (!(T45_ == ((NI32)0))) goto LA46_;
		nimln_(104);
		errno = ((int)22);
		nimln_(105);
		nimln_(46);
		nimln_(105);
		result = ((int)-1);
		nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
		eqdestroy___stdZwidestrs_u6((&colontmpD__4));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZwidestrs_u6((&colontmpD__3));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD__2));
		nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
		eqdestroy___stdZwidestrs_u6((&colontmpD_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
LA46_: ;
	nimlf_(106, "D:\\nim\\lib\\std\\private\\win_setenv.nim");
	nimln_(46);
	nimln_(106);
	result = ((int)0);
	nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
	eqdestroy___stdZwidestrs_u6((&colontmpD__4));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eqdestroy___stdZwidestrs_u6((&colontmpD__3));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqdestroy___stdZassertions_u16((&colontmpD__2));
	nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
	eqdestroy___stdZwidestrs_u6((&colontmpD_));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___stdZwidestrs_u6((&colontmpD__4));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZwidestrs_u6((&colontmpD__3));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD__2));
		nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
		eqdestroy___stdZwidestrs_u6((&colontmpD_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, atmdotdotatslibatsstdatsprivateatswin_setenvdotnim_DatInit000)(void) {
if (!((TM__UOYsq9cbb0VE8vr3Xt181HA_10 = nimLoadLibrary(TM__UOYsq9cbb0VE8vr3Xt181HA_13))
)) nimLoadLibraryError(TM__UOYsq9cbb0VE8vr3Xt181HA_15);
	Dl_1627389955_ = (tyProc__bqj9c9cp9clcknaC0kHFkuNVg) nimGetProcAddr(TM__UOYsq9cbb0VE8vr3Xt181HA_10, "SetEnvironmentVariableW");
}

