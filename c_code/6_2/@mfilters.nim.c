/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
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

typedef struct tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw;
typedef struct tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ;
typedef struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA;
typedef struct tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw;
typedef struct tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg;
typedef struct tySequence__y7DZsOv6USik6pXh4lkzgg tySequence__y7DZsOv6USik6pXh4lkzgg;
typedef struct tySequence__y7DZsOv6USik6pXh4lkzgg_Content tySequence__y7DZsOv6USik6pXh4lkzgg_Content;
typedef struct tyTuple__kN8up2W6YKc5YA9avn5mV5w tyTuple__kN8up2W6YKc5YA9avn5mV5w;
typedef struct tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
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
typedef NU8 tyEnum_TMsgKind__aghsq7zHWm205GRPJE9a2yw;
typedef NU8 tyEnum_TErrorHandling__eXg3xAZwMffPDYOafyM3aQ;
typedef NU16 tySet_tyEnum_TRenderFlag__UaEshp4IUmsUmrppcxF72w;
struct tyTuple__kN8up2W6YKc5YA9avn5mV5w {
NimStringV2 Field0;
NI Field1;
NI Field2;
};
struct tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg {
	NI id;
	NimStringV2 s;
	tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg* next;
	NI h;
};
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
typedef NU8 tyEnum_TLLStreamKind__dGH9aSOS0eTZqB4U9aGcaU1A;
typedef struct {
N_NIMCALL_PTR(NI, ClP_0) (tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* s_p0, void* buf_p1, NI bufLen_p2, void* ClE_0);
void* ClE_0;
} tyProc__m6elZIno2GBYzO4AQK1VmA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;
struct tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow {
  RootObj Sup;
	tyEnum_TLLStreamKind__dGH9aSOS0eTZqB4U9aGcaU1A kind;
	FILE* f;
	NimStringV2 s;
	NI rd;
	NI wr;
	NI lineOffset;
	tyProc__m6elZIno2GBYzO4AQK1VmA repl;
	tyProc__HzVCwACFYM9cx9aV62PdjtuA onPrompt;
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];


