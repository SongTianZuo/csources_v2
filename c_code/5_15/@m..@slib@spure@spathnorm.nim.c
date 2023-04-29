/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 32

#include "nimbase.h"
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
typedef struct tyObject_PathIter__ZRFSTq2OLcGemcmJCGLRwg tyObject_PathIter__ZRFSTq2OLcGemcmJCGLRwg;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tyObject_PathIter__ZRFSTq2OLcGemcmJCGLRwg {
	NI i;
	NI prev;
	NIM_BOOL notFirst;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__pureZpathnorm_u6)(tyObject_PathIter__ZRFSTq2OLcGemcmJCGLRwg it_p0, NimStringV2 x_p1);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4312)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__pureZpathnorm_u10)(tyObject_PathIter__ZRFSTq2OLcGemcmJCGLRwg* it_p0, NimStringV2 x_p1);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__pureZpathnorm_u75)(NimStringV2 x_p0, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds_p1);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__pureZpathnorm_u71)(NimStringV2 x_p0, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s_p0, NI newLen_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_u7879)(NimStringV2 s_p0, NI first_p1, NI last_p2);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__pureZpathnorm_u67)(NimStringV2 x_p0, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_u22)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_NIMCALL(NimStringV2, rawNewString)(NI cap_p0);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_u83)(NimStringV2 x_p0, NimStringV2* result_p1, NI* state_p2, NIM_CHAR dirSep_p3);
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__DfU0iuayCGwHDN1Exp9cbKg_22 = { 1 | NIM_STRLIT_FLAG, "." };
static const NimStringV2 TM__DfU0iuayCGwHDN1Exp9cbKg_23 = {1, (NimStrPayload*)&TM__DfU0iuayCGwHDN1Exp9cbKg_22};
extern NIM_BOOL nimInErrorMode__system_u4115;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a_p0, v_p1, ((size_t) (size_p2)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4115);
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__pureZpathnorm_u6)(tyObject_PathIter__ZRFSTq2OLcGemcmJCGLRwg it_p0, NimStringV2 x_p1) {
	NIM_BOOL result;
	nimfr_("hasNext", "D:\\nim\\lib\\pure\\pathnorm.nim");
	result = (NIM_BOOL)0;
	nimlf_(24, "D:\\nim\\lib\\pure\\pathnorm.nim");
	nimln_(25);
	result = (it_p0.i < x_p1.len);
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__pureZpathnorm_u10)(tyObject_PathIter__ZRFSTq2OLcGemcmJCGLRwg* it_p0, NimStringV2 x_p1) {
	tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ result;
NIM_BOOL* nimErr_;
	nimfr_("next", "D:\\nim\\lib\\pure\\pathnorm.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ));
	nimlf_(28, "D:\\nim\\lib\\pure\\pathnorm.nim");
	(*it_p0).prev = (*it_p0).i;
	nimln_(29);
	{
		NIM_BOOL T3_;
		NI TM__DfU0iuayCGwHDN1Exp9cbKg_3;
		T3_ = (NIM_BOOL)0;
		T3_ = !((*it_p0).notFirst);
		if (!(T3_)) goto LA4_;
		if ((*it_p0).i < 0 || (*it_p0).i >= x_p1.len){ raiseIndexError2((*it_p0).i,x_p1.len-1); goto BeforeRet_;
		}
		T3_ = (((NU8)(x_p1.p->data[(*it_p0).i])) == ((NU8)(47)) || ((NU8)(x_p1.p->data[(*it_p0).i])) == ((NU8)(47)));
LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(31);
		if (nimAddInt((*it_p0).i, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_3)) { raiseOverflow(); goto BeforeRet_;
		};
		(*it_p0).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_3);
	}
	goto LA1_;
LA5_: ;
	{
		{
			nimln_(33);
			while (1) {
				NIM_BOOL T10_;
				NI TM__DfU0iuayCGwHDN1Exp9cbKg_4;
				T10_ = (NIM_BOOL)0;
				T10_ = ((*it_p0).i < x_p1.len);
				if (!(T10_)) goto LA11_;
				if ((*it_p0).i < 0 || (*it_p0).i >= x_p1.len){ raiseIndexError2((*it_p0).i,x_p1.len-1); goto BeforeRet_;
				}
				T10_ = !((((NU8)(x_p1.p->data[(*it_p0).i])) == ((NU8)(47)) || ((NU8)(x_p1.p->data[(*it_p0).i])) == ((NU8)(47))));
LA11_: ;
				if (!T10_) goto LA9;
				if (nimAddInt((*it_p0).i, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_4)) { raiseOverflow(); goto BeforeRet_;
				};
				(*it_p0).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_4);
			} LA9: ;
		}
	}
