/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64
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
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
};
N_LIB_PRIVATE N_NIMCALL(int, symlink__posixZposix_u1538)(NCSTRING a1_p0, NCSTRING a2_p1);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_u98)(NI32 errorCode_p0, NimStringV2 additionalInfo_p1);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_u101)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZoscommon_u109)(tyTuple__UV3llMMYFckfui8YMBuUZA* x_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4289)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
extern NIM_BOOL nimInErrorMode__system_u4092;
extern TFrame* framePtr__system_u3738;
extern TFrame* framePtr__system_u3738;
extern TFrame* framePtr__system_u3738;
extern TFrame* framePtr__system_u3738;
extern TFrame* framePtr__system_u3738;
extern TFrame* framePtr__system_u3738;
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4092);
	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s_p0) {
	{
		if (!(framePtr__system_u3738 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s_p0).calldepth = ((NI16)0);
	}
	goto LA1_;
LA3_: ;
	{
		(*s_p0).calldepth = (NI16)((*framePtr__system_u3738).calldepth + ((NI16)1));
	}
LA1_: ;
	(*s_p0).prev = framePtr__system_u3738;
	framePtr__system_u3738 = s_p0;
	{
		if (!((*s_p0).calldepth == ((NI16)2000))) goto LA8_;
		callDepthLimitReached__system_u4289();
	}
LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_u3738 = (*framePtr__system_u3738).prev;
}
N_LIB_PRIVATE N_NIMCALL(void, createSymlink__stdZprivateZossymlinks_u13)(NimStringV2 src_p0, NimStringV2 dest_p1) {
NIM_BOOL* nimErr_;
	nimfr_("createSymlink", "D:\\nim\\lib\\std\\private\\ossymlinks.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(56, "D:\\nim\\lib\\std\\private\\ossymlinks.nim");
	{
		int T3_;
		NimStringV2 colontmpD_;
		NI32 T7_;
		tyTuple__UV3llMMYFckfui8YMBuUZA T8_;
		T3_ = (int)0;
		T3_ = symlink__posixZposix_u1538(nimToCStringConv(src_p0), nimToCStringConv(dest_p1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!((T3_ == ((NI32)0)))) goto LA4_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		nimln_(57);
		T7_ = (NI32)0;
		T7_ = osLastError__stdZoserrors_u101();
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		T8_.Field0 = src_p0;
		T8_.Field1 = dest_p1;
		colontmpD_ = dollar___stdZprivateZoscommon_u109((&T8_));
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		raiseOSError__stdZoserrors_u98(T7_, colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			LA6_:;
		}
		{
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA4_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, expandSymlink__stdZprivateZossymlinks_u19)(NimStringV2 symlinkPath_p0) {
	NimStringV2 result;
	nimfr_("expandSymlink", "D:\\nim\\lib\\std\\private\\ossymlinks.nim");
	result.len = 0; result.p = NIM_NIL;
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqcopy___stdZassertions_u19((&result), symlinkPath_p0);
	popFrame();
	return result;
}
