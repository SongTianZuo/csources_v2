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
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
};


#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NI, nsuFindChar)(NimStringV2 s_p0, NIM_CHAR sub_p1, NI start_p2, NI last_p3);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_u7877)(NimStringV2 s_p0, NI first_p1, NI last_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_u7889)(NimStringV2 s_p0, NI first_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_u22)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_LIB_PRIVATE N_NIMCALL(void, libCandidates__pureZdynlib_u69)(NimStringV2 s_p0, tySequence__sM4lkSb7zS6F7OVMvW9cffQ* dest_p1);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, add__stdZenumutils_u69)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x_p0, NimStringV2 value_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___stdZassertions_u13)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
extern NIM_BOOL nimInErrorMode__system_u4097;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
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
		NI TM__Vbi6rBBOqdMySprhH3iUcg_9;
		NI TM__Vbi6rBBOqdMySprhH3iUcg_10;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__Vbi6rBBOqdMySprhH3iUcg_9)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__Vbi6rBBOqdMySprhH3iUcg_9)) < ((NI)0) || ((NI)(TM__Vbi6rBBOqdMySprhH3iUcg_9)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__Vbi6rBBOqdMySprhH3iUcg_9), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__Vbi6rBBOqdMySprhH3iUcg_9))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__Vbi6rBBOqdMySprhH3iUcg_10)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__Vbi6rBBOqdMySprhH3iUcg_10);
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
N_LIB_PRIVATE N_NIMCALL(void, libCandidates__pureZdynlib_u69)(NimStringV2 s_p0, tySequence__sM4lkSb7zS6F7OVMvW9cffQ* dest_p1) {
	NI le;
	NI ri;
	NI TM__Vbi6rBBOqdMySprhH3iUcg_2;
NIM_BOOL* nimErr_;
	nimfr_("libCandidates", "D:\\nim\\lib\\pure\\dynlib.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(78, "D:\\nim\\lib\\pure\\dynlib.nim");
	le = nsuFindChar(s_p0, 40, ((NI)0), ((NI)-1));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(79);
	if (nimAddInt(le, ((NI)1), &TM__Vbi6rBBOqdMySprhH3iUcg_2)) { raiseOverflow(); goto BeforeRet_;
	};
	if (((NI)(TM__Vbi6rBBOqdMySprhH3iUcg_2)) < ((NI)0) || ((NI)(TM__Vbi6rBBOqdMySprhH3iUcg_2)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__Vbi6rBBOqdMySprhH3iUcg_2), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
	}
	ri = nsuFindChar(s_p0, 41, ((NI) ((NI)(TM__Vbi6rBBOqdMySprhH3iUcg_2))), ((NI)-1));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(80);
	{
		NIM_BOOL T3_;
		NimStringV2 prefix;
		NimStringV2 suffix;
		NI TM__Vbi6rBBOqdMySprhH3iUcg_3;
		NI TM__Vbi6rBBOqdMySprhH3iUcg_4;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI)0) <= le);
		if (!(T3_)) goto LA4_;
		T3_ = (le < ri);
