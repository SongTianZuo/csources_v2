/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdlib.h>
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
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
typedef struct tySequence__4eQHGndY6XBYpFOH09apV8Q tySequence__4eQHGndY6XBYpFOH09apV8Q;
typedef struct tySequence__4eQHGndY6XBYpFOH09apV8Q_Content tySequence__4eQHGndY6XBYpFOH09apV8Q_Content;
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
struct tySequence__4eQHGndY6XBYpFOH09apV8Q {
  NI len; tySequence__4eQHGndY6XBYpFOH09apV8Q_Content* p;
};


#ifndef tySequence__4eQHGndY6XBYpFOH09apV8Q_Content_PP
#define tySequence__4eQHGndY6XBYpFOH09apV8Q_Content_PP
struct tySequence__4eQHGndY6XBYpFOH09apV8Q_Content { NI cap; tyTuple__UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NCSTRING, getEnvImpl__stdZenvvars_u12)(NCSTRING env_p0);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4312)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s_p0);
static N_INLINE(NIM_BOOL, eqeq___system_u7871)(NCSTRING x_p0, NCSTRING y_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_u98)(NI32 errorCode_p0, NimStringV2 additionalInfo_p1);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_u101)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZoscommon_u108)(tyTuple__UV3llMMYFckfui8YMBuUZA* x_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p_p0, NI align_p1);
N_LIB_PRIVATE N_NIMCALL(void, setLen__stdZenvvars_u101)(tySequence__4eQHGndY6XBYpFOH09apV8Q* s_p0, NI newlen_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZenvvars_u83)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest_p0);
extern NCSTRING* environ;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern NIM_BOOL nimInErrorMode__system_u4115;
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
N_LIB_PRIVATE N_NIMCALL(NCSTRING, getEnvImpl__stdZenvvars_u12)(NCSTRING env_p0) {
	NCSTRING result;
	nimfr_("getEnvImpl", "D:\\nim\\lib\\std\\envvars.nim");
	result = (NCSTRING)0;
	nimlf_(78, "D:\\nim\\lib\\std\\envvars.nim");
	result = getenv(env_p0);
	popFrame();
	return result;
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
static N_INLINE(NIM_BOOL, eqeq___system_u7871)(NCSTRING x_p0, NCSTRING y_p1) {
	NIM_BOOL result;
	nimfr_("==", "D:\\nim\\lib\\system.nim");
	result = (NIM_BOOL)0;
	nimlf_(2541, "D:\\nim\\lib\\system.nim");
	{
		if (!(((void*) (x_p0)) == ((void*) (y_p1)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
LA3_: ;
	{
		NIM_BOOL T6_;
		nimln_(2542);
		T6_ = (NIM_BOOL)0;
		T6_ = (x_p0 == 0);
		if (T6_) goto LA7_;
		T6_ = (y_p1 == 0);
LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
LA8_: ;
	{
		int T11_;
		nimln_(2543);
		T11_ = (int)0;
		T11_ = strcmp(x_p0, y_p1);
		result = (T11_ == ((NI32)0));
	}
LA1_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4115);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getEnv__stdZenvvars_u15)(NimStringV2 key_p0, NimStringV2 default_p1) {
	NimStringV2 result;
	NCSTRING env;
NIM_BOOL* nimErr_;
	nimfr_("getEnv", "D:\\nim\\lib\\std\\envvars.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(96, "D:\\nim\\lib\\std\\envvars.nim");
	env = getEnvImpl__stdZenvvars_u12(nimToCStringConv(key_p0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(97);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = eqeq___system_u7871(env, ((NCSTRING) NIM_NIL));
		if (!T3_) goto LA4_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqcopy___stdZassertions_u19((&result), default_p1);
	}
	goto LA1_;
LA4_: ;
	{
		nimlf_(100, "D:\\nim\\lib\\std\\envvars.nim");
		result = cstrToNimstr(env);
	}
LA1_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, putEnv__stdZenvvars_u23)(NimStringV2 key_p0, NimStringV2 val_p1) {
NIM_BOOL* nimErr_;
	nimfr_("putEnv", "D:\\nim\\lib\\std\\envvars.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(131, "D:\\nim\\lib\\std\\envvars.nim");
	{
		int T3_;
		NimStringV2 colontmpD_;
		NI32 T7_;
		tyTuple__UV3llMMYFckfui8YMBuUZA T8_;
		T3_ = (int)0;
		T3_ = setenv(nimToCStringConv(key_p0), nimToCStringConv(val_p1), ((NI32)1));
		if (!!((T3_ == ((NI32)0)))) goto LA4_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		nimln_(132);
		T7_ = (NI32)0;
		T7_ = osLastError__stdZoserrors_u101();
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		T8_.Field0 = key_p0;
		T8_.Field1 = val_p1;
		colontmpD_ = dollar___stdZprivateZoscommon_u108((&T8_));
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, existsEnv__stdZenvvars_u20)(NimStringV2 key_p0) {
	NIM_BOOL result;
	NCSTRING T1_;
	NIM_BOOL T2_;
NIM_BOOL* nimErr_;
	nimfr_("existsEnv", "D:\\nim\\lib\\std\\envvars.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimlf_(114, "D:\\nim\\lib\\std\\envvars.nim");
	T1_ = (NCSTRING)0;
	T1_ = getEnvImpl__stdZenvvars_u12(nimToCStringConv(key_p0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NIM_BOOL)0;
	T2_ = eqeq___system_u7871(T1_, ((NCSTRING) NIM_NIL));
	result = !(T2_);
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, delEnv__stdZenvvars_u29)(NimStringV2 key_p0) {
NIM_BOOL* nimErr_;
	nimfr_("delEnv", "D:\\nim\\lib\\std\\envvars.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(155, "D:\\nim\\lib\\std\\envvars.nim");
	{
		int T3_;
		NI32 T6_;
		T3_ = (int)0;
		T3_ = unsetenv(nimToCStringConv(key_p0));
		if (!!((T3_ == ((NI32)0)))) goto LA4_;
		nimln_(143);
		T6_ = (NI32)0;
		T6_ = osLastError__stdZoserrors_u101();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(155);
		raiseOSError__stdZoserrors_u98(T6_, key_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA4_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZenvvars_u83)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest_p0) {
	NI colontmp_;
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T3_;
			T3_ = (*dest_p0).len;
			if (!(colontmp_ < T3_)) goto LA2;
			eqdestroy___stdZassertions_u16((&(*dest_p0).p->data[colontmp_].Field0));
			eqdestroy___stdZassertions_u16((&(*dest_p0).p->data[colontmp_].Field1));
			colontmp_ += ((NI)1);
		} LA2: ;
	}
	if ((*dest_p0).p && !((*dest_p0).p->cap & NIM_STRLIT_FLAG)) {
 alignedDealloc((*dest_p0).p, NIM_ALIGNOF(tyTuple__UV3llMMYFckfui8YMBuUZA));
}
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZenvvars_u92)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest_p0, void* env_p1) {
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZenvvars_u86)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest_p0, tySequence__4eQHGndY6XBYpFOH09apV8Q src_p1) {
	NI T1_;
	NI colontmp_;
	T1_ = src_p1.len;
	setLen__stdZenvvars_u101((&(*dest_p0)), T1_);
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T4_;
			T4_ = (*dest_p0).len;
			if (!(colontmp_ < T4_)) goto LA3;
			eqcopy___stdZassertions_u19((&(*dest_p0).p->data[colontmp_].Field0), src_p1.p->data[colontmp_].Field0);
			eqcopy___stdZassertions_u19((&(*dest_p0).p->data[colontmp_].Field1), src_p1.p->data[colontmp_].Field1);
			colontmp_ += ((NI)1);
		} LA3: ;
	}
}
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___stdZenvvars_u80)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest_p0) {
	(*dest_p0).len = 0; (*dest_p0).p = NIM_NIL;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZenvvars_u89)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest_p0, tySequence__4eQHGndY6XBYpFOH09apV8Q src_p1) {
	if ((*dest_p0).p != src_p1.p) {	eqdestroy___stdZenvvars_u83(dest_p0);
	}
(*dest_p0).len = src_p1.len; (*dest_p0).p = src_p1.p;
}
