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

typedef struct tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA;
typedef struct tyObject_StreamObj__YejCBqGiUpphaYVvxhpLOQ tyObject_StreamObj__YejCBqGiUpphaYVvxhpLOQ;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_HSlice__Ft7fsi5uCTryLqJGssT0Jw tyObject_HSlice__Ft7fsi5uCTryLqJGssT0Jw;
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
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
struct tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA {
  RootObj Sup;
	NI bufpos;
	NimStringV2 buf;
	tyObject_StreamObj__YejCBqGiUpphaYVvxhpLOQ* input;
	NI lineNumber;
	NI sentinel;
	NI lineStart;
	NI offsetBase;
	tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars;
};
struct tyObject_HSlice__Ft7fsi5uCTryLqJGssT0Jw {
	NI a;
	NI b;
};
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___pureZstreams_u642)(tyObject_StreamObj__YejCBqGiUpphaYVvxhpLOQ** dest_p0, tyObject_StreamObj__YejCBqGiUpphaYVvxhpLOQ* src_p1, NIM_BOOL cyclic_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_u22)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_NIMCALL(NimStringV2, mnewString)(NI len_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__pureZlexbase_u17)(tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA* L_p0);
static N_INLINE(void, moveMem__system_u1724)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NIMCALL(NI, readDataStr__pureZstreams_u85)(tyObject_StreamObj__YejCBqGiUpphaYVvxhpLOQ* s_p0, NimStringV2* buffer_p1, tyObject_HSlice__Ft7fsi5uCTryLqJGssT0Jw slice_p2);
static N_INLINE(tyObject_HSlice__Ft7fsi5uCTryLqJGssT0Jw, dotdot___stdZstrbasics_u49)(NI a_p0, NI b_p1);
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4312)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s_p0);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_u2328)(NimStringV2* s_p0);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s_p0, NI newLen_p1);
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom__pureZlexbase_u133)(tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA* L_p0);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__pureZlexbase_u79)(tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA* L_p0, NI pos_p1);
N_LIB_PRIVATE N_NIMCALL(void, close__pureZstreams_u58)(tyObject_StreamObj__YejCBqGiUpphaYVvxhpLOQ* s_p0);
static const struct {
  NI cap; NIM_CHAR data[49+1];
} TM__k6p5NxDJat9aTyZxfZjCDJQ_2 = { 49 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\pure\\lexbase.nim(140, 9) `bufLen > 0` " };
static const NimStringV2 TM__k6p5NxDJat9aTyZxfZjCDJQ_3 = {49, (NimStrPayload*)&TM__k6p5NxDJat9aTyZxfZjCDJQ_2};
static const struct {
  NI cap; NIM_CHAR data[51+1];
} TM__k6p5NxDJat9aTyZxfZjCDJQ_4 = { 51 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\pure\\lexbase.nim(141, 9) `input != nil` " };
static const NimStringV2 TM__k6p5NxDJat9aTyZxfZjCDJQ_5 = {51, (NimStrPayload*)&TM__k6p5NxDJat9aTyZxfZjCDJQ_4};
static const struct {
  NI cap; NIM_CHAR data[65+1];
} TM__k6p5NxDJat9aTyZxfZjCDJQ_8 = { 65 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\pure\\lexbase.nim(54, 9) `L.sentinel + 1 <= L.buf.len` " };
static const NimStringV2 TM__k6p5NxDJat9aTyZxfZjCDJQ_9 = {65, (NimStrPayload*)&TM__k6p5NxDJat9aTyZxfZjCDJQ_8};
static const struct {
  NI cap; NIM_CHAR data[49+1];
} TM__k6p5NxDJat9aTyZxfZjCDJQ_12 = { 49 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\pure\\lexbase.nim(56, 9) `toCopy >= 0` " };
static const NimStringV2 TM__k6p5NxDJat9aTyZxfZjCDJQ_13 = {49, (NimStrPayload*)&TM__k6p5NxDJat9aTyZxfZjCDJQ_12};
static const struct {
  NI cap; NIM_CHAR data[52+1];
} TM__k6p5NxDJat9aTyZxfZjCDJQ_21 = { 52 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\pure\\lexbase.nim(78, 13) `s < L.buf.len` " };
static const NimStringV2 TM__k6p5NxDJat9aTyZxfZjCDJQ_22 = {52, (NimStrPayload*)&TM__k6p5NxDJat9aTyZxfZjCDJQ_21};
static const struct {
  NI cap; NIM_CHAR data[57+1];
} TM__k6p5NxDJat9aTyZxfZjCDJQ_31 = { 57 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\pure\\lexbase.nim(110, 9) `L.buf[pos] == \'\\r\'` " };
static const NimStringV2 TM__k6p5NxDJat9aTyZxfZjCDJQ_32 = {57, (NimStrPayload*)&TM__k6p5NxDJat9aTyZxfZjCDJQ_31};
static const struct {
  NI cap; NIM_CHAR data[55+1];
} TM__k6p5NxDJat9aTyZxfZjCDJQ_34 = { 55 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\pure\\lexbase.nim(97, 9) `pos <= L.sentinel` " };
static const NimStringV2 TM__k6p5NxDJat9aTyZxfZjCDJQ_35 = {55, (NimStrPayload*)&TM__k6p5NxDJat9aTyZxfZjCDJQ_34};
static const struct {
  NI cap; NIM_CHAR data[57+1];
} TM__k6p5NxDJat9aTyZxfZjCDJQ_38 = { 57 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\pure\\lexbase.nim(121, 9) `L.buf[pos] == \'\\n\'` " };
static const NimStringV2 TM__k6p5NxDJat9aTyZxfZjCDJQ_39 = {57, (NimStrPayload*)&TM__k6p5NxDJat9aTyZxfZjCDJQ_38};
extern NIM_BOOL nimInErrorMode__system_u4115;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest_p0, source_p1, ((size_t) (size_p2)));
}
static N_INLINE(void, moveMem__system_u1724)(void* dest_p0, void* source_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest_p0, source_p1, ((size_t) (size_p2)));
}
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
static N_INLINE(tyObject_HSlice__Ft7fsi5uCTryLqJGssT0Jw, dotdot___stdZstrbasics_u49)(NI a_p0, NI b_p1) {
	tyObject_HSlice__Ft7fsi5uCTryLqJGssT0Jw result;
	nimfr_("..", "D:\\nim\\lib\\system.nim");
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__Ft7fsi5uCTryLqJGssT0Jw));
	nimlf_(378, "D:\\nim\\lib\\system.nim");
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__Ft7fsi5uCTryLqJGssT0Jw));
	result.a = a_p0;
	result.b = b_p1;
	popFrame();
	return result;
}
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !(((*s_p0).p == ((NimStrPayload*) NIM_NIL)));
		if (!(T3_)) goto LA4_;
		T3_ = ((NI)((*(*s_p0).p).cap & ((NI)1073741824)) == ((NI)1073741824));
LA4_: ;
		if (!T3_) goto LA5_;
		nimPrepareStrMutationImpl__system_u2328(s_p0);
	}
