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

typedef struct tySequence__9bAGqSvkAaFL9bWjsEPslrFA tySequence__9bAGqSvkAaFL9bWjsEPslrFA;
typedef struct tySequence__9bAGqSvkAaFL9bWjsEPslrFA_Content tySequence__9bAGqSvkAaFL9bWjsEPslrFA_Content;
typedef struct tyObject_RodFile__Dz9a9armqhjeHywxWY6haCgg tyObject_RodFile__Dz9a9armqhjeHywxWY6haCgg;
typedef struct tyObject_BiTable__9aSseT9cM7Cq2kjAo9b9bjL0Fw tyObject_BiTable__9aSseT9cM7Cq2kjAo9b9bjL0Fw;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
typedef struct tyObject_BiTable__qSIpmz5s819clC5IoOdEdPg tyObject_BiTable__qSIpmz5s819clC5IoOdEdPg;
typedef struct tySequence__IHUFRsFxZNv7YydiUO2esQ tySequence__IHUFRsFxZNv7YydiUO2esQ;
typedef struct tySequence__IHUFRsFxZNv7YydiUO2esQ_Content tySequence__IHUFRsFxZNv7YydiUO2esQ_Content;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
struct tySequence__9bAGqSvkAaFL9bWjsEPslrFA {
  NI len; tySequence__9bAGqSvkAaFL9bWjsEPslrFA_Content* p;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
};
struct tyObject_BiTable__9aSseT9cM7Cq2kjAo9b9bjL0Fw {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ vals;
	tySequence__9bAGqSvkAaFL9bWjsEPslrFA keys;
};
struct tySequence__IHUFRsFxZNv7YydiUO2esQ {
  NI len; tySequence__IHUFRsFxZNv7YydiUO2esQ_Content* p;
};
struct tyObject_BiTable__qSIpmz5s819clC5IoOdEdPg {
	tySequence__IHUFRsFxZNv7YydiUO2esQ vals;
	tySequence__9bAGqSvkAaFL9bWjsEPslrFA keys;
};
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};