LA1_: ;
	nimln_(34);
	{
		NI colontmp_;
		NI colontmp__2;
		NI TM__DfU0iuayCGwHDN1Exp9cbKg_5;
		if (!((*it_p0).prev < (*it_p0).i)) goto LA14_;
		nimln_(35);
		colontmp_ = (*it_p0).prev;
		if (nimSubInt((*it_p0).i, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_5)) { raiseOverflow(); goto BeforeRet_;
		};
		colontmp__2 = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_5);
		result.Field0 = colontmp_;
		result.Field1 = colontmp__2;
	}
	goto LA12_;
LA14_: ;
	{
		NIM_BOOL T17_;
		nimln_(36);
		T17_ = (NIM_BOOL)0;
		T17_ = hasNext__pureZpathnorm_u6((*it_p0), x_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T17_) goto LA18_;
		nimln_(37);
		result = next__pureZpathnorm_u10(it_p0, x_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA12_;
LA18_: ;
LA12_: ;
	{
		nimln_(39);
		while (1) {
			NIM_BOOL T22_;
			NI TM__DfU0iuayCGwHDN1Exp9cbKg_6;
			T22_ = (NIM_BOOL)0;
			T22_ = ((*it_p0).i < x_p1.len);
			if (!(T22_)) goto LA23_;
			if ((*it_p0).i < 0 || (*it_p0).i >= x_p1.len){ raiseIndexError2((*it_p0).i,x_p1.len-1); goto BeforeRet_;
			}
			T22_ = (((NU8)(x_p1.p->data[(*it_p0).i])) == ((NU8)(47)) || ((NU8)(x_p1.p->data[(*it_p0).i])) == ((NU8)(47)));
LA23_: ;
			if (!T22_) goto LA21;
			if (nimAddInt((*it_p0).i, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_6)) { raiseOverflow(); goto BeforeRet_;
			};
			(*it_p0).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_6);
		} LA21: ;
	}
	nimln_(40);
	(*it_p0).notFirst = NIM_TRUE;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__pureZpathnorm_u75)(NimStringV2 x_p0, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds_p1) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	nimfr_("isSlash", "D:\\nim\\lib\\pure\\pathnorm.nim");
{	result = (NIM_BOOL)0;
	nimlf_(52, "D:\\nim\\lib\\pure\\pathnorm.nim");
	nimln_(53);
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds_p1.Field1 == bounds_p1.Field0);
	if (!(T1_)) goto LA2_;
	if (bounds_p1.Field0 < 0 || bounds_p1.Field0 >= x_p0.len){ raiseIndexError2(bounds_p1.Field0,x_p0.len-1); goto BeforeRet_;
	}
	T1_ = (((NU8)(x_p0.p->data[bounds_p1.Field0])) == ((NU8)(47)) || ((NU8)(x_p0.p->data[bounds_p1.Field0])) == ((NU8)(47)));
LA2_: ;
	result = T1_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1) {
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_8;
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_9;
{	prepareAdd(s_p0, ((NI)1));
	(*(*s_p0).p).data[(*s_p0).len] = c_p1;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_8)) { raiseOverflow(); goto BeforeRet_;
	};
	(*(*s_p0).p).data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_8)] = 0;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_9)) { raiseOverflow(); goto BeforeRet_;
	};
	(*s_p0).len = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_9);
	}
BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__pureZpathnorm_u71)(NimStringV2 x_p0, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds_p1) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_10;
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_11;
	nimfr_("isDotDot", "D:\\nim\\lib\\pure\\pathnorm.nim");
{	result = (NIM_BOOL)0;
	nimlf_(49, "D:\\nim\\lib\\pure\\pathnorm.nim");
	nimln_(50);
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	if (nimAddInt(bounds_p1.Field0, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_10)) { raiseOverflow(); goto BeforeRet_;
	};
	T2_ = (bounds_p1.Field1 == (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_10));
	if (!(T2_)) goto LA3_;
	if (bounds_p1.Field0 < 0 || bounds_p1.Field0 >= x_p0.len){ raiseIndexError2(bounds_p1.Field0,x_p0.len-1); goto BeforeRet_;
	}
	T2_ = ((NU8)(x_p0.p->data[bounds_p1.Field0]) == (NU8)(46));
LA3_: ;
	T1_ = T2_;
	if (!(T1_)) goto LA4_;
	if (nimAddInt(bounds_p1.Field0, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_11)) { raiseOverflow(); goto BeforeRet_;
	};
	if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11) >= x_p0.len){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11),x_p0.len-1); goto BeforeRet_;
	}
	T1_ = ((NU8)(x_p0.p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11)]) == (NU8)(46));
LA4_: ;
	result = T1_;
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
		NI TM__DfU0iuayCGwHDN1Exp9cbKg_18;
		NI TM__DfU0iuayCGwHDN1Exp9cbKg_19;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_18)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18)) < ((NI)0) || ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_18))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__DfU0iuayCGwHDN1Exp9cbKg_19)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_19);
	}
LA3_: ;
	}
BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__pureZpathnorm_u67)(NimStringV2 x_p0, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds_p1) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	nimfr_("isDot", "D:\\nim\\lib\\pure\\pathnorm.nim");
{	result = (NIM_BOOL)0;
	nimlf_(46, "D:\\nim\\lib\\pure\\pathnorm.nim");
	nimln_(47);
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds_p1.Field1 == bounds_p1.Field0);
	if (!(T1_)) goto LA2_;
	if (bounds_p1.Field0 < 0 || bounds_p1.Field0 >= x_p0.len){ raiseIndexError2(bounds_p1.Field0,x_p0.len-1); goto BeforeRet_;
	}
	T1_ = ((NU8)(x_p0.p->data[bounds_p1.Field0]) == (NU8)(46));
LA2_: ;
	result = T1_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__pureZpathnorm_u83)(NimStringV2 x_p0, NimStringV2* result_p1, NI* state_p2, NIM_CHAR dirSep_p3) {
	tyObject_PathIter__ZRFSTq2OLcGemcmJCGLRwg it;
NIM_BOOL* nimErr_;
	nimfr_("addNormalizePath", "D:\\nim\\lib\\pure\\pathnorm.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&it), sizeof(tyObject_PathIter__ZRFSTq2OLcGemcmJCGLRwg));
	nimlf_(75, "D:\\nim\\lib\\pure\\pathnorm.nim");
	it.notFirst = (((NI)0) < (NI)((NI32)((*state_p2)) >> (NU32)(((NI)1))));
	nimln_(76);
	{
		if (!it.notFirst) goto LA3_;
		{
			nimln_(77);
			while (1) {
				NIM_BOOL T7_;
				NI TM__DfU0iuayCGwHDN1Exp9cbKg_2;
				T7_ = (NIM_BOOL)0;
				T7_ = (it.i < x_p0.len);
				if (!(T7_)) goto LA8_;
				if (it.i < 0 || it.i >= x_p0.len){ raiseIndexError2(it.i,x_p0.len-1); goto BeforeRet_;
				}
				T7_ = (((NU8)(x_p0.p->data[it.i])) == ((NU8)(47)) || ((NU8)(x_p0.p->data[it.i])) == ((NU8)(47)));
LA8_: ;
				if (!T7_) goto LA6;
				if (nimAddInt(it.i, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_2)) { raiseOverflow(); goto BeforeRet_;
				};
				it.i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_2);
			} LA6: ;
		}
	}
LA3_: ;
	{
		nimln_(78);
		while (1) {
			NIM_BOOL T11_;
			tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ b;
			T11_ = (NIM_BOOL)0;
			T11_ = hasNext__pureZpathnorm_u6(it, x_p0);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T11_) goto LA10;
			nimln_(79);
			b = next__pureZpathnorm_u10((&it), x_p0);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			nimln_(80);
			{
				NIM_BOOL T14_;
				T14_ = (NIM_BOOL)0;
				T14_ = ((NI)((NI32)((*state_p2)) >> (NU32)(((NI)1))) == ((NI)0));
				if (!(T14_)) goto LA15_;
				T14_ = isSlash__pureZpathnorm_u75(x_p0, b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
LA15_: ;
				if (!T14_) goto LA16_;
				nimln_(81);
				{
					NIM_BOOL T20_;
					NI TM__DfU0iuayCGwHDN1Exp9cbKg_7;
					T20_ = (NIM_BOOL)0;
					T20_ = ((*result_p1).len == ((NI)0));
					if (T20_) goto LA21_;
					if (nimSubInt((*result_p1).len, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_7)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7) >= (*result_p1).len){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7),(*result_p1).len-1); goto BeforeRet_;
					}
					T20_ = !((((NU8)((*result_p1).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7)])) == ((NU8)(47)) || ((NU8)((*result_p1).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7)])) == ((NU8)(47))));
