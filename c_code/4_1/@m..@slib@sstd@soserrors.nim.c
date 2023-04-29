/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <errno.h>
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
typedef struct tyObject_OSError__364R2OEHwjKXXXZy8WY36g tyObject_OSError__364R2OEHwjKXXXZy8WY36g;
typedef struct tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ tySequence__OC4OxQhfzCBuUQxMi5llBQ;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content;
typedef struct tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw;
typedef struct tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
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
struct tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw {
	NI rc;
	NI rootIdx;
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

      N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__364R2OEHwjKXXXZy8WY36g*, newOSError__stdZoserrors_u44)(NI32 errorCode_p0, NimStringV2 additionalInfo_p1);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size_p0, NI alignment_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, osErrorMsg__stdZoserrors_u10)(NI32 errorCode_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_u22)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str_p0);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4324)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_CHAR*, X5BX5D___system_u7396)(NimStringV2* s_p0, NI i_p1);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s_p0);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_u2328)(NimStringV2* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e_p0, NCSTRING ename_p1, NCSTRING procname_p2, NCSTRING filename_p3, NI line_p4);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p_p0);
static N_INLINE(NI, minuspercent___system_u790)(NI x_p0, NI y_p1);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_u3281)(NIM_BOOL isDestroyAction_p0, tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw* s_p1, TNimTypeV2* desc_p2);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p_p0);
extern TNimTypeV2 NTIv2__364R2OEHwjKXXXZy8WY36g_;
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__1nRK0qvLEFLABF9aZnNtAXQ_2 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__1nRK0qvLEFLABF9aZnNtAXQ_3 = {0, (NimStrPayload*)&TM__1nRK0qvLEFLABF9aZnNtAXQ_2};
static const struct {
  NI cap; NIM_CHAR data[17+1];
} TM__1nRK0qvLEFLABF9aZnNtAXQ_7 = { 17 | NIM_STRLIT_FLAG, "Additional info: " };
static const NimStringV2 TM__1nRK0qvLEFLABF9aZnNtAXQ_8 = {17, (NimStrPayload*)&TM__1nRK0qvLEFLABF9aZnNtAXQ_7};
static const struct {
  NI cap; NIM_CHAR data[16+1];
} TM__1nRK0qvLEFLABF9aZnNtAXQ_11 = { 16 | NIM_STRLIT_FLAG, "unknown OS error" };
static const NimStringV2 TM__1nRK0qvLEFLABF9aZnNtAXQ_12 = {16, (NimStrPayload*)&TM__1nRK0qvLEFLABF9aZnNtAXQ_11};
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern NIM_BOOL nimInErrorMode__system_u4127;
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_u101)(void) {
	NI32 result;
	result = (NI32)0;
	result = errno;
	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s_p0) {
	{
		if (!(framePtr__system_u3773 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s_p0).calldepth = ((NI16)0);
	}
	goto LA1_;
LA3_: ;
	{
		(*s_p0).calldepth = (NI16)((*framePtr__system_u3773).calldepth + ((NI16)1));
	}
LA1_: ;
	(*s_p0).prev = framePtr__system_u3773;
	framePtr__system_u3773 = s_p0;
	{
		if (!((*s_p0).calldepth == ((NI16)2000))) goto LA8_;
		callDepthLimitReached__system_u4324();
	}
LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_u3773 = (*framePtr__system_u3773).prev;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, osErrorMsg__stdZoserrors_u10)(NI32 errorCode_p0) {
	NimStringV2 result;
	nimfr_("osErrorMsg", "D:\\nim\\lib\\std\\oserrors.nim");
	result.len = 0; result.p = NIM_NIL;
	nimlf_(47, "D:\\nim\\lib\\std\\oserrors.nim");
	result = TM__1nRK0qvLEFLABF9aZnNtAXQ_3;
	nimln_(58);
	{
		NCSTRING T5_;
		NimStringV2 T6_;
		if (!!((errorCode_p0 == ((NI32)0)))) goto LA3_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		nimlf_(59, "D:\\nim\\lib\\std\\oserrors.nim");
		T5_ = (NCSTRING)0;
		T5_ = strerror(errorCode_p0);
		T6_.len = 0; T6_.p = NIM_NIL;
		T6_ = cstrToNimstr(T5_);
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqsink___stdZassertions_u22((&result), T6_);
	}
LA3_: ;
	popFrame();
	return result;
}
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !(((*s_p0).p == ((NimStrPayload*) NIM_NIL)));
		if (!(T3_)) goto LA4_;
		T3_ = ((NI)((*(*s_p0).p).cap & ((NI)1073741824)) == ((NI)1073741824));
LA4_: ;
		if (!T3_) goto LA5_;
		nimPrepareStrMutationImpl__system_u2328(s_p0);
	}
