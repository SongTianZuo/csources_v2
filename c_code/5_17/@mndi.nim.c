/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64
#define NIM_EmulateOverflowChecks

#include "nimbase.h"
#include <stdio.h>
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

typedef struct tyObject_NdiFile__vx5QX5LKAffAhqVahibQvg tyObject_NdiFile__vx5QX5LKAffAhqVahibQvg;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw;
typedef struct tySequence__r9bzIJHCMzMaVrRBafZGiIA tySequence__r9bzIJHCMzMaVrRBafZGiIA;
typedef struct tySequence__r9bzIJHCMzMaVrRBafZGiIA_Content tySequence__r9bzIJHCMzMaVrRBafZGiIA_Content;
typedef struct tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw;
typedef struct tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg;
typedef struct tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA;
typedef struct tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ;
typedef struct tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg;
typedef struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA;
typedef struct tyObject_TLoc__uPq8MyfraByuDcxcywjdTg tyObject_TLoc__uPq8MyfraByuDcxcywjdTg;
typedef struct tyObject_TLib__D3tgh5eiXMEtvqp1Qgv3cQ tyObject_TLib__D3tgh5eiXMEtvqp1Qgv3cQ;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tySequence__r9bzIJHCMzMaVrRBafZGiIA {
  NI len; tySequence__r9bzIJHCMzMaVrRBafZGiIA_Content* p;
};
struct tyObject_NdiFile__vx5QX5LKAffAhqVahibQvg {
	NIM_BOOL enabled;
	FILE* f;
	NimStringV2 buf;
	NimStringV2 filename;
	tySequence__r9bzIJHCMzMaVrRBafZGiIA syms;
};
typedef NU8 tyEnum_FileMode__9atfYUlw9bQtL4ixYGhUZZfQ;
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
struct tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg {
	NI32 module;
	NI32 item;
};
struct tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA {
  RootObj Sup;
	tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg itemId;
};
typedef NU8 tyEnum_TSymKind__WEw9cZhlaQ0BBcFYZb9b9cOYg;
typedef NU16 tyEnum_TMagic__kSp6H9c8v2GSNPgE9bRnqBSw;
struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA {
	NU16 line;
	NI16 col;
	NI32 fileIndex;
};
typedef NU64 tySet_tyEnum_TSymFlag__KpFDhwzyzhjZdX3UjhPXbQ;
typedef NU32 tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA;
typedef NU8 tyEnum_TLocKind__JpsvRtP32n2RJH3bpHPz8Q;
typedef NU8 tyEnum_TStorageLoc__waio82fFJ4cV9atPhu27DWA;
typedef NU16 tySet_tyEnum_TLocFlag__xD65uqIe72bODUQQ6QCppQ;
struct tyObject_TLoc__uPq8MyfraByuDcxcywjdTg {
	tyEnum_TLocKind__JpsvRtP32n2RJH3bpHPz8Q k;
	tyEnum_TStorageLoc__waio82fFJ4cV9atPhu27DWA storage;
	tySet_tyEnum_TLocFlag__xD65uqIe72bODUQQ6QCppQ flags;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* lode;
	NimStringV2 r;
};
struct tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw {
  tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA Sup;
	tyEnum_TSymKind__WEw9cZhlaQ0BBcFYZb9b9cOYg kind;
union{
struct {	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* gcUnsafetyReason;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* transformedBody;
} _kind_1;
struct {	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* guard;
	NI bitsize;
	NI alignment;
} _kind_2;
};
	tyEnum_TMagic__kSp6H9c8v2GSNPgE9bRnqBSw magic;
	tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* typ;
	tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg* name;
	tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA info;
	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* owner;
	tySet_tyEnum_TSymFlag__KpFDhwzyzhjZdX3UjhPXbQ flags;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* ast;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA options;
	NI position;
	NI32 offset;
	NI32 disamb;
	tyObject_TLoc__uPq8MyfraByuDcxcywjdTg loc;
	tyObject_TLib__D3tgh5eiXMEtvqp1Qgv3cQ* annex;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* constraint;
};
typedef NimStringV2 tyArray__Re75IspeoxXy2oCZHwcRrA[2];
struct tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg {
	NI id;
	NimStringV2 s;
	tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg* next;
	NI h;
};
typedef NimStringV2 tyArray__sMpvt1sOxOJ3LFGulnbeMQ[4];


