/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 32
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
typedef struct tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw;
typedef struct tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA;
typedef struct tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ;
typedef struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA;
typedef struct tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw;
typedef struct tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg;
typedef struct tySequence__y7DZsOv6USik6pXh4lkzgg tySequence__y7DZsOv6USik6pXh4lkzgg;
typedef struct tySequence__y7DZsOv6USik6pXh4lkzgg_Content tySequence__y7DZsOv6USik6pXh4lkzgg_Content;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA {
	NU16 line;
	NI16 col;
	NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__B189abzIdXaFZwbqX6rJUug;
typedef NU8 tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA;
struct tySequence__y7DZsOv6USik6pXh4lkzgg {
  NI len; tySequence__y7DZsOv6USik6pXh4lkzgg_Content* p;
};
struct tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA {
	tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* typ;
	tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA info;
	tySet_tyEnum_TNodeFlag__B189abzIdXaFZwbqX6rJUug flags;
	tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA kind;
union{
struct {	NI64 intVal;
} _kind_1;
struct {	NF floatVal;
} _kind_2;
struct {	NimStringV2 strVal;
} _kind_3;
struct {	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* sym;
} _kind_4;
struct {	tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg* ident;
} _kind_5;
struct {	tySequence__y7DZsOv6USik6pXh4lkzgg sons;
} _kind_6;
};
};
typedef NU8 tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA[21];
typedef NU8 tyEnum_ErrorKind__0RZn5Nc6vnQTGVAAwIcKPw;
typedef NU16 tySet_tyEnum_TRenderFlag__UaEshp4IUmsUmrppcxF72w;
typedef NU8 tyEnum_TPreferedDesc__nM2nTcjzB5LAZeoOuHWxFw;
typedef NimStringV2 tyArray__24KAM9afIUgUaqBaEBB6r9bg[3];


#ifndef tySequence__y7DZsOv6USik6pXh4lkzgg_Content_PP
#define tySequence__y7DZsOv6USik6pXh4lkzgg_Content_PP
struct tySequence__y7DZsOv6USik6pXh4lkzgg_Content { NI cap; tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
static N_INLINE(NI, len__ast_u3574)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseFieldError2)(NimStringV2 f_p0, NI discVal_p1);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_u3711)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA** dest_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* src_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatSingleElem)(NimStringV2 formatstr_p0, NimStringV2 a_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderTree__renderer_u51)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p0, tySet_tyEnum_TRenderFlag__UaEshp4IUmsUmrppcxF72w renderFlags_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_u4793)(tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw** dest_p0, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* src_p1);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, typeToString__types_u51)(tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* typ_p0, tyEnum_TPreferedDesc__nM2nTcjzB5LAZeoOuHWxFw prefer_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatOpenArray)(NimStringV2 formatstr_p0, NimStringV2* a_p1, NI a_p1Len_0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getProcHeader__types_u223)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* sym_p1, tyEnum_TPreferedDesc__nM2nTcjzB5LAZeoOuHWxFw prefer_p2, NIM_BOOL getDeclarationPath_p3);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_u4790)(tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw** dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_u3708)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA** dest_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static const struct {
  NI cap; NIM_CHAR data[61+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_2 = { 61 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\errorhandling.nim(59, 3) `n.kind == nkError` " };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_3 = {61, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_2};
static NIM_CONST tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA TM__PAgkFH59bCpZS6kyA7bT09ag_4 = {
0xec, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[62+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_5 = { 62 | NIM_STRLIT_FLAG, "field \'sons\' is not accessible for type \'TNode\' using \'kind = " };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_6 = {62, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_5};
static const struct {
  NI cap; NIM_CHAR data[53+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_7 = { 53 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\errorhandling.nim(60, 3) `n.len > 1` " };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_8 = {53, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_7};
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_9 = {62, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_5};
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_10 = {62, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_5};
static NIM_CONST tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA TM__PAgkFH59bCpZS6kyA7bT09ag_11 = {
0xe0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[64+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_12 = { 64 | NIM_STRLIT_FLAG, "field \'intVal\' is not accessible for type \'TNode\' using \'kind = " };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_13 = {64, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_12};
static const struct {
  NI cap; NIM_CHAR data[13+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_14 = { 13 | NIM_STRLIT_FLAG, "type mismatch" };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_15 = {13, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_14};
static const struct {
  NI cap; NIM_CHAR data[32+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_16 = { 32 | NIM_STRLIT_FLAG, "expression \'$1\' cannot be called" };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_17 = {32, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_16};
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_18 = {62, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_5};
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_19 = {62, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_5};
static NIM_CONST tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA TM__PAgkFH59bCpZS6kyA7bT09ag_20 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[64+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_21 = { 64 | NIM_STRLIT_FLAG, "field \'strVal\' is not accessible for type \'TNode\' using \'kind = " };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_22 = {64, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_21};
static const struct {
  NI cap; NIM_CHAR data[25+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_23 = { 25 | NIM_STRLIT_FLAG, "wrong number of arguments" };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_24 = {25, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_23};
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_25 = {62, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_5};
static NIM_CONST tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA TM__PAgkFH59bCpZS6kyA7bT09ag_26 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[61+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_27 = { 61 | NIM_STRLIT_FLAG, "field \'sym\' is not accessible for type \'TNode\' using \'kind = " };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_28 = {61, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_27};
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_29 = {62, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_5};
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_30 = {61, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_27};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_31 = { 1 | NIM_STRLIT_FLAG, "(" };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_32 = {1, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_31};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_33 = { 2 | NIM_STRLIT_FLAG, ", " };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_34 = {2, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_33};
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_37 = {62, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_5};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_39 = { 1 | NIM_STRLIT_FLAG, ")" };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_40 = {1, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_39};
static const struct {
  NI cap; NIM_CHAR data[44+1];
} TM__PAgkFH59bCpZS6kyA7bT09ag_41 = { 44 | NIM_STRLIT_FLAG, "ambiguous call; both $1 and $2 match for: $3" };
static const NimStringV2 TM__PAgkFH59bCpZS6kyA7bT09ag_42 = {44, (NimStrPayload*)&TM__PAgkFH59bCpZS6kyA7bT09ag_41};
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern NIM_BOOL nimInErrorMode__system_u4097;
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
static N_INLINE(NI, len__ast_u3574)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p0) {
	NI result;
	NI T1_;
	nimfr_("len", "D:\\nim\\compiler\\ast.nim");
{	result = (NI)0;
	nimlf_(1193, "D:\\nim\\compiler\\ast.nim");
	if (((TM__PAgkFH59bCpZS6kyA7bT09ag_4[(NU)(((*n_p0).kind))>>3] &(1U<<((NU)(((*n_p0).kind))&7U)))!=0)) 	{ raiseFieldError2(TM__PAgkFH59bCpZS6kyA7bT09ag_6, (NI)((*n_p0).kind)); goto BeforeRet_;
	}
	T1_ = (*n_p0)._kind_6.sons.len;
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
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2) {
	NIM_BOOL result;
	NI r;
	result = (NIM_BOOL)0;
	r = ((NI) ((NU)((NU32)(((NU) (a_p0))) + (NU32)(((NU) (b_p1))))));
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
		NI TM__PAgkFH59bCpZS6kyA7bT09ag_35;
		NI TM__PAgkFH59bCpZS6kyA7bT09ag_36;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__PAgkFH59bCpZS6kyA7bT09ag_35)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__PAgkFH59bCpZS6kyA7bT09ag_35)) < ((NI)0) || ((NI)(TM__PAgkFH59bCpZS6kyA7bT09ag_35)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__PAgkFH59bCpZS6kyA7bT09ag_35), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__PAgkFH59bCpZS6kyA7bT09ag_35))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__PAgkFH59bCpZS6kyA7bT09ag_36)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__PAgkFH59bCpZS6kyA7bT09ag_36);
	}
LA3_: ;
	}
BeforeRet_: ;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4097);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, errorToString__errorhandling_u113)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* config_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1) {
	NimStringV2 result;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* wrongNode;
NIM_BOOL oldNimErrFin18_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
	nimfr_("errorToString", "D:\\nim\\compiler\\errorhandling.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	wrongNode = NIM_NIL;
	nimlf_(59, "D:\\nim\\compiler\\errorhandling.nim");
	{
		if (!!(((*n_p1).kind == ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)161)))) goto LA4_;
		failedAssertImpl__stdZassertions_u274(TM__PAgkFH59bCpZS6kyA7bT09ag_3);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA4_: ;
	nimln_(60);
	{
		NI T8_;
		T8_ = (NI)0;
		T8_ = len__ast_u3574(n_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!!((((NI)1) < T8_))) goto LA9_;
		failedAssertImpl__stdZassertions_u274(TM__PAgkFH59bCpZS6kyA7bT09ag_8);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA9_: ;
	nimlf_(1224, "D:\\nim\\compiler\\ast.nim");
	if (((TM__PAgkFH59bCpZS6kyA7bT09ag_4[(NU)(((*n_p1).kind))>>3] &(1U<<((NU)(((*n_p1).kind))&7U)))!=0)) 	{ raiseFieldError2(TM__PAgkFH59bCpZS6kyA7bT09ag_9, (NI)((*n_p1).kind)); goto LA1_;
	}
	if (((NI)0) < 0 || ((NI)0) >= (*n_p1)._kind_6.sons.len){ raiseIndexError2(((NI)0),(*n_p1)._kind_6.sons.len-1); goto LA1_;
	}
	eqcopy___ast_u3711(&wrongNode, (*n_p1)._kind_6.sons.p->data[((NI)0)]);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimlf_(62, "D:\\nim\\compiler\\errorhandling.nim");
	if (((TM__PAgkFH59bCpZS6kyA7bT09ag_4[(NU)(((*n_p1).kind))>>3] &(1U<<((NU)(((*n_p1).kind))&7U)))!=0)) 	{ raiseFieldError2(TM__PAgkFH59bCpZS6kyA7bT09ag_10, (NI)((*n_p1).kind)); goto LA1_;
	}
	if (((NI)1) < 0 || ((NI)1) >= (*n_p1)._kind_6.sons.len){ raiseIndexError2(((NI)1),(*n_p1)._kind_6.sons.len-1); goto LA1_;
	}
	if (!(((TM__PAgkFH59bCpZS6kyA7bT09ag_11[(NU)(((*(*n_p1)._kind_6.sons.p->data[((NI)1)]).kind))>>3] &(1U<<((NU)(((*(*n_p1)._kind_6.sons.p->data[((NI)1)]).kind))&7U)))!=0))) 	{ raiseFieldError2(TM__PAgkFH59bCpZS6kyA7bT09ag_13, (NI)((*(*n_p1)._kind_6.sons.p->data[((NI)1)]).kind)); goto LA1_;
	}
	if (((*(*n_p1)._kind_6.sons.p->data[((NI)1)])._kind_1.intVal) < ((tyEnum_ErrorKind__0RZn5Nc6vnQTGVAAwIcKPw)0) || ((*(*n_p1)._kind_6.sons.p->data[((NI)1)])._kind_1.intVal) > ((tyEnum_ErrorKind__0RZn5Nc6vnQTGVAAwIcKPw)4)){ raiseRangeErrorI((*(*n_p1)._kind_6.sons.p->data[((NI)1)])._kind_1.intVal, ((tyEnum_ErrorKind__0RZn5Nc6vnQTGVAAwIcKPw)0), ((tyEnum_ErrorKind__0RZn5Nc6vnQTGVAAwIcKPw)4)); goto LA1_;
	}
	switch (((tyEnum_ErrorKind__0RZn5Nc6vnQTGVAAwIcKPw) ((*(*n_p1)._kind_6.sons.p->data[((NI)1)])._kind_1.intVal))) {
	case ((tyEnum_ErrorKind__0RZn5Nc6vnQTGVAAwIcKPw)0):
	{
		nimln_(64);
		result = TM__PAgkFH59bCpZS6kyA7bT09ag_15;
	}
	break;
	case ((tyEnum_ErrorKind__0RZn5Nc6vnQTGVAAwIcKPw)1):
	{
		tySet_tyEnum_TRenderFlag__UaEshp4IUmsUmrppcxF72w T13_;
		NimStringV2 T14_;
		nimln_(66);
		if (((TM__PAgkFH59bCpZS6kyA7bT09ag_4[(NU)(((*wrongNode).kind))>>3] &(1U<<((NU)(((*wrongNode).kind))&7U)))!=0)) 		{ raiseFieldError2(TM__PAgkFH59bCpZS6kyA7bT09ag_18, (NI)((*wrongNode).kind)); goto LA1_;
		}
		if (((NI)0) < 0 || ((NI)0) >= (*wrongNode)._kind_6.sons.len){ raiseIndexError2(((NI)0),(*wrongNode)._kind_6.sons.len-1); goto LA1_;
		}
		T13_ = 0;
		T14_.len = 0; T14_.p = NIM_NIL;
		T14_ = renderTree__renderer_u51((*wrongNode)._kind_6.sons.p->data[((NI)0)], T13_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		result = nsuFormatSingleElem(TM__PAgkFH59bCpZS6kyA7bT09ag_17, T14_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	break;
	case ((tyEnum_ErrorKind__0RZn5Nc6vnQTGVAAwIcKPw)2):
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		if (((TM__PAgkFH59bCpZS6kyA7bT09ag_4[(NU)(((*n_p1).kind))>>3] &(1U<<((NU)(((*n_p1).kind))&7U)))!=0)) 		{ raiseFieldError2(TM__PAgkFH59bCpZS6kyA7bT09ag_19, (NI)((*n_p1).kind)); goto LA1_;
		}
		if (((NI)2) < 0 || ((NI)2) >= (*n_p1)._kind_6.sons.len){ raiseIndexError2(((NI)2),(*n_p1)._kind_6.sons.len-1); goto LA1_;
		}
		if (!(((TM__PAgkFH59bCpZS6kyA7bT09ag_20[(NU)(((*(*n_p1)._kind_6.sons.p->data[((NI)2)]).kind))>>3] &(1U<<((NU)(((*(*n_p1)._kind_6.sons.p->data[((NI)2)]).kind))&7U)))!=0))) 		{ raiseFieldError2(TM__PAgkFH59bCpZS6kyA7bT09ag_22, (NI)((*(*n_p1)._kind_6.sons.p->data[((NI)2)]).kind)); goto LA1_;
		}
		eqcopy___stdZassertions_u19((&result), (*(*n_p1)._kind_6.sons.p->data[((NI)2)])._kind_3.strVal);
	}
	break;
	case ((tyEnum_ErrorKind__0RZn5Nc6vnQTGVAAwIcKPw)3):
	{
		nimlf_(70, "D:\\nim\\compiler\\errorhandling.nim");
		result = TM__PAgkFH59bCpZS6kyA7bT09ag_24;
	}
	break;
	case ((tyEnum_ErrorKind__0RZn5Nc6vnQTGVAAwIcKPw)4):
	{
		tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* a;
		tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* b;
		NimStringV2 args;
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		tyArray__24KAM9afIUgUaqBaEBB6r9bg T29_;
		a = NIM_NIL;
		b = NIM_NIL;
		args.len = 0; args.p = NIM_NIL;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
		if (((TM__PAgkFH59bCpZS6kyA7bT09ag_4[(NU)(((*n_p1).kind))>>3] &(1U<<((NU)(((*n_p1).kind))&7U)))!=0)) 		{ raiseFieldError2(TM__PAgkFH59bCpZS6kyA7bT09ag_25, (NI)((*n_p1).kind)); goto LA18_;
		}
		if (((NI)2) < 0 || ((NI)2) >= (*n_p1)._kind_6.sons.len){ raiseIndexError2(((NI)2),(*n_p1)._kind_6.sons.len-1); goto LA18_;
		}
		if (!(((TM__PAgkFH59bCpZS6kyA7bT09ag_26[(NU)(((*(*n_p1)._kind_6.sons.p->data[((NI)2)]).kind))>>3] &(1U<<((NU)(((*(*n_p1)._kind_6.sons.p->data[((NI)2)]).kind))&7U)))!=0))) 		{ raiseFieldError2(TM__PAgkFH59bCpZS6kyA7bT09ag_28, (NI)((*(*n_p1)._kind_6.sons.p->data[((NI)2)]).kind)); goto LA18_;
		}
		eqcopy___ast_u4793(&a, (*(*n_p1)._kind_6.sons.p->data[((NI)2)])._kind_4.sym);
		if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
		if (((TM__PAgkFH59bCpZS6kyA7bT09ag_4[(NU)(((*n_p1).kind))>>3] &(1U<<((NU)(((*n_p1).kind))&7U)))!=0)) 		{ raiseFieldError2(TM__PAgkFH59bCpZS6kyA7bT09ag_29, (NI)((*n_p1).kind)); goto LA18_;
		}
		if (((NI)3) < 0 || ((NI)3) >= (*n_p1)._kind_6.sons.len){ raiseIndexError2(((NI)3),(*n_p1)._kind_6.sons.len-1); goto LA18_;
		}
		if (!(((TM__PAgkFH59bCpZS6kyA7bT09ag_26[(NU)(((*(*n_p1)._kind_6.sons.p->data[((NI)3)]).kind))>>3] &(1U<<((NU)(((*(*n_p1)._kind_6.sons.p->data[((NI)3)]).kind))&7U)))!=0))) 		{ raiseFieldError2(TM__PAgkFH59bCpZS6kyA7bT09ag_30, (NI)((*(*n_p1)._kind_6.sons.p->data[((NI)3)]).kind)); goto LA18_;
		}
		eqcopy___ast_u4793(&b, (*(*n_p1)._kind_6.sons.p->data[((NI)3)])._kind_4.sym);
		if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
		nimlf_(74, "D:\\nim\\compiler\\errorhandling.nim");
		args = TM__PAgkFH59bCpZS6kyA7bT09ag_32;
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			nimlf_(117, "D:\\nim\\lib\\system\\iterators_1.nim");
			nimlf_(75, "D:\\nim\\compiler\\errorhandling.nim");
			colontmp_ = len__ast_u3574(wrongNode);
			if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
			nimlf_(119, "D:\\nim\\lib\\system\\iterators_1.nim");
			i_2 = ((NI)1);
			{
				nimln_(120);
				while (1) {
					NimStringV2 colontmpD__3;
					NI TM__PAgkFH59bCpZS6kyA7bT09ag_38;
					if (!(i_2 < colontmp_)) goto LA21;
					colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
					nimlf_(75, "D:\\nim\\compiler\\errorhandling.nim");
					i = i_2;
					{
						nimln_(76);
						if (!(((NI)1) < i)) goto LA25_;
						prepareAdd((&args), 2);
appendString((&args), TM__PAgkFH59bCpZS6kyA7bT09ag_34);
					}
LA25_: ;
					nimln_(75);
					nimln_(77);
					if (((TM__PAgkFH59bCpZS6kyA7bT09ag_4[(NU)(((*wrongNode).kind))>>3] &(1U<<((NU)(((*wrongNode).kind))&7U)))!=0)) 					{ raiseFieldError2(TM__PAgkFH59bCpZS6kyA7bT09ag_37, (NI)((*wrongNode).kind)); goto LA22_;
					}
					if (i < 0 || i >= (*wrongNode)._kind_6.sons.len){ raiseIndexError2(i,(*wrongNode)._kind_6.sons.len-1); goto LA22_;
					}
					colontmpD__3 = typeToString__types_u51((*(*wrongNode)._kind_6.sons.p->data[i]).typ, ((tyEnum_TPreferedDesc__nM2nTcjzB5LAZeoOuHWxFw)0));
					if (NIM_UNLIKELY(*nimErr_)) goto LA22_;
					prepareAdd((&args), colontmpD__3.len + 0);
appendString((&args), colontmpD__3);
					nimlf_(122, "D:\\nim\\lib\\system\\iterators_1.nim");
					if (nimAddInt(i_2, ((NI)1), &TM__PAgkFH59bCpZS6kyA7bT09ag_38)) { raiseOverflow(); goto LA22_;
					};
					i_2 = (NI)(TM__PAgkFH59bCpZS6kyA7bT09ag_38);
					{
						LA22_:;
					}
					{
						nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
						eqdestroy___stdZassertions_u16((&colontmpD__3));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
				} LA21: ;
			}
		}
		nimlf_(78, "D:\\nim\\compiler\\errorhandling.nim");
		prepareAdd((&args), 1);
appendString((&args), TM__PAgkFH59bCpZS6kyA7bT09ag_40);
		nimln_(79);
		nimln_(80);
		colontmpD_ = getProcHeader__types_u223(config_p0, a, ((tyEnum_TPreferedDesc__nM2nTcjzB5LAZeoOuHWxFw)0), NIM_TRUE);
		if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
		T29_[0] = colontmpD_;
		nimln_(81);
		colontmpD__2 = getProcHeader__types_u223(config_p0, b, ((tyEnum_TPreferedDesc__nM2nTcjzB5LAZeoOuHWxFw)0), NIM_TRUE);
		if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
		T29_[1] = colontmpD__2;
		T29_[2] = args;
		nimln_(79);
		result = nsuFormatOpenArray(TM__PAgkFH59bCpZS6kyA7bT09ag_42, T29_, 3);
		if (NIM_UNLIKELY(*nimErr_)) goto LA18_;
		{
			LA18_:;
		}
		{
			oldNimErrFin18_ = *nimErr_; *nimErr_ = NIM_FALSE;
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__2));
			eqdestroy___stdZassertions_u16((&colontmpD_));
			eqdestroy___stdZassertions_u16((&args));
			nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
			eqdestroy___ast_u4790(&b);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			eqdestroy___ast_u4790(&a);
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			*nimErr_ = oldNimErrFin18_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	break;
	}
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		nimln_(1224);
		eqdestroy___ast_u3708(&wrongNode);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