LA5_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__pureZlexbase_u17)(tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA* L_p0) {
	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_10;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_11;
	tyObject_StreamObj__YejCBqGiUpphaYVvxhpLOQ* T14_;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_15;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_16;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_17;
	tyObject_HSlice__Ft7fsi5uCTryLqJGssT0Jw T15_;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_18;
NIM_BOOL* nimErr_;
	nimfr_("fillBuffer", "D:\\nim\\lib\\pure\\lexbase.nim");
{nimErr_ = nimErrorFlag();
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	nimlf_(54, "D:\\nim\\lib\\pure\\lexbase.nim");
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_7;
		if (nimAddInt((*L_p0).sentinel, ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_7)) { raiseOverflow(); goto BeforeRet_;
		};
		if (!!(((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_7) <= (*L_p0).buf.len))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__k6p5NxDJat9aTyZxfZjCDJQ_9);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(55);
	if (nimAddInt((*L_p0).sentinel, ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_10)) { raiseOverflow(); goto BeforeRet_;
	};
	if (nimSubInt((*L_p0).buf.len, (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_10), &TM__k6p5NxDJat9aTyZxfZjCDJQ_11)) { raiseOverflow(); goto BeforeRet_;
	};
	toCopy = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_11);
	nimln_(56);
	{
		if (!!((((NI)0) <= toCopy))) goto LA7_;
		failedAssertImpl__stdZassertions_u274(TM__k6p5NxDJat9aTyZxfZjCDJQ_13);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA7_: ;
	nimln_(57);
	{
		void* T13_;
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_14;
		if (!(((NI)0) < toCopy)) goto LA11_;
		nimln_(68);
		if (((NI)0) < 0 || ((NI)0) >= (*L_p0).buf.len){ raiseIndexError2(((NI)0),(*L_p0).buf.len-1); goto BeforeRet_;
		}
		T13_ = (void*)0;
		T13_ = ((void*) ((&(*L_p0).buf.p->data[((NI)0)])));
		if (nimAddInt((*L_p0).sentinel, ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_14)) { raiseOverflow(); goto BeforeRet_;
		};
		if ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_14) < 0 || (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_14) >= (*L_p0).buf.len){ raiseIndexError2((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_14),(*L_p0).buf.len-1); goto BeforeRet_;
		}
		if ((toCopy) < ((NI)0) || (toCopy) > ((NI)2147483647)){ raiseRangeErrorI(toCopy, ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		moveMem__system_u1724(T13_, ((void*) ((&(*L_p0).buf.p->data[(NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_14)]))), ((NI) (toCopy)));
	}
LA11_: ;
	nimln_(69);
	T14_ = NIM_NIL;
	T14_ = (*L_p0).input;
	nimlf_(53, "D:\\nim\\lib\\system\\indices.nim");
	nimlf_(69, "D:\\nim\\lib\\pure\\lexbase.nim");
	if (nimAddInt(toCopy, (*L_p0).sentinel, &TM__k6p5NxDJat9aTyZxfZjCDJQ_15)) { raiseOverflow(); goto BeforeRet_;
	};
	if (nimAddInt((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_15), ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_16)) { raiseOverflow(); goto BeforeRet_;
	};
	if (nimSubInt((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_16), ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_17)) { raiseOverflow(); goto BeforeRet_;
	};
	T15_ = dotdot___stdZstrbasics_u49(toCopy, (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_17));
	charsRead = readDataStr__pureZstreams_u85(T14_, (&(*L_p0).buf), T15_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(70);
	if (nimAddInt(toCopy, charsRead, &TM__k6p5NxDJat9aTyZxfZjCDJQ_18)) { raiseOverflow(); goto BeforeRet_;
	};
	s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_18);
	nimln_(71);
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_19;
		if (nimAddInt((*L_p0).sentinel, ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_19)) { raiseOverflow(); goto BeforeRet_;
		};
		if (!(charsRead < (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_19))) goto LA18_;
		nimln_(72);
		if (s < 0 || s >= (*L_p0).buf.len){ raiseIndexError2(s,(*L_p0).buf.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&(*L_p0).buf));
		(*L_p0).buf.p->data[s] = 0;
		nimln_(73);
		(*L_p0).sentinel = s;
	}
	goto LA16_;
LA18_: ;
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_20;
		nimln_(76);
		if (nimSubInt(s, ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_20)) { raiseOverflow(); goto BeforeRet_;
		};
		s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20);
		{
			nimln_(77);
			while (1) {
				nimln_(78);
				{
					if (!!((s < (*L_p0).buf.len))) goto LA25_;
					failedAssertImpl__stdZassertions_u274(TM__k6p5NxDJat9aTyZxfZjCDJQ_22);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
LA25_: ;
				{
					nimln_(79);
					while (1) {
						NIM_BOOL T29_;
						NI TM__k6p5NxDJat9aTyZxfZjCDJQ_23;
						T29_ = (NIM_BOOL)0;
						T29_ = (((NI)0) <= s);
						if (!(T29_)) goto LA30_;
						if (s < 0 || s >= (*L_p0).buf.len){ raiseIndexError2(s,(*L_p0).buf.len-1); goto BeforeRet_;
						}
						T29_ = !((((*L_p0).refillChars[(NU)((((NU8)((*L_p0).buf.p->data[s]))))>>3] &(1U<<((NU)((((NU8)((*L_p0).buf.p->data[s]))))&7U)))!=0));
LA30_: ;
						if (!T29_) goto LA28;
						if (nimSubInt(s, ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_23)) { raiseOverflow(); goto BeforeRet_;
						};
						s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_23);
					} LA28: ;
				}
				nimln_(80);
				{
					if (!(((NI)0) <= s)) goto LA33_;
					nimln_(82);
					(*L_p0).sentinel = s;
					nimln_(83);
					goto LA21;
				}
				goto LA31_;
LA33_: ;
				{
					NI TM__k6p5NxDJat9aTyZxfZjCDJQ_24;
					tyObject_StreamObj__YejCBqGiUpphaYVvxhpLOQ* T36_;
					NI TM__k6p5NxDJat9aTyZxfZjCDJQ_25;
					tyObject_HSlice__Ft7fsi5uCTryLqJGssT0Jw T37_;
					NI TM__k6p5NxDJat9aTyZxfZjCDJQ_28;
					nimln_(87);
					oldBufLen = (*L_p0).buf.len;
					nimln_(88);
					if (nimMulInt((*L_p0).buf.len, ((NI)2), &TM__k6p5NxDJat9aTyZxfZjCDJQ_24)) { raiseOverflow(); goto BeforeRet_;
					};
					if (((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_24)) < ((NI)0) || ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_24)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_24), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
					}
					setLengthStrV2((&(*L_p0).buf), ((NI) ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_24))));
					nimln_(89);
					T36_ = NIM_NIL;
					T36_ = (*L_p0).input;
					nimlf_(53, "D:\\nim\\lib\\system\\indices.nim");
					nimlf_(89, "D:\\nim\\lib\\pure\\lexbase.nim");
					if (nimSubInt((*L_p0).buf.len, ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_25)) { raiseOverflow(); goto BeforeRet_;
					};
					T37_ = dotdot___stdZstrbasics_u49(oldBufLen, (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_25));
					charsRead = readDataStr__pureZstreams_u85(T36_, (&(*L_p0).buf), T37_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					nimln_(90);
					{
						NI TM__k6p5NxDJat9aTyZxfZjCDJQ_26;
						NI TM__k6p5NxDJat9aTyZxfZjCDJQ_27;
						if (!(charsRead < oldBufLen)) goto LA40_;
						nimln_(91);
						if (nimAddInt(oldBufLen, charsRead, &TM__k6p5NxDJat9aTyZxfZjCDJQ_26)) { raiseOverflow(); goto BeforeRet_;
						};
						if ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_26) < 0 || (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_26) >= (*L_p0).buf.len){ raiseIndexError2((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_26),(*L_p0).buf.len-1); goto BeforeRet_;
						}
						nimPrepareStrMutationV2((&(*L_p0).buf));
						(*L_p0).buf.p->data[(NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_26)] = 0;
						nimln_(92);
						if (nimAddInt(oldBufLen, charsRead, &TM__k6p5NxDJat9aTyZxfZjCDJQ_27)) { raiseOverflow(); goto BeforeRet_;
						};
						(*L_p0).sentinel = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_27);
						nimln_(93);
						goto LA21;
					}
