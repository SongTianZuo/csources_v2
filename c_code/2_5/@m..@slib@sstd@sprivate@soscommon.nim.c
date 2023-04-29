/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
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
typedef struct tyTuple__DFcrIo7EJxGkt0E3tvdV9ag tyTuple__DFcrIo7EJxGkt0E3tvdV9ag;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
typedef NU8 tyEnum_PathComponent__DO3jyWa6XHVeQhtgtAA9a1Q;
struct tyTuple__DFcrIo7EJxGkt0E3tvdV9ag {
tyEnum_PathComponent__DO3jyWa6XHVeQhtgtAA9a1Q Field0;
NIM_BOOL Field1;
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
};
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s_p0);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_u101)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_u98)(NI32 errorCode_p0, NimStringV2 additionalInfo_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZoscommon_u108)(tyTuple__UV3llMMYFckfui8YMBuUZA* x_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
static const struct {
  NI cap; NIM_CHAR data[57+1];
} TM__ZrvRRRmaDcxlFjSFGlhGzQ_2 = { 57 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\std\\private\\oscommon.nim(86, 11) `path != \"\"` " };
static const NimStringV2 TM__ZrvRRRmaDcxlFjSFGlhGzQ_3 = {57, (NimStrPayload*)&TM__ZrvRRRmaDcxlFjSFGlhGzQ_2};
extern NIM_BOOL nimInErrorMode__system_u4097;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
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
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s_p0) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		if (!(s_p0.len == ((NI)0))) goto LA3_;
		result = "";
	}
	goto LA1_;