LA5_: ;
}
static N_INLINE(NIM_CHAR*, X5BX5D___system_u7396)(NimStringV2* s_p0, NI i_p1) {
	NIM_CHAR* result;
	NI TM__1nRK0qvLEFLABF9aZnNtAXQ_4;
	nimfr_("[]", "D:\\nim\\lib\\system\\indices.nim");
{	result = (NIM_CHAR*)0;
	nimPrepareStrMutationV2((&(*s_p0)));
	nimlf_(33, "D:\\nim\\lib\\system\\indices.nim");
	if (nimSubInt((*s_p0).len, i_p1, &TM__1nRK0qvLEFLABF9aZnNtAXQ_4)) { raiseOverflow(); goto BeforeRet_;
	};
	if ((NI)(TM__1nRK0qvLEFLABF9aZnNtAXQ_4) < 0 || (NI)(TM__1nRK0qvLEFLABF9aZnNtAXQ_4) >= (*s_p0).len){ raiseIndexError2((NI)(TM__1nRK0qvLEFLABF9aZnNtAXQ_4),(*s_p0).len-1); goto BeforeRet_;
	}
	result = (&(*s_p0).p->data[(NI)(TM__1nRK0qvLEFLABF9aZnNtAXQ_4)]);
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1) {
	NI TM__1nRK0qvLEFLABF9aZnNtAXQ_5;
	NI TM__1nRK0qvLEFLABF9aZnNtAXQ_6;
{	prepareAdd(s_p0, ((NI)1));
	(*(*s_p0).p).data[(*s_p0).len] = c_p1;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__1nRK0qvLEFLABF9aZnNtAXQ_5)) { raiseOverflow(); goto BeforeRet_;
	};
	(*(*s_p0).p).data[(NI)(TM__1nRK0qvLEFLABF9aZnNtAXQ_5)] = 0;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__1nRK0qvLEFLABF9aZnNtAXQ_6)) { raiseOverflow(); goto BeforeRet_;
	};
	(*s_p0).len = (NI)(TM__1nRK0qvLEFLABF9aZnNtAXQ_6);
	}
BeforeRet_: ;
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
		NI TM__1nRK0qvLEFLABF9aZnNtAXQ_9;
		NI TM__1nRK0qvLEFLABF9aZnNtAXQ_10;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__1nRK0qvLEFLABF9aZnNtAXQ_9)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__1nRK0qvLEFLABF9aZnNtAXQ_9)) < ((NI)0) || ((NI)(TM__1nRK0qvLEFLABF9aZnNtAXQ_9)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__1nRK0qvLEFLABF9aZnNtAXQ_9), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__1nRK0qvLEFLABF9aZnNtAXQ_9))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__1nRK0qvLEFLABF9aZnNtAXQ_10)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__1nRK0qvLEFLABF9aZnNtAXQ_10);
	}
LA3_: ;
	}