#ifndef tySequence__y7DZsOv6USik6pXh4lkzgg_Content_PP
#define tySequence__y7DZsOv6USik6pXh4lkzgg_Content_PP
struct tySequence__y7DZsOv6USik6pXh4lkzgg_Content { NI cap; tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA*, getArg__filters_u12)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1, NimStringV2 name_p2, NI pos_p3);
static N_INLINE(NI, len__ast_u3574)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseFieldError2)(NimStringV2 f_p0, NI discVal_p1);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4292)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NIMCALL(void, invalidPragma__filters_u9)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1);
N_LIB_PRIVATE N_NOINLINE(void, liMessage__msgs_u1216)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA info_p1, tyEnum_TMsgKind__aghsq7zHWm205GRPJE9a2yw msg_p2, NimStringV2 arg_p3, tyEnum_TErrorHandling__eXg3xAZwMffPDYOafyM3aQ eh_p4, tyTuple__kN8up2W6YKc5YA9avn5mV5w* info2_p5, NIM_BOOL isRaw_p6);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatSingleElem)(NimStringV2 formatstr_p0, NimStringV2 a_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, renderTree__renderer_u51)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p0, tySet_tyEnum_TRenderFlag__UaEshp4IUmsUmrppcxF72w renderFlags_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringV2 a_p0, NimStringV2 b_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_u3711)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA** dest_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* src_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_u3708)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA** dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, strArg__filters_u62)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1, NimStringV2 name_p2, NI pos_p3, NimStringV2 default_p4);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, boolArg__filters_u78)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1, NimStringV2 name_p2, NI pos_p3, NIM_BOOL default_p4);
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow*, llStreamOpen__llstream_u31)(NimStringV2 data_p0);
N_NIMCALL(NimStringV2, rawNewString)(NI cap_p0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, llStreamReadLine__llstream_u287)(tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* s_p0, NimStringV2* line_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuStrip)(NimStringV2 s_p0, NIM_BOOL leading_p1, NIM_BOOL trailing_p2, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars_p3);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringV2 s_p0, NimStringV2 prefix_p1);
N_LIB_PRIVATE N_NIMCALL(void, llStreamWriteln__llstream_u319)(tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* s_p0, NimStringV2 data_p1);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose__llstream_u195)(tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* s_p0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuReplaceStr)(NimStringV2 s_p0, NimStringV2 sub_p1, NimStringV2 by_p2);
static NIM_CONST tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA TM__Z829bJQuL5LjY0SVtwy0lEQ_2 = {
0xec, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[62+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_3 = { 62 | NIM_STRLIT_FLAG, "field \'sons\' is not accessible for type \'TNode\' using \'kind = " };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_4 = {62, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_3};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_5 = {62, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_3};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_6 = {62, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_3};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_7 = {62, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_3};
static const struct {
  NI cap; NIM_CHAR data[21+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_8 = { 21 | NIM_STRLIT_FLAG, "\'$1\' not allowed here" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_9 = {21, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_8};
static const struct {
  NI cap; NIM_CHAR data[27+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_11 = { 27 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\filters.nim" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_12 = {62, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_3};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_13 = {62, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_3};
static NIM_CONST tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA TM__Z829bJQuL5LjY0SVtwy0lEQ_14 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[63+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_15 = { 63 | NIM_STRLIT_FLAG, "field \'ident\' is not accessible for type \'TNode\' using \'kind = " };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_16 = {63, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_15};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_17 = {62, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_3};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_18 = {62, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_3};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_19 = {62, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_3};
static NIM_CONST tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA TM__Z829bJQuL5LjY0SVtwy0lEQ_21 = {
0xe0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[64+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_22 = { 64 | NIM_STRLIT_FLAG, "field \'intVal\' is not accessible for type \'TNode\' using \'kind = " };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_23 = {64, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_22};
static NIM_CONST tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA TM__Z829bJQuL5LjY0SVtwy0lEQ_24 = {
0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[64+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_25 = { 64 | NIM_STRLIT_FLAG, "field \'strVal\' is not accessible for type \'TNode\' using \'kind = " };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_26 = {64, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_25};
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_27 = { 10 | NIM_STRLIT_FLAG, "startswith" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_28 = {10, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_27};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_29 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_30 = {0, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_29};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_31 = {63, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_15};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_32 = { 4 | NIM_STRLIT_FLAG, "true" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_33 = {4, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_32};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_34 = {63, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_15};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_35 = { 5 | NIM_STRLIT_FLAG, "false" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_36 = {5, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_35};
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_37 = { 7 | NIM_STRLIT_FLAG, "leading" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_38 = {7, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_37};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_39 = { 8 | NIM_STRLIT_FLAG, "trailing" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_40 = {8, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_39};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_41 = {0, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_29};
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__Z829bJQuL5LjY0SVtwy0lEQ_42 = {
0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_43 = { 3 | NIM_STRLIT_FLAG, "sub" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_44 = {3, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_43};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_45 = {0, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_29};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__Z829bJQuL5LjY0SVtwy0lEQ_46 = { 2 | NIM_STRLIT_FLAG, "by" };
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_47 = {2, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_46};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_48 = {0, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_29};
static const NimStringV2 TM__Z829bJQuL5LjY0SVtwy0lEQ_49 = {0, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_29};
static NIM_CONST tyTuple__kN8up2W6YKc5YA9avn5mV5w TM__Z829bJQuL5LjY0SVtwy0lEQ_10 = {{27, (NimStrPayload*)&TM__Z829bJQuL5LjY0SVtwy0lEQ_11},
((NI)17),
((NI)12)}
;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern NIM_BOOL nimInErrorMode__system_u4095;
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
static N_INLINE(NI, len__ast_u3574)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p0) {
	NI result;
	NI T1_;
	nimfr_("len", "D:\\nim\\compiler\\ast.nim");
{	result = (NI)0;
	nimlf_(1193, "D:\\nim\\compiler\\ast.nim");
	if (((TM__Z829bJQuL5LjY0SVtwy0lEQ_2[(NU)(((*n_p0).kind))>>3] &(1U<<((NU)(((*n_p0).kind))&7U)))!=0)) 	{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_4, (NI)((*n_p0).kind)); goto BeforeRet_;
	}
	T1_ = (*n_p0)._kind_6.sons.len;
	result = T1_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4095);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, invalidPragma__filters_u9)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1) {
	NimStringV2 colontmpD_;
	NimStringV2 T2_;
NIM_BOOL* nimErr_;
	nimfr_("invalidPragma", "D:\\nim\\compiler\\filters.nim");
{nimErr_ = nimErrorFlag();
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	nimlf_(17, "D:\\nim\\compiler\\filters.nim");
	nimln_(18);
	T2_.len = 0; T2_.p = NIM_NIL;
	T2_ = renderTree__renderer_u51(n_p1, 4);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD_ = nsuFormatSingleElem(TM__Z829bJQuL5LjY0SVtwy0lEQ_9, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(17);
	liMessage__msgs_u1216(conf_p0, (*n_p1).info, ((tyEnum_TMsgKind__aghsq7zHWm205GRPJE9a2yw)17), colontmpD_, ((tyEnum_TErrorHandling__eXg3xAZwMffPDYOafyM3aQ)0), (&TM__Z829bJQuL5LjY0SVtwy0lEQ_10), NIM_FALSE);
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
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA*, getArg__filters_u12)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1, NimStringV2 name_p2, NI pos_p3) {
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* result;
NIM_BOOL* nimErr_;
	nimfr_("getArg", "D:\\nim\\compiler\\filters.nim");
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	nimlf_(21, "D:\\nim\\compiler\\filters.nim");
	result = ((tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA*) NIM_NIL);
	nimln_(22);
	{
		if (!((*n_p1).kind >= ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)1) && (*n_p1).kind <= ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)23))) goto LA3_;
		goto BeforeRet_;
	}
LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimlf_(117, "D:\\nim\\lib\\system\\iterators_1.nim");
		nimlf_(23, "D:\\nim\\compiler\\filters.nim");
		colontmp_ = len__ast_u3574(n_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(119, "D:\\nim\\lib\\system\\iterators_1.nim");
		i_2 = ((NI)1);
		{
			nimln_(120);
			while (1) {
				NI TM__Z829bJQuL5LjY0SVtwy0lEQ_20;
				if (!(i_2 < colontmp_)) goto LA7;
				nimlf_(23, "D:\\nim\\compiler\\filters.nim");
				i = i_2;
				{
					nimln_(24);
					if (((TM__Z829bJQuL5LjY0SVtwy0lEQ_2[(NU)(((*n_p1).kind))>>3] &(1U<<((NU)(((*n_p1).kind))&7U)))!=0)) 					{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_5, (NI)((*n_p1).kind)); goto BeforeRet_;
					}
					if (i < 0 || i >= (*n_p1)._kind_6.sons.len){ raiseIndexError2(i,(*n_p1)._kind_6.sons.len-1); goto BeforeRet_;
					}
					if (!((*(*n_p1)._kind_6.sons.p->data[i]).kind == ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)33))) goto LA10_;
					nimln_(25);
					{
						if (((TM__Z829bJQuL5LjY0SVtwy0lEQ_2[(NU)(((*n_p1).kind))>>3] &(1U<<((NU)(((*n_p1).kind))&7U)))!=0)) 						{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_6, (NI)((*n_p1).kind)); goto BeforeRet_;
						}
						if (i < 0 || i >= (*n_p1)._kind_6.sons.len){ raiseIndexError2(i,(*n_p1)._kind_6.sons.len-1); goto BeforeRet_;
						}
						if (((TM__Z829bJQuL5LjY0SVtwy0lEQ_2[(NU)(((*(*n_p1)._kind_6.sons.p->data[i]).kind))>>3] &(1U<<((NU)(((*(*n_p1)._kind_6.sons.p->data[i]).kind))&7U)))!=0)) 						{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_7, (NI)((*(*n_p1)._kind_6.sons.p->data[i]).kind)); goto BeforeRet_;
						}
						if (((NI)0) < 0 || ((NI)0) >= (*(*n_p1)._kind_6.sons.p->data[i])._kind_6.sons.len){ raiseIndexError2(((NI)0),(*(*n_p1)._kind_6.sons.p->data[i])._kind_6.sons.len-1); goto BeforeRet_;
						}
						if (!!(((*(*(*n_p1)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)0)]).kind == ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)2)))) goto LA14_;
						invalidPragma__filters_u9(conf_p0, n_p1);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
LA14_: ;
					nimln_(26);
					{
						NI T18_;
						if (((TM__Z829bJQuL5LjY0SVtwy0lEQ_2[(NU)(((*n_p1).kind))>>3] &(1U<<((NU)(((*n_p1).kind))&7U)))!=0)) 						{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_12, (NI)((*n_p1).kind)); goto BeforeRet_;
						}
						if (i < 0 || i >= (*n_p1)._kind_6.sons.len){ raiseIndexError2(i,(*n_p1)._kind_6.sons.len-1); goto BeforeRet_;
						}
						if (((TM__Z829bJQuL5LjY0SVtwy0lEQ_2[(NU)(((*(*n_p1)._kind_6.sons.p->data[i]).kind))>>3] &(1U<<((NU)(((*(*n_p1)._kind_6.sons.p->data[i]).kind))&7U)))!=0)) 						{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_13, (NI)((*(*n_p1)._kind_6.sons.p->data[i]).kind)); goto BeforeRet_;
						}
						if (((NI)0) < 0 || ((NI)0) >= (*(*n_p1)._kind_6.sons.p->data[i])._kind_6.sons.len){ raiseIndexError2(((NI)0),(*(*n_p1)._kind_6.sons.p->data[i])._kind_6.sons.len-1); goto BeforeRet_;
						}
						if (!(((TM__Z829bJQuL5LjY0SVtwy0lEQ_14[(NU)(((*(*(*n_p1)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)0)]).kind))>>3] &(1U<<((NU)(((*(*(*n_p1)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)0)]).kind))&7U)))!=0))) 						{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_16, (NI)((*(*(*n_p1)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)0)]).kind)); goto BeforeRet_;
						}
						T18_ = (NI)0;
						T18_ = nsuCmpIgnoreStyle((*(*(*(*n_p1)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)0)])._kind_5.ident).s, name_p2);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						if (!(T18_ == ((NI)0))) goto LA19_;
						nimln_(27);
						nimlf_(1224, "D:\\nim\\compiler\\ast.nim");
						if (((TM__Z829bJQuL5LjY0SVtwy0lEQ_2[(NU)(((*n_p1).kind))>>3] &(1U<<((NU)(((*n_p1).kind))&7U)))!=0)) 						{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_17, (NI)((*n_p1).kind)); goto BeforeRet_;
						}
						if (i < 0 || i >= (*n_p1)._kind_6.sons.len){ raiseIndexError2(i,(*n_p1)._kind_6.sons.len-1); goto BeforeRet_;
						}
						if (((TM__Z829bJQuL5LjY0SVtwy0lEQ_2[(NU)(((*(*n_p1)._kind_6.sons.p->data[i]).kind))>>3] &(1U<<((NU)(((*(*n_p1)._kind_6.sons.p->data[i]).kind))&7U)))!=0)) 						{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_18, (NI)((*(*n_p1)._kind_6.sons.p->data[i]).kind)); goto BeforeRet_;
						}
						if (((NI)1) < 0 || ((NI)1) >= (*(*n_p1)._kind_6.sons.p->data[i])._kind_6.sons.len){ raiseIndexError2(((NI)1),(*(*n_p1)._kind_6.sons.p->data[i])._kind_6.sons.len-1); goto BeforeRet_;
						}
						eqcopy___ast_u3711(&result, (*(*n_p1)._kind_6.sons.p->data[i])._kind_6.sons.p->data[((NI)1)]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						goto BeforeRet_;
					}
