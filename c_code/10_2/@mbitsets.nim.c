/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64

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

typedef struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ tySequence__6H5Oh5UUvVCLiakt9aTwtUQ;
typedef struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ_Content tySequence__6H5Oh5UUvVCLiakt9aTwtUQ_Content;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ {
  NI len; tySequence__6H5Oh5UUvVCLiakt9aTwtUQ_Content* p;
};
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
typedef NU8 tyArray__PgpowgA9aFQHq0cr9b7SoUgw[256];


#ifndef tySequence__6H5Oh5UUvVCLiakt9aTwtUQ_Content_PP
#define tySequence__6H5Oh5UUvVCLiakt9aTwtUQ_Content_PP
struct tySequence__6H5Oh5UUvVCLiakt9aTwtUQ_Content { NI cap; NU8 data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, newSeq__pureZmd53_u205)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* s_p0, NI len_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4325)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static const struct {
  NI cap; NIM_CHAR data[47+1];
} TM__pi9aprB28NfRfgHVLTndHCw_2 = { 47 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\bitsets.nim(33, 9) `elem >= 0` " };
static const NimStringV2 TM__pi9aprB28NfRfgHVLTndHCw_3 = {47, (NimStrPayload*)&TM__pi9aprB28NfRfgHVLTndHCw_2};
static const struct {
  NI cap; NIM_CHAR data[108+1];
} TM__pi9aprB28NfRfgHVLTndHCw_6 = { 108 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\system\\iterators.nim(246, 11) `len(a) == L` the length of the seq changed while iterating over it" };
static const NimStringV2 TM__pi9aprB28NfRfgHVLTndHCw_7 = {108, (NimStrPayload*)&TM__pi9aprB28NfRfgHVLTndHCw_6};
N_LIB_PRIVATE NIM_CONST tyArray__PgpowgA9aFQHq0cr9b7SoUgw populationCount__bitsets_u183 = {((NU8)0),
((NU8)1),
((NU8)1),
((NU8)2),
((NU8)1),
((NU8)2),
((NU8)2),
((NU8)3),
((NU8)1),
((NU8)2),
((NU8)2),
((NU8)3),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)1),
((NU8)2),
((NU8)2),
((NU8)3),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)1),
((NU8)2),
((NU8)2),
((NU8)3),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)1),
((NU8)2),
((NU8)2),
((NU8)3),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)5),
((NU8)6),
((NU8)6),
((NU8)7),
((NU8)1),
((NU8)2),
((NU8)2),
((NU8)3),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)5),
((NU8)6),
((NU8)6),
((NU8)7),
((NU8)2),
((NU8)3),
((NU8)3),
((NU8)4),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)5),
((NU8)6),
((NU8)6),
((NU8)7),
((NU8)3),
((NU8)4),
((NU8)4),
((NU8)5),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)5),
((NU8)6),
((NU8)6),
((NU8)7),
((NU8)4),
((NU8)5),
((NU8)5),
((NU8)6),
((NU8)5),
((NU8)6),
((NU8)6),
((NU8)7),
((NU8)5),
((NU8)6),
((NU8)6),
((NU8)7),
((NU8)6),
((NU8)7),
((NU8)7),
((NU8)8)}
;
extern TFrame* framePtr__system_u3774;
extern TFrame* framePtr__system_u3774;
extern TFrame* framePtr__system_u3774;
extern TFrame* framePtr__system_u3774;
extern TFrame* framePtr__system_u3774;
extern TFrame* framePtr__system_u3774;
extern NIM_BOOL nimInErrorMode__system_u4128;
static N_INLINE(void, nimFrame)(TFrame* s_p0) {
	{
		if (!(framePtr__system_u3774 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s_p0).calldepth = ((NI16)0);
	}
	goto LA1_;
LA3_: ;
	{
		(*s_p0).calldepth = (NI16)((*framePtr__system_u3774).calldepth + ((NI16)1));
	}
LA1_: ;
	(*s_p0).prev = framePtr__system_u3774;
	framePtr__system_u3774 = s_p0;
	{
		if (!((*s_p0).calldepth == ((NI16)2000))) goto LA8_;
		callDepthLimitReached__system_u4325();
	}
LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_u3774 = (*framePtr__system_u3774).prev;
}
N_LIB_PRIVATE N_NIMCALL(void, bitSetInit__bitsets_u58)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* b_p0, NI length_p1) {
	nimfr_("bitSetInit", "D:\\nim\\compiler\\bitsets.nim");
{	nimlf_(42, "D:\\nim\\compiler\\bitsets.nim");
	if ((length_p1) < ((NI)0) || (length_p1) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI(length_p1, ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
	}
	newSeq__pureZmd53_u205((&(*b_p0)), ((NI) (length_p1)));
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4128);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, bitSetIncl__bitsets_u23)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x_p0, NI64 elem_p1) {
NIM_BOOL* nimErr_;
	nimfr_("bitSetIncl", "D:\\nim\\compiler\\bitsets.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(33, "D:\\nim\\compiler\\bitsets.nim");
	{
		if (!!((IL64(0) <= elem_p1))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__pi9aprB28NfRfgHVLTndHCw_3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(34);
	if ((NI64)((NI64)(elem_p1) >> (NU64)(((NI)3))) < 0 || (NI64)((NI64)(elem_p1) >> (NU64)(((NI)3))) >= (*x_p0).len){ raiseIndexError2((NI64)((NI64)(elem_p1) >> (NU64)(((NI)3))),(*x_p0).len-1); goto BeforeRet_;
	}
	if ((NI64)((NI64)(elem_p1) >> (NU64)(((NI)3))) < 0 || (NI64)((NI64)(elem_p1) >> (NU64)(((NI)3))) >= (*x_p0).len){ raiseIndexError2((NI64)((NI64)(elem_p1) >> (NU64)(((NI)3))),(*x_p0).len-1); goto BeforeRet_;
	}
	nimln_(35);
	(*x_p0).p->data[(NI64)((NI64)(elem_p1) >> (NU64)(((NI)3)))] = (NU8)((*x_p0).p->data[(NI64)((NI64)(elem_p1) >> (NU64)(((NI)3)))] | (NU8)((NU64)(((NU8)1)) << (NU64)((NI64)(elem_p1 & IL64(7)))));
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NI64, bitSetCard__bitsets_u184)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x_p0) {
	NI64 result;
NIM_BOOL* nimErr_;
	nimfr_("bitSetCard", "D:\\nim\\compiler\\bitsets.nim");
{nimErr_ = nimErrorFlag();
	result = (NI64)0;
	{
		NU8* it;
		NI i;
		NI L;
		NI T2_;
		it = (NU8*)0;
		nimlf_(241, "D:\\nim\\lib\\system\\iterators.nim");
		i = ((NI)0);
		nimln_(242);
		T2_ = x_p0.len;
		L = T2_;
		{
			nimln_(243);
			while (1) {
				NI64 TM__pi9aprB28NfRfgHVLTndHCw_4;
				NI TM__pi9aprB28NfRfgHVLTndHCw_5;
				if (!(i < L)) goto LA4;
				nimlf_(90, "D:\\nim\\compiler\\bitsets.nim");
				if (i < 0 || i >= x_p0.len){ raiseIndexError2(i,x_p0.len-1); goto BeforeRet_;
				}
				it = (&x_p0.p->data[i]);
				if (nimAddInt64(result, ((NI) (populationCount__bitsets_u183[((*it))- 0])), &TM__pi9aprB28NfRfgHVLTndHCw_4)) { raiseOverflow(); goto BeforeRet_;
				};
				result = (NI64)(TM__pi9aprB28NfRfgHVLTndHCw_4);
				nimlf_(245, "D:\\nim\\lib\\system\\iterators.nim");
				if (nimAddInt(i, ((NI)1), &TM__pi9aprB28NfRfgHVLTndHCw_5)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__pi9aprB28NfRfgHVLTndHCw_5);
				nimln_(246);
				{
					NI T7_;
					T7_ = x_p0.len;
					if (!!((T7_ == L))) goto LA8_;
					failedAssertImpl__stdZassertions_u274(TM__pi9aprB28NfRfgHVLTndHCw_7);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
LA8_: ;
			} LA4: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetContains__bitsets_u121)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x_p0, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y_p1) {
	NIM_BOOL result;
	nimfr_("bitSetContains", "D:\\nim\\compiler\\bitsets.nim");
{	result = (NIM_BOOL)0;
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimlf_(75, "D:\\nim\\lib\\system\\iterators_1.nim");
		nimlf_(63, "D:\\nim\\compiler\\bitsets.nim");
		T2_ = (x_p0.len-1);
		colontmp_ = T2_;
		nimlf_(90, "D:\\nim\\lib\\system\\iterators_1.nim");
		res = ((NI)0);
		{
			nimln_(91);
			while (1) {
				NI TM__pi9aprB28NfRfgHVLTndHCw_8;
				if (!(res <= colontmp_)) goto LA4;
				nimlf_(63, "D:\\nim\\compiler\\bitsets.nim");
				i = res;
				{
					nimln_(64);
					if (i < 0 || i >= x_p0.len){ raiseIndexError2(i,x_p0.len-1); goto BeforeRet_;
					}
					if (i < 0 || i >= y_p1.len){ raiseIndexError2(i,y_p1.len-1); goto BeforeRet_;
					}
					if (!!(((NU8)(x_p0.p->data[i] & (NU8)((NU8) ~(y_p1.p->data[i]))) == ((NU8)0)))) goto LA7_;
					nimln_(65);
					nimln_(62);
					nimln_(65);
					result = NIM_FALSE;
					goto BeforeRet_;
				}
LA7_: ;
				nimlf_(93, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(res, ((NI)1), &TM__pi9aprB28NfRfgHVLTndHCw_8)) { raiseOverflow(); goto BeforeRet_;
				};
				res = (NI)(TM__pi9aprB28NfRfgHVLTndHCw_8);
			} LA4: ;
		}
	}
	nimlf_(66, "D:\\nim\\compiler\\bitsets.nim");
	result = NIM_TRUE;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetEquals__bitsets_u109)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x_p0, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y_p1) {
	NIM_BOOL result;
	nimfr_("bitSetEquals", "D:\\nim\\compiler\\bitsets.nim");
{	result = (NIM_BOOL)0;
	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimlf_(75, "D:\\nim\\lib\\system\\iterators_1.nim");
		nimlf_(57, "D:\\nim\\compiler\\bitsets.nim");
		T2_ = (x_p0.len-1);
		colontmp_ = T2_;
		nimlf_(90, "D:\\nim\\lib\\system\\iterators_1.nim");
		res = ((NI)0);
		{
			nimln_(91);
			while (1) {
				NI TM__pi9aprB28NfRfgHVLTndHCw_9;
				if (!(res <= colontmp_)) goto LA4;
				nimlf_(57, "D:\\nim\\compiler\\bitsets.nim");
				i = res;
				{
					nimln_(58);
					if (i < 0 || i >= x_p0.len){ raiseIndexError2(i,x_p0.len-1); goto BeforeRet_;
					}
					if (i < 0 || i >= y_p1.len){ raiseIndexError2(i,y_p1.len-1); goto BeforeRet_;
					}
					if (!!((x_p0.p->data[i] == y_p1.p->data[i]))) goto LA7_;
					nimln_(59);
					nimln_(56);
					nimln_(59);
					result = NIM_FALSE;
					goto BeforeRet_;
				}
LA7_: ;
				nimlf_(93, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(res, ((NI)1), &TM__pi9aprB28NfRfgHVLTndHCw_9)) { raiseOverflow(); goto BeforeRet_;
				};
				res = (NI)(TM__pi9aprB28NfRfgHVLTndHCw_9);
			} LA4: ;
		}
	}
	nimlf_(60, "D:\\nim\\compiler\\bitsets.nim");
	result = NIM_TRUE;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, bitSetIntersect__bitsets_u98)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x_p0, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y_p1) {
	nimfr_("bitSetIntersect", "D:\\nim\\compiler\\bitsets.nim");
{	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimlf_(75, "D:\\nim\\lib\\system\\iterators_1.nim");
		nimlf_(54, "D:\\nim\\compiler\\bitsets.nim");
		T2_ = ((*x_p0).len-1);
		colontmp_ = T2_;
		nimlf_(90, "D:\\nim\\lib\\system\\iterators_1.nim");
		res = ((NI)0);
		{
			nimln_(91);
			while (1) {
				NI TM__pi9aprB28NfRfgHVLTndHCw_10;
				if (!(res <= colontmp_)) goto LA4;
				nimlf_(54, "D:\\nim\\compiler\\bitsets.nim");
				i = res;
				if (i < 0 || i >= (*x_p0).len){ raiseIndexError2(i,(*x_p0).len-1); goto BeforeRet_;
				}
				if (i < 0 || i >= (*x_p0).len){ raiseIndexError2(i,(*x_p0).len-1); goto BeforeRet_;
				}
				if (i < 0 || i >= y_p1.len){ raiseIndexError2(i,y_p1.len-1); goto BeforeRet_;
				}
				(*x_p0).p->data[i] = (NU8)((*x_p0).p->data[i] & y_p1.p->data[i]);
				nimlf_(93, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(res, ((NI)1), &TM__pi9aprB28NfRfgHVLTndHCw_10)) { raiseOverflow(); goto BeforeRet_;
				};
				res = (NI)(TM__pi9aprB28NfRfgHVLTndHCw_10);
			} LA4: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, bitSetIn__bitsets_u11)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ x_p0, NI64 e_p1) {
	NIM_BOOL result;
	nimfr_("bitSetIn", "D:\\nim\\compiler\\bitsets.nim");
{	result = (NIM_BOOL)0;
	nimlf_(30, "D:\\nim\\compiler\\bitsets.nim");
	if ((NI64)((NI64)(e_p1) >> (NU64)(((NI)3))) < 0 || (NI64)((NI64)(e_p1) >> (NU64)(((NI)3))) >= x_p0.len){ raiseIndexError2((NI64)((NI64)(e_p1) >> (NU64)(((NI)3))),x_p0.len-1); goto BeforeRet_;
	}
	result = !(((NU8)(x_p0.p->data[(NI64)((NI64)(e_p1) >> (NU64)(((NI)3)))] & (NU8)((NU64)(((NU8)1)) << (NU64)((NI64)(e_p1 & IL64(7))))) == ((NU8)0)));
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, bitSetUnion__bitsets_u65)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x_p0, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y_p1) {
	nimfr_("bitSetUnion", "D:\\nim\\compiler\\bitsets.nim");
{	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimlf_(75, "D:\\nim\\lib\\system\\iterators_1.nim");
		nimlf_(45, "D:\\nim\\compiler\\bitsets.nim");
		T2_ = ((*x_p0).len-1);
		colontmp_ = T2_;
		nimlf_(90, "D:\\nim\\lib\\system\\iterators_1.nim");
		res = ((NI)0);
		{
			nimln_(91);
			while (1) {
				NI TM__pi9aprB28NfRfgHVLTndHCw_11;
				if (!(res <= colontmp_)) goto LA4;
				nimlf_(45, "D:\\nim\\compiler\\bitsets.nim");
				i = res;
				if (i < 0 || i >= (*x_p0).len){ raiseIndexError2(i,(*x_p0).len-1); goto BeforeRet_;
				}
				if (i < 0 || i >= (*x_p0).len){ raiseIndexError2(i,(*x_p0).len-1); goto BeforeRet_;
				}
				if (i < 0 || i >= y_p1.len){ raiseIndexError2(i,y_p1.len-1); goto BeforeRet_;
				}
				(*x_p0).p->data[i] = (NU8)((*x_p0).p->data[i] | y_p1.p->data[i]);
				nimlf_(93, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(res, ((NI)1), &TM__pi9aprB28NfRfgHVLTndHCw_11)) { raiseOverflow(); goto BeforeRet_;
				};
				res = (NI)(TM__pi9aprB28NfRfgHVLTndHCw_11);
			} LA4: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, bitSetDiff__bitsets_u76)(tySequence__6H5Oh5UUvVCLiakt9aTwtUQ* x_p0, tySequence__6H5Oh5UUvVCLiakt9aTwtUQ y_p1) {
	nimfr_("bitSetDiff", "D:\\nim\\compiler\\bitsets.nim");
{	{
		NI i;
		NI colontmp_;
		NI T2_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimlf_(75, "D:\\nim\\lib\\system\\iterators_1.nim");
		nimlf_(48, "D:\\nim\\compiler\\bitsets.nim");
		T2_ = ((*x_p0).len-1);
		colontmp_ = T2_;
		nimlf_(90, "D:\\nim\\lib\\system\\iterators_1.nim");
		res = ((NI)0);
		{
			nimln_(91);
			while (1) {
				NI TM__pi9aprB28NfRfgHVLTndHCw_12;
				if (!(res <= colontmp_)) goto LA4;
				nimlf_(48, "D:\\nim\\compiler\\bitsets.nim");
				i = res;
				if (i < 0 || i >= (*x_p0).len){ raiseIndexError2(i,(*x_p0).len-1); goto BeforeRet_;
				}
				if (i < 0 || i >= (*x_p0).len){ raiseIndexError2(i,(*x_p0).len-1); goto BeforeRet_;
				}
				if (i < 0 || i >= y_p1.len){ raiseIndexError2(i,y_p1.len-1); goto BeforeRet_;
				}
				(*x_p0).p->data[i] = (NU8)((*x_p0).p->data[i] & (NU8)((NU8) ~(y_p1.p->data[i])));
				nimlf_(93, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(res, ((NI)1), &TM__pi9aprB28NfRfgHVLTndHCw_12)) { raiseOverflow(); goto BeforeRet_;
				};
				res = (NI)(TM__pi9aprB28NfRfgHVLTndHCw_12);
			} LA4: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
}
