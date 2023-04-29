/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <math.h>
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
#define nimfr_(x, y)
#define nimln_(x)

#define nimlf_(x, y)
typedef NU8 tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ;
static N_INLINE(NF, abs__pureZmath_u166)(NF x_p0);
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo__pureZmath_u200)(NI x_p0) {
	NI result;
	result = (NI)0;
	result = (NI)(x_p0 - ((NI)1));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI)32))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI)16))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI)8))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI)4))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI)2))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI)1))));
	result += (NI)(((NI)1) + (x_p0 <= ((NI)0)));
	return result;
}
static N_INLINE(NF, abs__pureZmath_u166)(NF x_p0) {
	NF result;
	result = (NF)0;
	result = fabs(x_p0);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ, classify__pureZmath_u163)(NF x_p0) {
	tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ result;
{	result = (tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)0;
	{
		if (!(x_p0 == 0.0)) goto LA3_;
		{
			if (!(((NF)(1.0) / (NF)(x_p0)) == INF)) goto LA7_;
			result = ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)2);
			goto BeforeRet_;
		}
		goto LA5_;
LA7_: ;
		{
			result = ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)3);
			goto BeforeRet_;
		}
LA5_: ;
	}
LA3_: ;
	{
		if (!(((NF)(x_p0) * (NF)(0.5)) == x_p0)) goto LA12_;
		{
			if (!(0.0 < x_p0)) goto LA16_;
			result = ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)5);
			goto BeforeRet_;
		}
		goto LA14_;
LA16_: ;
		{
			result = ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)6);
			goto BeforeRet_;
		}
LA14_: ;
	}
LA12_: ;
	{
		if (!!((x_p0 == x_p0))) goto LA21_;
		result = ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)4);
		goto BeforeRet_;
	}
LA21_: ;
	{
		NF T25_;
		T25_ = (NF)0;
		T25_ = abs__pureZmath_u166(x_p0);
		if (!(T25_ < 2.225073858507201e-308)) goto LA26_;
		result = ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)1);
		goto BeforeRet_;
	}
LA26_: ;
	result = ((tyEnum_FloatClass__E43KMm75mQr5blr7I2Y2aQ)0);
	goto BeforeRet_;
	}
BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NF, round__vm_u13762)(NF x_p0, NI places_p1) {
	NF result;
	result = (NF)0;
	{
		if (!(places_p1 == ((NI)0))) goto LA3_;
		result = round(x_p0);
	}
	goto LA1_;
LA3_: ;
	{
		NF mult;
		NF T6_;
		mult = pow(10.0, ((NF) (places_p1)));
		T6_ = (NF)0;
		T6_ = round(((NF)(x_p0) * (NF)(mult)));
		result = ((NF)(T6_) / (NF)(mult));
	}
LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, floorDiv__pureZtimes_u290)(NI64 x_p0, NI64 y_p1) {
	NI64 result;
	NI64 r;
	result = (NI64)0;
	result = (NI64)(x_p0 / y_p1);
	r = (NI64)(x_p0 % y_p1);
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NIM_BOOL T7_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = (IL64(0) < r);
		if (!(T4_)) goto LA5_;
		T4_ = (y_p1 < IL64(0));
LA5_: ;
		T3_ = T4_;
		if (T3_) goto LA6_;
		T7_ = (NIM_BOOL)0;
		T7_ = (r < IL64(0));
		if (!(T7_)) goto LA8_;
		T7_ = (IL64(0) < y_p1);
LA8_: ;
		T3_ = T7_;
LA6_: ;
		if (!T3_) goto LA9_;
		result -= ((NI)1);
	}
LA9_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isPowerOfTwo__pureZmath_u197)(NI x_p0) {
	NIM_BOOL result;
	NIM_BOOL T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI)0) < x_p0);
	if (!(T1_)) goto LA2_;
	T1_ = ((NI)(x_p0 & (NI)(x_p0 - ((NI)1))) == ((NI)0));
LA2_: ;
	result = T1_;
	goto BeforeRet_;
	}
BeforeRet_: ;
	return result;
}