LA4_: ;
		if (!T3_) goto LA5_;
		prefix.len = 0; prefix.p = NIM_NIL;
		suffix.len = 0; suffix.p = NIM_NIL;
		nimln_(81);
		if (nimSubInt(le, ((NI)1), &TM__Vbi6rBBOqdMySprhH3iUcg_3)) { raiseOverflow(); goto LA7_;
		};
		prefix = substr__system_u7877(s_p0, ((NI)0), (NI)(TM__Vbi6rBBOqdMySprhH3iUcg_3));
		nimln_(82);
		if (nimAddInt(ri, ((NI)1), &TM__Vbi6rBBOqdMySprhH3iUcg_4)) { raiseOverflow(); goto LA7_;
		};
		suffix = substr__system_u7889(s_p0, (NI)(TM__Vbi6rBBOqdMySprhH3iUcg_4));
		{
			NimStringV2 middle;
			NimStringV2 colontmp_;
			NI TM__Vbi6rBBOqdMySprhH3iUcg_5;
			NI TM__Vbi6rBBOqdMySprhH3iUcg_6;
			NI lastX60gensym33_;
			NI splitsX60gensym33_;
			middle.len = 0; middle.p = NIM_NIL;
			colontmp_.len = 0; colontmp_.p = NIM_NIL;
			nimlf_(418, "D:\\nim\\lib\\pure\\strutils.nim");
			nimlf_(83, "D:\\nim\\lib\\pure\\dynlib.nim");
			if (nimAddInt(le, ((NI)1), &TM__Vbi6rBBOqdMySprhH3iUcg_5)) { raiseOverflow(); goto LA9_;
			};
			if (nimSubInt(ri, ((NI)1), &TM__Vbi6rBBOqdMySprhH3iUcg_6)) { raiseOverflow(); goto LA9_;
			};
			colontmp_ = substr__system_u7877(s_p0, (NI)(TM__Vbi6rBBOqdMySprhH3iUcg_5), (NI)(TM__Vbi6rBBOqdMySprhH3iUcg_6));
			nimlf_(386, "D:\\nim\\lib\\pure\\strutils.nim");
			lastX60gensym33_ = ((NI)0);
			nimln_(387);
			splitsX60gensym33_ = ((NI)-1);
			{
				nimln_(447);
				while (1) {
					NimStringV2 colontmpD_;
					NI firstX60gensym33_;
					NI TM__Vbi6rBBOqdMySprhH3iUcg_8;
					NimStringV2 T21_;
					NimStringV2 T22_;
					NI TM__Vbi6rBBOqdMySprhH3iUcg_11;
					NI TM__Vbi6rBBOqdMySprhH3iUcg_12;
					nimln_(389);
					if (!(lastX60gensym33_ <= colontmp_.len)) goto LA11;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					nimln_(390);
					firstX60gensym33_ = lastX60gensym33_;
					{
						nimln_(391);
						while (1) {
							NIM_BOOL T15_;
							NI TM__Vbi6rBBOqdMySprhH3iUcg_7;
							T15_ = (NIM_BOOL)0;
							T15_ = (lastX60gensym33_ < colontmp_.len);
							if (!(T15_)) goto LA16_;
							if (lastX60gensym33_ < 0 || lastX60gensym33_ >= colontmp_.len){ raiseIndexError2(lastX60gensym33_,colontmp_.len-1); goto LA12_;
							}
							T15_ = !(((NU8)(colontmp_.p->data[lastX60gensym33_]) == (NU8)(124)));
LA16_: ;
							if (!T15_) goto LA14;
							nimln_(392);
							if (nimAddInt(lastX60gensym33_, ((NI)1), &TM__Vbi6rBBOqdMySprhH3iUcg_7)) { raiseOverflow(); goto LA12_;
							};
							lastX60gensym33_ = (NI)(TM__Vbi6rBBOqdMySprhH3iUcg_7);
						} LA14: ;
					}
					nimln_(393);
					{
						if (!(splitsX60gensym33_ == ((NI)0))) goto LA19_;
						lastX60gensym33_ = colontmp_.len;
					}
LA19_: ;
					nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
					nimlf_(83, "D:\\nim\\lib\\pure\\dynlib.nim");
					nimlf_(394, "D:\\nim\\lib\\pure\\strutils.nim");
					if (nimSubInt(lastX60gensym33_, ((NI)1), &TM__Vbi6rBBOqdMySprhH3iUcg_8)) { raiseOverflow(); goto LA12_;
					};
					nimlf_(83, "D:\\nim\\lib\\pure\\dynlib.nim");
					T21_.len = 0; T21_.p = NIM_NIL;
					T21_ = substr__system_u7877(colontmp_, firstX60gensym33_, (NI)(TM__Vbi6rBBOqdMySprhH3iUcg_8));
					nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
					eqsink___stdZassertions_u22((&middle), T21_);
					nimlf_(83, "D:\\nim\\lib\\pure\\dynlib.nim");
					T22_.len = 0; T22_.p = NIM_NIL;
					T22_ = rawNewString(prefix.len + middle.len + suffix.len + 0);
appendString((&T22_), prefix);
appendString((&T22_), middle);
appendString((&T22_), suffix);
					colontmpD_ = T22_;
					libCandidates__pureZdynlib_u69(colontmpD_, dest_p1);
					if (NIM_UNLIKELY(*nimErr_)) goto LA12_;
					nimlf_(395, "D:\\nim\\lib\\pure\\strutils.nim");
					{
						if (!(splitsX60gensym33_ == ((NI)0))) goto LA25_;
						nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
						eqdestroy___stdZassertions_u16((&colontmpD_));
						nimlf_(395, "D:\\nim\\lib\\pure\\strutils.nim");
						goto LA10;
					}
LA25_: ;
					nimln_(396);
					if (nimSubInt(splitsX60gensym33_, ((NI)1), &TM__Vbi6rBBOqdMySprhH3iUcg_11)) { raiseOverflow(); goto LA12_;
					};
					splitsX60gensym33_ = (NI)(TM__Vbi6rBBOqdMySprhH3iUcg_11);
					nimln_(397);
					if (nimAddInt(lastX60gensym33_, ((NI)1), &TM__Vbi6rBBOqdMySprhH3iUcg_12)) { raiseOverflow(); goto LA12_;
					};
					lastX60gensym33_ = (NI)(TM__Vbi6rBBOqdMySprhH3iUcg_12);
					{
						LA12_:;
					}
					{
						nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
						eqdestroy___stdZassertions_u16((&colontmpD_));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
				} LA11: ;
			} LA10: ;
			{
				LA9_:;
			}
			{
				eqdestroy___stdZassertions_u16((&colontmp_));
				eqdestroy___stdZassertions_u16((&middle));
			}
			if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		}
		{
			LA7_:;
		}
		{
			eqdestroy___stdZassertions_u16((&suffix));
			eqdestroy___stdZassertions_u16((&prefix));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
LA5_: ;
	{
		NimStringV2 colontmpD__2;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		nimlf_(86, "D:\\nim\\lib\\pure\\dynlib.nim");
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqwasMoved___stdZassertions_u13((&colontmpD__2));
		eqcopy___stdZassertions_u19((&colontmpD__2), s_p0);
		nimlf_(86, "D:\\nim\\lib\\pure\\dynlib.nim");
		add__stdZenumutils_u69((&(*dest_p1)), colontmpD__2);
	}
LA1_: ;
	}
BeforeRet_: ;
	popFrame();
}