#ifndef tySequence__r9bzIJHCMzMaVrRBafZGiIA_Content_PP
#define tySequence__r9bzIJHCMzMaVrRBafZGiIA_Content_PP
struct tySequence__r9bzIJHCMzMaVrRBafZGiIA_Content { NI cap; tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(NIM_BOOL, isEmpty__options_u5810)(NimStringV2 x_p0);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4312)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_u22)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_NIMCALL(NimStringV2, rawNewString)(NI cap_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(FILE*, open__stdZsyncio_u463)(NimStringV2 filename_p0, tyEnum_FileMode__9atfYUlw9bQtL4ixYGhUZZfQ mode_p1, NI bufSize_p2);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NIMCALL(void, doWrite__ndi_u14)(tyObject_NdiFile__vx5QX5LKAffAhqVahibQvg* f_p0, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* s_p1, tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p2);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s_p0, NI newLen_p1);
static N_INLINE(void, addInt__stdZprivateZdigitsutils_u189)(NimStringV2* result_p0, NI x_p1);
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_u172)(NimStringV2* result_p0, NI64 x_p1);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
N_LIB_PRIVATE N_NIMCALL(void, write__stdZsyncio_u340)(FILE* f_p0, NimStringV2* a_p1, NI a_p1Len_0);
N_LIB_PRIVATE N_NIMCALL(void, writeRope__ropes_u23)(FILE* f_p0, NimStringV2 r_p1);
static N_INLINE(void, writeLine__msgs_u481)(FILE* f_p0, NimStringV2* x_p1, NI x_p1Len_0);
N_LIB_PRIVATE N_NIMCALL(void, write__stdZsyncio_u238)(FILE* f_p0, NimStringV2 s_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toFullPath__msgs_u623)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, NI32 fileIdx_p1);
N_LIB_PRIVATE N_NIMCALL(void, close__stdZsyncio_u250)(FILE* f_p0);
N_LIB_PRIVATE N_NIMCALL(void, reset__ndi_u49)(tySequence__r9bzIJHCMzMaVrRBafZGiIA* obj_p0);
N_LIB_PRIVATE N_NIMCALL(void, reset__options_u3535)(NimStringV2* obj_p0);
static const struct {
  NI cap; NIM_CHAR data[44+1];
} TM__9bjXlRg9ajY35u7ap75QbU6A_2 = { 44 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\ndi.nim(47, 5) `f.f != nil` " };
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_3 = {44, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_2};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__9bjXlRg9ajY35u7ap75QbU6A_6 = { 1 | NIM_STRLIT_FLAG, "\011" };
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_7 = {1, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_6};
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_8 = {1, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_6};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__9bjXlRg9ajY35u7ap75QbU6A_10 = { 1 | NIM_STRLIT_FLAG, "\012" };
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_11 = {1, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_10};
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_12 = {1, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_6};
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_13 = {1, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_6};
static const struct {
  NI cap; NIM_CHAR data[108+1];
} TM__9bjXlRg9ajY35u7ap75QbU6A_15 = { 108 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\system\\iterators.nim(246, 11) `len(a) == L` the length of the seq changed while iterating over it" };
static const NimStringV2 TM__9bjXlRg9ajY35u7ap75QbU6A_16 = {108, (NimStrPayload*)&TM__9bjXlRg9ajY35u7ap75QbU6A_15};
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern NIM_BOOL nimInErrorMode__system_u4115;
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
static N_INLINE(NIM_BOOL, isEmpty__options_u5810)(NimStringV2 x_p0) {
	NIM_BOOL result;
	nimfr_("isEmpty", "D:\\nim\\compiler\\pathutils.nim");
	result = (NIM_BOOL)0;
	nimlf_(25, "D:\\nim\\compiler\\pathutils.nim");
	result = (x_p0.len == ((NI)0));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4115);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, open__ndi_u26)(tyObject_NdiFile__vx5QX5LKAffAhqVahibQvg* f_p0, NimStringV2 filename_p1, tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p2) {
	NIM_BOOL T1_;
NIM_BOOL* nimErr_;
	nimfr_("open", "D:\\nim\\compiler\\ndi.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(39, "D:\\nim\\compiler\\ndi.nim");
	T1_ = (NIM_BOOL)0;
	T1_ = isEmpty__options_u5810(filename_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*f_p0).enabled = !(T1_);
	nimln_(40);
	{
		NimStringV2 T6_;
		if (!(*f_p0).enabled) goto LA4_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqcopy___stdZassertions_u19((&(*f_p0).filename), filename_p1);
		nimlf_(42, "D:\\nim\\compiler\\ndi.nim");
		T6_.len = 0; T6_.p = NIM_NIL;
		T6_ = rawNewString(((NI)20));
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqsink___stdZassertions_u22((&(*f_p0).buf), T6_);
	}
LA4_: ;
	}
BeforeRet_: ;
	popFrame();
}
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
		NI TM__9bjXlRg9ajY35u7ap75QbU6A_4;
		NI TM__9bjXlRg9ajY35u7ap75QbU6A_5;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__9bjXlRg9ajY35u7ap75QbU6A_4)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__9bjXlRg9ajY35u7ap75QbU6A_4)) < ((NI)0) || ((NI)(TM__9bjXlRg9ajY35u7ap75QbU6A_4)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__9bjXlRg9ajY35u7ap75QbU6A_4), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__9bjXlRg9ajY35u7ap75QbU6A_4))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__9bjXlRg9ajY35u7ap75QbU6A_5)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__9bjXlRg9ajY35u7ap75QbU6A_5);
	}