#ifndef tySequence__9bAGqSvkAaFL9bWjsEPslrFA_Content_PP
#define tySequence__9bAGqSvkAaFL9bWjsEPslrFA_Content_PP
struct tySequence__9bAGqSvkAaFL9bWjsEPslrFA_Content { NI cap; NU32 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__9bAGqSvkAaFL9bWjsEPslrFA_Content_PP
#define tySequence__9bAGqSvkAaFL9bWjsEPslrFA_Content_PP
struct tySequence__9bAGqSvkAaFL9bWjsEPslrFA_Content { NI cap; NU32 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__IHUFRsFxZNv7YydiUO2esQ_Content_PP
#define tySequence__IHUFRsFxZNv7YydiUO2esQ_Content_PP
struct tySequence__IHUFRsFxZNv7YydiUO2esQ_Content { NI cap; NI64 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__IHUFRsFxZNv7YydiUO2esQ_Content_PP
#define tySequence__IHUFRsFxZNv7YydiUO2esQ_Content_PP
struct tySequence__IHUFRsFxZNv7YydiUO2esQ_Content { NI cap; NI64 data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, alignedDealloc)(void* p_p0, NI align_p1);
N_LIB_PRIVATE N_NIMCALL(void, loadSeq__icZic_u4719)(tyObject_RodFile__Dz9a9armqhjeHywxWY6haCgg* f_p0, tySequence__sM4lkSb7zS6F7OVMvW9cffQ* s_p1);
N_LIB_PRIVATE N_NIMCALL(void, loadSeq__icZic_u4738)(tyObject_RodFile__Dz9a9armqhjeHywxWY6haCgg* f_p0, tySequence__9bAGqSvkAaFL9bWjsEPslrFA* s_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___icZic_u1256)(tySequence__9bAGqSvkAaFL9bWjsEPslrFA* dest_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, loadSeq__icZic_u4944)(tyObject_RodFile__Dz9a9armqhjeHywxWY6haCgg* f_p0, tySequence__IHUFRsFxZNv7YydiUO2esQ* s_p1);
N_LIB_PRIVATE N_NIMCALL(void, setLen__icZic_u1129)(tySequence__9bAGqSvkAaFL9bWjsEPslrFA* s_p0, NI newlen_p1);
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_u284)(NimStringV2 x_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringV2 a_p0, NimStringV2 b_p1);
static N_INLINE(NIM_BOOL, equalMem__system_u1728)(void* a_p0, void* b_p1, NI size_p2);
static N_INLINE(int, nimCmpMem)(void* a_p0, void* b_p1, NI size_p2);
static N_INLINE(NI, nextTry__icZbitabs_u9)(NI h_p0, NI maxHash_p1);
static N_INLINE(NIM_BOOL, mustRehash__icZbitabs_u45)(NI length_p0, NI counter_p1);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
N_LIB_PRIVATE N_NIMCALL(void, enlarge__icZic_u1114)(tyObject_BiTable__9aSseT9cM7Cq2kjAo9b9bjL0Fw* t_p0);
N_LIB_PRIVATE N_NIMCALL(void, newSeq__icZic_u1121)(tySequence__9bAGqSvkAaFL9bWjsEPslrFA* s_p0, NI len_p1);
N_LIB_PRIVATE N_NIMCALL(void, add__stdZenumutils_u69)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x_p0, NimStringV2 value_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___stdZassertions_u13)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(NI, hash__pureZjson_u3440)(NI64 x_p0);
static N_INLINE(NI, hashWangYi1__pureZhashes_u139)(NU64 x_p0);
static N_INLINE(NU64, hiXorLo__pureZhashes_u80)(NU64 a_p0, NU64 b_p1);
static N_INLINE(NU64, hiXorLoFallback64__pureZhashes_u36)(NU64 a_p0, NU64 b_p1);
N_LIB_PRIVATE N_NIMCALL(void, enlarge__icZic_u3171)(tyObject_BiTable__qSIpmz5s819clC5IoOdEdPg* t_p0);
N_LIB_PRIVATE N_NIMCALL(void, add__icZic_u3225)(tySequence__IHUFRsFxZNv7YydiUO2esQ* x_p0, NI64 value_p1);
N_LIB_PRIVATE N_NIMCALL(void, storeSeq__icZic_u6725)(tyObject_RodFile__Dz9a9armqhjeHywxWY6haCgg* f_p0, tySequence__sM4lkSb7zS6F7OVMvW9cffQ s_p1);
N_LIB_PRIVATE N_NIMCALL(void, storeSeq__icZic_u6758)(tyObject_RodFile__Dz9a9armqhjeHywxWY6haCgg* f_p0, tySequence__9bAGqSvkAaFL9bWjsEPslrFA s_p1);
N_LIB_PRIVATE N_NIMCALL(void, storeSeq__icZic_u6870)(tyObject_RodFile__Dz9a9armqhjeHywxWY6haCgg* f_p0, tySequence__IHUFRsFxZNv7YydiUO2esQ s_p1);
static const struct {
  NI cap; NIM_CHAR data[56+1];
} TM__he7ltlUH1wUcaEpjFFHAnQ_4 = { 56 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\ic\\bitabs.nim(32, 9) `length > counter` " };
static const NimStringV2 TM__he7ltlUH1wUcaEpjFFHAnQ_5 = {56, (NimStrPayload*)&TM__he7ltlUH1wUcaEpjFFHAnQ_4};
extern NIM_BOOL nimInErrorMode__system_u4097;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___icZic_u1256)(tySequence__9bAGqSvkAaFL9bWjsEPslrFA* dest_p0) {
	if ((*dest_p0).p && !((*dest_p0).p->cap & NIM_STRLIT_FLAG)) {
 alignedDealloc((*dest_p0).p, NIM_ALIGNOF(NU32));
}
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___icZic_u1262)(tySequence__9bAGqSvkAaFL9bWjsEPslrFA* dest_p0, tySequence__9bAGqSvkAaFL9bWjsEPslrFA src_p1) {
	if ((*dest_p0).p != src_p1.p) {	eqdestroy___icZic_u1256(dest_p0);
	}
(*dest_p0).len = src_p1.len; (*dest_p0).p = src_p1.p;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4097);
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
N_LIB_PRIVATE N_NIMCALL(void, load__icZic_u4715)(tyObject_RodFile__Dz9a9armqhjeHywxWY6haCgg* f_p0, tyObject_BiTable__9aSseT9cM7Cq2kjAo9b9bjL0Fw* t_p1) {
NIM_BOOL* nimErr_;
	nimfr_("load", "D:\\nim\\compiler\\ic\\bitabs.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(118, "D:\\nim\\compiler\\ic\\bitabs.nim");
	loadSeq__icZic_u4719(f_p0, (&(*t_p1).vals));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(119);
	loadSeq__icZic_u4738(f_p0, (&(*t_p1).keys));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, load__icZic_u4940)(tyObject_RodFile__Dz9a9armqhjeHywxWY6haCgg* f_p0, tyObject_BiTable__qSIpmz5s819clC5IoOdEdPg* t_p1) {
NIM_BOOL* nimErr_;
	nimfr_("load", "D:\\nim\\compiler\\ic\\bitabs.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(118, "D:\\nim\\compiler\\ic\\bitabs.nim");
	loadSeq__icZic_u4944(f_p0, (&(*t_p1).vals));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(119);
	loadSeq__icZic_u4738(f_p0, (&(*t_p1).keys));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___icZic_u1259)(tySequence__9bAGqSvkAaFL9bWjsEPslrFA* dest_p0, tySequence__9bAGqSvkAaFL9bWjsEPslrFA src_p1) {
	NI T1_;
	NI colontmp_;
	T1_ = src_p1.len;
	setLen__icZic_u1129((&(*dest_p0)), T1_);
	colontmp_ = ((NI)0);
	{
		while (1) {
			NI T4_;
			T4_ = (*dest_p0).len;
			if (!(colontmp_ < T4_)) goto LA3;
			(*dest_p0).p->data[colontmp_] = src_p1.p->data[colontmp_];
			colontmp_ += ((NI)1);
		} LA3: ;
	}
}
static N_INLINE(int, nimCmpMem)(void* a_p0, void* b_p1, NI size_p2) {
	int result;
	result = (int)0;
	result = memcmp(a_p0, b_p1, ((size_t) (size_p2)));
	return result;
}
static N_INLINE(NIM_BOOL, equalMem__system_u1728)(void* a_p0, void* b_p1, NI size_p2) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a_p0, b_p1, size_p2);
	result = (T1_ == ((NI32)0));
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringV2 a_p0, NimStringV2 b_p1) {
	NIM_BOOL result;
	NI alen;
	NI blen;
	nimfr_("eqStrings", "D:\\nim\\lib\\system\\strmantle.nim");
{	result = (NIM_BOOL)0;
	nimlf_(27, "D:\\nim\\lib\\system\\strmantle.nim");
	alen = a_p0.len;
	nimln_(28);
	blen = b_p1.len;
	nimln_(29);
	{
		if (!(alen == blen)) goto LA3_;
		nimln_(30);
		{
			if (!(alen == ((NI)0))) goto LA7_;
			nimln_(26);
			nimln_(30);
			result = NIM_TRUE;
			goto BeforeRet_;
		}
LA7_: ;
		nimln_(31);
		nimln_(26);
		nimln_(31);
		result = equalMem__system_u1728(((void*) ((&a_p0.p->data[((NI)0)]))), ((void*) ((&b_p1.p->data[((NI)0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
LA3_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NI, nextTry__icZbitabs_u9)(NI h_p0, NI maxHash_p1) {
	NI result;
	NI TM__he7ltlUH1wUcaEpjFFHAnQ_3;
	nimfr_("nextTry", "D:\\nim\\compiler\\ic\\bitabs.nim");
{	result = (NI)0;
	nimlf_(17, "D:\\nim\\compiler\\ic\\bitabs.nim");
	if (nimAddInt(h_p0, ((NI)1), &TM__he7ltlUH1wUcaEpjFFHAnQ_3)) { raiseOverflow(); goto BeforeRet_;
	};
	result = (NI)((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_3) & maxHash_p1);
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, mustRehash__icZbitabs_u45)(NI length_p0, NI counter_p1) {
	NIM_BOOL result;
	NIM_BOOL T5_;
	NI TM__he7ltlUH1wUcaEpjFFHAnQ_6;
	NI TM__he7ltlUH1wUcaEpjFFHAnQ_7;
	NI TM__he7ltlUH1wUcaEpjFFHAnQ_8;
NIM_BOOL* nimErr_;
	nimfr_("mustRehash", "D:\\nim\\compiler\\ic\\bitabs.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimlf_(32, "D:\\nim\\compiler\\ic\\bitabs.nim");
	{
		if (!!((counter_p1 < length_p0))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__he7ltlUH1wUcaEpjFFHAnQ_5);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(33);
	T5_ = (NIM_BOOL)0;
	if (nimMulInt(length_p0, ((NI)2), &TM__he7ltlUH1wUcaEpjFFHAnQ_6)) { raiseOverflow(); goto BeforeRet_;
	};
	if (nimMulInt(counter_p1, ((NI)3), &TM__he7ltlUH1wUcaEpjFFHAnQ_7)) { raiseOverflow(); goto BeforeRet_;
	};
	T5_ = ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_6) < (NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_7));
	if (T5_) goto LA6_;
	if (nimSubInt(length_p0, counter_p1, &TM__he7ltlUH1wUcaEpjFFHAnQ_8)) { raiseOverflow(); goto BeforeRet_;
	};
	T5_ = ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_8) < ((NI)4));
LA6_: ;
	result = T5_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, enlarge__icZic_u1114)(tyObject_BiTable__9aSseT9cM7Cq2kjAo9b9bjL0Fw* t_p0) {
	tySequence__9bAGqSvkAaFL9bWjsEPslrFA n;
	NI T1_;
	NI TM__he7ltlUH1wUcaEpjFFHAnQ_9;
	tySequence__9bAGqSvkAaFL9bWjsEPslrFA T2_;
NIM_BOOL* nimErr_;
	nimfr_("enlarge", "D:\\nim\\compiler\\ic\\bitabs.nim");
{nimErr_ = nimErrorFlag();
	n.len = 0; n.p = NIM_NIL;
	nimlf_(48, "D:\\nim\\compiler\\ic\\bitabs.nim");
	T1_ = (*t_p0).keys.len;
	if (nimMulInt(T1_, ((NI)2), &TM__he7ltlUH1wUcaEpjFFHAnQ_9)) { raiseOverflow(); goto BeforeRet_;
	};
	if (((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_9)) < ((NI)0) || ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_9)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_9), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	newSeq__icZic_u1121((&n), ((NI) ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_9))));
	nimln_(49);
	T2_.len = 0; T2_.p = NIM_NIL;
	T2_ = (*t_p0).keys;
	(*t_p0).keys = n;
	n = T2_;
	{
		NI i;
		NI colontmp_;
		NI T4_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimlf_(75, "D:\\nim\\lib\\system\\iterators_1.nim");
		nimlf_(50, "D:\\nim\\compiler\\ic\\bitabs.nim");
		T4_ = (n.len-1);
		colontmp_ = T4_;
		nimlf_(90, "D:\\nim\\lib\\system\\iterators_1.nim");
		res = ((NI)0);
		{
			nimln_(91);
			while (1) {
				NU32 eh;
				NI TM__he7ltlUH1wUcaEpjFFHAnQ_11;
				if (!(res <= colontmp_)) goto LA6;
				nimlf_(50, "D:\\nim\\compiler\\ic\\bitabs.nim");
				i = res;
				nimln_(51);
				if (i < 0 || i >= n.len){ raiseIndexError2(i,n.len-1); goto BeforeRet_;
				}
				eh = n.p->data[i];
				nimln_(50);
				{
					NI j;
					NI TM__he7ltlUH1wUcaEpjFFHAnQ_10;
					NI T11_;
					NI T12_;
					nimln_(52);
					if (!((NU32)(((NU32)0)) < (NU32)(eh))) goto LA9_;
					nimln_(53);
					if ((NI64)(eh) < ((NI)(-2147483647 -1)) || (NI64)(eh) > ((NI)2147483647)){ raiseRangeErrorI(eh, ((NI)(-2147483647 -1)), ((NI)2147483647)); goto BeforeRet_;
					}
					if (nimSubInt(((NI) (eh)), ((NI)256), &TM__he7ltlUH1wUcaEpjFFHAnQ_10)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_10) < 0 || (NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_10) >= (*t_p0).vals.len){ raiseIndexError2((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_10),(*t_p0).vals.len-1); goto BeforeRet_;
					}
					T11_ = (NI)0;
					T11_ = hash__pureZhashes_u284((*t_p0).vals.p->data[(NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_10)]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					T12_ = ((*t_p0).keys.len-1);
					j = (NI)(T11_ & T12_);
					{
						nimln_(54);
						while (1) {
							NI T15_;
							if (j < 0 || j >= (*t_p0).keys.len){ raiseIndexError2(j,(*t_p0).keys.len-1); goto BeforeRet_;
							}
							if (!((NU32)(((NU32)0)) < (NU32)((*t_p0).keys.p->data[j]))) goto LA14;
							nimln_(55);
							T15_ = ((*t_p0).keys.len-1);
							j = nextTry__icZbitabs_u9(j, T15_);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						} LA14: ;
					}
					nimln_(56);
					if (j < 0 || j >= (*t_p0).keys.len){ raiseIndexError2(j,(*t_p0).keys.len-1); goto BeforeRet_;
					}
					if (i < 0 || i >= n.len){ raiseIndexError2(i,n.len-1); goto BeforeRet_;
					}
					(*t_p0).keys.p->data[j] = n.p->data[i];
					n.p->data[i] = 0;
				}
LA9_: ;
				nimlf_(93, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(res, ((NI)1), &TM__he7ltlUH1wUcaEpjFFHAnQ_11)) { raiseOverflow(); goto BeforeRet_;
				};
				res = (NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_11);
			} LA6: ;
		}
	}
	nimlf_(47, "D:\\nim\\compiler\\ic\\bitabs.nim");
	eqdestroy___icZic_u1256((&n));
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NU32, getOrIncl__icZic_u1088)(tyObject_BiTable__9aSseT9cM7Cq2kjAo9b9bjL0Fw* t_p0, NimStringV2 v_p1) {
	NU32 result;
	NimStringV2 colontmpD_;
	NI origH;
	NI h;
	NI T1_;
	NI T35_;
	NI TM__he7ltlUH1wUcaEpjFFHAnQ_12;
NIM_BOOL* nimErr_;
	nimfr_("getOrIncl", "D:\\nim\\compiler\\ic\\bitabs.nim");
{nimErr_ = nimErrorFlag();
	result = (NU32)0;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	nimlf_(70, "D:\\nim\\compiler\\ic\\bitabs.nim");
	origH = hash__pureZhashes_u284(v_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(71);
	T1_ = ((*t_p0).keys.len-1);
	h = (NI)(origH & T1_);
	nimln_(72);
	{
		NI T4_;
		T4_ = (*t_p0).keys.len;
		if (!!((T4_ == ((NI)0)))) goto LA5_;
		{
			nimln_(73);
			while (1) {
				NU32 litId;
				NI T17_;
				nimln_(74);
				if (h < 0 || h >= (*t_p0).keys.len){ raiseIndexError2(h,(*t_p0).keys.len-1); goto BeforeRet_;
				}
				litId = (*t_p0).keys.p->data[h];
				nimln_(75);
				{
					if (!!(((NU32)(((NU32)0)) < (NU32)(litId)))) goto LA11_;
					goto LA7;
				}
LA11_: ;
				nimln_(76);
				{
					NI TM__he7ltlUH1wUcaEpjFFHAnQ_2;
					if (h < 0 || h >= (*t_p0).keys.len){ raiseIndexError2(h,(*t_p0).keys.len-1); goto BeforeRet_;
					}
					if ((NI64)((*t_p0).keys.p->data[h]) < ((NI)(-2147483647 -1)) || (NI64)((*t_p0).keys.p->data[h]) > ((NI)2147483647)){ raiseRangeErrorI((*t_p0).keys.p->data[h], ((NI)(-2147483647 -1)), ((NI)2147483647)); goto BeforeRet_;
					}
					if (nimSubInt(((NI) ((*t_p0).keys.p->data[h])), ((NI)256), &TM__he7ltlUH1wUcaEpjFFHAnQ_2)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_2) < 0 || (NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_2) >= (*t_p0).vals.len){ raiseIndexError2((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_2),(*t_p0).vals.len-1); goto BeforeRet_;
					}
					if (!eqStrings((*t_p0).vals.p->data[(NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_2)], v_p1)) goto LA15_;
					nimln_(69);
					nimln_(76);
					result = litId;
					goto BeforeRet_;
				}
LA15_: ;
				nimln_(77);
				T17_ = ((*t_p0).keys.len-1);
				h = nextTry__icZbitabs_u9(h, T17_);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			}
		} LA7: ;
		nimln_(79);
		{
			NI T20_;
			NI T21_;
			NIM_BOOL T22_;
			NI T25_;
			T20_ = (*t_p0).keys.len;
			T21_ = (*t_p0).vals.len;
			T22_ = (NIM_BOOL)0;
			T22_ = mustRehash__icZbitabs_u45(T20_, T21_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T22_) goto LA23_;
			nimln_(80);
			enlarge__icZic_u1114(t_p0);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			nimln_(82);
			T25_ = ((*t_p0).keys.len-1);
			h = (NI)(origH & T25_);
			{
				nimln_(83);
				while (1) {
					NU32 litId_2;
					NI T32_;
					nimln_(84);
					if (h < 0 || h >= (*t_p0).keys.len){ raiseIndexError2(h,(*t_p0).keys.len-1); goto BeforeRet_;
					}
					litId_2 = (*t_p0).keys.p->data[h];
					nimln_(85);
					{
						if (!!(((NU32)(((NU32)0)) < (NU32)(litId_2)))) goto LA30_;
						goto LA26;
					}
LA30_: ;
					nimln_(86);
					T32_ = ((*t_p0).keys.len-1);
					h = nextTry__icZbitabs_u9(h, T32_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
			} LA26: ;
		}
LA23_: ;
	}
	goto LA2_;
LA5_: ;
	{
		NI T34_;
		nimln_(88);
		setLen__icZic_u1129((&(*t_p0).keys), ((NI)16));
		nimln_(89);
		T34_ = ((*t_p0).keys.len-1);
		h = (NI)(origH & T34_);
	}
LA2_: ;
	nimln_(91);
	T35_ = (*t_p0).vals.len;
	if (nimAddInt(T35_, ((NI)256), &TM__he7ltlUH1wUcaEpjFFHAnQ_12)) { raiseOverflow(); goto BeforeRet_;
	};
	result = ((NU32) ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_12)));
	nimln_(92);
	if (h < 0 || h >= (*t_p0).keys.len){ raiseIndexError2(h,(*t_p0).keys.len-1); goto BeforeRet_;
	}
	(*t_p0).keys.p->data[h] = result;
	nimln_(93);
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqwasMoved___stdZassertions_u13((&colontmpD_));
	eqcopy___stdZassertions_u19((&colontmpD_), v_p1);
	nimlf_(93, "D:\\nim\\compiler\\ic\\bitabs.nim");
	add__stdZenumutils_u69((&(*t_p0).vals), colontmpD_);
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NU64, hiXorLoFallback64__pureZhashes_u36)(NU64 a_p0, NU64 b_p1) {
	NU64 result;
	NU64 colontmpD_;
	NU64 colontmpD__2;
	NU64 colontmpD__3;
	NU64 colontmpD__4;
	NU64 aH;
	NU64 aL;
	NU64 bH;
	NU64 bL;
	NU64 rHH;
	NU64 rHL;
	NU64 rLH;
	NU64 rLL;
	NU64 t;
	NU64 c;
	NU64 lo;
	NU64 T6_;
	NU64 hi;
	nimfr_("hiXorLoFallback64", "D:\\nim\\lib\\pure\\hashes.nim");
{	result = (NU64)0;
	colontmpD_ = (NU64)0;
	colontmpD__2 = (NU64)0;
	colontmpD__3 = (NU64)0;
	colontmpD__4 = (NU64)0;
	nimlf_(102, "D:\\nim\\lib\\pure\\hashes.nim");
	aH = (NU64)((NU64)(a_p0) >> (NU64)(((NI)32)));
	nimln_(103);
	aL = (NU64)(a_p0 & 4294967295ULL);
	nimln_(104);
	bH = (NU64)((NU64)(b_p1) >> (NU64)(((NI)32)));
	nimln_(105);
	bL = (NU64)(b_p1 & 4294967295ULL);
	nimln_(106);
	rHH = (NU64)((NU64)(aH) * (NU64)(bH));
	nimln_(107);
	rHL = (NU64)((NU64)(aH) * (NU64)(bL));
	nimln_(108);
	rLH = (NU64)((NU64)(aL) * (NU64)(bH));
	nimln_(109);
	rLL = (NU64)((NU64)(aL) * (NU64)(bL));
	nimln_(110);
	t = (NU64)((NU64)(rLL) + (NU64)((NU64)((NU64)(rHL) << (NU64)(((NI)32)))));
	nimln_(111);
	{
		if (!((NU64)(t) < (NU64)(rLL))) goto LA3_;
		colontmpD_ = 1ULL;
		c = colontmpD_;
	}
	goto LA1_;
LA3_: ;
	{
		colontmpD__2 = 0ULL;
		c = colontmpD__2;
	}
LA1_: ;
	nimln_(112);
	lo = (NU64)((NU64)(t) + (NU64)((NU64)((NU64)(rLH) << (NU64)(((NI)32)))));
	nimln_(113);
	T6_ = (NU64)0;
	{
		if (!((NU64)(lo) < (NU64)(t))) goto LA9_;
		colontmpD__3 = 1ULL;
		T6_ = colontmpD__3;
	}
	goto LA7_;
LA9_: ;
	{
		colontmpD__4 = 0ULL;
		T6_ = colontmpD__4;
	}
LA7_: ;
	c += T6_;
	nimln_(114);
	hi = (NU64)((NU64)((NU64)((NU64)((NU64)((NU64)(rHH) + (NU64)((NU64)((NU64)(rHL) >> (NU64)(((NI)32)))))) + (NU64)((NU64)((NU64)(rLH) >> (NU64)(((NI)32)))))) + (NU64)(c));
	nimln_(115);
	nimln_(100);
	nimln_(115);
	result = (NU64)(hi ^ lo);
	goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NU64, hiXorLo__pureZhashes_u80)(NU64 a_p0, NU64 b_p1) {
	NU64 result;
NIM_BOOL* nimErr_;
	nimfr_("hiXorLo", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NU64)0;
	nimlf_(123, "D:\\nim\\lib\\pure\\hashes.nim");
	result = hiXorLoFallback64__pureZhashes_u36(a_p0, b_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NI, hashWangYi1__pureZhashes_u139)(NU64 x_p0) {
	NI result;
	NU64 T1_;
	NU64 T2_;
NIM_BOOL* nimErr_;
	nimfr_("hashWangYi1", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(186, "D:\\nim\\lib\\pure\\hashes.nim");
	nimln_(173);
	T1_ = (NU64)0;
	T1_ = hiXorLo__pureZhashes_u80(11562461410679940143ULL, (NU64)(x_p0 ^ 16646288086500911323ULL));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(186);
	T2_ = (NU64)0;
	T2_ = hiXorLo__pureZhashes_u80(T1_, 16952864883938283885ULL);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = ((NI) (T2_));
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NI, hash__pureZjson_u3440)(NI64 x_p0) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("hash", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(213, "D:\\nim\\lib\\pure\\hashes.nim");
	nimln_(214);
	nimln_(215);
	result = hashWangYi1__pureZhashes_u139(((NU64) (x_p0)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, enlarge__icZic_u3171)(tyObject_BiTable__qSIpmz5s819clC5IoOdEdPg* t_p0) {
	tySequence__9bAGqSvkAaFL9bWjsEPslrFA n;
	NI T1_;
	NI TM__he7ltlUH1wUcaEpjFFHAnQ_14;
	tySequence__9bAGqSvkAaFL9bWjsEPslrFA T2_;
NIM_BOOL* nimErr_;
	nimfr_("enlarge", "D:\\nim\\compiler\\ic\\bitabs.nim");
{nimErr_ = nimErrorFlag();
	n.len = 0; n.p = NIM_NIL;
	nimlf_(48, "D:\\nim\\compiler\\ic\\bitabs.nim");
	T1_ = (*t_p0).keys.len;
	if (nimMulInt(T1_, ((NI)2), &TM__he7ltlUH1wUcaEpjFFHAnQ_14)) { raiseOverflow(); goto BeforeRet_;
	};
	if (((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_14)) < ((NI)0) || ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_14)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_14), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	newSeq__icZic_u1121((&n), ((NI) ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_14))));
	nimln_(49);
	T2_.len = 0; T2_.p = NIM_NIL;
	T2_ = (*t_p0).keys;
	(*t_p0).keys = n;
	n = T2_;
	{
		NI i;
		NI colontmp_;
		NI T4_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimlf_(75, "D:\\nim\\lib\\system\\iterators_1.nim");
		nimlf_(50, "D:\\nim\\compiler\\ic\\bitabs.nim");
		T4_ = (n.len-1);
		colontmp_ = T4_;
		nimlf_(90, "D:\\nim\\lib\\system\\iterators_1.nim");
		res = ((NI)0);
		{
			nimln_(91);
			while (1) {
				NU32 eh;
				NI TM__he7ltlUH1wUcaEpjFFHAnQ_16;
				if (!(res <= colontmp_)) goto LA6;
				nimlf_(50, "D:\\nim\\compiler\\ic\\bitabs.nim");
				i = res;
				nimln_(51);
				if (i < 0 || i >= n.len){ raiseIndexError2(i,n.len-1); goto BeforeRet_;
				}
				eh = n.p->data[i];
				nimln_(50);
				{
					NI j;
					NI TM__he7ltlUH1wUcaEpjFFHAnQ_15;
					NI T11_;
					NI T12_;
					nimln_(52);
					if (!((NU32)(((NU32)0)) < (NU32)(eh))) goto LA9_;
					nimln_(53);
					if ((NI64)(eh) < ((NI)(-2147483647 -1)) || (NI64)(eh) > ((NI)2147483647)){ raiseRangeErrorI(eh, ((NI)(-2147483647 -1)), ((NI)2147483647)); goto BeforeRet_;
					}
					if (nimSubInt(((NI) (eh)), ((NI)256), &TM__he7ltlUH1wUcaEpjFFHAnQ_15)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_15) < 0 || (NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_15) >= (*t_p0).vals.len){ raiseIndexError2((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_15),(*t_p0).vals.len-1); goto BeforeRet_;
					}
					T11_ = (NI)0;
					T11_ = hash__pureZjson_u3440((*t_p0).vals.p->data[(NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_15)]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					T12_ = ((*t_p0).keys.len-1);
					j = (NI)(T11_ & T12_);
					{
						nimln_(54);
						while (1) {
							NI T15_;
							if (j < 0 || j >= (*t_p0).keys.len){ raiseIndexError2(j,(*t_p0).keys.len-1); goto BeforeRet_;
							}
							if (!((NU32)(((NU32)0)) < (NU32)((*t_p0).keys.p->data[j]))) goto LA14;
							nimln_(55);
							T15_ = ((*t_p0).keys.len-1);
							j = nextTry__icZbitabs_u9(j, T15_);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						} LA14: ;
					}
					nimln_(56);
					if (j < 0 || j >= (*t_p0).keys.len){ raiseIndexError2(j,(*t_p0).keys.len-1); goto BeforeRet_;
					}
					if (i < 0 || i >= n.len){ raiseIndexError2(i,n.len-1); goto BeforeRet_;
					}
					(*t_p0).keys.p->data[j] = n.p->data[i];
					n.p->data[i] = 0;
				}
LA9_: ;
				nimlf_(93, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(res, ((NI)1), &TM__he7ltlUH1wUcaEpjFFHAnQ_16)) { raiseOverflow(); goto BeforeRet_;
				};
				res = (NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_16);
			} LA6: ;
		}
	}
	nimlf_(47, "D:\\nim\\compiler\\ic\\bitabs.nim");
	eqdestroy___icZic_u1256((&n));
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NU32, getOrIncl__icZic_u3143)(tyObject_BiTable__qSIpmz5s819clC5IoOdEdPg* t_p0, NI64 v_p1) {
	NU32 result;
	NI64 colontmpD_;
	NI origH;
	NI h;
	NI T1_;
	NI T35_;
	NI TM__he7ltlUH1wUcaEpjFFHAnQ_17;
NIM_BOOL* nimErr_;
	nimfr_("getOrIncl", "D:\\nim\\compiler\\ic\\bitabs.nim");
{nimErr_ = nimErrorFlag();
	result = (NU32)0;
	colontmpD_ = (NI64)0;
	nimlf_(70, "D:\\nim\\compiler\\ic\\bitabs.nim");
	origH = hash__pureZjson_u3440(v_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(71);
	T1_ = ((*t_p0).keys.len-1);
	h = (NI)(origH & T1_);
	nimln_(72);
	{
		NI T4_;
		T4_ = (*t_p0).keys.len;
		if (!!((T4_ == ((NI)0)))) goto LA5_;
		{
			nimln_(73);
			while (1) {
				NU32 litId;
				NI T17_;
				nimln_(74);
				if (h < 0 || h >= (*t_p0).keys.len){ raiseIndexError2(h,(*t_p0).keys.len-1); goto BeforeRet_;
				}
				litId = (*t_p0).keys.p->data[h];
				nimln_(75);
				{
					if (!!(((NU32)(((NU32)0)) < (NU32)(litId)))) goto LA11_;
					goto LA7;
				}
LA11_: ;
				nimln_(76);
				{
					NI TM__he7ltlUH1wUcaEpjFFHAnQ_13;
					if (h < 0 || h >= (*t_p0).keys.len){ raiseIndexError2(h,(*t_p0).keys.len-1); goto BeforeRet_;
					}
					if ((NI64)((*t_p0).keys.p->data[h]) < ((NI)(-2147483647 -1)) || (NI64)((*t_p0).keys.p->data[h]) > ((NI)2147483647)){ raiseRangeErrorI((*t_p0).keys.p->data[h], ((NI)(-2147483647 -1)), ((NI)2147483647)); goto BeforeRet_;
					}
					if (nimSubInt(((NI) ((*t_p0).keys.p->data[h])), ((NI)256), &TM__he7ltlUH1wUcaEpjFFHAnQ_13)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_13) < 0 || (NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_13) >= (*t_p0).vals.len){ raiseIndexError2((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_13),(*t_p0).vals.len-1); goto BeforeRet_;
					}
					if (!((*t_p0).vals.p->data[(NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_13)] == v_p1)) goto LA15_;
					nimln_(69);
					nimln_(76);
					result = litId;
					goto BeforeRet_;
				}
LA15_: ;
				nimln_(77);
				T17_ = ((*t_p0).keys.len-1);
				h = nextTry__icZbitabs_u9(h, T17_);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			}
		} LA7: ;
		nimln_(79);
		{
			NI T20_;
			NI T21_;
			NIM_BOOL T22_;
			NI T25_;
			T20_ = (*t_p0).keys.len;
			T21_ = (*t_p0).vals.len;
			T22_ = (NIM_BOOL)0;
			T22_ = mustRehash__icZbitabs_u45(T20_, T21_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if (!T22_) goto LA23_;
			nimln_(80);
			enlarge__icZic_u3171(t_p0);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			nimln_(82);
			T25_ = ((*t_p0).keys.len-1);
			h = (NI)(origH & T25_);
			{
				nimln_(83);
				while (1) {
					NU32 litId_2;
					NI T32_;
					nimln_(84);
					if (h < 0 || h >= (*t_p0).keys.len){ raiseIndexError2(h,(*t_p0).keys.len-1); goto BeforeRet_;
					}
					litId_2 = (*t_p0).keys.p->data[h];
					nimln_(85);
					{
						if (!!(((NU32)(((NU32)0)) < (NU32)(litId_2)))) goto LA30_;
						goto LA26;
					}
LA30_: ;
					nimln_(86);
					T32_ = ((*t_p0).keys.len-1);
					h = nextTry__icZbitabs_u9(h, T32_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
			} LA26: ;
		}
LA23_: ;
	}
	goto LA2_;
LA5_: ;
	{
		NI T34_;
		nimln_(88);
		setLen__icZic_u1129((&(*t_p0).keys), ((NI)16));
		nimln_(89);
		T34_ = ((*t_p0).keys.len-1);
		h = (NI)(origH & T34_);
	}
LA2_: ;
	nimln_(91);
	T35_ = (*t_p0).vals.len;
	if (nimAddInt(T35_, ((NI)256), &TM__he7ltlUH1wUcaEpjFFHAnQ_17)) { raiseOverflow(); goto BeforeRet_;
	};
	result = ((NU32) ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_17)));
	nimln_(92);
	if (h < 0 || h >= (*t_p0).keys.len){ raiseIndexError2(h,(*t_p0).keys.len-1); goto BeforeRet_;
	}
	(*t_p0).keys.p->data[h] = result;
	nimln_(93);
	colontmpD_ = v_p1;
	add__icZic_u3225((&(*t_p0).vals), colontmpD_);
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, store__icZic_u6721)(tyObject_RodFile__Dz9a9armqhjeHywxWY6haCgg* f_p0, tyObject_BiTable__9aSseT9cM7Cq2kjAo9b9bjL0Fw t_p1) {
NIM_BOOL* nimErr_;
	nimfr_("store", "D:\\nim\\compiler\\ic\\bitabs.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(114, "D:\\nim\\compiler\\ic\\bitabs.nim");
	storeSeq__icZic_u6725(f_p0, t_p1.vals);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(115);
	storeSeq__icZic_u6758(f_p0, t_p1.keys);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, store__icZic_u6866)(tyObject_RodFile__Dz9a9armqhjeHywxWY6haCgg* f_p0, tyObject_BiTable__qSIpmz5s819clC5IoOdEdPg t_p1) {
NIM_BOOL* nimErr_;
	nimfr_("store", "D:\\nim\\compiler\\ic\\bitabs.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(114, "D:\\nim\\compiler\\ic\\bitabs.nim");
	storeSeq__icZic_u6870(f_p0, t_p1.vals);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(115);
	storeSeq__icZic_u6758(f_p0, t_p1.keys);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasLitId__icZintegrity_u655)(tyObject_BiTable__9aSseT9cM7Cq2kjAo9b9bjL0Fw t_p0, NU32 x_p1) {
	NIM_BOOL result;
	NI idx;
	NI TM__he7ltlUH1wUcaEpjFFHAnQ_18;
	NIM_BOOL T1_;
	NI T3_;
	nimfr_("hasLitId", "D:\\nim\\compiler\\ic\\bitabs.nim");
{	result = (NIM_BOOL)0;
	nimlf_(43, "D:\\nim\\compiler\\ic\\bitabs.nim");
	if ((NI64)(x_p1) < ((NI)(-2147483647 -1)) || (NI64)(x_p1) > ((NI)2147483647)){ raiseRangeErrorI(x_p1, ((NI)(-2147483647 -1)), ((NI)2147483647)); goto BeforeRet_;
	}
	if (nimSubInt(((NI) (x_p1)), ((NI)256), &TM__he7ltlUH1wUcaEpjFFHAnQ_18)) { raiseOverflow(); goto BeforeRet_;
	};
	idx = (NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_18);
	nimln_(44);
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI)0) <= idx);
	if (!(T1_)) goto LA2_;
	T3_ = t_p0.vals.len;
	T1_ = (idx < T3_);
LA2_: ;
	result = T1_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasLitId__icZintegrity_u733)(tyObject_BiTable__qSIpmz5s819clC5IoOdEdPg t_p0, NU32 x_p1) {
	NIM_BOOL result;
	NI idx;
	NI TM__he7ltlUH1wUcaEpjFFHAnQ_19;
	NIM_BOOL T1_;
	NI T3_;
	nimfr_("hasLitId", "D:\\nim\\compiler\\ic\\bitabs.nim");
{	result = (NIM_BOOL)0;
	nimlf_(43, "D:\\nim\\compiler\\ic\\bitabs.nim");
	if ((NI64)(x_p1) < ((NI)(-2147483647 -1)) || (NI64)(x_p1) > ((NI)2147483647)){ raiseRangeErrorI(x_p1, ((NI)(-2147483647 -1)), ((NI)2147483647)); goto BeforeRet_;
	}
	if (nimSubInt(((NI) (x_p1)), ((NI)256), &TM__he7ltlUH1wUcaEpjFFHAnQ_19)) { raiseOverflow(); goto BeforeRet_;
	};
	idx = (NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_19);
	nimln_(44);
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI)0) <= idx);
	if (!(T1_)) goto LA2_;
	T3_ = t_p0.vals.len;
	T1_ = (idx < T3_);
LA2_: ;
	result = T1_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NU32, getKeyId__icZnavigator_u354)(tyObject_BiTable__9aSseT9cM7Cq2kjAo9b9bjL0Fw t_p0, NimStringV2 v_p1) {
	NU32 result;
	NI origH;
	NI h;
	NI T1_;
NIM_BOOL* nimErr_;
	nimfr_("getKeyId", "D:\\nim\\compiler\\ic\\bitabs.nim");
{nimErr_ = nimErrorFlag();
	result = (NU32)0;
	nimlf_(59, "D:\\nim\\compiler\\ic\\bitabs.nim");
	origH = hash__pureZhashes_u284(v_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(60);
	T1_ = (t_p0.keys.len-1);
	h = (NI)(origH & T1_);
	nimln_(61);
	{
		NI T4_;
		T4_ = t_p0.keys.len;
		if (!!((T4_ == ((NI)0)))) goto LA5_;
		{
			nimln_(62);
			while (1) {
				NU32 litId;
				NI T17_;
				nimln_(63);
				if (h < 0 || h >= t_p0.keys.len){ raiseIndexError2(h,t_p0.keys.len-1); goto BeforeRet_;
				}
				litId = t_p0.keys.p->data[h];
				nimln_(64);
				{
					if (!!(((NU32)(((NU32)0)) < (NU32)(litId)))) goto LA11_;
					goto LA7;
				}
LA11_: ;
				nimln_(65);
				{
					NI TM__he7ltlUH1wUcaEpjFFHAnQ_20;
					if (h < 0 || h >= t_p0.keys.len){ raiseIndexError2(h,t_p0.keys.len-1); goto BeforeRet_;
					}
					if ((NI64)(t_p0.keys.p->data[h]) < ((NI)(-2147483647 -1)) || (NI64)(t_p0.keys.p->data[h]) > ((NI)2147483647)){ raiseRangeErrorI(t_p0.keys.p->data[h], ((NI)(-2147483647 -1)), ((NI)2147483647)); goto BeforeRet_;
					}
					if (nimSubInt(((NI) (t_p0.keys.p->data[h])), ((NI)256), &TM__he7ltlUH1wUcaEpjFFHAnQ_20)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_20) < 0 || (NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_20) >= t_p0.vals.len){ raiseIndexError2((NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_20),t_p0.vals.len-1); goto BeforeRet_;
					}
					if (!eqStrings(t_p0.vals.p->data[(NI)(TM__he7ltlUH1wUcaEpjFFHAnQ_20)], v_p1)) goto LA15_;
					nimln_(58);
					nimln_(65);
					result = litId;
					goto BeforeRet_;
				}
LA15_: ;
				nimln_(66);
				T17_ = (t_p0.keys.len-1);
				h = nextTry__icZbitabs_u9(h, T17_);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			}
		} LA7: ;
	}
LA5_: ;
	nimln_(67);
	nimln_(58);
	nimln_(67);
	result = ((NU32)0);
	goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, len__icZic_u12474)(tyObject_BiTable__9aSseT9cM7Cq2kjAo9b9bjL0Fw t_p0) {
	NI result;
	NI T1_;
	nimfr_("len", "D:\\nim\\compiler\\ic\\bitabs.nim");
	result = (NI)0;
	nimlf_(29, "D:\\nim\\compiler\\ic\\bitabs.nim");
	T1_ = t_p0.vals.len;
	result = T1_;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, len__icZic_u12527)(tyObject_BiTable__qSIpmz5s819clC5IoOdEdPg t_p0) {
	NI result;
	NI T1_;
	nimfr_("len", "D:\\nim\\compiler\\ic\\bitabs.nim");
	result = (NI)0;
	nimlf_(29, "D:\\nim\\compiler\\ic\\bitabs.nim");
	T1_ = t_p0.vals.len;
	result = T1_;
	popFrame();
	return result;
}
