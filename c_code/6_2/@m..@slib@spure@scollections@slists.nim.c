/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64

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

typedef struct tyObject_SinglyLinkedList__TLmTCLjxUi7X6D0zUDoztQ tyObject_SinglyLinkedList__TLmTCLjxUi7X6D0zUDoztQ;
typedef struct tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg;
typedef struct tyTuple__JWpQeX2RsSEwGE19cHVMN5Q tyTuple__JWpQeX2RsSEwGE19cHVMN5Q;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw;
typedef struct tyObject_GcEnv__QjGykddUfJIPRbAOaJI9bUQ tyObject_GcEnv__QjGykddUfJIPRbAOaJI9bUQ;
typedef struct tyObject_CellSeq__HiBrB07fIRJZr7JYh5xuKg tyObject_CellSeq__HiBrB07fIRJZr7JYh5xuKg;
typedef struct tyTuple__N4J9cV4JZGem3ljqqj5rT0Q tyTuple__N4J9cV4JZGem3ljqqj5rT0Q;
typedef struct tyObject_CellSeq__BOk7ic6L7NfTl6S6mZpEtw tyObject_CellSeq__BOk7ic6L7NfTl6S6mZpEtw;
typedef struct tyTuple__3pGbhq1v4f9ajRLJHtTEuYg tyTuple__3pGbhq1v4f9ajRLJHtTEuYg;
struct tyObject_SinglyLinkedList__TLmTCLjxUi7X6D0zUDoztQ {
	tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* head;
	tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* tail;
};
typedef NU8 tyEnum_FootnoteType__ZcmIjDOXhFMAciZ1evGT5Q;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tyTuple__JWpQeX2RsSEwGE19cHVMN5Q {
tyEnum_FootnoteType__ZcmIjDOXhFMAciZ1evGT5Q Field0;
NI Field1;
NI Field2;
NI Field3;
NimStringV2 Field4;
};
struct tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg {
	tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* next;
	tyTuple__JWpQeX2RsSEwGE19cHVMN5Q value;
};
struct tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw {
	NI rc;
	NI rootIdx;
};
struct tyObject_CellSeq__HiBrB07fIRJZr7JYh5xuKg {
	NI len;
	NI cap;
	tyTuple__N4J9cV4JZGem3ljqqj5rT0Q* d;
};
struct tyObject_CellSeq__BOk7ic6L7NfTl6S6mZpEtw {
	NI len;
	NI cap;
	tyTuple__3pGbhq1v4f9ajRLJHtTEuYg* d;
};
struct tyObject_GcEnv__QjGykddUfJIPRbAOaJI9bUQ {
	tyObject_CellSeq__HiBrB07fIRJZr7JYh5xuKg traceStack;
	tyObject_CellSeq__BOk7ic6L7NfTl6S6mZpEtw toFree;
	NI freed;
	NI touched;
	NI edges;
	NI rcSum;
	NIM_BOOL keepThreshold;
};
struct tyTuple__N4J9cV4JZGem3ljqqj5rT0Q {
void** Field0;
TNimTypeV2* Field1;
};
typedef tyTuple__N4J9cV4JZGem3ljqqj5rT0Q tyUncheckedArray__72XmdLy0QAaMtx66AmNKfA[1];
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
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4292)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, add__packagesZdocutilsZrst_u8738)(tyObject_SinglyLinkedList__TLmTCLjxUi7X6D0zUDoztQ* L_p0, tyTuple__JWpQeX2RsSEwGE19cHVMN5Q* value_p1);
static N_INLINE(void, add__packagesZdocutilsZrst_u8883)(tyObject_SinglyLinkedList__TLmTCLjxUi7X6D0zUDoztQ* L_p0, tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* n_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___packagesZdocutilsZrst_u8763)(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg** dest_p0, tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* src_p1);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicStatic)(void* p_p0, TNimTypeV2* desc_p1);
static N_INLINE(NI, minuspercent___system_u790)(NI x_p0, NI y_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_u3249)(NIM_BOOL isDestroyAction_p0, tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw* s_p1, TNimTypeV2* desc_p2);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrst_u8772)(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p_p0, NI alignment_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
static N_INLINE(void, nimTraceRef)(void* q_p0, TNimTypeV2* desc_p1, void* env_p2);
static N_INLINE(void, add__system_u2746)(tyObject_CellSeq__HiBrB07fIRJZr7JYh5xuKg* s_p0, void** c_p1, TNimTypeV2* t_p2);
N_LIB_PRIVATE N_NOCONV(void*, allocImpl__system_u1736)(NI size_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NOCONV(void, dealloc)(void* p_p0);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___packagesZdocutilsZrst_u8759)(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg** dest_p0, tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* src_p1, NIM_BOOL cyclic_p2);
static N_INLINE(void, nimIncRefCyclic)(void* p_p0, NIM_BOOL cyclic_p1);
N_LIB_PRIVATE N_NIMCALL(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg*, newSinglyLinkedNode__packagesZdocutilsZrst_u8746)(tyTuple__JWpQeX2RsSEwGE19cHVMN5Q* value_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrst_u8756)(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg** dest_p0);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size_p0, NI alignment_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___packagesZdocutilsZrst_u3569)(tyTuple__JWpQeX2RsSEwGE19cHVMN5Q* dest_p0, tyTuple__JWpQeX2RsSEwGE19cHVMN5Q* src_p1);
extern TNimTypeV2 NTIv2__lqmaMtVWpgqsQZvVhCPQVg_;
static const struct {
  NI cap; NIM_CHAR data[68+1];
} TM__GgdsoWf9aLiRcyab0ssmwlQ_7 = { 68 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\pure\\collections\\lists.nim(429, 11) `L.tail.next == nil` " };
static const NimStringV2 TM__GgdsoWf9aLiRcyab0ssmwlQ_8 = {68, (NimStrPayload*)&TM__GgdsoWf9aLiRcyab0ssmwlQ_7};
extern NIM_BOOL nimInErrorMode__system_u4095;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a_p0, v_p1, ((size_t) (size_p2)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4095);
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
		if (!(framePtr__system_u3741 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s_p0).calldepth = ((NI16)0);
	}
	goto LA1_;
LA3_: ;
	{
		(*s_p0).calldepth = (NI16)((*framePtr__system_u3741).calldepth + ((NI16)1));
	}
LA1_: ;
	(*s_p0).prev = framePtr__system_u3741;
	framePtr__system_u3741 = s_p0;
	{
		if (!((*s_p0).calldepth == ((NI16)2000))) goto LA8_;
		callDepthLimitReached__system_u4292();
	}
LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_u3741 = (*framePtr__system_u3741).prev;
}
N_LIB_PRIVATE N_NIMCALL(void, initSinglyLinkedList__packagesZdocutilsZrst_u8636)(tyObject_SinglyLinkedList__TLmTCLjxUi7X6D0zUDoztQ* Result) {
	nimfr_("initSinglyLinkedList", "D:\\nim\\lib\\pure\\collections\\lists.nim");
	nimZeroMem((void*)Result, sizeof(tyObject_SinglyLinkedList__TLmTCLjxUi7X6D0zUDoztQ));
	popFrame();
}
static N_INLINE(NI, minuspercent___system_u790)(NI x_p0, NI y_p1) {
	NI result;
	nimfr_("-%", "D:\\nim\\lib\\system\\arithmetics.nim");
	result = (NI)0;
	nimlf_(363, "D:\\nim\\lib\\system\\arithmetics.nim");
	nimln_(364);
	nimln_(368);
	result = ((NI) ((NU)((NU64)(((NU) (x_p0))) - (NU64)(((NU) (y_p1))))));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicStatic)(void* p_p0, TNimTypeV2* desc_p1) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
	nimfr_("nimDecRefIsLastCyclicStatic", "D:\\nim\\lib\\system\\orc.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimlf_(502, "D:\\nim\\lib\\system\\orc.nim");
	{
		tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw* cell;
		NI T5_;
		if (!!((p_p0 == NIM_NIL))) goto LA3_;
		nimln_(503);
		nimlf_(43, "D:\\nim\\lib\\system\\arc.nim");
		T5_ = (NI)0;
		T5_ = minuspercent___system_u790(((NI) (ptrdiff_t) (p_p0)), ((NI)16));
		cell = ((tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw*) (T5_));
		nimlf_(504, "D:\\nim\\lib\\system\\orc.nim");
		{
			if (!((NI)((*cell).rc & ((NI)-16)) == ((NI)0))) goto LA8_;
			nimln_(505);
			result = NIM_TRUE;
		}
		goto LA6_;
LA8_: ;
		{
			NI TM__GgdsoWf9aLiRcyab0ssmwlQ_2;
			nimln_(508);
			if (nimSubInt((*cell).rc, ((NI)16), &TM__GgdsoWf9aLiRcyab0ssmwlQ_2)) { raiseOverflow(); goto BeforeRet_;
			};
			(*cell).rc = (NI)(TM__GgdsoWf9aLiRcyab0ssmwlQ_2);
		}
LA6_: ;
		nimln_(510);
		rememberCycle__system_u3249(result, cell, desc_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrst_u8772)(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* dest_p0) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic((*dest_p0).next, (&NTIv2__lqmaMtVWpgqsQZvVhCPQVg_));
		if (!T3_) goto LA4_;
		eqdestroy___packagesZdocutilsZrst_u8772((*dest_p0).next);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest_p0).next, ((NI)8));
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).value.Field4));
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
static N_INLINE(void, add__system_u2746)(tyObject_CellSeq__HiBrB07fIRJZr7JYh5xuKg* s_p0, void** c_p1, TNimTypeV2* t_p2) {
	void** colontmp_;
	TNimTypeV2* colontmp__2;
	NI TM__GgdsoWf9aLiRcyab0ssmwlQ_6;
	nimfr_("add", "D:\\nim\\lib\\system\\cellseqs_v2.nim");
{	nimlf_(20, "D:\\nim\\lib\\system\\cellseqs_v2.nim");
	{
		NI TM__GgdsoWf9aLiRcyab0ssmwlQ_3;
		tyTuple__N4J9cV4JZGem3ljqqj5rT0Q* d;
		NI TM__GgdsoWf9aLiRcyab0ssmwlQ_4;
		void* T5_;
		NI TM__GgdsoWf9aLiRcyab0ssmwlQ_5;
		if (!((*s_p0).cap <= (*s_p0).len)) goto LA3_;
		nimln_(21);
		if (nimMulInt((*s_p0).cap, ((NI)3), &TM__GgdsoWf9aLiRcyab0ssmwlQ_3)) { raiseOverflow(); goto BeforeRet_;
		};
		(*s_p0).cap = (NI)((NI)(TM__GgdsoWf9aLiRcyab0ssmwlQ_3) / ((NI)2));
		nimln_(25);
		if (nimMulInt((*s_p0).cap, ((NI)16), &TM__GgdsoWf9aLiRcyab0ssmwlQ_4)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__GgdsoWf9aLiRcyab0ssmwlQ_4)) < ((NI)0) || ((NI)(TM__GgdsoWf9aLiRcyab0ssmwlQ_4)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__GgdsoWf9aLiRcyab0ssmwlQ_4), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
		}
		T5_ = (void*)0;
		T5_ = allocImpl__system_u1736(((NI) ((NI)(TM__GgdsoWf9aLiRcyab0ssmwlQ_4))));
		d = ((tyTuple__N4J9cV4JZGem3ljqqj5rT0Q*) (T5_));
		nimln_(26);
		if (nimMulInt((*s_p0).len, ((NI)16), &TM__GgdsoWf9aLiRcyab0ssmwlQ_5)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__GgdsoWf9aLiRcyab0ssmwlQ_5)) < ((NI)0) || ((NI)(TM__GgdsoWf9aLiRcyab0ssmwlQ_5)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__GgdsoWf9aLiRcyab0ssmwlQ_5), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) (d)), ((void*) ((*s_p0).d)), ((NI) ((NI)(TM__GgdsoWf9aLiRcyab0ssmwlQ_5))));
		nimln_(30);
		dealloc(((void*) ((*s_p0).d)));
		nimln_(31);
		(*s_p0).d = d;
	}