LA3_: ;
	}
BeforeRet_: ;
}
static N_INLINE(void, addInt__stdZprivateZdigitsutils_u189)(NimStringV2* result_p0, NI x_p1) {
	nimfr_("addInt", "D:\\nim\\lib\\std\\private\\digitsutils.nim");
	nimlf_(115, "D:\\nim\\lib\\std\\private\\digitsutils.nim");
	addInt__stdZprivateZdigitsutils_u172(result_p0, ((NI64) (x_p1)));
	popFrame();
}
static N_INLINE(void, writeLine__msgs_u481)(FILE* f_p0, NimStringV2* x_p1, NI x_p1Len_0) {
NIM_BOOL* nimErr_;
	nimfr_("writeLine", "D:\\nim\\lib\\std\\syncio.nim");
{nimErr_ = nimErrorFlag();
	{
		NimStringV2* i;
		NI i_2;
		i = (NimStringV2*)0;
		nimlf_(13, "D:\\nim\\lib\\system\\iterators.nim");
		i_2 = ((NI)0);
		{
			nimln_(14);
			while (1) {
				NI TM__9bjXlRg9ajY35u7ap75QbU6A_9;
				if (!(i_2 < x_p1Len_0)) goto LA3;
				nimlf_(609, "D:\\nim\\lib\\std\\syncio.nim");
				if (i_2 < 0 || i_2 >= x_p1Len_0){ raiseIndexError2(i_2,x_p1Len_0-1); goto BeforeRet_;
				}
				i = (&x_p1[i_2]);
				write__stdZsyncio_u238(f_p0, (*i));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimlf_(16, "D:\\nim\\lib\\system\\iterators.nim");
				if (nimAddInt(i_2, ((NI)1), &TM__9bjXlRg9ajY35u7ap75QbU6A_9)) { raiseOverflow(); goto BeforeRet_;
				};
				i_2 = (NI)(TM__9bjXlRg9ajY35u7ap75QbU6A_9);
			} LA3: ;
		}
	}
	nimlf_(611, "D:\\nim\\lib\\std\\syncio.nim");
	write__stdZsyncio_u238(f_p0, TM__9bjXlRg9ajY35u7ap75QbU6A_11);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, doWrite__ndi_u14)(tyObject_NdiFile__vx5QX5LKAffAhqVahibQvg* f_p0, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* s_p1, tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p2) {
	NimStringV2 colontmpD_;
	tyArray__Re75IspeoxXy2oCZHwcRrA T2_;
	tyArray__sMpvt1sOxOJ3LFGulnbeMQ T3_;
NIM_BOOL* nimErr_;
	nimfr_("doWrite", "D:\\nim\\compiler\\ndi.nim");
{nimErr_ = nimErrorFlag();
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	nimlf_(27, "D:\\nim\\compiler\\ndi.nim");
	setLengthStrV2((&(*f_p0).buf), ((NI)0));
	nimln_(28);
	addInt__stdZprivateZdigitsutils_u189((&(*f_p0).buf), ((NI) ((*s_p1).info.line)));
	nimln_(29);
	prepareAdd((&(*f_p0).buf), 1);
appendString((&(*f_p0).buf), TM__9bjXlRg9ajY35u7ap75QbU6A_7);
	nimln_(30);
	addInt__stdZprivateZdigitsutils_u189((&(*f_p0).buf), ((NI) ((*s_p1).info.col)));
	nimln_(31);
	T2_[0] = (*(*s_p1).name).s;
	T2_[1] = TM__9bjXlRg9ajY35u7ap75QbU6A_8;
	write__stdZsyncio_u340((*f_p0).f, T2_, 2);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(32);
	writeRope__ropes_u23((*f_p0).f, (*s_p1).loc.r);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(33);
	T3_[0] = TM__9bjXlRg9ajY35u7ap75QbU6A_12;
	colontmpD_ = toFullPath__msgs_u623(conf_p2, (*s_p1).info.fileIndex);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T3_[1] = colontmpD_;
	T3_[2] = TM__9bjXlRg9ajY35u7ap75QbU6A_13;
	T3_[3] = (*f_p0).buf;
	writeLine__msgs_u481((*f_p0).f, T3_, 4);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD_));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, close__ndi_u33)(tyObject_NdiFile__vx5QX5LKAffAhqVahibQvg* f_p0, tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p1) {
NIM_BOOL* nimErr_;
	nimfr_("close", "D:\\nim\\compiler\\ndi.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(45, "D:\\nim\\compiler\\ndi.nim");
	{
		FILE* T5_;
		if (!(*f_p0).enabled) goto LA3_;
		nimln_(46);
		T5_ = (FILE*)0;
		T5_ = open__stdZsyncio_u463((*f_p0).filename, ((tyEnum_FileMode__9atfYUlw9bQtL4ixYGhUZZfQ)1), ((NI)8000));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*f_p0).f = T5_;
		nimln_(47);
		{
			NimStringV2 colontmpD_;
			NimStringV2 T10_;
			if (!!(!(((*f_p0).f == ((FILE*) NIM_NIL))))) goto LA8_;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			T10_.len = 0; T10_.p = NIM_NIL;
			T10_ = rawNewString((*f_p0).filename.len + 44);
appendString((&T10_), TM__9bjXlRg9ajY35u7ap75QbU6A_3);
appendString((&T10_), (*f_p0).filename);
			colontmpD_ = T10_;
			failedAssertImpl__stdZassertions_u274(colontmpD_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD_));
		}
LA8_: ;
		{
			tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw** s;
			NI i;
			NI L;
			NI T12_;
			s = (tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw**)0;
			nimlf_(241, "D:\\nim\\lib\\system\\iterators.nim");
			i = ((NI)0);
			nimln_(242);
			T12_ = (*f_p0).syms.len;
			L = T12_;
			{
				nimln_(243);
				while (1) {
					NI TM__9bjXlRg9ajY35u7ap75QbU6A_14;
					if (!(i < L)) goto LA14;
					nimlf_(48, "D:\\nim\\compiler\\ndi.nim");
					if (i < 0 || i >= (*f_p0).syms.len){ raiseIndexError2(i,(*f_p0).syms.len-1); goto BeforeRet_;
					}
					s = &(*f_p0).syms.p->data[i];
					doWrite__ndi_u14(f_p0, (*s), conf_p1);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					nimlf_(245, "D:\\nim\\lib\\system\\iterators.nim");
					if (nimAddInt(i, ((NI)1), &TM__9bjXlRg9ajY35u7ap75QbU6A_14)) { raiseOverflow(); goto BeforeRet_;
					};
					i = (NI)(TM__9bjXlRg9ajY35u7ap75QbU6A_14);
					nimln_(246);
					{
						NI T17_;
						T17_ = (*f_p0).syms.len;
						if (!!((T17_ == L))) goto LA18_;
						failedAssertImpl__stdZassertions_u274(TM__9bjXlRg9ajY35u7ap75QbU6A_16);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
LA18_: ;
				} LA14: ;
			}
		}
		nimlf_(50, "D:\\nim\\compiler\\ndi.nim");
		close__stdZsyncio_u250((*f_p0).f);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(51);
		reset__ndi_u49((&(*f_p0).syms));
		nimln_(52);
		reset__options_u3535((&(*f_p0).filename));
	}
LA3_: ;
	}
BeforeRet_: ;
	popFrame();
}
