/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 32

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

typedef struct tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA;
typedef struct tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw;
typedef struct tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ;
typedef struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg;
typedef struct tySequence__y7DZsOv6USik6pXh4lkzgg tySequence__y7DZsOv6USik6pXh4lkzgg;
typedef struct tySequence__y7DZsOv6USik6pXh4lkzgg_Content tySequence__y7DZsOv6USik6pXh4lkzgg_Content;
typedef struct tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg;
typedef struct tySequence__FxQD8iZ8Ixxg89bDGa61Sog tySequence__FxQD8iZ8Ixxg89bDGa61Sog;
typedef struct tySequence__FxQD8iZ8Ixxg89bDGa61Sog_Content tySequence__FxQD8iZ8Ixxg89bDGa61Sog_Content;
typedef struct tyObject_TLoc__uPq8MyfraByuDcxcywjdTg tyObject_TLoc__uPq8MyfraByuDcxcywjdTg;
typedef struct tyObject_TLib__D3tgh5eiXMEtvqp1Qgv3cQ tyObject_TLib__D3tgh5eiXMEtvqp1Qgv3cQ;
struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA {
	NU16 line;
	NI16 col;
	NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__B189abzIdXaFZwbqX6rJUug;
typedef NU8 tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
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
typedef NU8 tyEnum_TTypeKind__ONzdjesiM9beeNBA9aZG5Ghw;
typedef NU8 tyEnum_TCallingConvention__YGBqcuVZk02VOexpHqw79aA;
typedef NU64 tySet_tyEnum_TTypeFlag__ewjLDo034tp3GwWXYLjETg;
struct tySequence__FxQD8iZ8Ixxg89bDGa61Sog {
  NI len; tySequence__FxQD8iZ8Ixxg89bDGa61Sog_Content* p;
};
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
struct tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ {
  tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA Sup;
	tyEnum_TTypeKind__ONzdjesiM9beeNBA9aZG5Ghw kind;
	tyEnum_TCallingConvention__YGBqcuVZk02VOexpHqw79aA callConv;
	tySet_tyEnum_TTypeFlag__ewjLDo034tp3GwWXYLjETg flags;
	tySequence__FxQD8iZ8Ixxg89bDGa61Sog sons;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n;
	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* owner;
	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* sym;
	NI64 size;
	NI16 align;
	NI16 paddingAtEnd;
	tyObject_TLoc__uPq8MyfraByuDcxcywjdTg loc;
	tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* typeInst;
	tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg uniqueId;
};
typedef NU8 tyEnum_ViewTypeKind__tmNnAo8QMuIC2mPmdnMxpA;
typedef NU16 tyEnum_TMagic__kSp6H9c8v2GSNPgE9bRnqBSw;
typedef NU8 tyEnum_TSymKind__WEw9cZhlaQ0BBcFYZb9b9cOYg;
typedef NU64 tySet_tyEnum_TSymFlag__KpFDhwzyzhjZdX3UjhPXbQ;
typedef NU32 tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA;
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


#ifndef tySequence__y7DZsOv6USik6pXh4lkzgg_Content_PP
#define tySequence__y7DZsOv6USik6pXh4lkzgg_Content_PP
struct tySequence__y7DZsOv6USik6pXh4lkzgg_Content { NI cap; tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__FxQD8iZ8Ixxg89bDGa61Sog_Content_PP
#define tySequence__FxQD8iZ8Ixxg89bDGa61Sog_Content_PP
struct tySequence__FxQD8iZ8Ixxg89bDGa61Sog_Content { NI cap; tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_u3711)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA** dest_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* src_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseFieldError2)(NimStringV2 f_p0, NI discVal_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
static N_INLINE(NI, len__ast_u3574)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p0);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(tyEnum_ViewTypeKind__tmNnAo8QMuIC2mPmdnMxpA, classifyViewType__typeallowed_u601)(tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* t_p0);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TMagic__kSp6H9c8v2GSNPgE9bRnqBSw, getMagic__trees_u144)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* op_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_u3708)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA** dest_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static NIM_CONST tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA TM__cg0lrra2iBxGJpOR4ppsng_2 = {
0xec, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[62+1];
} TM__cg0lrra2iBxGJpOR4ppsng_3 = { 62 | NIM_STRLIT_FLAG, "field \'sons\' is not accessible for type \'TNode\' using \'kind = " };
static const NimStringV2 TM__cg0lrra2iBxGJpOR4ppsng_4 = {62, (NimStrPayload*)&TM__cg0lrra2iBxGJpOR4ppsng_3};
static const NimStringV2 TM__cg0lrra2iBxGJpOR4ppsng_5 = {62, (NimStrPayload*)&TM__cg0lrra2iBxGJpOR4ppsng_3};
static const NimStringV2 TM__cg0lrra2iBxGJpOR4ppsng_6 = {62, (NimStrPayload*)&TM__cg0lrra2iBxGJpOR4ppsng_3};
static const NimStringV2 TM__cg0lrra2iBxGJpOR4ppsng_7 = {62, (NimStrPayload*)&TM__cg0lrra2iBxGJpOR4ppsng_3};
static const NimStringV2 TM__cg0lrra2iBxGJpOR4ppsng_8 = {62, (NimStrPayload*)&TM__cg0lrra2iBxGJpOR4ppsng_3};
static const NimStringV2 TM__cg0lrra2iBxGJpOR4ppsng_9 = {62, (NimStrPayload*)&TM__cg0lrra2iBxGJpOR4ppsng_3};
static NIM_CONST tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA TM__cg0lrra2iBxGJpOR4ppsng_10 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[61+1];
} TM__cg0lrra2iBxGJpOR4ppsng_11 = { 61 | NIM_STRLIT_FLAG, "field \'sym\' is not accessible for type \'TNode\' using \'kind = " };
static const NimStringV2 TM__cg0lrra2iBxGJpOR4ppsng_12 = {61, (NimStrPayload*)&TM__cg0lrra2iBxGJpOR4ppsng_11};
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
	if (((TM__cg0lrra2iBxGJpOR4ppsng_2[(NU)(((*n_p0).kind))>>3] &(1U<<((NU)(((*n_p0).kind))&7U)))!=0)) 	{ raiseFieldError2(TM__cg0lrra2iBxGJpOR4ppsng_8, (NI)((*n_p0).kind)); goto BeforeRet_;
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
	result = (&nimInErrorMode__system_u4097);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDangerousLocation__semstrictfuncs_u6)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p0, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* owner_p1) {
	NIM_BOOL result;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_2;
	NIM_BOOL hasDeref;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
	nimfr_("isDangerousLocation", "D:\\nim\\compiler\\semstrictfuncs.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	n_2 = NIM_NIL;
	nimlf_(1224, "D:\\nim\\compiler\\ast.nim");
	eqcopy___ast_u3711(&n_2, n_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimlf_(19, "D:\\nim\\compiler\\semstrictfuncs.nim");
	hasDeref = NIM_FALSE;
	{
		nimln_(20);
		while (1) {
			nimln_(21);
			switch ((*n_2).kind) {
			case ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)47):
			case ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)65):
			{
				nimln_(23);
				{
					if (((TM__cg0lrra2iBxGJpOR4ppsng_2[(NU)(((*n_2).kind))>>3] &(1U<<((NU)(((*n_2).kind))&7U)))!=0)) 					{ raiseFieldError2(TM__cg0lrra2iBxGJpOR4ppsng_4, (NI)((*n_2).kind)); goto LA1_;
					}
					if (((NI)0) < 0 || ((NI)0) >= (*n_2)._kind_6.sons.len){ raiseIndexError2(((NI)0),(*n_2)._kind_6.sons.len-1); goto LA1_;
					}
					if (!!(((*(*(*n_2)._kind_6.sons.p->data[((NI)0)]).typ).kind == ((tyEnum_TTypeKind__ONzdjesiM9beeNBA9aZG5Ghw)23)))) goto LA7_;
					nimln_(24);
					hasDeref = NIM_TRUE;
				}
LA7_: ;
				nimlf_(1224, "D:\\nim\\compiler\\ast.nim");
				if (((TM__cg0lrra2iBxGJpOR4ppsng_2[(NU)(((*n_2).kind))>>3] &(1U<<((NU)(((*n_2).kind))&7U)))!=0)) 				{ raiseFieldError2(TM__cg0lrra2iBxGJpOR4ppsng_5, (NI)((*n_2).kind)); goto LA1_;
				}
				if (((NI)0) < 0 || ((NI)0) >= (*n_2)._kind_6.sons.len){ raiseIndexError2(((NI)0),(*n_2)._kind_6.sons.len-1); goto LA1_;
				}
				eqcopy___ast_u3711(&n_2, (*n_2)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)42):
			case ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)45) ... ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)46):
			case ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)63) ... ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)64):
			case ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)66) ... ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)67):
			{
				if (((TM__cg0lrra2iBxGJpOR4ppsng_2[(NU)(((*n_2).kind))>>3] &(1U<<((NU)(((*n_2).kind))&7U)))!=0)) 				{ raiseFieldError2(TM__cg0lrra2iBxGJpOR4ppsng_6, (NI)((*n_2).kind)); goto LA1_;
				}
				if (((NI)0) < 0 || ((NI)0) >= (*n_2)._kind_6.sons.len){ raiseIndexError2(((NI)0),(*n_2)._kind_6.sons.len-1); goto LA1_;
				}
				eqcopy___ast_u3711(&n_2, (*n_2)._kind_6.sons.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)58) ... ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)59):
			{
				if (((TM__cg0lrra2iBxGJpOR4ppsng_2[(NU)(((*n_2).kind))>>3] &(1U<<((NU)(((*n_2).kind))&7U)))!=0)) 				{ raiseFieldError2(TM__cg0lrra2iBxGJpOR4ppsng_7, (NI)((*n_2).kind)); goto LA1_;
				}
				if (((NI)1) < 0 || ((NI)1) >= (*n_2)._kind_6.sons.len){ raiseIndexError2(((NI)1),(*n_2)._kind_6.sons.len-1); goto LA1_;
				}
				eqcopy___ast_u3711(&n_2, (*n_2)._kind_6.sons.p->data[((NI)1)]);
				if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
			}
			break;
			case ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)26) ... ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)32):
			{
				nimlf_(31, "D:\\nim\\compiler\\semstrictfuncs.nim");
				{
					NI T14_;
					T14_ = (NI)0;
					T14_ = len__ast_u3574(n_2);
					if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					if (!(((NI)1) < T14_)) goto LA15_;
					nimln_(32);
					{
						NIM_BOOL T19_;
						NIM_BOOL T20_;
						tyEnum_ViewTypeKind__tmNnAo8QMuIC2mPmdnMxpA T22_;
						tyEnum_TMagic__kSp6H9c8v2GSNPgE9bRnqBSw T24_;
						T19_ = (NIM_BOOL)0;
						T20_ = (NIM_BOOL)0;
						T20_ = !(((*n_2).typ == ((tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ*) NIM_NIL)));
						if (!(T20_)) goto LA21_;
						T22_ = (tyEnum_ViewTypeKind__tmNnAo8QMuIC2mPmdnMxpA)0;
						T22_ = classifyViewType__typeallowed_u601((*n_2).typ);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						T20_ = !((T22_ == ((tyEnum_ViewTypeKind__tmNnAo8QMuIC2mPmdnMxpA)0)));
LA21_: ;
						T19_ = T20_;
						if (T19_) goto LA23_;
						T24_ = (tyEnum_TMagic__kSp6H9c8v2GSNPgE9bRnqBSw)0;
						T24_ = getMagic__trees_u144(n_2);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
						T19_ = (T24_ == ((tyEnum_TMagic__kSp6H9c8v2GSNPgE9bRnqBSw)126));
LA23_: ;
						if (!T19_) goto LA25_;
						nimlf_(1224, "D:\\nim\\compiler\\ast.nim");
						if (((TM__cg0lrra2iBxGJpOR4ppsng_2[(NU)(((*n_2).kind))>>3] &(1U<<((NU)(((*n_2).kind))&7U)))!=0)) 						{ raiseFieldError2(TM__cg0lrra2iBxGJpOR4ppsng_9, (NI)((*n_2).kind)); goto LA1_;
						}
						if (((NI)1) < 0 || ((NI)1) >= (*n_2)._kind_6.sons.len){ raiseIndexError2(((NI)1),(*n_2)._kind_6.sons.len-1); goto LA1_;
						}
						eqcopy___ast_u3711(&n_2, (*n_2)._kind_6.sons.p->data[((NI)1)]);
						if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
					}
					goto LA17_;
LA25_: ;
					{
						nimlf_(36, "D:\\nim\\compiler\\semstrictfuncs.nim");
						goto LA2;
					}
LA17_: ;
				}
				goto LA12_;
LA15_: ;
				{
					nimln_(38);
					goto LA2;
				}
LA12_: ;
			}
			break;
			default:
			{
				nimln_(40);
				goto LA2;
			}
			break;
			}
		}
	} LA2: ;
	nimln_(41);
	{
		NIM_BOOL T34_;
		if (!((*n_2).kind == ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)3))) goto LA32_;
		nimln_(43);
		T34_ = (NIM_BOOL)0;
		T34_ = hasDeref;
		if (T34_) goto LA35_;
		if (!(((TM__cg0lrra2iBxGJpOR4ppsng_10[(NU)(((*n_2).kind))>>3] &(1U<<((NU)(((*n_2).kind))&7U)))!=0))) 		{ raiseFieldError2(TM__cg0lrra2iBxGJpOR4ppsng_12, (NI)((*n_2).kind)); goto LA1_;
		}
		T34_ = !(((*(*n_2)._kind_4.sym).owner == owner_p1));
LA35_: ;
		result = T34_;
	}
	goto LA30_;
LA32_: ;
	{
		nimln_(55);
		result = hasDeref;
	}
LA30_: ;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		nimlf_(1224, "D:\\nim\\compiler\\ast.nim");
		eqdestroy___ast_u3708(&n_2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}