LA19_: ;
				}
				goto LA8_;
LA10_: ;
				{
					nimlf_(28, "D:\\nim\\compiler\\filters.nim");
					if (!(i == pos_p3)) goto LA22_;
					nimln_(29);
					nimlf_(1224, "D:\\nim\\compiler\\ast.nim");
					if (((TM__Z829bJQuL5LjY0SVtwy0lEQ_2[(NU)(((*n_p1).kind))>>3] &(1U<<((NU)(((*n_p1).kind))&7U)))!=0)) 					{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_19, (NI)((*n_p1).kind)); goto BeforeRet_;
					}
					if (i < 0 || i >= (*n_p1)._kind_6.sons.len){ raiseIndexError2(i,(*n_p1)._kind_6.sons.len-1); goto BeforeRet_;
					}
					eqcopy___ast_u3711(&result, (*n_p1)._kind_6.sons.p->data[i]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					goto BeforeRet_;
				}
				goto LA8_;
LA22_: ;
LA8_: ;
				nimlf_(122, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(i_2, ((NI)1), &TM__Z829bJQuL5LjY0SVtwy0lEQ_20)) { raiseOverflow(); goto BeforeRet_;
				};
				i_2 = (NI)(TM__Z829bJQuL5LjY0SVtwy0lEQ_20);
			} LA7: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, charArg__filters_u46)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1, NimStringV2 name_p2, NI pos_p3, NIM_CHAR default_p4) {
	NIM_CHAR result;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* x;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
	nimfr_("charArg", "D:\\nim\\compiler\\filters.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_CHAR)0;
	x = NIM_NIL;
	nimlf_(32, "D:\\nim\\compiler\\filters.nim");
	x = getArg__filters_u12(conf_p0, n_p1, name_p2, pos_p3);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(33);
	{
		if (!(x == ((tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA*) NIM_NIL))) goto LA4_;
		result = default_p4;
	}
	goto LA2_;
LA4_: ;
	{
		nimln_(34);
		if (!((*x).kind == ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)5))) goto LA7_;
		if (!(((TM__Z829bJQuL5LjY0SVtwy0lEQ_21[(NU)(((*x).kind))>>3] &(1U<<((NU)(((*x).kind))&7U)))!=0))) 		{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_23, (NI)((*x).kind)); goto LA1_;
		}
		if ((((NI) ((*x)._kind_1.intVal))) < ((NI)0) || (((NI) ((*x)._kind_1.intVal))) > ((NI)255)){ raiseRangeErrorI(((NI) ((*x)._kind_1.intVal)), ((NI)0), ((NI)255)); goto LA1_;
		}
		result = ((NIM_CHAR) (((NI) (((NI) ((*x)._kind_1.intVal))))));
	}
	goto LA2_;