BeforeRet_: ;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4127);
	return result;
}
N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__364R2OEHwjKXXXZy8WY36g*, newOSError__stdZoserrors_u44)(NI32 errorCode_p0, NimStringV2 additionalInfo_p1) {
	tyObject_OSError__364R2OEHwjKXXXZy8WY36g* result;
	NI32 colontmpD_;
	tyObject_OSError__364R2OEHwjKXXXZy8WY36g* T1_;
NIM_BOOL* nimErr_;
	nimfr_("newOSError", "D:\\nim\\lib\\std\\oserrors.nim");
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	colontmpD_ = (NI32)0;
	nimlf_(78, "D:\\nim\\lib\\std\\oserrors.nim");
	T1_ = NIM_NIL;
	T1_ = (tyObject_OSError__364R2OEHwjKXXXZy8WY36g*) nimNewObj(sizeof(tyObject_OSError__364R2OEHwjKXXXZy8WY36g), NIM_ALIGNOF(tyObject_OSError__364R2OEHwjKXXXZy8WY36g));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIv2__364R2OEHwjKXXXZy8WY36g_);
	(*T1_).Sup.Sup.name = "OSError";
	colontmpD_ = errorCode_p0;
	(*T1_).errorCode = colontmpD_;
	(*T1_).Sup.Sup.message = osErrorMsg__stdZoserrors_u10(errorCode_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = T1_;
	nimln_(79);
	{
		if (!(((NI)0) < additionalInfo_p1.len)) goto LA4_;
		nimln_(80);
		{
			NIM_BOOL T8_;
			NIM_CHAR* T10_;
			T8_ = (NIM_BOOL)0;
			T8_ = (((NI)0) < (*result).Sup.Sup.message.len);
			if (!(T8_)) goto LA9_;
			T10_ = (NIM_CHAR*)0;
			T10_ = X5BX5D___system_u7396((&(*result).Sup.Sup.message), ((NI)1));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T8_ = !(((NU8)((*T10_)) == (NU8)(10)));
LA9_: ;
			if (!T8_) goto LA11_;
			nimAddCharV1((&(*result).Sup.Sup.message), 10);
		}
LA11_: ;
		nimln_(81);
		prepareAdd((&(*result).Sup.Sup.message), 17);
appendString((&(*result).Sup.Sup.message), TM__1nRK0qvLEFLABF9aZnNtAXQ_8);
		nimln_(82);
		prepareAdd((&(*result).Sup.Sup.message), additionalInfo_p1.len + 0);
appendString((&(*result).Sup.Sup.message), additionalInfo_p1);
	}
LA4_: ;
	nimln_(84);
	{
		if (!((*result).Sup.Sup.message.len == 0)) goto LA15_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqsink___stdZassertions_u22((&(*result).Sup.Sup.message), TM__1nRK0qvLEFLABF9aZnNtAXQ_12);
	}
LA15_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_u98)(NI32 errorCode_p0, NimStringV2 additionalInfo_p1) {
	tyObject_OSError__364R2OEHwjKXXXZy8WY36g* T1_;
NIM_BOOL* nimErr_;
	nimfr_("raiseOSError", "D:\\nim\\lib\\std\\oserrors.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(92, "D:\\nim\\lib\\std\\oserrors.nim");
	T1_ = NIM_NIL;
	T1_ = newOSError__stdZoserrors_u44(errorCode_p0, additionalInfo_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	raiseExceptionEx((Exception*)T1_, "OSError", "raiseOSError", "D:\\nim\\lib\\std\\oserrors.nim", 92);
goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(NI, minuspercent___system_u790)(NI x_p0, NI y_p1) {
	NI result;
	nimfr_("-%", "D:\\nim\\lib\\system\\arithmetics.nim");
	result = (NI)0;
	nimlf_(363, "D:\\nim\\lib\\system\\arithmetics.nim");
	nimln_(364);
	nimln_(368);
	result = ((NI) ((NU)((NU32)(((NU) (x_p0))) - (NU32)(((NU) (y_p1))))));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p_p0) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
	nimfr_("nimDecRefIsLastCyclicDyn", "D:\\nim\\lib\\system\\orc.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimlf_(478, "D:\\nim\\lib\\system\\orc.nim");
	{
		tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw* cell;
		NI T5_;
		if (!!((p_p0 == NIM_NIL))) goto LA3_;
		nimln_(479);
		nimlf_(43, "D:\\nim\\lib\\system\\arc.nim");
		T5_ = (NI)0;
		T5_ = minuspercent___system_u790(((NI) (ptrdiff_t) (p_p0)), ((NI)8));
		cell = ((tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw*) (T5_));
		nimlf_(480, "D:\\nim\\lib\\system\\orc.nim");
		{
			if (!((NI)((*cell).rc & ((NI)-16)) == ((NI)0))) goto LA8_;
			nimln_(481);
			result = NIM_TRUE;
		}
		goto LA6_;
LA8_: ;
		{
			NI TM__1nRK0qvLEFLABF9aZnNtAXQ_13;
			nimln_(484);
			if (nimSubInt((*cell).rc, ((NI)16), &TM__1nRK0qvLEFLABF9aZnNtAXQ_13)) { raiseOverflow(); goto BeforeRet_;
			};
			(*cell).rc = (NI)(TM__1nRK0qvLEFLABF9aZnNtAXQ_13);
		}
LA6_: ;
		nimln_(486);
		rememberCycle__system_u3281(result, cell, (*((TNimTypeV2**) (p_p0))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZoserrors_u82)(tyObject_OSError__364R2OEHwjKXXXZy8WY36g** dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0));
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0));
	}
LA4_: ;
}
