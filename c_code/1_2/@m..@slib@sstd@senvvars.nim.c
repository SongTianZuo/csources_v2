/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdlib.h>
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
typedef struct tyObject_OSError__364R2OEHwjKXXXZy8WY36g tyObject_OSError__364R2OEHwjKXXXZy8WY36g;
typedef struct tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ tySequence__OC4OxQhfzCBuUQxMi5llBQ;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
typedef struct tySequence__4eQHGndY6XBYpFOH09apV8Q tySequence__4eQHGndY6XBYpFOH09apV8Q;
typedef struct tySequence__4eQHGndY6XBYpFOH09apV8Q_Content tySequence__4eQHGndY6XBYpFOH09apV8Q_Content;
typedef struct tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw;
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
struct tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA {
  Exception Sup;
};
struct tyObject_OSError__364R2OEHwjKXXXZy8WY36g {
  tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA Sup;
	NI32 errorCode;
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
};
struct tySequence__4eQHGndY6XBYpFOH09apV8Q {
  NI len; tySequence__4eQHGndY6XBYpFOH09apV8Q_Content* p;
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

      

#ifndef tySequence__4eQHGndY6XBYpFOH09apV8Q_Content_PP
#define tySequence__4eQHGndY6XBYpFOH09apV8Q_Content_PP
struct tySequence__4eQHGndY6XBYpFOH09apV8Q_Content { NI cap; tyTuple__UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NI16*, getEnvImpl__stdZenvvars_u12)(NCSTRING env_p0);
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NI16*, toWideCString__stdZwidestrs_u45)(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ x_p0);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ, newWideCString__stdZwidestrs_u292)(NCSTRING s_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZwidestrs_u6)(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ* a_p0);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZwidestrs_u372)(NI16* s_p0);
static N_INLINE(NIM_BOOL, contains__stdZenvvars_u51)(NIM_CHAR* a_p0, NI a_p0Len_0, NIM_CHAR item_p1);
static N_INLINE(NI, find__stdZenvvars_u56)(NIM_CHAR* a_p0, NI a_p0Len_0, NIM_CHAR item_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size_p0, NI alignment_p1);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZoscommon_u75)(tyTuple__UV3llMMYFckfui8YMBuUZA* x_p0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space_p0);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e_p0, NCSTRING ename_p1, NCSTRING procname_p2, NCSTRING filename_p3, NI line_p4);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(int, setEnvImpl__stdZprivateZwin95setenv_u18)(NimStringV2 name_p0, NimStringV2 value_p1, int overwrite_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_u102)(NI32 errorCode_p0, NimStringV2 additionalInfo_p1);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_u105)(void);
N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p_p0, NI align_p1);
N_LIB_PRIVATE N_NIMCALL(void, setLen__stdZenvvars_u168)(tySequence__4eQHGndY6XBYpFOH09apV8Q* s_p0, NI newlen_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZenvvars_u150)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest_p0);
extern TNimTypeV2 NTIv2__364R2OEHwjKXXXZy8WY36g_;
static const struct {
  NI cap; NIM_CHAR data[18+1];
} TM__HBYSwmWBoRvKHp5bIbN68w_4 = { 18 | NIM_STRLIT_FLAG, "invalid key, got: " };
static const NimStringV2 TM__HBYSwmWBoRvKHp5bIbN68w_5 = {18, (NimStrPayload*)&TM__HBYSwmWBoRvKHp5bIbN68w_4};
static const NimStringV2 TM__HBYSwmWBoRvKHp5bIbN68w_8 = {18, (NimStrPayload*)&TM__HBYSwmWBoRvKHp5bIbN68w_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__HBYSwmWBoRvKHp5bIbN68w_9 = { 1 | NIM_STRLIT_FLAG, "=" };
static const NimStringV2 TM__HBYSwmWBoRvKHp5bIbN68w_10 = {1, (NimStrPayload*)&TM__HBYSwmWBoRvKHp5bIbN68w_9};
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
N_LIB_PRIVATE N_NIMCALL(NI16*, getEnvImpl__stdZenvvars_u12)(NCSTRING env_p0) {
	NI16* result;
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ colontmpD_;
	NI16* r;
	wchar_t* T1_;
NIM_BOOL* nimErr_;
	nimfr_("getEnvImpl", "D:\\nim\\lib\\std\\envvars.nim");
{nimErr_ = nimErrorFlag();
	result = (NI16*)0;
	nimZeroMem((void*)(&colontmpD_), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	nimlf_(70, "D:\\nim\\lib\\std\\envvars.nim");
	nimln_(71);
	colontmpD_ = newWideCString__stdZwidestrs_u292(env_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	r = toWideCString__stdZwidestrs_u45(colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(72);
	T1_ = (wchar_t*)0;
	T1_ = _wgetenv(((wchar_t*) (r)));
	result = ((NI16*) (T1_));
	nimlf_(28, "D:\\nim\\lib\\std\\widestrs.nim");
	eqdestroy___stdZwidestrs_u6((&colontmpD_));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getEnv__stdZenvvars_u32)(NimStringV2 key_p0, NimStringV2 default_p1) {
	NimStringV2 result;
	NI16* env;
NIM_BOOL* nimErr_;
	nimfr_("getEnv", "D:\\nim\\lib\\std\\envvars.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(96, "D:\\nim\\lib\\std\\envvars.nim");
	env = getEnvImpl__stdZenvvars_u12(nimToCStringConv(key_p0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(97);
	{
		if (!(env == ((NI16*) NIM_NIL))) goto LA3_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqcopy___stdZassertions_u19((&result), default_p1);
	}
	goto LA1_;
LA3_: ;
	{
		nimlf_(100, "D:\\nim\\lib\\std\\envvars.nim");
		result = dollar___stdZwidestrs_u372(env);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA1_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NI, find__stdZenvvars_u56)(NIM_CHAR* a_p0, NI a_p0Len_0, NIM_CHAR item_p1) {
	NI result;
	nimfr_("find", "D:\\nim\\lib\\system.nim");
{	result = (NI)0;
	nimlf_(1623, "D:\\nim\\lib\\system.nim");
	result = ((NI)0);
	{
		NIM_CHAR i;
		NI i_2;
		i = (NIM_CHAR)0;
		nimlf_(23, "D:\\nim\\lib\\system\\iterators.nim");
		i_2 = ((NI)0);
		{
			nimln_(24);
			while (1) {
				NI TM__HBYSwmWBoRvKHp5bIbN68w_2;
				NI TM__HBYSwmWBoRvKHp5bIbN68w_3;
				if (!(i_2 < a_p0Len_0)) goto LA3;
				nimlf_(1624, "D:\\nim\\lib\\system.nim");
				if (i_2 < 0 || i_2 >= a_p0Len_0){ raiseIndexError2(i_2,a_p0Len_0-1); goto BeforeRet_;
				}
				i = a_p0[i_2];
				{
					nimln_(1625);
					if (!((NU8)(i) == (NU8)(item_p1))) goto LA6_;
					goto BeforeRet_;
				}
LA6_: ;
				nimln_(1624);
				if (nimAddInt(result, ((NI)1), &TM__HBYSwmWBoRvKHp5bIbN68w_2)) { raiseOverflow(); goto BeforeRet_;
				};
				result = (NI)(TM__HBYSwmWBoRvKHp5bIbN68w_2);
				nimlf_(26, "D:\\nim\\lib\\system\\iterators.nim");
				if (nimAddInt(i_2, ((NI)1), &TM__HBYSwmWBoRvKHp5bIbN68w_3)) { raiseOverflow(); goto BeforeRet_;
				};
				i_2 = (NI)(TM__HBYSwmWBoRvKHp5bIbN68w_3);
			} LA3: ;
		}
	}
	nimlf_(1627, "D:\\nim\\lib\\system.nim");
	result = ((NI)-1);
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, contains__stdZenvvars_u51)(NIM_CHAR* a_p0, NI a_p0Len_0, NIM_CHAR item_p1) {
	NIM_BOOL result;
	NI T1_;
	nimfr_("contains", "D:\\nim\\lib\\system.nim");
{	result = (NIM_BOOL)0;
	nimlf_(1641, "D:\\nim\\lib\\system.nim");
	nimln_(1629);
	nimln_(1641);
	T1_ = (NI)0;
	T1_ = find__stdZenvvars_u56(a_p0, a_p0Len_0, item_p1);
	result = (((NI)0) <= T1_);
	goto BeforeRet_;
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
		NI TM__HBYSwmWBoRvKHp5bIbN68w_6;
		NI TM__HBYSwmWBoRvKHp5bIbN68w_7;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__HBYSwmWBoRvKHp5bIbN68w_6)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__HBYSwmWBoRvKHp5bIbN68w_6)) < ((NI)0) || ((NI)(TM__HBYSwmWBoRvKHp5bIbN68w_6)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__HBYSwmWBoRvKHp5bIbN68w_6), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__HBYSwmWBoRvKHp5bIbN68w_6))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__HBYSwmWBoRvKHp5bIbN68w_7)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__HBYSwmWBoRvKHp5bIbN68w_7);
	}
LA3_: ;
	}
BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, putEnv__stdZenvvars_u48)(NimStringV2 key_p0, NimStringV2 val_p1) {
NIM_BOOL* nimErr_;
	nimfr_("putEnv", "D:\\nim\\lib\\std\\envvars.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(126, "D:\\nim\\lib\\std\\envvars.nim");
	{
		NIM_BOOL T3_;
		NimStringV2 colontmpD_;
		tyObject_OSError__364R2OEHwjKXXXZy8WY36g* T8_;
		NimStringV2 T9_;
		tyTuple__UV3llMMYFckfui8YMBuUZA T10_;
		T3_ = (NIM_BOOL)0;
		T3_ = (key_p0.len == ((NI)0));
		if (T3_) goto LA4_;
		T3_ = contains__stdZenvvars_u51(((key_p0).p) ? (key_p0.p->data) : NIM_NIL, key_p0.len, 61);
LA4_: ;
		if (!T3_) goto LA5_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		T8_ = NIM_NIL;
		T8_ = (tyObject_OSError__364R2OEHwjKXXXZy8WY36g*) nimNewObj(sizeof(tyObject_OSError__364R2OEHwjKXXXZy8WY36g), NIM_ALIGNOF(tyObject_OSError__364R2OEHwjKXXXZy8WY36g));
		(*T8_).Sup.Sup.Sup.m_type = (&NTIv2__364R2OEHwjKXXXZy8WY36g_);
		(*T8_).Sup.Sup.name = "OSError";
		nimln_(127);
		T9_.len = 0; T9_.p = NIM_NIL;
		T10_.Field0 = key_p0;
		T10_.Field1 = val_p1;
		colontmpD_ = dollar___stdZprivateZoscommon_u75((&T10_));
		if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		T9_ = rawNewString(colontmpD_.len + 18);
appendString((&T9_), TM__HBYSwmWBoRvKHp5bIbN68w_5);
appendString((&T9_), colontmpD_);
		(*T8_).Sup.Sup.message = T9_;
		(*T8_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T8_, "OSError", "putEnv", "D:\\nim\\lib\\std\\envvars.nim", 127);
goto LA7_;
		{
			LA7_:;
		}
		{
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA5_: ;
	nimlf_(128, "D:\\nim\\lib\\std\\envvars.nim");
	{
		int T15_;
		NimStringV2 colontmpD__2;
		NI32 T19_;
		tyTuple__UV3llMMYFckfui8YMBuUZA T20_;
		T15_ = (int)0;
		T15_ = setEnvImpl__stdZprivateZwin95setenv_u18(key_p0, val_p1, ((NI32)1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!((T15_ == ((NI32)0)))) goto LA16_;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		nimln_(129);
		T19_ = (NI32)0;
		T19_ = osLastError__stdZoserrors_u105();
		if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
		T20_.Field0 = key_p0;
		T20_.Field1 = val_p1;
		colontmpD__2 = dollar___stdZprivateZoscommon_u75((&T20_));
		if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
		raiseOSError__stdZoserrors_u102(T19_, colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
		{
			LA18_:;
		}
		{
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__2));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA16_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, existsEnv__stdZenvvars_u41)(NimStringV2 key_p0) {
	NIM_BOOL result;
	NI16* T1_;
NIM_BOOL* nimErr_;
	nimfr_("existsEnv", "D:\\nim\\lib\\std\\envvars.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimlf_(114, "D:\\nim\\lib\\std\\envvars.nim");
	T1_ = (NI16*)0;
	T1_ = getEnvImpl__stdZenvvars_u12(nimToCStringConv(key_p0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = !((T1_ == ((NI16*) NIM_NIL)));
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, delEnv__stdZenvvars_u87)(NimStringV2 key_p0) {
	NimStringV2 envToDel;
	NimStringV2 T10_;
NIM_BOOL* nimErr_;
	nimfr_("delEnv", "D:\\nim\\lib\\std\\envvars.nim");
{nimErr_ = nimErrorFlag();
	envToDel.len = 0; envToDel.p = NIM_NIL;
	nimlf_(150, "D:\\nim\\lib\\std\\envvars.nim");
	{
		NIM_BOOL T4_;
		tyObject_OSError__364R2OEHwjKXXXZy8WY36g* T8_;
		NimStringV2 T9_;
		T4_ = (NIM_BOOL)0;
		T4_ = (key_p0.len == ((NI)0));
		if (T4_) goto LA5_;
		T4_ = contains__stdZenvvars_u51(((key_p0).p) ? (key_p0.p->data) : NIM_NIL, key_p0.len, 61);
LA5_: ;
		if (!T4_) goto LA6_;
		T8_ = NIM_NIL;
		T8_ = (tyObject_OSError__364R2OEHwjKXXXZy8WY36g*) nimNewObj(sizeof(tyObject_OSError__364R2OEHwjKXXXZy8WY36g), NIM_ALIGNOF(tyObject_OSError__364R2OEHwjKXXXZy8WY36g));
		(*T8_).Sup.Sup.Sup.m_type = (&NTIv2__364R2OEHwjKXXXZy8WY36g_);
		(*T8_).Sup.Sup.name = "OSError";
		nimln_(151);
		T9_.len = 0; T9_.p = NIM_NIL;
		T9_ = rawNewString(key_p0.len + 18);
appendString((&T9_), TM__HBYSwmWBoRvKHp5bIbN68w_8);
appendString((&T9_), key_p0);
		(*T8_).Sup.Sup.message = T9_;
		(*T8_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		raiseExceptionEx((Exception*)T8_, "OSError", "delEnv", "D:\\nim\\lib\\std\\envvars.nim", 151);
goto LA1_;
	}
LA6_: ;
	nimln_(152);
	T10_.len = 0; T10_.p = NIM_NIL;
	T10_ = rawNewString(key_p0.len + 1);
appendString((&T10_), key_p0);
appendString((&T10_), TM__HBYSwmWBoRvKHp5bIbN68w_10);
	envToDel = T10_;
	nimln_(153);
	{
		int T13_;
		NI32 T16_;
		T13_ = (int)0;
		T13_ = _putenv(nimToCStringConv(envToDel));
		if (!!((T13_ == ((NI32)0)))) goto LA14_;
		nimln_(143);
		T16_ = (NI32)0;
		T16_ = osLastError__stdZoserrors_u105();
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		nimln_(153);
		raiseOSError__stdZoserrors_u102(T16_, key_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA14_: ;
	{
		LA1_:;
	}
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&envToDel));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZenvvars_u150)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest_p0) {
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
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZenvvars_u159)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest_p0, void* env_p1) {
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZenvvars_u153)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest_p0, tySequence__4eQHGndY6XBYpFOH09apV8Q src_p1) {
	NI T1_;
	NI colontmp_;
	T1_ = src_p1.len;
	setLen__stdZenvvars_u168((&(*dest_p0)), T1_);
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
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___stdZenvvars_u147)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest_p0) {
	(*dest_p0).len = 0; (*dest_p0).p = NIM_NIL;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZenvvars_u156)(tySequence__4eQHGndY6XBYpFOH09apV8Q* dest_p0, tySequence__4eQHGndY6XBYpFOH09apV8Q src_p1) {
	if ((*dest_p0).p != src_p1.p) {	eqdestroy___stdZenvvars_u150(dest_p0);
	}
(*dest_p0).len = src_p1.len; (*dest_p0).p = src_p1.p;
}