LA7_: ;
	{
		nimln_(35);
		invalidPragma__filters_u9(conf_p0, n_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA2_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		nimlf_(1224, "D:\\nim\\compiler\\ast.nim");
		eqdestroy___ast_u3708(&x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, strArg__filters_u62)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1, NimStringV2 name_p2, NI pos_p3, NimStringV2 default_p4) {
	NimStringV2 result;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* x;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
	nimfr_("strArg", "D:\\nim\\compiler\\filters.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	x = NIM_NIL;
	nimlf_(38, "D:\\nim\\compiler\\filters.nim");
	x = getArg__filters_u12(conf_p0, n_p1, name_p2, pos_p3);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(39);
	{
		if (!(x == ((tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA*) NIM_NIL))) goto LA4_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqcopy___stdZassertions_u19((&result), default_p4);
	}
	goto LA2_;
LA4_: ;
	{
		nimlf_(40, "D:\\nim\\compiler\\filters.nim");
		if (!((*x).kind >= ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)20) && (*x).kind <= ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)22))) goto LA7_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		if (!(((TM__Z829bJQuL5LjY0SVtwy0lEQ_24[(NU)(((*x).kind))>>3] &(1U<<((NU)(((*x).kind))&7U)))!=0))) 		{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_26, (NI)((*x).kind)); goto LA1_;
		}
		eqcopy___stdZassertions_u19((&result), (*x)._kind_3.strVal);
	}
	goto LA2_;
