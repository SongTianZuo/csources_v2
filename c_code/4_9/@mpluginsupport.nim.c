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

typedef struct tyObject_IdentCachecolonObjectType___LYhYfW7zHVa6k72gTbQGLw tyObject_IdentCachecolonObjectType___LYhYfW7zHVa6k72gTbQGLw;
typedef struct tyTuple__PJjtAPjw9cXungyri9aChLLA tyTuple__PJjtAPjw9cXungyri9aChLLA;
typedef struct tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw;
typedef struct tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg;
typedef struct tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg;
typedef struct tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA;
typedef struct tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ;
typedef struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA;
typedef struct tyObject_TLoc__uPq8MyfraByuDcxcywjdTg tyObject_TLoc__uPq8MyfraByuDcxcywjdTg;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TLib__D3tgh5eiXMEtvqp1Qgv3cQ tyObject_TLib__D3tgh5eiXMEtvqp1Qgv3cQ;
typedef struct tyObject_TContext__WbDKsGY08NBKRG5kiWUVLw tyObject_TContext__WbDKsGY08NBKRG5kiWUVLw;
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
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
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
struct tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg {
	NI id;
	NimStringV2 s;
	tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg* next;
	NI h;
};
typedef N_NIMCALL_PTR(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA*, tyProc__8fBHwTGS1kcLGw7rauOooQ) (tyObject_TContext__WbDKsGY08NBKRG5kiWUVLw* c_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1);
struct tyTuple__PJjtAPjw9cXungyri9aChLLA {
NimStringV2 Field0;
NimStringV2 Field1;
NimStringV2 Field2;
tyProc__8fBHwTGS1kcLGw7rauOooQ Field3;
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg*, getIdent__idents_u197)(tyObject_IdentCachecolonObjectType___LYhYfW7zHVa6k72gTbQGLw* ic_p0, NimStringV2 identifier_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___idents_u154)(tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg** dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_u4790)(tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw** dest_p0);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw*, skipGenericOwner__ast_u7028)(tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* s_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_u4793)(tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw** dest_p0, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* src_p1);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4324)(void);
static N_INLINE(void, popFrame)(void);
extern NIM_BOOL nimInErrorMode__system_u4127;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4127);
	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s_p0) {
	{
		if (!(framePtr__system_u3773 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s_p0).calldepth = ((NI16)0);
	}
	goto LA1_;
LA3_: ;
	{
		(*s_p0).calldepth = (NI16)((*framePtr__system_u3773).calldepth + ((NI16)1));
	}
LA1_: ;
	(*s_p0).prev = framePtr__system_u3773;
	framePtr__system_u3773 = s_p0;
	{
		if (!((*s_p0).calldepth == ((NI16)2000))) goto LA8_;
		callDepthLimitReached__system_u4324();
	}
LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_u3773 = (*framePtr__system_u3773).prev;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, pluginMatches__pluginsupport_u18)(tyObject_IdentCachecolonObjectType___LYhYfW7zHVa6k72gTbQGLw* ic_p0, tyTuple__PJjtAPjw9cXungyri9aChLLA* p_p1, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* s_p2) {
	NIM_BOOL result;
	tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg* colontmpD_;
	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* module;
	tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg* colontmpD__2;
	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* package;
	tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg* colontmpD__3;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
	nimfr_("pluginMatches", "D:\\nim\\compiler\\pluginsupport.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	colontmpD_ = NIM_NIL;
	module = NIM_NIL;
	colontmpD__2 = NIM_NIL;
	package = NIM_NIL;
	colontmpD__3 = NIM_NIL;
	nimlf_(23, "D:\\nim\\compiler\\pluginsupport.nim");
	{
		colontmpD_ = getIdent__idents_u197(ic_p0, (*p_p1).Field2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!!(((*(*s_p2).name).id == (*colontmpD_).id))) goto LA4_;
		nimln_(24);
		nimln_(22);
		nimln_(24);
		result = NIM_FALSE;
		nimlf_(71, "D:\\nim\\compiler\\idents.nim");
		eqdestroy___idents_u154(&colontmpD__3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
		eqdestroy___ast_u4790(&package);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(71, "D:\\nim\\compiler\\idents.nim");
		eqdestroy___idents_u154(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
		eqdestroy___ast_u4790(&module);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(71, "D:\\nim\\compiler\\idents.nim");
		eqdestroy___idents_u154(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
LA4_: ;
	nimlf_(25, "D:\\nim\\compiler\\pluginsupport.nim");
	module = skipGenericOwner__ast_u7028(s_p2);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(26);
	{
		NIM_BOOL T8_;
		NIM_BOOL T9_;
		T8_ = (NIM_BOOL)0;
		T9_ = (NIM_BOOL)0;
		T9_ = (module == ((tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw*) NIM_NIL));
		if (T9_) goto LA10_;
		T9_ = !(((*module).kind == ((tyEnum_TSymKind__WEw9cZhlaQ0BBcFYZb9b9cOYg)6)));
LA10_: ;
		T8_ = T9_;
		if (T8_) goto LA11_;
		nimln_(27);
		colontmpD__2 = getIdent__idents_u197(ic_p0, (*p_p1).Field1);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T8_ = !(((*(*module).name).id == (*colontmpD__2).id));
LA11_: ;
		if (!T8_) goto LA12_;
		nimln_(28);
		nimln_(22);
		nimln_(28);
		result = NIM_FALSE;
		nimlf_(71, "D:\\nim\\compiler\\idents.nim");
		eqdestroy___idents_u154(&colontmpD__3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
		eqdestroy___ast_u4790(&package);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(71, "D:\\nim\\compiler\\idents.nim");
		eqdestroy___idents_u154(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
		eqdestroy___ast_u4790(&module);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(71, "D:\\nim\\compiler\\idents.nim");
		eqdestroy___idents_u154(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
LA12_: ;
	nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
	eqcopy___ast_u4793(&package, (*module).owner);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimlf_(30, "D:\\nim\\compiler\\pluginsupport.nim");
	{
		NIM_BOOL T16_;
		NIM_BOOL T17_;
		T16_ = (NIM_BOOL)0;
		T17_ = (NIM_BOOL)0;
		T17_ = (package == ((tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw*) NIM_NIL));
		if (T17_) goto LA18_;
		T17_ = !(((*package).kind == ((tyEnum_TSymKind__WEw9cZhlaQ0BBcFYZb9b9cOYg)24)));
LA18_: ;
		T16_ = T17_;
		if (T16_) goto LA19_;
		nimln_(31);
		colontmpD__3 = getIdent__idents_u197(ic_p0, (*p_p1).Field0);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T16_ = !(((*(*package).name).id == (*colontmpD__3).id));
LA19_: ;
		if (!T16_) goto LA20_;
		nimln_(32);
		nimln_(22);
		nimln_(32);
		result = NIM_FALSE;
		nimlf_(71, "D:\\nim\\compiler\\idents.nim");
		eqdestroy___idents_u154(&colontmpD__3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
		eqdestroy___ast_u4790(&package);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(71, "D:\\nim\\compiler\\idents.nim");
		eqdestroy___idents_u154(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
		eqdestroy___ast_u4790(&module);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(71, "D:\\nim\\compiler\\idents.nim");
		eqdestroy___idents_u154(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
LA20_: ;
	nimlf_(33, "D:\\nim\\compiler\\pluginsupport.nim");
	nimln_(22);
	nimln_(33);
	result = NIM_TRUE;
	nimlf_(71, "D:\\nim\\compiler\\idents.nim");
	eqdestroy___idents_u154(&colontmpD__3);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
	eqdestroy___ast_u4790(&package);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimlf_(71, "D:\\nim\\compiler\\idents.nim");
	eqdestroy___idents_u154(&colontmpD__2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
	eqdestroy___ast_u4790(&module);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimlf_(71, "D:\\nim\\compiler\\idents.nim");
	eqdestroy___idents_u154(&colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	goto BeforeRet_;
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		eqdestroy___idents_u154(&colontmpD__3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
		eqdestroy___ast_u4790(&package);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(71, "D:\\nim\\compiler\\idents.nim");
		eqdestroy___idents_u154(&colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
		eqdestroy___ast_u4790(&module);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(71, "D:\\nim\\compiler\\idents.nim");
		eqdestroy___idents_u154(&colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