LA40_: ;
					nimln_(94);
					if (nimSubInt((*L_p0).buf.len, ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_28)) { raiseOverflow(); goto BeforeRet_;
					};
					s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_28);
				}
LA31_: ;
			}
		} LA21: ;
	}
LA16_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom__pureZlexbase_u133)(tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA* L_p0) {
	nimfr_("skipUtf8Bom", "D:\\nim\\lib\\pure\\lexbase.nim");
{	nimlf_(133, "D:\\nim\\lib\\pure\\lexbase.nim");
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_29;
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_30;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		if (((NI)0) < 0 || ((NI)0) >= (*L_p0).buf.len){ raiseIndexError2(((NI)0),(*L_p0).buf.len-1); goto BeforeRet_;
		}
		T4_ = ((NU8)((*L_p0).buf.p->data[((NI)0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		if (((NI)1) < 0 || ((NI)1) >= (*L_p0).buf.len){ raiseIndexError2(((NI)1),(*L_p0).buf.len-1); goto BeforeRet_;
		}
		T4_ = ((NU8)((*L_p0).buf.p->data[((NI)1)]) == (NU8)(187));
LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		if (((NI)2) < 0 || ((NI)2) >= (*L_p0).buf.len){ raiseIndexError2(((NI)2),(*L_p0).buf.len-1); goto BeforeRet_;
		}
		T3_ = ((NU8)((*L_p0).buf.p->data[((NI)2)]) == (NU8)(191));
LA6_: ;
		if (!T3_) goto LA7_;
		nimln_(134);
		if (nimAddInt((*L_p0).bufpos, ((NI)3), &TM__k6p5NxDJat9aTyZxfZjCDJQ_29)) { raiseOverflow(); goto BeforeRet_;
		};
		(*L_p0).bufpos = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_29);
		nimln_(135);
		if (nimAddInt((*L_p0).lineStart, ((NI)3), &TM__k6p5NxDJat9aTyZxfZjCDJQ_30)) { raiseOverflow(); goto BeforeRet_;
		};
		(*L_p0).lineStart = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_30);
	}
LA7_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, open__pureZlexbase_u145)(tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA* L_p0, tyObject_StreamObj__YejCBqGiUpphaYVvxhpLOQ* input_p1, NI bufLen_p2, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars_p3) {
	NimStringV2 T9_;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_6;
NIM_BOOL* nimErr_;
	nimfr_("open", "D:\\nim\\lib\\pure\\lexbase.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(140, "D:\\nim\\lib\\pure\\lexbase.nim");
	{
		if (!!((((NI)0) < bufLen_p2))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__k6p5NxDJat9aTyZxfZjCDJQ_3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(141);
	{
		if (!!(!((input_p1 == ((tyObject_StreamObj__YejCBqGiUpphaYVvxhpLOQ*) NIM_NIL))))) goto LA7_;
		failedAssertImpl__stdZassertions_u274(TM__k6p5NxDJat9aTyZxfZjCDJQ_5);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA7_: ;
	nimlf_(1198, "D:\\nim\\lib\\pure\\streams.nim");
	eqcopy___pureZstreams_u642(&(*L_p0).input, input_p1, NIM_TRUE);
	nimlf_(143, "D:\\nim\\lib\\pure\\lexbase.nim");
	(*L_p0).bufpos = ((NI)0);
	nimln_(144);
	(*L_p0).offsetBase = ((NI)0);
	nimln_(145);
	nimCopyMem((void*)(*L_p0).refillChars, (NIM_CONST void*)refillChars_p3, 32);
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	nimlf_(146, "D:\\nim\\lib\\pure\\lexbase.nim");
	if ((bufLen_p2) < ((NI)0) || (bufLen_p2) > ((NI)2147483647)){ raiseRangeErrorI(bufLen_p2, ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	T9_.len = 0; T9_.p = NIM_NIL;
	T9_ = mnewString(((NI) (bufLen_p2)));
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqsink___stdZassertions_u22((&(*L_p0).buf), T9_);
	nimlf_(147, "D:\\nim\\lib\\pure\\lexbase.nim");
	if (nimSubInt(bufLen_p2, ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_6)) { raiseOverflow(); goto BeforeRet_;
	};
	(*L_p0).sentinel = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_6);
	nimln_(148);
	(*L_p0).lineStart = ((NI)0);
	nimln_(149);
	(*L_p0).lineNumber = ((NI)1);
	nimln_(150);
	fillBuffer__pureZlexbase_u17(L_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(151);
	skipUtf8Bom__pureZlexbase_u133(L_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__pureZlexbase_u79)(tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA* L_p0, NI pos_p1) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("fillBaseLexer", "D:\\nim\\lib\\pure\\lexbase.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(97, "D:\\nim\\lib\\pure\\lexbase.nim");
	{
		if (!!((pos_p1 <= (*L_p0).sentinel))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__k6p5NxDJat9aTyZxfZjCDJQ_35);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(98);
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_36;
		if (!(pos_p1 < (*L_p0).sentinel)) goto LA7_;
		nimln_(99);
		if (nimAddInt(pos_p1, ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_36)) { raiseOverflow(); goto BeforeRet_;
		};
		result = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_36);
	}
	goto LA5_;
LA7_: ;
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_37;
		nimln_(101);
		fillBuffer__pureZlexbase_u17(L_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(102);
		if (nimAddInt((*L_p0).offsetBase, pos_p1, &TM__k6p5NxDJat9aTyZxfZjCDJQ_37)) { raiseOverflow(); goto BeforeRet_;
		};
		(*L_p0).offsetBase = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_37);
		nimln_(103);
		(*L_p0).bufpos = ((NI)0);
		nimln_(104);
		result = ((NI)0);
	}
LA5_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleCR__pureZlexbase_u92)(tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA* L_p0, NI pos_p1) {
	NI result;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_33;
NIM_BOOL* nimErr_;
	nimfr_("handleCR", "D:\\nim\\lib\\pure\\lexbase.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(110, "D:\\nim\\lib\\pure\\lexbase.nim");
	{
		if (pos_p1 < 0 || pos_p1 >= (*L_p0).buf.len){ raiseIndexError2(pos_p1,(*L_p0).buf.len-1); goto BeforeRet_;
		}
		if (!!(((NU8)((*L_p0).buf.p->data[pos_p1]) == (NU8)(13)))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__k6p5NxDJat9aTyZxfZjCDJQ_32);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(111);
	if (nimAddInt((*L_p0).lineNumber, ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_33)) { raiseOverflow(); goto BeforeRet_;
	};
	(*L_p0).lineNumber = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_33);
	nimln_(112);
	result = fillBaseLexer__pureZlexbase_u79(L_p0, pos_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(113);
	{
		if (result < 0 || result >= (*L_p0).buf.len){ raiseIndexError2(result,(*L_p0).buf.len-1); goto BeforeRet_;
		}
		if (!((NU8)((*L_p0).buf.p->data[result]) == (NU8)(10))) goto LA7_;
		nimln_(114);
		result = fillBaseLexer__pureZlexbase_u79(L_p0, result);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA7_: ;
	nimln_(115);
	(*L_p0).lineStart = result;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleLF__pureZlexbase_u106)(tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA* L_p0, NI pos_p1) {
	NI result;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_40;
NIM_BOOL* nimErr_;
	nimfr_("handleLF", "D:\\nim\\lib\\pure\\lexbase.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(121, "D:\\nim\\lib\\pure\\lexbase.nim");
	{
		if (pos_p1 < 0 || pos_p1 >= (*L_p0).buf.len){ raiseIndexError2(pos_p1,(*L_p0).buf.len-1); goto BeforeRet_;
		}
		if (!!(((NU8)((*L_p0).buf.p->data[pos_p1]) == (NU8)(10)))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__k6p5NxDJat9aTyZxfZjCDJQ_39);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(122);
	if (nimAddInt((*L_p0).lineNumber, ((NI)1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_40)) { raiseOverflow(); goto BeforeRet_;
	};
	(*L_p0).lineNumber = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_40);
	nimln_(123);
	result = fillBaseLexer__pureZlexbase_u79(L_p0, pos_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(124);
	(*L_p0).lineStart = result;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, getColNumber__pureZlexbase_u164)(tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA* L_p0, NI pos_p1) {
	NI result;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_41;
	nimfr_("getColNumber", "D:\\nim\\lib\\pure\\lexbase.nim");
{	result = (NI)0;
	nimlf_(155, "D:\\nim\\lib\\pure\\lexbase.nim");
	if (nimSubInt(pos_p1, (*L_p0).lineStart, &TM__k6p5NxDJat9aTyZxfZjCDJQ_41)) { raiseOverflow(); goto BeforeRet_;
	};
	if ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_41) == (-2147483647 -1)){ raiseOverflow(); goto BeforeRet_;
	}
	result = ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_41) > 0? ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_41)) : -((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_41)));
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, close__pureZlexbase_u15)(tyObject_BaseLexer__nk3WlHiH9cDjke9c83dnuNGA* L_p0) {
NIM_BOOL* nimErr_;
	nimfr_("close", "D:\\nim\\lib\\pure\\lexbase.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(44, "D:\\nim\\lib\\pure\\lexbase.nim");
	close__pureZstreams_u58((*L_p0).input);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
