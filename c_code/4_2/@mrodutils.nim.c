/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <math.h>
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
typedef NU8 tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ;
N_LIB_PRIVATE N_NIMCALL(tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ, classify__pureZmath_u163)(NF x_p0);
static N_INLINE(NIM_BOOL, signbit__astalgo_u945)(NF x_p0);
N_LIB_PRIVATE N_NIMCALL(void, addFloatRoundtrip__system_u4597)(NimStringV2* result_p0, NF x_p1);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4324)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, signbit__cgen_u18519)(NF32 x_p0);
N_LIB_PRIVATE N_NIMCALL(void, addFloatRoundtrip__cgen_u18526)(NimStringV2* result_p0, NF32 x_p1);
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_2 = { 4 | NIM_STRLIT_FLAG, "-NAN" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_3 = {4, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_2};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_4 = { 3 | NIM_STRLIT_FLAG, "NAN" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_5 = {3, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_4};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_6 = { 4 | NIM_STRLIT_FLAG, "-0.0" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_7 = {4, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_6};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_8 = { 3 | NIM_STRLIT_FLAG, "0.0" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_9 = {3, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_8};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_10 = { 3 | NIM_STRLIT_FLAG, "INF" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_11 = {3, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_10};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_12 = { 4 | NIM_STRLIT_FLAG, "-INF" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_13 = {4, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_12};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_14 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_15 = {0, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_14};
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_18 = {4, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_2};
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_19 = {3, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_4};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_20 = { 5 | NIM_STRLIT_FLAG, "-0.0f" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_21 = {5, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_20};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_22 = { 4 | NIM_STRLIT_FLAG, "0.0f" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_23 = {4, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_22};
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_24 = {3, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_10};
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_25 = {4, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_12};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__qENY1F9aF8k8WjeLE9cUs6Mw_26 = { 1 | NIM_STRLIT_FLAG, "f" };
static const NimStringV2 TM__qENY1F9aF8k8WjeLE9cUs6Mw_27 = {1, (NimStrPayload*)&TM__qENY1F9aF8k8WjeLE9cUs6Mw_26};
extern NIM_BOOL nimInErrorMode__system_u4127;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
static N_INLINE(NIM_BOOL, signbit__astalgo_u945)(NF x_p0) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = signbit(x_p0);
	result = !((T1_ == ((NI32)0)));
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
		NI TM__qENY1F9aF8k8WjeLE9cUs6Mw_16;
		NI TM__qENY1F9aF8k8WjeLE9cUs6Mw_17;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__qENY1F9aF8k8WjeLE9cUs6Mw_16)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__qENY1F9aF8k8WjeLE9cUs6Mw_16)) < ((NI)0) || ((NI)(TM__qENY1F9aF8k8WjeLE9cUs6Mw_16)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__qENY1F9aF8k8WjeLE9cUs6Mw_16), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__qENY1F9aF8k8WjeLE9cUs6Mw_16))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__qENY1F9aF8k8WjeLE9cUs6Mw_17)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__qENY1F9aF8k8WjeLE9cUs6Mw_17);
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toStrMaxPrecision__astalgo_u939)(NF f_p0) {
	NimStringV2 result;
	tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ T1_;
NIM_BOOL* nimErr_;
	nimfr_("toStrMaxPrecision", "D:\\nim\\compiler\\rodutils.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(49, "D:\\nim\\compiler\\rodutils.nim");
	T1_ = (tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)0;
	T1_ = classify__pureZmath_u163(f_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	switch (T1_) {
	case ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)4):
	{
		nimln_(51);
		{
			NIM_BOOL T5_;
			T5_ = (NIM_BOOL)0;
			T5_ = signbit__astalgo_u945(f_p0);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T5_) goto LA6_;
			nimln_(52);
			result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_3;
		}
		goto LA3_;
LA6_: ;
		{
			nimln_(54);
			result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_5;
		}
LA3_: ;
	}
	break;
	case ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)3):
	{
		nimln_(56);
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_7;
	}
	break;
	case ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)2):
	{
		nimln_(58);
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_9;
	}
	break;
	case ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)5):
	{
		nimln_(60);
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_11;
	}
	break;
	case ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)6):
	{
		nimln_(62);
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_13;
	}
	break;
	default:
	{
		nimln_(64);
		addFloatRoundtrip__system_u4597((&result), f_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(65);
		prepareAdd((&result), 0);
appendString((&result), TM__qENY1F9aF8k8WjeLE9cUs6Mw_15);
	}
	break;
	}
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, signbit__cgen_u18519)(NF32 x_p0) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = signbit(x_p0);
	result = !((T1_ == ((NI32)0)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toStrMaxPrecision__cgen_u18513)(NF32 f_p0) {
	NimStringV2 result;
	tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ T1_;
NIM_BOOL* nimErr_;
	nimfr_("toStrMaxPrecision", "D:\\nim\\compiler\\rodutils.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(49, "D:\\nim\\compiler\\rodutils.nim");
	T1_ = (tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)0;
	T1_ = classify__pureZmath_u163(((NF) (f_p0)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	switch (T1_) {
	case ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)4):
	{
		nimln_(51);
		{
			NIM_BOOL T5_;
			T5_ = (NIM_BOOL)0;
			T5_ = signbit__cgen_u18519(f_p0);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T5_) goto LA6_;
			nimln_(52);
			result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_18;
		}
		goto LA3_;
LA6_: ;
		{
			nimln_(54);
			result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_19;
		}
LA3_: ;
	}
	break;
	case ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)3):
	{
		nimln_(56);
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_21;
	}
	break;
	case ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)2):
	{
		nimln_(58);
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_23;
	}
	break;
	case ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)5):
	{
		nimln_(60);
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_24;
	}
	break;
	case ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)6):
	{
		nimln_(62);
		result = TM__qENY1F9aF8k8WjeLE9cUs6Mw_25;
	}
	break;
	default:
	{
		nimln_(64);
		addFloatRoundtrip__cgen_u18526((&result), f_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(65);
		prepareAdd((&result), 1);
appendString((&result), TM__qENY1F9aF8k8WjeLE9cUs6Mw_27);
	}
	break;
	}
	}
BeforeRet_: ;
	popFrame();
	return result;
}