LA7_: ;
	{
		nimlf_(41, "D:\\nim\\compiler\\filters.nim");
		invalidPragma__filters_u9(conf_p0, n_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA2_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		nimlf_(1224, "D:\\nim\\compiler\\ast.nim");
		eqdestroy___ast_u3708(&x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, boolArg__filters_u78)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1, NimStringV2 name_p2, NI pos_p3, NIM_BOOL default_p4) {
	NIM_BOOL result;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* x;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
	nimfr_("boolArg", "D:\\nim\\compiler\\filters.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	x = NIM_NIL;
	nimlf_(44, "D:\\nim\\compiler\\filters.nim");
	x = getArg__filters_u12(conf_p0, n_p1, name_p2, pos_p3);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(45);
	{
		if (!(x == ((tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA*) NIM_NIL))) goto LA4_;
		result = default_p4;
	}
	goto LA2_;
LA4_: ;
	{
		NIM_BOOL T7_;
		NI T9_;
		nimln_(46);
		T7_ = (NIM_BOOL)0;
		T7_ = ((*x).kind == ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)2));
		if (!(T7_)) goto LA8_;
		if (!(((TM__Z829bJQuL5LjY0SVtwy0lEQ_14[(NU)(((*x).kind))>>3] &(1U<<((NU)(((*x).kind))&7U)))!=0))) 		{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_31, (NI)((*x).kind)); goto LA1_;
		}
		T9_ = (NI)0;
		T9_ = nsuCmpIgnoreStyle((*(*x)._kind_5.ident).s, TM__Z829bJQuL5LjY0SVtwy0lEQ_33);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T7_ = (T9_ == ((NI)0));
LA8_: ;
		if (!T7_) goto LA10_;
		result = NIM_TRUE;
	}
	goto LA2_;
