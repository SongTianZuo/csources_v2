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

typedef struct tySequence__j2i8zfgGiAL9awXihyAwjhQ tySequence__j2i8zfgGiAL9awXihyAwjhQ;
typedef struct tySequence__j2i8zfgGiAL9awXihyAwjhQ_Content tySequence__j2i8zfgGiAL9awXihyAwjhQ_Content;
typedef struct tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA;
typedef struct tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ;
typedef struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw;
typedef struct tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg;
typedef struct tySequence__y7DZsOv6USik6pXh4lkzgg tySequence__y7DZsOv6USik6pXh4lkzgg;
typedef struct tySequence__y7DZsOv6USik6pXh4lkzgg_Content tySequence__y7DZsOv6USik6pXh4lkzgg_Content;
struct tySequence__j2i8zfgGiAL9awXihyAwjhQ {
  NI len; tySequence__j2i8zfgGiAL9awXihyAwjhQ_Content* p;
};
typedef NU32 tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA;
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
typedef NU16 tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA;


#ifndef tySequence__j2i8zfgGiAL9awXihyAwjhQ_Content_PP
#define tySequence__j2i8zfgGiAL9awXihyAwjhQ_Content_PP
struct tySequence__j2i8zfgGiAL9awXihyAwjhQ_Content { NI cap; tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__y7DZsOv6USik6pXh4lkzgg_Content_PP
#define tySequence__y7DZsOv6USik6pXh4lkzgg_Content_PP
struct tySequence__y7DZsOv6USik6pXh4lkzgg_Content { NI cap; tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, pushBackendOption__backendpragmas_u5)(tySequence__j2i8zfgGiAL9awXihyAwjhQ* optionsStack_p0, tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA* options_p1);
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, add__backendpragmas_u8)(tySequence__j2i8zfgGiAL9awXihyAwjhQ* x_p0, tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA value_p1);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4312)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, len__ast_u3574)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseFieldError2)(NimStringV2 f_p0, NI discVal_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_u3711)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA** dest_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* src_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA, whichPragma__trees_u251)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p0);
static N_INLINE(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA, pragmaToOptions__pragmas_u915)(tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA w_p0);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_u3708)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA** dest_p0);
static N_INLINE(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA*, X5BX5D___backendpragmas_u31)(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA* s_p0, NI s_p0Len_0, NI i_p1);
static N_INLINE(NIM_BOOL, nimSubInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NIMCALL(void, setLen__cgendata_u928)(tySequence__j2i8zfgGiAL9awXihyAwjhQ* s_p0, NI newlen_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
static NIM_CONST tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA TM__3q7MJDZ1ISWoMy7F4GbANQ_2 = {
0xec, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[62+1];
} TM__3q7MJDZ1ISWoMy7F4GbANQ_3 = { 62 | NIM_STRLIT_FLAG, "field \'sons\' is not accessible for type \'TNode\' using \'kind = " };
static const NimStringV2 TM__3q7MJDZ1ISWoMy7F4GbANQ_4 = {62, (NimStrPayload*)&TM__3q7MJDZ1ISWoMy7F4GbANQ_3};
static const NimStringV2 TM__3q7MJDZ1ISWoMy7F4GbANQ_5 = {62, (NimStrPayload*)&TM__3q7MJDZ1ISWoMy7F4GbANQ_3};
static const NimStringV2 TM__3q7MJDZ1ISWoMy7F4GbANQ_6 = {62, (NimStrPayload*)&TM__3q7MJDZ1ISWoMy7F4GbANQ_3};
static const NimStringV2 TM__3q7MJDZ1ISWoMy7F4GbANQ_7 = {62, (NimStrPayload*)&TM__3q7MJDZ1ISWoMy7F4GbANQ_3};
static const NimStringV2 TM__3q7MJDZ1ISWoMy7F4GbANQ_8 = {62, (NimStrPayload*)&TM__3q7MJDZ1ISWoMy7F4GbANQ_3};
static NIM_CONST tySet_tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA TM__3q7MJDZ1ISWoMy7F4GbANQ_9 = {
0xe0, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[64+1];
} TM__3q7MJDZ1ISWoMy7F4GbANQ_10 = { 64 | NIM_STRLIT_FLAG, "field \'intVal\' is not accessible for type \'TNode\' using \'kind = " };
static const NimStringV2 TM__3q7MJDZ1ISWoMy7F4GbANQ_11 = {64, (NimStrPayload*)&TM__3q7MJDZ1ISWoMy7F4GbANQ_10};
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
N_LIB_PRIVATE N_NIMCALL(void, pushBackendOption__backendpragmas_u5)(tySequence__j2i8zfgGiAL9awXihyAwjhQ* optionsStack_p0, tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA* options_p1) {
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD_;
	nimfr_("pushBackendOption", "D:\\nim\\compiler\\backendpragmas.nim");
	nimZeroMem((void*)(&colontmpD_), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimlf_(4, "D:\\nim\\compiler\\backendpragmas.nim");
	colontmpD_ = (*options_p1);
	add__backendpragmas_u8((&(*optionsStack_p0)), colontmpD_);
	popFrame();
}
static N_INLINE(NI, len__ast_u3574)(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p0) {
	NI result;
	NI T1_;
	nimfr_("len", "D:\\nim\\compiler\\ast.nim");
{	result = (NI)0;
	nimlf_(1193, "D:\\nim\\compiler\\ast.nim");
	if (((TM__3q7MJDZ1ISWoMy7F4GbANQ_2[(NU)(((*n_p0).kind))>>3] &(1U<<((NU)(((*n_p0).kind))&7U)))!=0)) 	{ raiseFieldError2(TM__3q7MJDZ1ISWoMy7F4GbANQ_4, (NI)((*n_p0).kind)); goto BeforeRet_;
	}
	T1_ = (*n_p0)._kind_6.sons.len;
	result = T1_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA, pragmaToOptions__pragmas_u915)(tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA w_p0) {
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA result;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD_;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__2;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__3;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__4;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__5;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__6;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__7;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__8;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__9;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__10;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__11;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__12;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__13;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__14;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__15;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__16;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__17;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__18;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__19;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__20;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__21;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__22;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__23;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__24;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA colontmpD__25;
	nimfr_("pragmaToOptions", "D:\\nim\\compiler\\pragmas.nim");
	nimZeroMem((void*)(&result), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD_), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__2), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__3), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__4), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__5), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__6), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__7), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__8), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__9), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__10), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__11), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__12), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__13), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__14), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__15), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__16), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__17), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__18), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__19), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__20), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__21), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__22), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__23), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__24), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimZeroMem((void*)(&colontmpD__25), sizeof(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA));
	nimlf_(375, "D:\\nim\\compiler\\pragmas.nim");
	nimln_(376);
	switch (w_p0) {
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)155):
	{
		nimln_(377);
		colontmpD_ = 3518;
		result = colontmpD_;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)79):
	{
		nimln_(378);
		colontmpD__2 = 2;
		result = colontmpD__2;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)201):
	{
		nimln_(379);
		colontmpD__3 = 4;
		result = colontmpD__3;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)156):
	{
		nimln_(380);
		colontmpD__4 = 8;
		result = colontmpD__4;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)157):
	{
		nimln_(381);
		colontmpD__5 = 16;
		result = colontmpD__5;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)158):
	{
		nimln_(382);
		colontmpD__6 = 32;
		result = colontmpD__6;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)160):
	{
		nimln_(383);
		colontmpD__7 = 384;
		result = colontmpD__7;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)161):
	{
		nimln_(384);
		colontmpD__8 = 128;
		result = colontmpD__8;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)162):
	{
		nimln_(385);
		colontmpD__9 = 256;
		result = colontmpD__9;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)164):
	{
		nimln_(386);
		colontmpD__10 = 512;
		result = colontmpD__10;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)163):
	{
		nimln_(387);
		colontmpD__11 = 1024;
		result = colontmpD__11;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)167):
	{
		nimln_(388);
		colontmpD__12 = 2048;
		result = colontmpD__12;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)171):
	{
		nimln_(389);
		colontmpD__13 = 8192;
		result = colontmpD__13;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)172):
	{
		nimln_(390);
		colontmpD__14 = 16384;
		result = colontmpD__14;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)132):
	{
		nimln_(391);
		colontmpD__15 = 4096;
		result = colontmpD__15;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)133):
	{
		nimln_(392);
		colontmpD__16 = 131072;
		result = colontmpD__16;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)134):
	{
		nimln_(393);
		colontmpD__17 = 524288;
		result = colontmpD__17;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)141):
	{
		nimln_(394);
		colontmpD__18 = 1;
		result = colontmpD__18;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)77):
	{
		nimln_(395);
		colontmpD__19 = 18874368;
		result = colontmpD__19;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)78):
	{
		nimln_(396);
		colontmpD__20 = 16777216;
		result = colontmpD__20;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)295):
	{
		nimln_(397);
		colontmpD__21 = 1048576;
		result = colontmpD__21;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)218):
	{
		nimln_(398);
		colontmpD__22 = 4194304;
		result = colontmpD__22;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)168):
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)169):
	{
		nimln_(399);
		colontmpD__23 = 8388608;
		result = colontmpD__23;
	}
	break;
	case ((tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA)170):
	{
		nimln_(400);
		colontmpD__24 = 33554432;
		result = colontmpD__24;
	}
	break;
	default:
	{
		nimln_(401);
		colontmpD__25 = 0;
		result = colontmpD__25;
	}
	break;
	}
	popFrame();
	return result;
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
N_LIB_PRIVATE N_NIMCALL(void, processPushBackendOption__backendpragmas_u79)(tySequence__j2i8zfgGiAL9awXihyAwjhQ* optionsStack_p0, tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA* options_p1, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p2, NI start_p3) {
NIM_BOOL* nimErr_;
	nimfr_("processPushBackendOption", "D:\\nim\\compiler\\backendpragmas.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(12, "D:\\nim\\compiler\\backendpragmas.nim");
	pushBackendOption__backendpragmas_u5(optionsStack_p0, options_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimlf_(117, "D:\\nim\\lib\\system\\iterators_1.nim");
		nimlf_(13, "D:\\nim\\compiler\\backendpragmas.nim");
		colontmp_ = len__ast_u3574(n_p2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(119, "D:\\nim\\lib\\system\\iterators_1.nim");
		i_2 = start_p3;
		{
			nimln_(120);
			while (1) {
				tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* it;
				NI TM__3q7MJDZ1ISWoMy7F4GbANQ_12;
				if (!(i_2 < colontmp_)) goto LA3;
				it = NIM_NIL;
				nimlf_(13, "D:\\nim\\compiler\\backendpragmas.nim");
				i = i_2;
				nimlf_(1224, "D:\\nim\\compiler\\ast.nim");
				if (((TM__3q7MJDZ1ISWoMy7F4GbANQ_2[(NU)(((*n_p2).kind))>>3] &(1U<<((NU)(((*n_p2).kind))&7U)))!=0)) 				{ raiseFieldError2(TM__3q7MJDZ1ISWoMy7F4GbANQ_5, (NI)((*n_p2).kind)); goto BeforeRet_;
				}
				if (i < 0 || i >= (*n_p2)._kind_6.sons.len){ raiseIndexError2(i,(*n_p2)._kind_6.sons.len-1); goto BeforeRet_;
				}
				eqcopy___ast_u3711(&it, (*n_p2)._kind_6.sons.p->data[i]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimlf_(13, "D:\\nim\\compiler\\backendpragmas.nim");
				{
					NIM_BOOL T6_;
					NIM_BOOL T7_;
					NI T9_;
					tyEnum_TSpecialWord__ZEjiiS7kFPfhWsHPFBcvJA sw;
					tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA opts;
					nimln_(15);
					T6_ = (NIM_BOOL)0;
					T7_ = (NIM_BOOL)0;
					T7_ = ((*it).kind == ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)34) || (*it).kind == ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)27) || (*it).kind == ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)28));
					if (!(T7_)) goto LA8_;
					T9_ = (NI)0;
					T9_ = len__ast_u3574(it);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					T7_ = (T9_ == ((NI)2));
LA8_: ;
					T6_ = T7_;
					if (!(T6_)) goto LA10_;
					if (((TM__3q7MJDZ1ISWoMy7F4GbANQ_2[(NU)(((*it).kind))>>3] &(1U<<((NU)(((*it).kind))&7U)))!=0)) 					{ raiseFieldError2(TM__3q7MJDZ1ISWoMy7F4GbANQ_6, (NI)((*it).kind)); goto BeforeRet_;
					}
					if (((NI)1) < 0 || ((NI)1) >= (*it)._kind_6.sons.len){ raiseIndexError2(((NI)1),(*it)._kind_6.sons.len-1); goto BeforeRet_;
					}
					T6_ = ((*(*it)._kind_6.sons.p->data[((NI)1)]).kind == ((tyEnum_TNodeKind__iTsf7OFdDPsI9bz3USrneZA)6));
LA10_: ;
					if (!T6_) goto LA11_;
					nimln_(16);
					if (((TM__3q7MJDZ1ISWoMy7F4GbANQ_2[(NU)(((*it).kind))>>3] &(1U<<((NU)(((*it).kind))&7U)))!=0)) 					{ raiseFieldError2(TM__3q7MJDZ1ISWoMy7F4GbANQ_7, (NI)((*it).kind)); goto BeforeRet_;
					}
					if (((NI)0) < 0 || ((NI)0) >= (*it)._kind_6.sons.len){ raiseIndexError2(((NI)0),(*it)._kind_6.sons.len-1); goto BeforeRet_;
					}
					sw = whichPragma__trees_u251((*it)._kind_6.sons.p->data[((NI)0)]);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					nimln_(17);
					opts = pragmaToOptions__pragmas_u915(sw);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					nimln_(18);
					{
						tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA T15_;
						T15_ = 0;
						if (!!((opts == T15_))) goto LA16_;
						nimln_(19);
						{
							if (((TM__3q7MJDZ1ISWoMy7F4GbANQ_2[(NU)(((*it).kind))>>3] &(1U<<((NU)(((*it).kind))&7U)))!=0)) 							{ raiseFieldError2(TM__3q7MJDZ1ISWoMy7F4GbANQ_8, (NI)((*it).kind)); goto BeforeRet_;
							}
							if (((NI)1) < 0 || ((NI)1) >= (*it)._kind_6.sons.len){ raiseIndexError2(((NI)1),(*it)._kind_6.sons.len-1); goto BeforeRet_;
							}
							if (!(((TM__3q7MJDZ1ISWoMy7F4GbANQ_9[(NU)(((*(*it)._kind_6.sons.p->data[((NI)1)]).kind))>>3] &(1U<<((NU)(((*(*it)._kind_6.sons.p->data[((NI)1)]).kind))&7U)))!=0))) 							{ raiseFieldError2(TM__3q7MJDZ1ISWoMy7F4GbANQ_11, (NI)((*(*it)._kind_6.sons.p->data[((NI)1)]).kind)); goto BeforeRet_;
							}
							if (!!(((*(*it)._kind_6.sons.p->data[((NI)1)])._kind_1.intVal == IL64(0)))) goto LA20_;
							nimln_(20);
							(*options_p1) = ((*options_p1) | opts);
						}
						goto LA18_;
LA20_: ;
						{
							nimln_(22);
							(*options_p1) = ((*options_p1) & ~ opts);
						}
LA18_: ;
					}
LA16_: ;
				}
LA11_: ;
				nimlf_(122, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(i_2, ((NI)1), &TM__3q7MJDZ1ISWoMy7F4GbANQ_12)) { raiseOverflow(); goto BeforeRet_;
				};
				i_2 = (NI)(TM__3q7MJDZ1ISWoMy7F4GbANQ_12);
				nimlf_(1224, "D:\\nim\\compiler\\ast.nim");
				eqdestroy___ast_u3708(&it);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			} LA3: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(NIM_BOOL, nimSubInt)(NI a_p0, NI b_p1, NI* res_p2) {
	NIM_BOOL result;
	NI r;
	result = (NIM_BOOL)0;
	r = ((NI) ((NU)((NU32)(((NU) (a_p0))) - (NU32)(((NU) (b_p1))))));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI)0) <= (NI)(r ^ a_p0));
		if (T3_) goto LA4_;
		T3_ = (((NI)0) <= (NI)(r ^ (NI)((NU32) ~(b_p1))));
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
static N_INLINE(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA*, X5BX5D___backendpragmas_u31)(tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA* s_p0, NI s_p0Len_0, NI i_p1) {
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA* result;
	NI TM__3q7MJDZ1ISWoMy7F4GbANQ_13;
	nimfr_("[]", "D:\\nim\\lib\\system\\indices.nim");
{	result = (tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA*)0;
	nimlf_(29, "D:\\nim\\lib\\system\\indices.nim");
	nimln_(30);
	if (nimSubInt(s_p0Len_0, i_p1, &TM__3q7MJDZ1ISWoMy7F4GbANQ_13)) { raiseOverflow(); goto BeforeRet_;
	};
	if ((NI)(TM__3q7MJDZ1ISWoMy7F4GbANQ_13) < 0 || (NI)(TM__3q7MJDZ1ISWoMy7F4GbANQ_13) >= s_p0Len_0){ raiseIndexError2((NI)(TM__3q7MJDZ1ISWoMy7F4GbANQ_13),s_p0Len_0-1); goto BeforeRet_;
	}
	result = (&s_p0[(NI)(TM__3q7MJDZ1ISWoMy7F4GbANQ_13)]);
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, popBackendOption__backendpragmas_u28)(tySequence__j2i8zfgGiAL9awXihyAwjhQ* optionsStack_p0, tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA* options_p1) {
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA* T1_;
	NI T2_;
	NI TM__3q7MJDZ1ISWoMy7F4GbANQ_14;
NIM_BOOL* nimErr_;
	nimfr_("popBackendOption", "D:\\nim\\compiler\\backendpragmas.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(7, "D:\\nim\\compiler\\backendpragmas.nim");
	T1_ = (tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA*)0;
	T1_ = X5BX5D___backendpragmas_u31(((*optionsStack_p0).p) ? ((*optionsStack_p0).p->data) : NIM_NIL, (*optionsStack_p0).len, ((NI)1));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*options_p1) = (*T1_);
	nimln_(8);
	T2_ = (*optionsStack_p0).len;
	if (nimSubInt(T2_, ((NI)1), &TM__3q7MJDZ1ISWoMy7F4GbANQ_14)) { raiseOverflow(); goto BeforeRet_;
	};
	if (((NI)(TM__3q7MJDZ1ISWoMy7F4GbANQ_14)) < ((NI)0) || ((NI)(TM__3q7MJDZ1ISWoMy7F4GbANQ_14)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__3q7MJDZ1ISWoMy7F4GbANQ_14), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	setLen__cgendata_u928((&(*optionsStack_p0)), ((NI) ((NI)(TM__3q7MJDZ1ISWoMy7F4GbANQ_14))));
	}
BeforeRet_: ;
	popFrame();
}