LA21_: ;
					if (!T20_) goto LA22_;
					nimln_(82);
					nimAddCharV1((&(*result_p1)), dirSep_p3);
				}
LA22_: ;
				nimln_(83);
				(*state_p2) = (NI)((*state_p2) | ((NI)1));
			}
			goto LA12_;
LA16_: ;
			{
				NIM_BOOL T25_;
				nimln_(84);
				T25_ = (NIM_BOOL)0;
				T25_ = isDotDot__pureZpathnorm_u71(x_p0, b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!T25_) goto LA26_;
				nimln_(85);
				{
					NI d;
					if (!(((NI)1) <= (NI)((NI32)((*state_p2)) >> (NU32)(((NI)1))))) goto LA30_;
					nimln_(86);
					d = (*result_p1).len;
					{
						nimln_(93);
						while (1) {
							NIM_BOOL T34_;
							NI TM__DfU0iuayCGwHDN1Exp9cbKg_12;
							NI TM__DfU0iuayCGwHDN1Exp9cbKg_13;
							NI TM__DfU0iuayCGwHDN1Exp9cbKg_14;
							T34_ = (NIM_BOOL)0;
							if (nimSubInt(d, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_12)) { raiseOverflow(); goto BeforeRet_;
							};
							T34_ = ((NI)((*state_p2) & ((NI)1)) < (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_12));
							if (!(T34_)) goto LA35_;
							if (nimSubInt(d, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_13)) { raiseOverflow(); goto BeforeRet_;
							};
							if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13) >= (*result_p1).len){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13),(*result_p1).len-1); goto BeforeRet_;
							}
							T34_ = !((((NU8)((*result_p1).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13)])) == ((NU8)(47)) || ((NU8)((*result_p1).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13)])) == ((NU8)(47))));
LA35_: ;
							if (!T34_) goto LA33;
							nimln_(94);
							if (nimSubInt(d, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_14)) { raiseOverflow(); goto BeforeRet_;
							};
							d = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_14);
						} LA33: ;
					}
					nimln_(95);
					{
						NI TM__DfU0iuayCGwHDN1Exp9cbKg_15;
						NI TM__DfU0iuayCGwHDN1Exp9cbKg_16;
						if (!(((NI)0) < d)) goto LA38_;
						nimln_(96);
						if (nimSubInt(d, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_15)) { raiseOverflow(); goto BeforeRet_;
						};
						if (((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_15)) < ((NI)0) || ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_15)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_15), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
						}
						setLengthStrV2((&(*result_p1)), ((NI) ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_15))));
						nimln_(97);
						if (nimSubInt((*state_p2), ((NI)2), &TM__DfU0iuayCGwHDN1Exp9cbKg_16)) { raiseOverflow(); goto BeforeRet_;
						};
						(*state_p2) = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_16);
					}
LA38_: ;
				}
				goto LA28_;
LA30_: ;
				{
					NimStringV2 colontmpD_;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					nimln_(99);
					{
						NIM_BOOL T43_;
						NI TM__DfU0iuayCGwHDN1Exp9cbKg_17;
						T43_ = (NIM_BOOL)0;
						T43_ = (((NI)0) < (*result_p1).len);
						if (!(T43_)) goto LA44_;
						if (nimSubInt((*result_p1).len, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_17)) { raiseOverflow(); goto BeforeRet_;
						};
						if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_17) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_17) >= (*result_p1).len){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_17),(*result_p1).len-1); goto BeforeRet_;
						}
						T43_ = !((((NU8)((*result_p1).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_17)])) == ((NU8)(47)) || ((NU8)((*result_p1).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_17)])) == ((NU8)(47))));
