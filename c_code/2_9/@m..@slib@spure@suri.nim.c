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
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toHex__pureZstrutils_u2079)(NI x_p0, NI len_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__VzbRQH9cb1xm1tSKH4PwBSw_3 = { 1 | NIM_STRLIT_FLAG, "+" };
static const NimStringV2 TM__VzbRQH9cb1xm1tSKH4PwBSw_4 = {1, (NimStrPayload*)&TM__VzbRQH9cb1xm1tSKH4PwBSw_3};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__VzbRQH9cb1xm1tSKH4PwBSw_5 = { 3 | NIM_STRLIT_FLAG, "%20" };
static const NimStringV2 TM__VzbRQH9cb1xm1tSKH4PwBSw_6 = {3, (NimStrPayload*)&TM__VzbRQH9cb1xm1tSKH4PwBSw_5};
static const struct {
  NI cap; NIM_CHAR data[111+1];
} TM__VzbRQH9cb1xm1tSKH4PwBSw_12 = { 111 | NIM_STRLIT_FLAG, "D:\\nim\\lib\\system\\iterators.nim(264, 11) `len(a) == L` the length of the string changed while iterating over it" };
static const NimStringV2 TM__VzbRQH9cb1xm1tSKH4PwBSw_13 = {111, (NimStrPayload*)&TM__VzbRQH9cb1xm1tSKH4PwBSw_12};
extern NIM_BOOL nimInErrorMode__system_u4097;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1) {
	NI TM__VzbRQH9cb1xm1tSKH4PwBSw_7;
	NI TM__VzbRQH9cb1xm1tSKH4PwBSw_8;
{	prepareAdd(s_p0, ((NI)1));
	(*(*s_p0).p).data[(*s_p0).len] = c_p1;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__VzbRQH9cb1xm1tSKH4PwBSw_7)) { raiseOverflow(); goto BeforeRet_;
	};
	(*(*s_p0).p).data[(NI)(TM__VzbRQH9cb1xm1tSKH4PwBSw_7)] = 0;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__VzbRQH9cb1xm1tSKH4PwBSw_8)) { raiseOverflow(); goto BeforeRet_;
	};
	(*s_p0).len = (NI)(TM__VzbRQH9cb1xm1tSKH4PwBSw_8);
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
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1) {
{	{
		NI TM__VzbRQH9cb1xm1tSKH4PwBSw_9;
		NI TM__VzbRQH9cb1xm1tSKH4PwBSw_10;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__VzbRQH9cb1xm1tSKH4PwBSw_9)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__VzbRQH9cb1xm1tSKH4PwBSw_9)) < ((NI)0) || ((NI)(TM__VzbRQH9cb1xm1tSKH4PwBSw_9)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__VzbRQH9cb1xm1tSKH4PwBSw_9), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__VzbRQH9cb1xm1tSKH4PwBSw_9))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__VzbRQH9cb1xm1tSKH4PwBSw_10)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__VzbRQH9cb1xm1tSKH4PwBSw_10);
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, encodeUrl__pureZuri_u72)(NimStringV2 s_p0, NIM_BOOL usePlus_p1) {
	NimStringV2 result;
	NimStringV2 fromSpace;
	NI TM__VzbRQH9cb1xm1tSKH4PwBSw_2;
	NimStringV2 T1_;
NIM_BOOL* nimErr_;
	nimfr_("encodeUrl", "D:\\nim\\lib\\pure\\uri.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	fromSpace.len = 0; fromSpace.p = NIM_NIL;
	nimlf_(82, "D:\\nim\\lib\\pure\\uri.nim");
	if (nimAddInt(s_p0.len, (NI)((NI64)(s_p0.len) >> (NU64)(((NI)2))), &TM__VzbRQH9cb1xm1tSKH4PwBSw_2)) { raiseOverflow(); goto BeforeRet_;
	};
	if (((NI)(TM__VzbRQH9cb1xm1tSKH4PwBSw_2)) < ((NI)0) || ((NI)(TM__VzbRQH9cb1xm1tSKH4PwBSw_2)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__VzbRQH9cb1xm1tSKH4PwBSw_2), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
	}
	result = rawNewString(((NI) ((NI)(TM__VzbRQH9cb1xm1tSKH4PwBSw_2))));
	T1_.len = 0; T1_.p = NIM_NIL;
	nimln_(83);
	{
		if (!usePlus_p1) goto LA4_;
		fromSpace = TM__VzbRQH9cb1xm1tSKH4PwBSw_4;
	}
	goto LA2_;
LA4_: ;
	{
		fromSpace = TM__VzbRQH9cb1xm1tSKH4PwBSw_6;
	}
LA2_: ;
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		nimlf_(259, "D:\\nim\\lib\\system\\iterators.nim");
		i = ((NI)0);
		nimln_(260);
		L = s_p0.len;
		{
			nimln_(261);
			while (1) {
				NI TM__VzbRQH9cb1xm1tSKH4PwBSw_11;
				if (!(i < L)) goto LA9;
				nimlf_(84, "D:\\nim\\lib\\pure\\uri.nim");
				if (i < 0 || i >= s_p0.len){ raiseIndexError2(i,s_p0.len-1); goto BeforeRet_;
				}
				c = s_p0.p->data[i];
				switch (((NU8)(c))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 45:
				case 46:
				case 95:
				case 126:
				{
					nimln_(87);
					nimAddCharV1((&result), c);
				}
				break;
				case 32:
				{
					nimln_(88);
					prepareAdd((&result), fromSpace.len + 0);
appendString((&result), fromSpace);
				}
				break;
				default:
				{
					NimStringV2 colontmpD_;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					nimln_(90);
					nimAddCharV1((&result), 37);
					nimln_(91);
					colontmpD_ = toHex__pureZstrutils_u2079(((NU8)(c)), ((NI)2));
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					prepareAdd((&result), colontmpD_.len + 0);
appendString((&result), colontmpD_);
					nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
					eqdestroy___stdZassertions_u16((&colontmpD_));
				}
				break;
				}
				nimlf_(263, "D:\\nim\\lib\\system\\iterators.nim");
				if (nimAddInt(i, ((NI)1), &TM__VzbRQH9cb1xm1tSKH4PwBSw_11)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__VzbRQH9cb1xm1tSKH4PwBSw_11);
				nimln_(264);
				{
					if (!!((s_p0.len == L))) goto LA15_;
					failedAssertImpl__stdZassertions_u274(TM__VzbRQH9cb1xm1tSKH4PwBSw_13);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
LA15_: ;
			} LA9: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
	return result;
}