LA10_: ;
	{
		NIM_BOOL T13_;
		NI T15_;
		nimln_(47);
		T13_ = (NIM_BOOL)0;
		T13_ = ((*x).kind == ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)2));
		if (!(T13_)) goto LA14_;
		if (!(((TM__Z829bJQuL5LjY0SVtwy0lEQ_14[(NU)(((*x).kind))>>3] &(1U<<((NU)(((*x).kind))&7U)))!=0))) 		{ raiseFieldError2(TM__Z829bJQuL5LjY0SVtwy0lEQ_34, (NI)((*x).kind)); goto LA1_;
		}
		T15_ = (NI)0;
		T15_ = nsuCmpIgnoreStyle((*(*x)._kind_5.ident).s, TM__Z829bJQuL5LjY0SVtwy0lEQ_36);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T13_ = (T15_ == ((NI)0));
LA14_: ;
		if (!T13_) goto LA16_;
		result = NIM_FALSE;
	}
	goto LA2_;
LA16_: ;
	{
		nimln_(48);
		invalidPragma__filters_u9(conf_p0, n_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA2_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		nimlf_(1224, "D:\\nim\\compiler\\ast.nim");
		eqdestroy___ast_u3708(&x);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow*, filterStrip__filters_u98)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* stdin_p1, NimStringV2 filename_p2, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* call_p3) {
	tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* result;
	NimStringV2 pattern;
	NimStringV2 line;
	NIM_BOOL leading;
	NIM_BOOL trailing;
NIM_BOOL* nimErr_;
	nimfr_("filterStrip", "D:\\nim\\compiler\\filters.nim");
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	pattern.len = 0; pattern.p = NIM_NIL;
	line.len = 0; line.p = NIM_NIL;
	nimlf_(51, "D:\\nim\\compiler\\filters.nim");
	pattern = strArg__filters_u62(conf_p0, call_p3, TM__Z829bJQuL5LjY0SVtwy0lEQ_28, ((NI)1), TM__Z829bJQuL5LjY0SVtwy0lEQ_30);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(52);
	leading = boolArg__filters_u78(conf_p0, call_p3, TM__Z829bJQuL5LjY0SVtwy0lEQ_38, ((NI)2), NIM_TRUE);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(53);
	trailing = boolArg__filters_u78(conf_p0, call_p3, TM__Z829bJQuL5LjY0SVtwy0lEQ_40, ((NI)3), NIM_TRUE);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(54);
	result = llStreamOpen__llstream_u31(TM__Z829bJQuL5LjY0SVtwy0lEQ_41);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(55);
	line = rawNewString(((NI)80));
	{
		nimln_(56);
		while (1) {
			NIM_BOOL T4_;
			NimStringV2 stripped;
			T4_ = (NIM_BOOL)0;
			T4_ = llStreamReadLine__llstream_u287(stdin_p1, (&line));
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			if (!T4_) goto LA3;
			stripped.len = 0; stripped.p = NIM_NIL;
			nimln_(57);
			stripped = nsuStrip(line, leading, trailing, TM__Z829bJQuL5LjY0SVtwy0lEQ_42);
			if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
			nimln_(58);
			{
				NIM_BOOL T8_;
				T8_ = (NIM_BOOL)0;
				T8_ = (pattern.len == ((NI)0));
				if (T8_) goto LA9_;
				T8_ = nsuStartsWith(stripped, pattern);
				if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
LA9_: ;
				if (!T8_) goto LA10_;
				nimln_(59);
				llStreamWriteln__llstream_u319(result, stripped);
				if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
			}
			goto LA6_;
LA10_: ;
			{
				nimln_(61);
				llStreamWriteln__llstream_u319(result, line);
				if (NIM_UNLIKELY(*nimErr_)) goto LA5_;
			}
LA6_: ;
			{
				LA5_:;
			}
			{
				nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
				eqdestroy___stdZassertions_u16((&stripped));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		} LA3: ;
	}
	nimlf_(62, "D:\\nim\\compiler\\filters.nim");
	llStreamClose__llstream_u195(stdin_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&line));
		eqdestroy___stdZassertions_u16((&pattern));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow*, filterReplace__filters_u109)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* stdin_p1, NimStringV2 filename_p2, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* call_p3) {
	tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* result;
	NimStringV2 sub;
	NimStringV2 by;
	NimStringV2 line;
NIM_BOOL* nimErr_;
	nimfr_("filterReplace", "D:\\nim\\compiler\\filters.nim");
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	sub.len = 0; sub.p = NIM_NIL;
	by.len = 0; by.p = NIM_NIL;
	line.len = 0; line.p = NIM_NIL;
	nimlf_(65, "D:\\nim\\compiler\\filters.nim");
	sub = strArg__filters_u62(conf_p0, call_p3, TM__Z829bJQuL5LjY0SVtwy0lEQ_44, ((NI)1), TM__Z829bJQuL5LjY0SVtwy0lEQ_45);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(66);
	{
		if (!(sub.len == ((NI)0))) goto LA4_;
		invalidPragma__filters_u9(conf_p0, call_p3);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA4_: ;
	nimln_(67);
	by = strArg__filters_u62(conf_p0, call_p3, TM__Z829bJQuL5LjY0SVtwy0lEQ_47, ((NI)2), TM__Z829bJQuL5LjY0SVtwy0lEQ_48);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(68);
	result = llStreamOpen__llstream_u31(TM__Z829bJQuL5LjY0SVtwy0lEQ_49);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(69);
	line = rawNewString(((NI)80));
	{
		nimln_(70);
		while (1) {
			NIM_BOOL T8_;
			NimStringV2 colontmpD_;
			T8_ = (NIM_BOOL)0;
			T8_ = llStreamReadLine__llstream_u287(stdin_p1, (&line));
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			if (!T8_) goto LA7;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			nimln_(71);
			colontmpD_ = nsuReplaceStr(line, sub, by);
			if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
			llStreamWriteln__llstream_u319(result, colontmpD_);
			if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
			{
				LA9_:;
			}
			{
				nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
				eqdestroy___stdZassertions_u16((&colontmpD_));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		} LA7: ;
	}
	nimlf_(72, "D:\\nim\\compiler\\filters.nim");
	llStreamClose__llstream_u195(stdin_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&line));
		eqdestroy___stdZassertions_u16((&by));
		eqdestroy___stdZassertions_u16((&sub));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