LA3_: ;
	nimln_(33);
	colontmp_ = c_p1;
	colontmp__2 = t_p2;
	(*s_p0).d[(*s_p0).len].Field0 = colontmp_;
	(*s_p0).d[(*s_p0).len].Field1 = colontmp__2;
	nimln_(34);
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__GgdsoWf9aLiRcyab0ssmwlQ_6)) { raiseOverflow(); goto BeforeRet_;
	};
	(*s_p0).len = (NI)(TM__GgdsoWf9aLiRcyab0ssmwlQ_6);
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(void, nimTraceRef)(void* q_p0, TNimTypeV2* desc_p1, void* env_p2) {
	void** p;
	nimfr_("nimTraceRef", "D:\\nim\\lib\\system\\orc.nim");
	nimlf_(123, "D:\\nim\\lib\\system\\orc.nim");
	p = ((void**) (q_p0));
	nimln_(124);
	{
		tyObject_GcEnv__QjGykddUfJIPRbAOaJI9bUQ* j;
		if (!!(((*p) == NIM_NIL))) goto LA3_;
		nimln_(128);
		j = ((tyObject_GcEnv__QjGykddUfJIPRbAOaJI9bUQ*) (env_p2));
		nimln_(129);
		add__system_u2746((&(*j).traceStack), p, desc_p1);
	}
LA3_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___packagesZdocutilsZrst_u8781)(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* dest_p0, void* env_p1) {
	nimTraceRef(&(*dest_p0).next, (&NTIv2__lqmaMtVWpgqsQZvVhCPQVg_), env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___packagesZdocutilsZrst_u8763)(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg** dest_p0, tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* src_p1) {
	tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* colontmp_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmp_ = (*dest_p0);
	(*dest_p0) = src_p1;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic(colontmp_, (&NTIv2__lqmaMtVWpgqsQZvVhCPQVg_));
		if (!T3_) goto LA4_;
		eqdestroy___packagesZdocutilsZrst_u8772(colontmp_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose(colontmp_, ((NI)8));
	}
LA4_: ;
	}
BeforeRet_: ;
}
static N_INLINE(void, nimIncRefCyclic)(void* p_p0, NIM_BOOL cyclic_p1) {
	tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw* h;
	NI T1_;
	NI TM__GgdsoWf9aLiRcyab0ssmwlQ_9;
	nimfr_("nimIncRefCyclic", "D:\\nim\\lib\\system\\orc.nim");
{	nimlf_(45, "D:\\nim\\lib\\system\\orc.nim");
	nimlf_(43, "D:\\nim\\lib\\system\\arc.nim");
	T1_ = (NI)0;
	T1_ = minuspercent___system_u790(((NI) (ptrdiff_t) (p_p0)), ((NI)16));
	h = ((tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw*) (T1_));
	nimlf_(46, "D:\\nim\\lib\\system\\orc.nim");
	if (nimAddInt((*h).rc, ((NI)16), &TM__GgdsoWf9aLiRcyab0ssmwlQ_9)) { raiseOverflow(); goto BeforeRet_;
	};
	(*h).rc = (NI)(TM__GgdsoWf9aLiRcyab0ssmwlQ_9);
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___packagesZdocutilsZrst_u8759)(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg** dest_p0, tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* src_p1, NIM_BOOL cyclic_p2) {
	tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* colontmp_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	colontmp_ = (*dest_p0);
	{
		if (!src_p1) goto LA3_;
		nimIncRefCyclic(src_p1, cyclic_p2);
	}
LA3_: ;
	(*dest_p0) = src_p1;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLastCyclicStatic(colontmp_, (&NTIv2__lqmaMtVWpgqsQZvVhCPQVg_));
		if (!T7_) goto LA8_;
		eqdestroy___packagesZdocutilsZrst_u8772(colontmp_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose(colontmp_, ((NI)8));
	}
LA8_: ;
	}
BeforeRet_: ;
}
static N_INLINE(void, add__packagesZdocutilsZrst_u8883)(tyObject_SinglyLinkedList__TLmTCLjxUi7X6D0zUDoztQ* L_p0, tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* n_p1) {
NIM_BOOL* nimErr_;
	nimfr_("add", "D:\\nim\\lib\\pure\\collections\\lists.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(165, "D:\\nim\\lib\\pure\\collections\\lists.nim");
	eqsink___packagesZdocutilsZrst_u8763(&(*n_p1).next, ((tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg*) NIM_NIL));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(428);
	{
		if (!!(((*L_p0).tail == ((tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg*) NIM_NIL)))) goto LA3_;
		nimln_(429);
		{
			if (!!(((*(*L_p0).tail).next == ((tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg*) NIM_NIL)))) goto LA7_;
			failedAssertImpl__stdZassertions_u274(TM__GgdsoWf9aLiRcyab0ssmwlQ_8);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
LA7_: ;
		nimln_(165);
		eqcopy___packagesZdocutilsZrst_u8759(&(*(*L_p0).tail).next, n_p1, NIM_TRUE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(431);
	(*L_p0).tail = n_p1;
	nimln_(432);
	{
		if (!((*L_p0).head == ((tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg*) NIM_NIL))) goto LA11_;
		nimln_(165);
		eqcopy___packagesZdocutilsZrst_u8759(&(*L_p0).head, n_p1, NIM_TRUE);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA11_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrst_u8756)(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg** dest_p0) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic((*dest_p0), (&NTIv2__lqmaMtVWpgqsQZvVhCPQVg_));
		if (!T3_) goto LA4_;
		eqdestroy___packagesZdocutilsZrst_u8772((*dest_p0));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest_p0), ((NI)8));
	}
LA4_: ;
	}
BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg*, newSinglyLinkedNode__packagesZdocutilsZrst_u8746)(tyTuple__JWpQeX2RsSEwGE19cHVMN5Q* value_p0) {
	tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* result;
NIM_BOOL* nimErr_;
	nimfr_("newSinglyLinkedNode", "D:\\nim\\lib\\pure\\collections\\lists.nim");
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	nimlf_(165, "D:\\nim\\lib\\pure\\collections\\lists.nim");
	eqdestroy___packagesZdocutilsZrst_u8756(&result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = (tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg*) nimNewObj(sizeof(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg), NIM_ALIGNOF(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg));
	nimlf_(903, "D:\\nim\\lib\\system.nim");
	eqcopy___packagesZdocutilsZrst_u3569((&(*result).value), value_p0);
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(void, add__packagesZdocutilsZrst_u8738)(tyObject_SinglyLinkedList__TLmTCLjxUi7X6D0zUDoztQ* L_p0, tyTuple__JWpQeX2RsSEwGE19cHVMN5Q* value_p1) {
	tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* colontmpD_;
NIM_BOOL* nimErr_;
	nimfr_("add", "D:\\nim\\lib\\pure\\collections\\lists.nim");
{nimErr_ = nimErrorFlag();
	colontmpD_ = NIM_NIL;
	nimlf_(448, "D:\\nim\\lib\\pure\\collections\\lists.nim");
	colontmpD_ = newSinglyLinkedNode__packagesZdocutilsZrst_u8746(value_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	add__packagesZdocutilsZrst_u8883(L_p0, colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(165);
	eqdestroy___packagesZdocutilsZrst_u8756(&colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, append__packagesZdocutilsZrst_u8663)(tyObject_SinglyLinkedList__TLmTCLjxUi7X6D0zUDoztQ* a_p0, tyTuple__JWpQeX2RsSEwGE19cHVMN5Q* b_p1) {
NIM_BOOL* nimErr_;
	nimfr_("append", "D:\\nim\\lib\\pure\\collections\\lists.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(977, "D:\\nim\\lib\\pure\\collections\\lists.nim");
	add__packagesZdocutilsZrst_u8738(a_p0, b_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg*, newSinglyLinkedNode__packagesZdocutilsZrst_u9297)(tyTuple__JWpQeX2RsSEwGE19cHVMN5Q* value_p0) {
	tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg* result;
NIM_BOOL* nimErr_;
	nimfr_("newSinglyLinkedNode", "D:\\nim\\lib\\pure\\collections\\lists.nim");
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	nimlf_(165, "D:\\nim\\lib\\pure\\collections\\lists.nim");
	eqdestroy___packagesZdocutilsZrst_u8756(&result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = (tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg*) nimNewObj(sizeof(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg), NIM_ALIGNOF(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg));
	nimlf_(903, "D:\\nim\\lib\\system.nim");
	eqcopy___packagesZdocutilsZrst_u3569((&(*result).value), value_p0);
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___packagesZdocutilsZrst_u8753)(tyObject_SinglyLinkedNodeObj__lqmaMtVWpgqsQZvVhCPQVg** dest_p0) {
	(*dest_p0) = 0;
}
N_LIB_PRIVATE N_NIMCALL(void, append__packagesZdocutilsZrst_u9366)(tyObject_SinglyLinkedList__TLmTCLjxUi7X6D0zUDoztQ* a_p0, tyTuple__JWpQeX2RsSEwGE19cHVMN5Q* b_p1) {
NIM_BOOL* nimErr_;
	nimfr_("append", "D:\\nim\\lib\\pure\\collections\\lists.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(977, "D:\\nim\\lib\\pure\\collections\\lists.nim");
	add__packagesZdocutilsZrst_u8738(a_p0, b_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___packagesZdocutilsZrst_u9606)(tyObject_SinglyLinkedList__TLmTCLjxUi7X6D0zUDoztQ* dest_p0) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicStatic((*dest_p0).head, (&NTIv2__lqmaMtVWpgqsQZvVhCPQVg_));
		if (!T3_) goto LA4_;
		eqdestroy___packagesZdocutilsZrst_u8772((*dest_p0).head);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimRawDispose((*dest_p0).head, ((NI)8));
	}
LA4_: ;
	}
BeforeRet_: ;
}
