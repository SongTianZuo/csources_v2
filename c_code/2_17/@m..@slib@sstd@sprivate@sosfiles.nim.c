/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
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
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ tySequence__OC4OxQhfzCBuUQxMi5llBQ;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content;
typedef struct tyTuple__QaGLhhq9b9bwzy9bgqusmB4SQ tyTuple__QaGLhhq9b9bwzy9bgqusmB4SQ;
typedef struct tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
typedef NU8 tySet_tyEnum_CopyFlag__vcmZyPP9aRlb3v1x2Z89cLDg;
typedef NU8 tyEnum_CopyFlag__vcmZyPP9aRlb3v1x2Z89cLDg;
typedef NU8 tyEnum_FileMode__9atfYUlw9bQtL4ixYGhUZZfQ;
struct TNimTypeV2 {
	void* destructor;
	NI size;
	NI16 align;
	NI16 depth;
	NU32* display;
	void* traceImpl;
	void* typeInfoV1;
	NI flags;
};
struct RootObj {
TNimTypeV2* m_type;
};
struct tySequence__OC4OxQhfzCBuUQxMi5llBQ {
  NI len; tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content* p;
};
struct Exception {
  RootObj Sup;
	Exception* parent;
	NCSTRING name;
	NimStringV2 message;
	tySequence__OC4OxQhfzCBuUQxMi5llBQ trace;
	Exception* up;
};
typedef NU16 tySet_tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ;
typedef NU8 tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ;
struct tyTuple__QaGLhhq9b9bwzy9bgqusmB4SQ {
NimStringV2 Field0;
tySet_tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ Field1;
};
struct tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw {
	NCSTRING procname;
	NI line;
	NCSTRING filename;
};


