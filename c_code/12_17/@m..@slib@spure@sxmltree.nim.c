/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

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
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
N_NIMCALL(NimStringV2, rawNewString)(NI cap_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(void, addEscaped__pureZxmltree_u1078)(NimStringV2* result_p0, NimStringV2 s_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4289)(void);
static N_INLINE(void, popFrame)(void);
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_2 = { 4 | NIM_STRLIT_FLAG, "&lt;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_3 = {4, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_2};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6 = { 4 | NIM_STRLIT_FLAG, "&gt;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_7 = {4, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8 = { 5 | NIM_STRLIT_FLAG, "&amp;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_9 = {5, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_10 = { 6 | NIM_STRLIT_FLAG, "&quot;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_11 = {6, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_10};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_12 = { 6 | NIM_STRLIT_FLAG, "&apos;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_13 = {6, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_12};
static const struct {
  NI cap; NIM_CHAR data[111+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_17 = { 111 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\system\\iterators.nim(264, 11) `len(a) == L` the length of the string changed while iterating over it" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_18 = {111, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_17};
extern NIM_BOOL nimInErrorMode__system_u4092;
extern TFrame* framePtr__system_u3738;
extern TFrame* framePtr__system_u3738;
extern TFrame* framePtr__system_u3738;
extern TFrame* framePtr__system_u3738;
extern TFrame* framePtr__system_u3738;
extern TFrame* framePtr__system_u3738;
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest_p0, source_p1, ((size_t) (size_p2)));
}
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2) {
	nimCopyMem(dest_p0, source_p1, size_p2);
}
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2) {
	NIM_BOOL result;
	NI r;
	result = (NIM_BOOL)0;
	r = ((NI) ((NU)((NU64)(((NU) (a_p0))) + (NU64)(((NU) (b_p1))))));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI)0) <= (NI)(r ^ a_p0));
		if (T3_) goto LA4_;
		T3_ = (((NI)0) <= (NI)(r ^ b_p1));
LA4_: ;
		if (!T3_) goto LA5_;
		(*res_p2) = r;
	}
	goto LA1_;
LA5_: ;
	{
		result = NIM_TRUE;
	}
LA1_: ;
	return result;
}
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1) {
{	{
		NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4;
		NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4)) < ((NI)0) || ((NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5);
	}
LA3_: ;
	}
BeforeRet_: ;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1) {
	NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_14;
	NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_15;
{	prepareAdd(s_p0, ((NI)1));
	(*(*s_p0).p).data[(*s_p0).len] = c_p1;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_14)) { raiseOverflow(); goto BeforeRet_;
	};
	(*(*s_p0).p).data[(NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_14)] = 0;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_15)) { raiseOverflow(); goto BeforeRet_;
	};
	(*s_p0).len = (NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_15);
	}
BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, addEscaped__pureZxmltree_u1078)(NimStringV2* result_p0, NimStringV2 s_p1) {
NIM_BOOL* nimErr_;
	nimfr_("addEscaped", "D:\\nim\\lib\\pure\\xmltree.nim");
{nimErr_ = nimErrorFlag();
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		nimlf_(259, "D:\\nim\\lib\\system\\iterators.nim");
		i = ((NI)0);
		nimln_(260);
		L = s_p1.len;
		{
			nimln_(261);
			while (1) {
				NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_16;
				if (!(i < L)) goto LA3;
				nimlf_(700, "D:\\nim\\lib\\pure\\xmltree.nim");
				if (i < 0 || i >= s_p1.len){ raiseIndexError2(i,s_p1.len-1); goto BeforeRet_;
				}
				c = s_p1.p->data[i];
				switch (((NU8)(c))) {
				case 60:
				{
					nimln_(702);
					prepareAdd((&(*result_p0)), 4);
appendString((&(*result_p0)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_3);
				}
				break;
				case 62:
				{
					nimln_(703);
					prepareAdd((&(*result_p0)), 4);
appendString((&(*result_p0)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_7);
				}
				break;
				case 38:
				{
					nimln_(704);
					prepareAdd((&(*result_p0)), 5);
appendString((&(*result_p0)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_9);
				}
				break;
				case 34:
				{
					nimln_(705);
					prepareAdd((&(*result_p0)), 6);
appendString((&(*result_p0)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_11);
				}
				break;
				case 39:
				{
					nimln_(706);
					prepareAdd((&(*result_p0)), 6);
appendString((&(*result_p0)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_13);
				}
				break;
				default:
				{
					nimln_(707);
					nimAddCharV1((&(*result_p0)), c);
				}
				break;
				}
				nimlf_(263, "D:\\nim\\lib\\system\\iterators.nim");
				if (nimAddInt(i, ((NI)1), &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_16)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_16);
				nimln_(264);
				{
					if (!!((s_p1.len == L))) goto LA12_;
					failedAssertImpl__stdZassertions_u274(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_18);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
LA12_: ;
			} LA3: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, escape__pureZxmltree_u1082)(NimStringV2 s_p0) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
	nimfr_("escape", "D:\\nim\\lib\\pure\\xmltree.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(725, "D:\\nim\\lib\\pure\\xmltree.nim");
	if ((s_p0.len) < ((NI)0) || (s_p0.len) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI(s_p0.len, ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
	}
	result = rawNewString(((NI) (s_p0.len)));
	nimln_(726);
	addEscaped__pureZxmltree_u1078((&result), s_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