LA3_: ;
	{
		result = ((NCSTRING) ((*s_p0.p).data));
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosfileExists)(NimStringV2 filename_p0) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
	nimfr_("fileExists", "D:\\nim\\lib\\std\\private\\oscommon.nim");
{	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&res), sizeof(struct stat));
	nimlf_(136, "D:\\nim\\lib\\std\\private\\oscommon.nim");
	nimln_(121);
	nimln_(136);
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = stat(nimToCStringConv(filename_p0), (&res));
	T1_ = (((NI32)0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISREG(res.st_mode);
LA3_: ;
	result = T1_;
	goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__DFcrIo7EJxGkt0E3tvdV9ag, getSymlinkFileKind__stdZprivateZoscommon_u26)(NimStringV2 path_p0) {
	tyTuple__DFcrIo7EJxGkt0E3tvdV9ag result;
	struct stat s;
	tyEnum_PathComponent__DO3jyWa6XHVeQhtgtAA9a1Q colontmp_;
	NIM_BOOL colontmp__2;
NIM_BOOL* nimErr_;
	nimfr_("getSymlinkFileKind", "D:\\nim\\lib\\std\\private\\oscommon.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyTuple__DFcrIo7EJxGkt0E3tvdV9ag));
	nimZeroMem((void*)(&s), sizeof(struct stat));
	nimlf_(86, "D:\\nim\\lib\\std\\private\\oscommon.nim");
	{
		if (!!(!((path_p0.len == 0)))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__ZrvRRRmaDcxlFjSFGlhGzQ_3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(87);
	colontmp_ = ((tyEnum_PathComponent__DO3jyWa6XHVeQhtgtAA9a1Q)1);
	colontmp__2 = NIM_FALSE;
	result.Field0 = colontmp_;
	result.Field1 = colontmp__2;
	nimln_(88);
	{
		int T7_;
		T7_ = (int)0;
		T7_ = stat(nimToCStringConv(path_p0), (&s));
		if (!(T7_ == ((NI32)0))) goto LA8_;
		nimln_(89);
		{
			NIM_BOOL T12_;
			tyEnum_PathComponent__DO3jyWa6XHVeQhtgtAA9a1Q colontmp__3;
			NIM_BOOL colontmp__4;
			T12_ = (NIM_BOOL)0;
			T12_ = S_ISDIR(s.st_mode);
			if (!T12_) goto LA13_;
			nimln_(90);
			colontmp__3 = ((tyEnum_PathComponent__DO3jyWa6XHVeQhtgtAA9a1Q)3);
			colontmp__4 = NIM_FALSE;
			result.Field0 = colontmp__3;
			result.Field1 = colontmp__4;
		}
		goto LA10_;
LA13_: ;
		{
			NIM_BOOL T16_;
			tyEnum_PathComponent__DO3jyWa6XHVeQhtgtAA9a1Q colontmp__5;
			NIM_BOOL colontmp__6;
			nimln_(91);
			T16_ = (NIM_BOOL)0;
			T16_ = S_ISREG(s.st_mode);
			if (!!(T16_)) goto LA17_;
			nimln_(92);
			colontmp__5 = ((tyEnum_PathComponent__DO3jyWa6XHVeQhtgtAA9a1Q)1);
			colontmp__6 = NIM_TRUE;
			result.Field0 = colontmp__5;
			result.Field1 = colontmp__6;
		}
		goto LA10_;
LA17_: ;
LA10_: ;
	}
LA8_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosdirExists)(NimStringV2 dir_p0) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
	nimfr_("dirExists", "D:\\nim\\lib\\std\\private\\oscommon.nim");
	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&res), sizeof(struct stat));
	nimlf_(153, "D:\\nim\\lib\\std\\private\\oscommon.nim");
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = stat(nimToCStringConv(dir_p0), (&res));
	T1_ = (((NI32)0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISDIR(res.st_mode);
LA3_: ;
	result = T1_;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nossymlinkExists)(NimStringV2 link_p0) {
	NIM_BOOL result;
	struct stat res;
	NIM_BOOL T1_;
	int T2_;
	nimfr_("symlinkExists", "D:\\nim\\lib\\std\\private\\oscommon.nim");
	result = (NIM_BOOL)0;
	nimZeroMem((void*)(&res), sizeof(struct stat));
	nimlf_(173, "D:\\nim\\lib\\std\\private\\oscommon.nim");
	T1_ = (NIM_BOOL)0;
	T2_ = (int)0;
	T2_ = lstat(nimToCStringConv(link_p0), (&res));
	T1_ = (((NI32)0) <= T2_);
	if (!(T1_)) goto LA3_;
	T1_ = S_ISLNK(res.st_mode);
LA3_: ;
	result = T1_;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tryMoveFSObject__stdZprivateZoscommon_u101)(NimStringV2 source_p0, NimStringV2 dest_p1, NIM_BOOL isDir_p2) {
	NIM_BOOL result;
	int T1_;
NIM_BOOL* nimErr_;
	nimfr_("tryMoveFSObject", "D:\\nim\\lib\\std\\private\\oscommon.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimlf_(105, "D:\\nim\\lib\\std\\private\\oscommon.nim");
	T1_ = (int)0;
	T1_ = rename(nimToCStringConv(source_p0), nimToCStringConv(dest_p1));
	result = (T1_ == ((NI32)0));
	nimln_(107);
	{
		NI32 err;
		NIM_BOOL isAccessDeniedError;
		if (!!(result)) goto LA4_;
		nimln_(108);
		err = osLastError__stdZoserrors_u101();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(109);
		nimln_(114);
		isAccessDeniedError = (err == EXDEV);
		nimln_(115);
		{
			NimStringV2 colontmpD_;
			tyTuple__UV3llMMYFckfui8YMBuUZA T11_;
			if (!!(isAccessDeniedError)) goto LA8_;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			nimln_(116);
			T11_.Field0 = source_p0;
			T11_.Field1 = dest_p1;
			colontmpD_ = dollar___stdZprivateZoscommon_u108((&T11_));
			if (NIM_UNLIKELY(*nimErr_)) goto LA10_;
			raiseOSError__stdZoserrors_u98(err, colontmpD_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA10_;
			{
				LA10_:;
			}
			{
				nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
				eqdestroy___stdZassertions_u16((&colontmpD_));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
LA8_: ;
	}
LA4_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
