/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64

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
typedef struct tyObject_WIN32_FIND_DATA__m9cbpw3LqlaVzCliEIMPxoA tyObject_WIN32_FIND_DATA__m9cbpw3LqlaVzCliEIMPxoA;
typedef struct tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
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
typedef N_STDCALL_PTR(NI, tyProc__DRixElKa6LQ9bEaY29bRSmsw) (NI16* lpFileName_p0, tyObject_WIN32_FIND_DATA__m9cbpw3LqlaVzCliEIMPxoA* lpFindFileData_p1);
typedef NI16 tyUncheckedArray__Tyd4y3haUOOHTj71TPIRag[1];
typedef N_STDCALL_PTR(NI32, tyProc__5sqIMptsyAfPn3c9cPj4DOA) (NI16* lpFileName_p0);
typedef N_STDCALL_PTR(NI32, tyProc__29cQilB9cqahn5yPQZH66TkA) (NI16* lpExistingFileName_p0, NI16* lpNewFileName_p1, NI32 flags_p2);
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
};
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NI16*, toWideCString__stdZwidestrs_u45)(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ x_p0);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ, newWideCString__stdZwidestrs_u303)(NimStringV2 s_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZwidestrs_u6)(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ* a_p0);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_u105)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_u102)(NI32 errorCode_p0, NimStringV2 additionalInfo_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZoscommon_u75)(tyTuple__UV3llMMYFckfui8YMBuUZA* x_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
extern NIM_BOOL nimInErrorMode__system_u4097;
extern tyProc__DRixElKa6LQ9bEaY29bRSmsw Dl_1409286395_;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern tyProc__5sqIMptsyAfPn3c9cPj4DOA Dl_1409286408_;
extern tyProc__29cQilB9cqahn5yPQZH66TkA Dl_1409286420_;
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
N_LIB_PRIVATE N_NIMCALL(NI, findFirstFile__stdZprivateZoscommon_u25)(NimStringV2 a_p0, tyObject_WIN32_FIND_DATA__m9cbpw3LqlaVzCliEIMPxoA* b_p1) {
	NI result;
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ colontmpD_;
	NI16* T1_;
NIM_BOOL* nimErr_;
	nimfr_("findFirstFile", "D:\\nim\\lib\\std\\private\\oscommon.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimZeroMem((void*)(&colontmpD_), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	nimlf_(56, "D:\\nim\\lib\\std\\private\\oscommon.nim");
	colontmpD_ = newWideCString__stdZwidestrs_u303(a_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T1_ = (NI16*)0;
	T1_ = toWideCString__stdZwidestrs_u45(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = Dl_1409286395_(T1_, b_p1);
	nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
	eqdestroy___stdZwidestrs_u6((&colontmpD_));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosfileExists)(NimStringV2 filename_p0) {
	NIM_BOOL result;
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ colontmpD_;
	NI32 a;
	NI16* T1_;
NIM_BOOL* nimErr_;
	nimfr_("fileExists", "D:\\nim\\lib\\std\\private\\oscommon.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&colontmpD_), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	nimlf_(131, "D:\\nim\\lib\\std\\private\\oscommon.nim");
	nimln_(51);
	colontmpD_ = newWideCString__stdZwidestrs_u303(filename_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T1_ = (NI16*)0;
	T1_ = toWideCString__stdZwidestrs_u45(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	a = Dl_1409286408_(T1_);
	nimln_(132);
	{
		if (!!((a == ((NI32)-1)))) goto LA4_;
		nimln_(133);
		result = ((NI32)(a & ((NI32)16)) == ((NI32)0));
	}
LA4_: ;
	nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
	eqdestroy___stdZwidestrs_u6((&colontmpD_));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosdirExists)(NimStringV2 dir_p0) {
	NIM_BOOL result;
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ colontmpD_;
	NI32 a;
	NI16* T1_;
NIM_BOOL* nimErr_;
	nimfr_("dirExists", "D:\\nim\\lib\\std\\private\\oscommon.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&colontmpD_), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	nimlf_(148, "D:\\nim\\lib\\std\\private\\oscommon.nim");
	nimln_(51);
	colontmpD_ = newWideCString__stdZwidestrs_u303(dir_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T1_ = (NI16*)0;
	T1_ = toWideCString__stdZwidestrs_u45(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	a = Dl_1409286408_(T1_);
	nimln_(149);
	{
		if (!!((a == ((NI32)-1)))) goto LA4_;
		nimln_(150);
		result = !(((NI32)(a & ((NI32)16)) == ((NI32)0)));
	}
LA4_: ;
	nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
	eqdestroy___stdZwidestrs_u6((&colontmpD_));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nossymlinkExists)(NimStringV2 link_p0) {
	NIM_BOOL result;
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ colontmpD_;
	NI32 a;
	NI16* T1_;
NIM_BOOL* nimErr_;
	nimfr_("symlinkExists", "D:\\nim\\lib\\std\\private\\oscommon.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&colontmpD_), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	nimlf_(166, "D:\\nim\\lib\\std\\private\\oscommon.nim");
	nimln_(51);
	colontmpD_ = newWideCString__stdZwidestrs_u303(link_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T1_ = (NI16*)0;
	T1_ = toWideCString__stdZwidestrs_u45(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	a = Dl_1409286408_(T1_);
	nimln_(167);
	{
		if (!!((a == ((NI32)-1)))) goto LA4_;
		nimln_(170);
		result = !(((NI32)(a & ((NI32)1024)) == ((NI32)0)));
	}
LA4_: ;
	nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
	eqdestroy___stdZwidestrs_u6((&colontmpD_));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tryMoveFSObject__stdZprivateZoscommon_u65)(NimStringV2 source_p0, NimStringV2 dest_p1, NIM_BOOL isDir_p2) {
	NIM_BOOL result;
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ s;
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ d;
	NI16* T2_;
	NI16* T3_;
	NI32 T4_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
	nimfr_("tryMoveFSObject", "D:\\nim\\lib\\std\\private\\oscommon.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&s), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	nimZeroMem((void*)(&d), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	nimlf_(101, "D:\\nim\\lib\\std\\private\\oscommon.nim");
	s = newWideCString__stdZwidestrs_u303(source_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(102);
	d = newWideCString__stdZwidestrs_u303(dest_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(103);
	T2_ = (NI16*)0;
	T2_ = toWideCString__stdZwidestrs_u45(s);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T3_ = (NI16*)0;
	T3_ = toWideCString__stdZwidestrs_u45(d);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T4_ = (NI32)0;
	T4_ = Dl_1409286420_(T2_, T3_, ((NI32)3));
	result = !((T4_ == ((NI32)0)));
	nimln_(107);
	{
		NI32 err;
		NIM_BOOL isAccessDeniedError;
		NIM_BOOL T9_;
		if (!!(result)) goto LA7_;
		nimln_(108);
		err = osLastError__stdZoserrors_u105();
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		nimln_(109);
		nimln_(112);
		T9_ = (NIM_BOOL)0;
		T9_ = isDir_p2;
		if (!(T9_)) goto LA10_;
		T9_ = (err == ((NI32)5));
LA10_: ;
		isAccessDeniedError = T9_;
		nimln_(115);
		{
			NimStringV2 colontmpD_;
			tyTuple__UV3llMMYFckfui8YMBuUZA T16_;
			if (!!(isAccessDeniedError)) goto LA13_;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			nimln_(116);
			T16_.Field0 = source_p0;
			T16_.Field1 = dest_p1;
			colontmpD_ = dollar___stdZprivateZoscommon_u75((&T16_));
			if (NIM_UNLIKELY(*nimErr_)) goto LA15_;
			raiseOSError__stdZoserrors_u102(err, colontmpD_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA15_;
			{
				LA15_:;
			}
			{
				nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
				eqdestroy___stdZassertions_u16((&colontmpD_));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		}
LA13_: ;
	}
LA7_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
		eqdestroy___stdZwidestrs_u6((&d));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		eqdestroy___stdZwidestrs_u6((&s));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