LA44_: ;
						if (!T43_) goto LA45_;
						nimln_(100);
						nimAddCharV1((&(*result_p1)), dirSep_p3);
					}
LA45_: ;
					nimln_(101);
					colontmpD_ = substr__system_u7879(x_p0, b.Field0, b.Field1);
					prepareAdd((&(*result_p1)), colontmpD_.len + 0);
appendString((&(*result_p1)), colontmpD_);
					nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
					eqdestroy___stdZassertions_u16((&colontmpD_));
				}
LA28_: ;
			}
			goto LA12_;
LA26_: ;
			{
				NIM_BOOL T48_;
				nimlf_(102, "D:\\nim\\lib\\pure\\pathnorm.nim");
				T48_ = (NIM_BOOL)0;
				T48_ = isDot__pureZpathnorm_u67(x_p0, b);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!T48_) goto LA49_;
			}
			goto LA12_;
LA49_: ;
			{
				NimStringV2 colontmpD__2;
				NI TM__DfU0iuayCGwHDN1Exp9cbKg_21;
				nimln_(104);
				if (!(b.Field0 <= b.Field1)) goto LA52_;
				colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
				nimln_(105);
				{
					NIM_BOOL T56_;
					NI TM__DfU0iuayCGwHDN1Exp9cbKg_20;
					T56_ = (NIM_BOOL)0;
					T56_ = (((NI)0) < (*result_p1).len);
					if (!(T56_)) goto LA57_;
					if (nimSubInt((*result_p1).len, ((NI)1), &TM__DfU0iuayCGwHDN1Exp9cbKg_20)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_20) < 0 || (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_20) >= (*result_p1).len){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_20),(*result_p1).len-1); goto BeforeRet_;
					}
					T56_ = !((((NU8)((*result_p1).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_20)])) == ((NU8)(47)) || ((NU8)((*result_p1).p->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_20)])) == ((NU8)(47))));
LA57_: ;
					if (!T56_) goto LA58_;
					nimln_(106);
					nimAddCharV1((&(*result_p1)), dirSep_p3);
				}
LA58_: ;
				nimln_(107);
				colontmpD__2 = substr__system_u7879(x_p0, b.Field0, b.Field1);
				prepareAdd((&(*result_p1)), colontmpD__2.len + 0);
appendString((&(*result_p1)), colontmpD__2);
				nimln_(108);
				if (nimAddInt((*state_p2), ((NI)2), &TM__DfU0iuayCGwHDN1Exp9cbKg_21)) { raiseOverflow(); goto BeforeRet_;
				};
				(*state_p2) = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_21);
				nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
				eqdestroy___stdZassertions_u16((&colontmpD__2));
			}
			goto LA12_;
LA52_: ;
LA12_: ;
		} LA10: ;
	}
	nimlf_(109, "D:\\nim\\lib\\pure\\pathnorm.nim");
	{
		NIM_BOOL T62_;
		T62_ = (NIM_BOOL)0;
		T62_ = ((*result_p1).len == 0);
		if (!(T62_)) goto LA63_;
		T62_ = !((x_p0.len == 0));
LA63_: ;
		if (!T62_) goto LA64_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqsink___stdZassertions_u22((&(*result_p1)), TM__DfU0iuayCGwHDN1Exp9cbKg_23);
	}
LA64_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, normalizePath__pureZpathnorm_u143)(NimStringV2 path_p0, NIM_CHAR dirSep_p1) {
	NimStringV2 result;
	NI state;
NIM_BOOL* nimErr_;
	nimfr_("normalizePath", "D:\\nim\\lib\\pure\\pathnorm.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(119, "D:\\nim\\lib\\pure\\pathnorm.nim");
	if ((path_p0.len) < ((NI)0) || (path_p0.len) > ((NI)2147483647)){ raiseRangeErrorI(path_p0.len, ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	result = rawNewString(((NI) (path_p0.len)));
	nimln_(120);
	state = ((NI)0);
	nimln_(121);
	addNormalizePath__pureZpathnorm_u83(path_p0, (&result), (&state), dirSep_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
