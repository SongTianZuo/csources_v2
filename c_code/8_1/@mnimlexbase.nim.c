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

typedef struct tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA;
typedef struct tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
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
struct tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA {
  RootObj Sup;
	NI bufpos;
	NCSTRING buf;
	NimStringV2 bufStorage;
	NI bufLen;
	tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* stream;
	NI lineNumber;
	NI sentinel;
	NI lineStart;
	NI offsetBase;
};
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_u22)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_NIMCALL(NimStringV2, mnewString)(NI len_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___llstream_u87)(tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow** dest_p0, tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* src_p1, NIM_BOOL cyclic_p2);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__nimlexbase_u46)(tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA* L_p0);
static N_INLINE(void, moveMem__system_u1724)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NIMCALL(NI, llStreamRead__llstream_u269)(tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* s_p0, void* buf_p1, NI bufLen_p2);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s_p0, NI newLen_p1);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4292)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, skipUTF8BOM__nimlexbase_u127)(tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA* L_p0);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__nimlexbase_u86)(tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA* L_p0, NI pos_p1);
N_LIB_PRIVATE N_NIMCALL(void, llStreamClose__llstream_u195)(tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* s_p0);
static const struct {
  NI cap; NIM_CHAR data[52+1];
} TM__rZFvJ0pPfPjkF5gMPj0ilw_2 = { 52 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\nimlexbase.nim(149, 9) `bufLen > 0` " };
static const NimStringV2 TM__rZFvJ0pPfPjkF5gMPj0ilw_3 = {52, (NimStrPayload*)&TM__rZFvJ0pPfPjkF5gMPj0ilw_2};
static const struct {
  NI cap; NIM_CHAR data[62+1];
} TM__rZFvJ0pPfPjkF5gMPj0ilw_5 = { 62 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\nimlexbase.nim(83, 9) `L.sentinel < L.bufLen` " };
static const NimStringV2 TM__rZFvJ0pPfPjkF5gMPj0ilw_6 = {62, (NimStrPayload*)&TM__rZFvJ0pPfPjkF5gMPj0ilw_5};
static const struct {
  NI cap; NIM_CHAR data[52+1];
} TM__rZFvJ0pPfPjkF5gMPj0ilw_9 = { 52 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\nimlexbase.nim(85, 9) `toCopy >= 0` " };
static const NimStringV2 TM__rZFvJ0pPfPjkF5gMPj0ilw_10 = {52, (NimStrPayload*)&TM__rZFvJ0pPfPjkF5gMPj0ilw_9};
static const struct {
  NI cap; NIM_CHAR data[54+1];
} TM__rZFvJ0pPfPjkF5gMPj0ilw_16 = { 54 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\nimlexbase.nim(98, 13) `s < L.bufLen` " };
static const NimStringV2 TM__rZFvJ0pPfPjkF5gMPj0ilw_17 = {54, (NimStrPayload*)&TM__rZFvJ0pPfPjkF5gMPj0ilw_16};
static const struct {
  NI cap; NIM_CHAR data[76+1];
} TM__rZFvJ0pPfPjkF5gMPj0ilw_21 = { 76 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\nimlexbase.nim(111, 15) `L.bufLen - oldBufLen == oldBufLen` " };
static const NimStringV2 TM__rZFvJ0pPfPjkF5gMPj0ilw_22 = {76, (NimStrPayload*)&TM__rZFvJ0pPfPjkF5gMPj0ilw_21};
static const struct {
  NI cap; NIM_CHAR data[58+1];
} TM__rZFvJ0pPfPjkF5gMPj0ilw_29 = { 58 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\nimlexbase.nim(132, 9) `L.buf[pos] == CR` " };
static const NimStringV2 TM__rZFvJ0pPfPjkF5gMPj0ilw_30 = {58, (NimStrPayload*)&TM__rZFvJ0pPfPjkF5gMPj0ilw_29};
static const struct {
  NI cap; NIM_CHAR data[59+1];
} TM__rZFvJ0pPfPjkF5gMPj0ilw_32 = { 59 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\nimlexbase.nim(121, 9) `pos <= L.sentinel` " };
static const NimStringV2 TM__rZFvJ0pPfPjkF5gMPj0ilw_33 = {59, (NimStrPayload*)&TM__rZFvJ0pPfPjkF5gMPj0ilw_32};
static const struct {
  NI cap; NIM_CHAR data[58+1];
} TM__rZFvJ0pPfPjkF5gMPj0ilw_37 = { 58 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\nimlexbase.nim(139, 9) `L.buf[pos] == LF` " };
static const NimStringV2 TM__rZFvJ0pPfPjkF5gMPj0ilw_38 = {58, (NimStrPayload*)&TM__rZFvJ0pPfPjkF5gMPj0ilw_37};
extern NIM_BOOL nimInErrorMode__system_u4095;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s_p0) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		if (!(s_p0.len == ((NI)0))) goto LA3_;
		result = "";
	}
	goto LA1_;
LA3_: ;
	{
		result = ((NCSTRING) ((*s_p0.p).data));
	}
LA1_: ;
	return result;
}
static N_INLINE(void, moveMem__system_u1724)(void* dest_p0, void* source_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest_p0, source_p1, ((size_t) (size_p2)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4095);
	return result;
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
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__nimlexbase_u46)(tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA* L_p0) {
	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	NI TM__rZFvJ0pPfPjkF5gMPj0ilw_7;
	NI TM__rZFvJ0pPfPjkF5gMPj0ilw_8;
	tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* T14_;
	NI TM__rZFvJ0pPfPjkF5gMPj0ilw_12;
	NI TM__rZFvJ0pPfPjkF5gMPj0ilw_13;
NIM_BOOL* nimErr_;
	nimfr_("fillBuffer", "D:\\nim\\compiler\\nimlexbase.nim");
{nimErr_ = nimErrorFlag();
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	nimlf_(83, "D:\\nim\\compiler\\nimlexbase.nim");
	{
		if (!!(((*L_p0).sentinel < (*L_p0).bufLen))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__rZFvJ0pPfPjkF5gMPj0ilw_6);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(84);
	if (nimSubInt((*L_p0).bufLen, (*L_p0).sentinel, &TM__rZFvJ0pPfPjkF5gMPj0ilw_7)) { raiseOverflow(); goto BeforeRet_;
	};
	if (nimSubInt((NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_7), ((NI)1), &TM__rZFvJ0pPfPjkF5gMPj0ilw_8)) { raiseOverflow(); goto BeforeRet_;
	};
	toCopy = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_8);
	nimln_(85);
	{
		if (!!((((NI)0) <= toCopy))) goto LA7_;
		failedAssertImpl__stdZassertions_u274(TM__rZFvJ0pPfPjkF5gMPj0ilw_10);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA7_: ;
	nimln_(86);
	{
		void* T13_;
		NI TM__rZFvJ0pPfPjkF5gMPj0ilw_11;
		if (!(((NI)0) < toCopy)) goto LA11_;
		nimln_(87);
		T13_ = (void*)0;
		T13_ = ((void*) ((&(*L_p0).buf[((NI)0)])));
		if (nimAddInt((*L_p0).sentinel, ((NI)1), &TM__rZFvJ0pPfPjkF5gMPj0ilw_11)) { raiseOverflow(); goto BeforeRet_;
		};
		if ((toCopy) < ((NI)0) || (toCopy) > ((NI)2147483647)){ raiseRangeErrorI(toCopy, ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		moveMem__system_u1724(T13_, ((void*) ((&(*L_p0).buf[(NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_11)]))), ((NI) (toCopy)));
	}
LA11_: ;
	nimln_(89);
	T14_ = NIM_NIL;
	T14_ = (*L_p0).stream;
	if (nimAddInt((*L_p0).sentinel, ((NI)1), &TM__rZFvJ0pPfPjkF5gMPj0ilw_12)) { raiseOverflow(); goto BeforeRet_;
	};
	charsRead = llStreamRead__llstream_u269(T14_, ((void*) ((&(*L_p0).buf[toCopy]))), (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_12));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(90);
	if (nimAddInt(toCopy, charsRead, &TM__rZFvJ0pPfPjkF5gMPj0ilw_13)) { raiseOverflow(); goto BeforeRet_;
	};
	s = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_13);
	nimln_(91);
	{
		NI TM__rZFvJ0pPfPjkF5gMPj0ilw_14;
		if (nimAddInt((*L_p0).sentinel, ((NI)1), &TM__rZFvJ0pPfPjkF5gMPj0ilw_14)) { raiseOverflow(); goto BeforeRet_;
		};
		if (!(charsRead < (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_14))) goto LA17_;
		nimln_(92);
		(*L_p0).buf[s] = 0;
		nimln_(93);
		(*L_p0).sentinel = s;
	}
	goto LA15_;
LA17_: ;
	{
		NI TM__rZFvJ0pPfPjkF5gMPj0ilw_15;
		nimln_(96);
		if (nimSubInt(s, ((NI)1), &TM__rZFvJ0pPfPjkF5gMPj0ilw_15)) { raiseOverflow(); goto BeforeRet_;
		};
		s = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_15);
		{
			nimln_(97);
			while (1) {
				nimln_(98);
				{
					if (!!((s < (*L_p0).bufLen))) goto LA24_;
					failedAssertImpl__stdZassertions_u274(TM__rZFvJ0pPfPjkF5gMPj0ilw_17);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
LA24_: ;
				{
					nimln_(99);
					while (1) {
						NIM_BOOL T28_;
						NI TM__rZFvJ0pPfPjkF5gMPj0ilw_18;
						T28_ = (NIM_BOOL)0;
						T28_ = (((NI)0) <= s);
						if (!(T28_)) goto LA29_;
						T28_ = !((((NU8)((*L_p0).buf[s])) == ((NU8)(13)) || ((NU8)((*L_p0).buf[s])) == ((NU8)(10))));
LA29_: ;
						if (!T28_) goto LA27;
						if (nimSubInt(s, ((NI)1), &TM__rZFvJ0pPfPjkF5gMPj0ilw_18)) { raiseOverflow(); goto BeforeRet_;
						};
						s = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_18);
					} LA27: ;
				}
				nimln_(100);
				{
					if (!(((NI)0) <= s)) goto LA32_;
					nimln_(102);
					(*L_p0).sentinel = s;
					nimln_(103);
					goto LA20;
				}
				goto LA30_;
LA32_: ;
				{
					NI TM__rZFvJ0pPfPjkF5gMPj0ilw_19;
					tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* T39_;
					NI TM__rZFvJ0pPfPjkF5gMPj0ilw_25;
					nimln_(107);
					oldBufLen = (*L_p0).bufLen;
					nimln_(108);
					if (nimMulInt((*L_p0).bufLen, ((NI)2), &TM__rZFvJ0pPfPjkF5gMPj0ilw_19)) { raiseOverflow(); goto BeforeRet_;
					};
					(*L_p0).bufLen = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_19);
					nimln_(109);
					if (((*L_p0).bufLen) < ((NI)0) || ((*L_p0).bufLen) > ((NI)2147483647)){ raiseRangeErrorI((*L_p0).bufLen, ((NI)0), ((NI)2147483647)); goto BeforeRet_;
					}
					setLengthStrV2((&(*L_p0).bufStorage), ((NI) ((*L_p0).bufLen)));
					nimln_(110);
					(*L_p0).buf = nimToCStringConv((*L_p0).bufStorage);
					nimln_(111);
					{
						NI TM__rZFvJ0pPfPjkF5gMPj0ilw_20;
						if (nimSubInt((*L_p0).bufLen, oldBufLen, &TM__rZFvJ0pPfPjkF5gMPj0ilw_20)) { raiseOverflow(); goto BeforeRet_;
						};
						if (!!(((NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_20) == oldBufLen))) goto LA37_;
						failedAssertImpl__stdZassertions_u274(TM__rZFvJ0pPfPjkF5gMPj0ilw_22);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
LA37_: ;
					nimln_(112);
					T39_ = NIM_NIL;
					T39_ = (*L_p0).stream;
					charsRead = llStreamRead__llstream_u269(T39_, ((void*) ((&(*L_p0).buf[oldBufLen]))), oldBufLen);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					nimln_(114);
					{
						NI TM__rZFvJ0pPfPjkF5gMPj0ilw_23;
						NI TM__rZFvJ0pPfPjkF5gMPj0ilw_24;
						if (!(charsRead < oldBufLen)) goto LA42_;
						nimln_(115);
						if (nimAddInt(oldBufLen, charsRead, &TM__rZFvJ0pPfPjkF5gMPj0ilw_23)) { raiseOverflow(); goto BeforeRet_;
						};
						(*L_p0).buf[(NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_23)] = 0;
						nimln_(116);
						if (nimAddInt(oldBufLen, charsRead, &TM__rZFvJ0pPfPjkF5gMPj0ilw_24)) { raiseOverflow(); goto BeforeRet_;
						};
						(*L_p0).sentinel = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_24);
						nimln_(117);
						goto LA20;
					}
LA42_: ;
					nimln_(118);
					if (nimSubInt((*L_p0).bufLen, ((NI)1), &TM__rZFvJ0pPfPjkF5gMPj0ilw_25)) { raiseOverflow(); goto BeforeRet_;
					};
					s = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_25);
				}
LA30_: ;
			}
		} LA20: ;
	}
LA15_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, skipUTF8BOM__nimlexbase_u127)(tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA* L_p0) {
	nimfr_("skipUTF8BOM", "D:\\nim\\compiler\\nimlexbase.nim");
{	nimlf_(144, "D:\\nim\\compiler\\nimlexbase.nim");
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NI TM__rZFvJ0pPfPjkF5gMPj0ilw_26;
		NI TM__rZFvJ0pPfPjkF5gMPj0ilw_27;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = ((NU8)((*L_p0).buf[((NI)0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		T4_ = ((NU8)((*L_p0).buf[((NI)1)]) == (NU8)(187));
LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		T3_ = ((NU8)((*L_p0).buf[((NI)2)]) == (NU8)(191));
LA6_: ;
		if (!T3_) goto LA7_;
		nimln_(145);
		if (nimAddInt((*L_p0).bufpos, ((NI)3), &TM__rZFvJ0pPfPjkF5gMPj0ilw_26)) { raiseOverflow(); goto BeforeRet_;
		};
		(*L_p0).bufpos = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_26);
		nimln_(146);
		if (nimAddInt((*L_p0).lineStart, ((NI)3), &TM__rZFvJ0pPfPjkF5gMPj0ilw_27)) { raiseOverflow(); goto BeforeRet_;
		};
		(*L_p0).lineStart = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_27);
	}
LA7_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, openBaseLexer__nimlexbase_u26)(tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA* L_p0, tyObject_TLLStream__ICB8KBBz4mnxp8v0Khnjow* inputstream_p1, NI bufLen_p2) {
	NimStringV2 T5_;
	NI TM__rZFvJ0pPfPjkF5gMPj0ilw_4;
NIM_BOOL* nimErr_;
	nimfr_("openBaseLexer", "D:\\nim\\compiler\\nimlexbase.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(149, "D:\\nim\\compiler\\nimlexbase.nim");
	{
		if (!!((((NI)0) < bufLen_p2))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__rZFvJ0pPfPjkF5gMPj0ilw_3);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(150);
	(*L_p0).bufpos = ((NI)0);
	nimln_(151);
	(*L_p0).offsetBase = ((NI)0);
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	nimlf_(152, "D:\\nim\\compiler\\nimlexbase.nim");
	if ((bufLen_p2) < ((NI)0) || (bufLen_p2) > ((NI)2147483647)){ raiseRangeErrorI(bufLen_p2, ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	T5_.len = 0; T5_.p = NIM_NIL;
	T5_ = mnewString(((NI) (bufLen_p2)));
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqsink___stdZassertions_u22((&(*L_p0).bufStorage), T5_);
	nimlf_(153, "D:\\nim\\compiler\\nimlexbase.nim");
	(*L_p0).buf = nimToCStringConv((*L_p0).bufStorage);
	nimln_(154);
	(*L_p0).bufLen = bufLen_p2;
	nimln_(155);
	if (nimSubInt(bufLen_p2, ((NI)1), &TM__rZFvJ0pPfPjkF5gMPj0ilw_4)) { raiseOverflow(); goto BeforeRet_;
	};
	(*L_p0).sentinel = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_4);
	nimln_(156);
	(*L_p0).lineStart = ((NI)0);
	nimln_(157);
	(*L_p0).lineNumber = ((NI)1);
	nimlf_(44, "D:\\nim\\compiler\\llstream.nim");
	eqcopy___llstream_u87(&(*L_p0).stream, inputstream_p1, NIM_TRUE);
	nimlf_(159, "D:\\nim\\compiler\\nimlexbase.nim");
	fillBuffer__nimlexbase_u46(L_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(160);
	skipUTF8BOM__nimlexbase_u127(L_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NI, getColNumber__nimlexbase_u35)(tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA* L_p0, NI pos_p1) {
	NI result;
	NI TM__rZFvJ0pPfPjkF5gMPj0ilw_28;
	nimfr_("getColNumber", "D:\\nim\\compiler\\nimlexbase.nim");
{	result = (NI)0;
	nimlf_(163, "D:\\nim\\compiler\\nimlexbase.nim");
	if (nimSubInt(pos_p1, (*L_p0).lineStart, &TM__rZFvJ0pPfPjkF5gMPj0ilw_28)) { raiseOverflow(); goto BeforeRet_;
	};
	if ((NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_28) == (-2147483647 -1)){ raiseOverflow(); goto BeforeRet_;
	}
	result = ((NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_28) > 0? ((NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_28)) : -((NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_28)));
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__nimlexbase_u86)(tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA* L_p0, NI pos_p1) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("fillBaseLexer", "D:\\nim\\compiler\\nimlexbase.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(121, "D:\\nim\\compiler\\nimlexbase.nim");
	{
		if (!!((pos_p1 <= (*L_p0).sentinel))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__rZFvJ0pPfPjkF5gMPj0ilw_33);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(122);
	{
		NI TM__rZFvJ0pPfPjkF5gMPj0ilw_34;
		if (!(pos_p1 < (*L_p0).sentinel)) goto LA7_;
		nimln_(123);
		if (nimAddInt(pos_p1, ((NI)1), &TM__rZFvJ0pPfPjkF5gMPj0ilw_34)) { raiseOverflow(); goto BeforeRet_;
		};
		result = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_34);
	}
	goto LA5_;
LA7_: ;
	{
		NI TM__rZFvJ0pPfPjkF5gMPj0ilw_35;
		NI TM__rZFvJ0pPfPjkF5gMPj0ilw_36;
		nimln_(125);
		fillBuffer__nimlexbase_u46(L_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(126);
		if (nimAddInt(pos_p1, ((NI)1), &TM__rZFvJ0pPfPjkF5gMPj0ilw_35)) { raiseOverflow(); goto BeforeRet_;
		};
		if (nimAddInt((*L_p0).offsetBase, (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_35), &TM__rZFvJ0pPfPjkF5gMPj0ilw_36)) { raiseOverflow(); goto BeforeRet_;
		};
		(*L_p0).offsetBase = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_36);
		nimln_(127);
		(*L_p0).bufpos = ((NI)0);
		nimln_(128);
		result = ((NI)0);
	}
LA5_: ;
	nimln_(129);
	(*L_p0).lineStart = result;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleCR__nimlexbase_u38)(tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA* L_p0, NI pos_p1) {
	NI result;
	NI TM__rZFvJ0pPfPjkF5gMPj0ilw_31;
NIM_BOOL* nimErr_;
	nimfr_("handleCR", "D:\\nim\\compiler\\nimlexbase.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(132, "D:\\nim\\compiler\\nimlexbase.nim");
	{
		if (!!(((NU8)((*L_p0).buf[pos_p1]) == (NU8)(13)))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__rZFvJ0pPfPjkF5gMPj0ilw_30);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(133);
	if (nimAddInt((*L_p0).lineNumber, ((NI)1), &TM__rZFvJ0pPfPjkF5gMPj0ilw_31)) { raiseOverflow(); goto BeforeRet_;
	};
	(*L_p0).lineNumber = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_31);
	nimln_(134);
	result = fillBaseLexer__nimlexbase_u86(L_p0, pos_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(135);
	{
		if (!((NU8)((*L_p0).buf[result]) == (NU8)(10))) goto LA7_;
		nimln_(136);
		result = fillBaseLexer__nimlexbase_u86(L_p0, result);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA7_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleLF__nimlexbase_u41)(tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA* L_p0, NI pos_p1) {
	NI result;
	NI TM__rZFvJ0pPfPjkF5gMPj0ilw_39;
NIM_BOOL* nimErr_;
	nimfr_("handleLF", "D:\\nim\\compiler\\nimlexbase.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(139, "D:\\nim\\compiler\\nimlexbase.nim");
	{
		if (!!(((NU8)((*L_p0).buf[pos_p1]) == (NU8)(10)))) goto LA3_;
		failedAssertImpl__stdZassertions_u274(TM__rZFvJ0pPfPjkF5gMPj0ilw_38);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(140);
	if (nimAddInt((*L_p0).lineNumber, ((NI)1), &TM__rZFvJ0pPfPjkF5gMPj0ilw_39)) { raiseOverflow(); goto BeforeRet_;
	};
	(*L_p0).lineNumber = (NI)(TM__rZFvJ0pPfPjkF5gMPj0ilw_39);
	nimln_(141);
	result = fillBaseLexer__nimlexbase_u86(L_p0, pos_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, closeBaseLexer__nimlexbase_u30)(tyObject_TBaseLexer__y2Y6QhBbGkGJCgiVRYTyvA* L_p0) {
NIM_BOOL* nimErr_;
	nimfr_("closeBaseLexer", "D:\\nim\\compiler\\nimlexbase.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(73, "D:\\nim\\compiler\\nimlexbase.nim");
	llStreamClose__llstream_u195((*L_p0).stream);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