#ifndef tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content_PP
#define tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content_PP
struct tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content { NI cap; tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s_p0);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, countBits32)(NU32 n_p0);
static N_INLINE(NI, countSetBitsImpl__systemZcountbits95impl_u26)(NU32 x_p0);
N_CDECL(int, __builtin_popcount)(unsigned int x_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nossymlinkExists)(NimStringV2 link_p0);
N_LIB_PRIVATE N_NIMCALL(void, createSymlink__stdZprivateZossymlinks_u13)(NimStringV2 src_p0, NimStringV2 dest_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, expandSymlink__stdZprivateZossymlinks_u19)(NimStringV2 symlinkPath_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__stdZsyncio_u399)(FILE** f_p0, NimStringV2 filename_p1, tyEnum_FileMode__9atfYUlw9bQtL4ixYGhUZZfQ mode_p2, NI bufSize_p3);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_u98)(NI32 errorCode_p0, NimStringV2 additionalInfo_p1);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_u101)(void);
N_LIB_PRIVATE N_NIMCALL(void, close__stdZsyncio_u250)(FILE* f_p0);
N_LIB_PRIVATE N_NOCONV(void*, allocImpl__system_u1736)(NI size_p0);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__stdZsyncio_u155)(FILE* f_p0, void* buffer_p1, NI len_p2);
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__stdZsyncio_u186)(FILE* f_p0, void* buffer_p1, NI len_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NOCONV(void, dealloc)(void* p_p0);
N_LIB_PRIVATE N_NIMCALL(void, flushFile__stdZsyncio_u259)(FILE* f_p0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nostryRemoveFile)(NimStringV2 file_p0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, tryMoveFSObject__stdZprivateZoscommon_u101)(NimStringV2 source_p0, NimStringV2 dest_p1, NIM_BOOL isDir_p2);
N_LIB_PRIVATE N_NIMCALL(void, noscopyFile)(NimStringV2 source_p0, NimStringV2 dest_p1, tySet_tyEnum_CopyFlag__vcmZyPP9aRlb3v1x2Z89cLDg options_p2);
N_LIB_PRIVATE N_NIMCALL(void, nosremoveFile)(NimStringV2 file_p0);
N_LIB_PRIVATE N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, popCurrentException)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u40)(Exception** dest_p0, Exception* src_p1, NIM_BOOL cyclic_p2);
N_LIB_PRIVATE N_NIMCALL(void, nossetFilePermissions)(NimStringV2 filename_p0, tySet_tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ permissions_p1, NIM_BOOL followSymlinks_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZosfiles_u131)(tyTuple__QaGLhhq9b9bwzy9bgqusmB4SQ x_p0);
N_LIB_PRIVATE N_NIMCALL(tySet_tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ, nosgetFilePermissions)(NimStringV2 filename_p0);
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static const struct {
  NI cap; NIM_CHAR data[131+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_2 = { 131 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\std\\private\\osfiles.nim(209, 3) `card(copyFlagSymlink * options) == 1` There should be exactly one cfSymlink* in options" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_3 = {131, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_2};
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_4 = { 10 | NIM_STRLIT_FLAG, "fpUserExec" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_5 = {10, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_4};
static const struct {
  NI cap; NIM_CHAR data[11+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_6 = { 11 | NIM_STRLIT_FLAG, "fpUserWrite" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_7 = {11, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_6};
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_8 = { 10 | NIM_STRLIT_FLAG, "fpUserRead" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_9 = {10, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_8};
static const struct {
  NI cap; NIM_CHAR data[11+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_10 = { 11 | NIM_STRLIT_FLAG, "fpGroupExec" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_11 = {11, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_10};
static const struct {
  NI cap; NIM_CHAR data[12+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_12 = { 12 | NIM_STRLIT_FLAG, "fpGroupWrite" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_13 = {12, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_12};
static const struct {
  NI cap; NIM_CHAR data[11+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_14 = { 11 | NIM_STRLIT_FLAG, "fpGroupRead" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_15 = {11, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_14};
static const struct {
  NI cap; NIM_CHAR data[12+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_16 = { 12 | NIM_STRLIT_FLAG, "fpOthersExec" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_17 = {12, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_16};
static const struct {
  NI cap; NIM_CHAR data[13+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_18 = { 13 | NIM_STRLIT_FLAG, "fpOthersWrite" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_19 = {13, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_18};
static const struct {
  NI cap; NIM_CHAR data[12+1];
} TM__CMIme9a8i2wZOUbxErcFpJA_20 = { 12 | NIM_STRLIT_FLAG, "fpOthersRead" };
static const NimStringV2 TM__CMIme9a8i2wZOUbxErcFpJA_21 = {12, (NimStrPayload*)&TM__CMIme9a8i2wZOUbxErcFpJA_20};
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern NIM_BOOL nimInErrorMode__system_u4097;
extern Exception* currException__system_u3745;
extern Exception* currException__system_u3745;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nostryRemoveFile)(NimStringV2 file_p0) {
	NIM_BOOL result;
	nimfr_("tryRemoveFile", "D:\\nim\\lib\\std\\private\\osfiles.nim");
	result = (NIM_BOOL)0;
	nimlf_(341, "D:\\nim\\lib\\std\\private\\osfiles.nim");
	result = NIM_TRUE;
	nimln_(354);
	{
		NIM_BOOL T3_;
		int T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (int)0;
		T4_ = unlink(nimToCStringConv(file_p0));
		T3_ = !((T4_ == ((NI32)0)));
		if (!(T3_)) goto LA5_;
		T3_ = !((errno == ENOENT));
LA5_: ;
		if (!T3_) goto LA6_;
		nimln_(355);
		result = NIM_FALSE;
	}
LA6_: ;
	popFrame();
	return result;
}
static N_INLINE(NI, countSetBitsImpl__systemZcountbits95impl_u26)(NU32 x_p0) {
	NI result;
	NU32 x_2;
	int T1_;
	nimfr_("countSetBitsImpl", "D:\\nim\\lib\\system\\countbits_impl.nim");
	result = (NI)0;
	nimlf_(67, "D:\\nim\\lib\\system\\countbits_impl.nim");
	x_2 = x_p0;
	nimln_(72);
	T1_ = (int)0;
	T1_ = __builtin_popcount(x_2);
	result = ((NI) (T1_));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4097);
	return result;
}
static N_INLINE(NI, countBits32)(NU32 n_p0) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("countBits32", "D:\\nim\\lib\\system\\countbits_impl.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(90, "D:\\nim\\lib\\system\\countbits_impl.nim");
	result = countSetBitsImpl__systemZcountbits95impl_u26(n_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, noscopyFile)(NimStringV2 source_p0, NimStringV2 dest_p1, tySet_tyEnum_CopyFlag__vcmZyPP9aRlb3v1x2Z89cLDg options_p2) {
	NIM_BOOL isSymlink;
NIM_BOOL* nimErr_;
	nimfr_("copyFile", "D:\\nim\\lib\\std\\private\\osfiles.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(209, "D:\\nim\\lib\\std\\private\\osfiles.nim");
	{
		if (!!((countBits32((7 & options_p2)) == ((NI)1)))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__CMIme9a8i2wZOUbxErcFpJA_3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(211);
	isSymlink = nossymlinkExists(source_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(212);
	{
		NIM_BOOL T7_;
		NIM_BOOL T9_;
		T7_ = (NIM_BOOL)0;
		T7_ = isSymlink;
		if (!(T7_)) goto LA8_;
		T9_ = (NIM_BOOL)0;
		T9_ = ((options_p2 &((NU8)1<<((NU)((((tyEnum_CopyFlag__vcmZyPP9aRlb3v1x2Z89cLDg)2)))&7U)))!=0);
		if (T9_) goto LA10_;
		T9_ = NIM_FALSE;
LA10_: ;
		T7_ = T9_;
LA8_: ;
		if (!T7_) goto LA11_;
		nimln_(213);
		goto BeforeRet_;
	}
LA11_: ;
	nimln_(220);
	{
		NIM_BOOL T15_;
		NimStringV2 colontmpD_;
		T15_ = (NIM_BOOL)0;
		T15_ = isSymlink;
		if (!(T15_)) goto LA16_;
		T15_ = ((options_p2 &((NU8)1<<((NU)((((tyEnum_CopyFlag__vcmZyPP9aRlb3v1x2Z89cLDg)0)))&7U)))!=0);
LA16_: ;
		if (!T15_) goto LA17_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		nimln_(221);
		colontmpD_ = expandSymlink__stdZprivateZossymlinks_u19(source_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto LA19_;
		createSymlink__stdZprivateZossymlinks_u13(colontmpD_, dest_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto LA19_;
		{
			LA19_:;
		}
		{
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA13_;
LA17_: ;
	{
		FILE* d;
		FILE* s;
		void* buf;
		d = (FILE*)0;
		s = (FILE*)0;
		nimlf_(239, "D:\\nim\\lib\\std\\private\\osfiles.nim");
		{
			NIM_BOOL T25_;
			NI32 T28_;
			T25_ = (NIM_BOOL)0;
			T25_ = open__stdZsyncio_u399(&s, source_p0, ((tyEnum_FileMode__9atfYUlw9bQtL4ixYGhUZZfQ)0), ((NI)-1));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!!(T25_)) goto LA26_;
			T28_ = (NI32)0;
			T28_ = osLastError__stdZoserrors_u101();
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			raiseOSError__stdZoserrors_u98(T28_, source_p0);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
LA26_: ;
		nimln_(240);
		{
			NIM_BOOL T31_;
			NI32 T34_;
			T31_ = (NIM_BOOL)0;
			T31_ = open__stdZsyncio_u399(&d, dest_p1, ((tyEnum_FileMode__9atfYUlw9bQtL4ixYGhUZZfQ)1), ((NI)-1));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!!(T31_)) goto LA32_;
			nimln_(241);
			close__stdZsyncio_u250(s);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			nimln_(242);
			T34_ = (NI32)0;
			T34_ = osLastError__stdZoserrors_u101();
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			raiseOSError__stdZoserrors_u98(T34_, dest_p1);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
LA32_: ;
		nimln_(243);
		buf = allocImpl__system_u1736(((NI)8000));
		{
			nimln_(244);
			while (1) {
				NI bytesread;
				nimln_(245);
				bytesread = readBuffer__stdZsyncio_u155(s, buf, ((NI)8000));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimln_(246);
				{
					NI byteswritten;
					if (!(((NI)0) < bytesread)) goto LA39_;
					nimln_(247);
					if ((bytesread) < ((NI)0) || (bytesread) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI(bytesread, ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
					}
					byteswritten = writeBuffer__stdZsyncio_u186(d, buf, ((NI) (bytesread)));
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					nimln_(248);
					{
						NI32 T45_;
						if (!!((bytesread == byteswritten))) goto LA43_;
						nimln_(249);
						dealloc(buf);
						nimln_(250);
						close__stdZsyncio_u250(s);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						nimln_(251);
						close__stdZsyncio_u250(d);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						nimln_(252);
						T45_ = (NI32)0;
						T45_ = osLastError__stdZoserrors_u101();
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						raiseOSError__stdZoserrors_u98(T45_, dest_p1);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
LA43_: ;
				}
LA39_: ;
				nimln_(253);
				{
					if (!!((bytesread == ((NI)8000)))) goto LA48_;
					goto LA35;
				}
LA48_: ;
			}
		} LA35: ;
		nimln_(254);
		dealloc(buf);
		nimln_(255);
		close__stdZsyncio_u250(s);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(256);
		flushFile__stdZsyncio_u259(d);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(257);
		close__stdZsyncio_u250(d);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA13_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, nosremoveFile)(NimStringV2 file_p0) {
NIM_BOOL* nimErr_;
	nimfr_("removeFile", "D:\\nim\\lib\\std\\private\\osfiles.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(371, "D:\\nim\\lib\\std\\private\\osfiles.nim");
	{
		NIM_BOOL T3_;
		NI32 T6_;
		T3_ = (NIM_BOOL)0;
		T3_ = nostryRemoveFile(file_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		nimln_(372);
		T6_ = (NI32)0;
		T6_ = osLastError__stdZoserrors_u101();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseOSError__stdZoserrors_u98(T6_, file_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA4_: ;
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(void, popCurrentException)(void) {
	eqcopy___stdZassertions_u40(&currException__system_u3745, (*currException__system_u3745).up, NIM_FALSE);
}
N_LIB_PRIVATE N_NIMCALL(void, nosmoveFile)(NimStringV2 source_p0, NimStringV2 dest_p1) {
NIM_BOOL* nimErr_;
	nimfr_("moveFile", "D:\\nim\\lib\\std\\private\\osfiles.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(393, "D:\\nim\\lib\\std\\private\\osfiles.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = tryMoveFSObject__stdZprivateZoscommon_u101(source_p0, dest_p1, NIM_FALSE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		nimln_(398);
		noscopyFile(source_p0, dest_p1, 1);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(400);
		nosremoveFile(source_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		if (NIM_UNLIKELY(*nimErr_)) {
			LA6_:;
			{
				NIM_BOOL T10_;
				*nimErr_ = NIM_FALSE;
				nimln_(402);
				T10_ = (NIM_BOOL)0;
				T10_ = nostryRemoveFile(dest_p1);
				if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
				(void)(T10_);
				nimln_(403);
				reraiseException();
goto LA8_;
				popCurrentException();
				LA8_:;
			}
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA4_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZosfiles_u30)(tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ e_p0) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	switch (e_p0) {
	case ((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)0):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_5;
	}
	break;
	case ((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)1):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_7;
	}
	break;
	case ((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)2):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_9;
	}
	break;
	case ((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)3):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_11;
	}
	break;
	case ((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)4):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_13;
	}
	break;
	case ((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)5):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_15;
	}
	break;
	case ((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)6):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_17;
	}
	break;
	case ((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)7):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_19;
	}
	break;
	case ((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)8):
	{
		result = TM__CMIme9a8i2wZOUbxErcFpJA_21;
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, nossetFilePermissions)(NimStringV2 filename_p0, tySet_tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ permissions_p1, NIM_BOOL followSymlinks_p2) {
	mode_t p;
NIM_BOOL* nimErr_;
	nimfr_("setFilePermissions", "D:\\nim\\lib\\std\\private\\osfiles.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(115, "D:\\nim\\lib\\std\\private\\osfiles.nim");
	p = ((mode_t)0);
	nimln_(116);
	{
		if (!((permissions_p1 &((NU16)1<<((NU)((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)2)))&15U)))!=0)) goto LA3_;
		p = (NU32)(p | ((mode_t) (S_IRUSR)));
	}
LA3_: ;
	nimln_(117);
	{
		if (!((permissions_p1 &((NU16)1<<((NU)((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)1)))&15U)))!=0)) goto LA7_;
		p = (NU32)(p | ((mode_t) (S_IWUSR)));
	}
LA7_: ;
	nimln_(118);
	{
		if (!((permissions_p1 &((NU16)1<<((NU)((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)0)))&15U)))!=0)) goto LA11_;
		p = (NU32)(p | ((mode_t) (S_IXUSR)));
	}
LA11_: ;
	nimln_(120);
	{
		if (!((permissions_p1 &((NU16)1<<((NU)((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)5)))&15U)))!=0)) goto LA15_;
		p = (NU32)(p | ((mode_t) (S_IRGRP)));
	}
LA15_: ;
	nimln_(121);
	{
		if (!((permissions_p1 &((NU16)1<<((NU)((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)4)))&15U)))!=0)) goto LA19_;
		p = (NU32)(p | ((mode_t) (S_IWGRP)));
	}
LA19_: ;
	nimln_(122);
	{
		if (!((permissions_p1 &((NU16)1<<((NU)((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)3)))&15U)))!=0)) goto LA23_;
		p = (NU32)(p | ((mode_t) (S_IXGRP)));
	}
LA23_: ;
	nimln_(124);
	{
		if (!((permissions_p1 &((NU16)1<<((NU)((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)8)))&15U)))!=0)) goto LA27_;
		p = (NU32)(p | ((mode_t) (S_IROTH)));
	}
LA27_: ;
	nimln_(125);
	{
		if (!((permissions_p1 &((NU16)1<<((NU)((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)7)))&15U)))!=0)) goto LA31_;
		p = (NU32)(p | ((mode_t) (S_IWOTH)));
	}
LA31_: ;
	nimln_(126);
	{
		if (!((permissions_p1 &((NU16)1<<((NU)((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)6)))&15U)))!=0)) goto LA35_;
		p = (NU32)(p | ((mode_t) (S_IXOTH)));
	}
LA35_: ;
	nimln_(128);
	{
		NIM_BOOL T39_;
		T39_ = (NIM_BOOL)0;
		T39_ = !(followSymlinks_p2);
		if (!(T39_)) goto LA40_;
		T39_ = nossymlinkExists(filename_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
LA40_: ;
		if (!T39_) goto LA41_;
	}
	goto LA37_;
LA41_: ;
	{
		nimln_(133);
		{
			int T46_;
			NimStringV2 colontmpD_;
			NI32 T50_;
			tyTuple__QaGLhhq9b9bwzy9bgqusmB4SQ T51_;
			T46_ = (int)0;
			T46_ = chmod(nimToCStringConv(filename_p0), ((mode_t) (p)));
			if (!!((T46_ == ((NI32)0)))) goto LA47_;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			nimln_(134);
			T50_ = (NI32)0;
			T50_ = osLastError__stdZoserrors_u101();
			if (NIM_UNLIKELY(*nimErr_)) goto LA49_;
			T51_.Field0 = filename_p0;
			T51_.Field1 = permissions_p1;
			colontmpD_ = dollar___stdZprivateZosfiles_u131(T51_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA49_;
			raiseOSError__stdZoserrors_u98(T50_, colontmpD_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA49_;
			{
				LA49_:;
			}
			{
				nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
				eqdestroy___stdZassertions_u16((&colontmpD_));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
LA47_: ;
	}
LA37_: ;
	}
BeforeRet_: ;
	popFrame();
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
N_LIB_PRIVATE N_NIMCALL(tySet_tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ, nosgetFilePermissions)(NimStringV2 filename_p0) {
	tySet_tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ result;
	struct stat a;
NIM_BOOL* nimErr_;
	nimfr_("getFilePermissions", "D:\\nim\\lib\\std\\private\\osfiles.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tySet_tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ));
	nimZeroMem((void*)(&a), sizeof(struct stat));
	nimlf_(73, "D:\\nim\\lib\\std\\private\\osfiles.nim");
	{
		int T3_;
		NI32 T6_;
		T3_ = (int)0;
		T3_ = stat(nimToCStringConv(filename_p0), (&a));
		if (!(T3_ < ((NI32)0))) goto LA4_;
		T6_ = (NI32)0;
		T6_ = osLastError__stdZoserrors_u101();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseOSError__stdZoserrors_u98(T6_, filename_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA4_: ;
	nimln_(74);
	result = 0;
	nimln_(75);
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IRUSR))) == ((mode_t)0)))) goto LA9_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)2))) & 15);
	}
LA9_: ;
	nimln_(76);
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IWUSR))) == ((mode_t)0)))) goto LA13_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)1))) & 15);
	}
LA13_: ;
	nimln_(77);
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IXUSR))) == ((mode_t)0)))) goto LA17_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)0))) & 15);
	}
