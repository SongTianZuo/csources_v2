/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

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

static N_INLINE(NI64, pluspercent___system_u786)(NI64 x_p0, NI64 y_p1);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4312)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI64, starpercent___system_u826)(NI64 x_p0, NI64 y_p1);
static N_INLINE(NF, toBiggestFloat__system_u1676)(NI64 i_p0);
static N_INLINE(NF, abs__system_u4941)(NF x_p0);
static N_INLINE(NI64, minuspercent___system_u806)(NI64 x_p0, NI64 y_p1);
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
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
static N_INLINE(NI64, pluspercent___system_u786)(NI64 x_p0, NI64 y_p1) {
	NI64 result;
	nimfr_("+%", "D:\\nim\\lib\\system\\arithmetics.nim");
	result = (NI64)0;
	nimlf_(361, "D:\\nim\\lib\\system\\arithmetics.nim");
	result = ((NI64) ((NU64)((NU64)(((NU64) (x_p0))) + (NU64)(((NU64) (y_p1))))));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, barplusbar___saturate_u1)(NI64 a_p0, NI64 b_p1) {
	NI64 result;
	nimfr_("|+|", "D:\\nim\\compiler\\saturate.nim");
{	result = (NI64)0;
	nimlf_(14, "D:\\nim\\compiler\\saturate.nim");
	result = pluspercent___system_u786(a_p0, b_p1);
	nimln_(15);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a_p0));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ b_p1));
LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(16);
		goto BeforeRet_;
	}
LA5_: ;
	nimln_(17);
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = (a_p0 < IL64(0));
		if (T9_) goto LA10_;
		T9_ = (b_p1 < IL64(0));
LA10_: ;
		if (!T9_) goto LA11_;
		nimln_(18);
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7_;
LA11_: ;
	{
		nimln_(20);
		result = IL64(9223372036854775807);
	}
LA7_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NI64, starpercent___system_u826)(NI64 x_p0, NI64 y_p1) {
	NI64 result;
	nimfr_("*%", "D:\\nim\\lib\\system\\arithmetics.nim");
	result = (NI64)0;
	nimlf_(383, "D:\\nim\\lib\\system\\arithmetics.nim");
	result = ((NI64) ((NU64)((NU64)(((NU64) (x_p0))) * (NU64)(((NU64) (y_p1))))));
	popFrame();
	return result;
}
static N_INLINE(NF, toBiggestFloat__system_u1676)(NI64 i_p0) {
	NF result;
	nimfr_("toBiggestFloat", "D:\\nim\\lib\\system.nim");
	result = (NF)0;
	nimlf_(1264, "D:\\nim\\lib\\system.nim");
	nimln_(1265);
	result = ((NF) (i_p0));
	popFrame();
	return result;
}
static N_INLINE(NF, abs__system_u4941)(NF x_p0) {
	NF result;
	result = (NF)0;
	result = fabs(x_p0);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, barstarbar___saturate_u52)(NI64 a_p0, NI64 b_p1) {
	NI64 result;
	NF resAsFloat;
	NF floatProd;
	NF T1_;
	nimfr_("|*|", "D:\\nim\\compiler\\saturate.nim");
{	result = (NI64)0;
	resAsFloat = (NF)0;
	floatProd = (NF)0;
	nimlf_(57, "D:\\nim\\compiler\\saturate.nim");
	result = starpercent___system_u826(a_p0, b_p1);
	nimln_(58);
	floatProd = toBiggestFloat__system_u1676(a_p0);
	nimln_(59);
	T1_ = (NF)0;
	T1_ = toBiggestFloat__system_u1676(b_p1);
	floatProd = ((NF)(floatProd) * (NF)(T1_));
	nimln_(60);
	resAsFloat = toBiggestFloat__system_u1676(result);
	nimln_(64);
	{
		if (!(resAsFloat == floatProd)) goto LA4_;
		goto BeforeRet_;
	}
LA4_: ;
	nimln_(73);
	{
		NF T8_;
		NF T9_;
		T8_ = (NF)0;
		T8_ = abs__system_u4941(((NF)(resAsFloat) - (NF)(floatProd)));
		T9_ = (NF)0;
		T9_ = abs__system_u4941(floatProd);
		if (!(((NF)(32.0) * (NF)(T8_)) <= T9_)) goto LA10_;
		nimln_(74);
		goto BeforeRet_;
	}
LA10_: ;
	nimln_(76);
	{
		if (!(0.0 <= floatProd)) goto LA14_;
		nimln_(77);
		result = IL64(9223372036854775807);
	}
	goto LA12_;
LA14_: ;
	{
		nimln_(79);
		result = (IL64(-9223372036854775807) - IL64(1));
	}
LA12_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NI64, minuspercent___system_u806)(NI64 x_p0, NI64 y_p1) {
	NI64 result;
	nimfr_("-%", "D:\\nim\\lib\\system\\arithmetics.nim");
	result = (NI64)0;
	nimlf_(372, "D:\\nim\\lib\\system\\arithmetics.nim");
	result = ((NI64) ((NU64)((NU64)(((NU64) (x_p0))) - (NU64)(((NU64) (y_p1))))));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, barminusbar___saturate_u13)(NI64 a_p0, NI64 b_p1) {
	NI64 result;
	nimfr_("|-|", "D:\\nim\\compiler\\saturate.nim");
{	result = (NI64)0;
	nimlf_(23, "D:\\nim\\compiler\\saturate.nim");
	result = minuspercent___system_u806(a_p0, b_p1);
	nimln_(24);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (IL64(0) <= (NI64)(result ^ a_p0));
		if (T3_) goto LA4_;
		T3_ = (IL64(0) <= (NI64)(result ^ (NI64)((NU64) ~(b_p1))));
LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(25);
		goto BeforeRet_;
	}
LA5_: ;
	nimln_(26);
	{
		if (!(IL64(0) < b_p1)) goto LA9_;
		nimln_(27);
		result = (IL64(-9223372036854775807) - IL64(1));
	}
	goto LA7_;
LA9_: ;
	{
		nimln_(29);
		result = IL64(9223372036854775807);
	}
LA7_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