LA17_: ;
	nimln_(79);
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IRGRP))) == ((mode_t)0)))) goto LA21_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)5))) & 15);
	}
LA21_: ;
	nimln_(80);
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IWGRP))) == ((mode_t)0)))) goto LA25_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)4))) & 15);
	}
LA25_: ;
	nimln_(81);
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IXGRP))) == ((mode_t)0)))) goto LA29_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)3))) & 15);
	}
LA29_: ;
	nimln_(83);
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IROTH))) == ((mode_t)0)))) goto LA33_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)8))) & 15);
	}
LA33_: ;
	nimln_(84);
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IWOTH))) == ((mode_t)0)))) goto LA37_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)7))) & 15);
	}
LA37_: ;
	nimln_(85);
	{
		if (!!(((NU32)(a.st_mode & ((mode_t) (S_IXOTH))) == ((mode_t)0)))) goto LA41_;
		result |= ((NU16)1)<<(((((tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ)6))) & 15);
	}
LA41_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, copyFileWithPermissions__stdZprivateZosfiles_u351)(NimStringV2 source_p0, NimStringV2 dest_p1, NIM_BOOL ignorePermissionErrors_p2, tySet_tyEnum_CopyFlag__vcmZyPP9aRlb3v1x2Z89cLDg options_p3) {
	tySet_tyEnum_FilePermission__mlA0j65ivGnpzcSQw2L7KQ T2_;
NIM_BOOL* nimErr_;
	nimfr_("copyFileWithPermissions", "D:\\nim\\lib\\std\\private\\osfiles.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(305, "D:\\nim\\lib\\std\\private\\osfiles.nim");
	noscopyFile(source_p0, dest_p1, options_p3);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(308);
	T2_ = nosgetFilePermissions(source_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(309);
	nimln_(308);
	nossetFilePermissions(dest_p1, T2_, ((options_p3 &((NU8)1<<((NU)((((tyEnum_CopyFlag__vcmZyPP9aRlb3v1x2Z89cLDg)1)))&7U)))!=0));
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	if (NIM_UNLIKELY(*nimErr_)) {
		LA1_:;
		{
			*nimErr_ = NIM_FALSE;
			nimln_(311);
			{
				if (!!(ignorePermissionErrors_p2)) goto LA8_;
				nimln_(312);
				reraiseException();
goto LA4_;
			}
LA8_: ;
			popCurrentException();
			LA4_:;
		}
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
