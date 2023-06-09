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

typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg;
typedef struct tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ tySequence__OC4OxQhfzCBuUQxMi5llBQ;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content;
typedef struct tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw;
typedef struct tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw;
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
struct tySequence__OC4OxQhfzCBuUQxMi5llBQ {
  NI len; tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content* p;
};
struct Exception {
  RootObj Sup;
	Exception* parent;
	NCSTRING name;
	NimStringV2 message;
	tySequence__OC4OxQhfzCBuUQxMi5llBQ trace;
	Exception* up;
};
struct tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA {
  Exception Sup;
};
struct tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg {
  tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA Sup;
};
struct tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw {
	NI rc;
	NI rootIdx;
};
struct tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw {
	NCSTRING procname;
	NI line;
	NCSTRING filename;
};


#ifndef tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content_PP
#define tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content_PP
struct tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content { NI cap; tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NI, parseSaturatedNatural__pureZparseutils_u455)(NIM_CHAR* s_p0, NI s_p0Len_0, NI* b_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4324)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError4)(NI l1_p0, NI h1_p1, NI h2_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NI, parseHex__pureZstrutils_u1000)(NIM_CHAR* s_p0, NI s_p0Len_0, NI* number_p1, NI maxLen_p2);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseInt)(NIM_CHAR* s_p0, NI s_p0Len_0, NI* number_p1);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestInt)(NIM_CHAR* s_p0, NI s_p0Len_0, NI64* number_p1);
N_LIB_PRIVATE N_NIMCALL(NI, rawParseInt__pureZparseutils_u376)(NIM_CHAR* s_p0, NI s_p0Len_0, NI64* b_p1);
N_LIB_PRIVATE N_NOINLINE(void, integerOutOfRangeError__pureZparseutils_u325)(void);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size_p0, NI alignment_p1);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e_p0, NCSTRING ename_p1, NCSTRING procname_p2, NCSTRING filename_p3, NI line_p4);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseFloat)(NIM_CHAR* s_p0, NI s_p0Len_0, NF* number_p1);
N_NIMCALL(NI, nimParseBiggestFloat)(NIM_CHAR* s_p0, NI s_p0Len_0, NF* number_p1);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestUInt)(NIM_CHAR* s_p0, NI s_p0Len_0, NU64* number_p1);
N_LIB_PRIVATE N_NIMCALL(NI, rawParseUInt__pureZparseutils_u510)(NIM_CHAR* s_p0, NI s_p0Len_0, NU64* b_p1);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s_p0, NI newLen_p1);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s_p0);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_u2328)(NimStringV2* s_p0);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p_p0);
static N_INLINE(NI, minuspercent___system_u790)(NI x_p0, NI y_p1);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_u3281)(NIM_BOOL isDestroyAction_p0, tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw* s_p1, TNimTypeV2* desc_p2);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p_p0);
N_LIB_PRIVATE N_NIMCALL(NI, parseIdent__pureZparseutils_u56)(NIM_CHAR* s_p0, NI s_p0Len_0, NimStringV2* ident_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_u22)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__system_u7853)(NIM_CHAR* s_p0, NI s_p0Len_0);
extern TNimTypeV2 NTIv2__2gYx9cExnvfgU7mT8iWh7Mg_;
static const struct {
  NI cap; NIM_CHAR data[37+1];
} TM__vI9aZNKIcImom6dDyKXW1ZA_26 = { 37 | NIM_STRLIT_FLAG, "Parsed integer outside of valid range" };
static const NimStringV2 TM__vI9aZNKIcImom6dDyKXW1ZA_27 = {37, (NimStrPayload*)&TM__vI9aZNKIcImom6dDyKXW1ZA_26};
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern NIM_BOOL nimInErrorMode__system_u4127;
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
N_LIB_PRIVATE N_NIMCALL(NI, parseSaturatedNatural__pureZparseutils_u455)(NIM_CHAR* s_p0, NI s_p0Len_0, NI* b_p1) {
	NI result;
	NI i;
	nimfr_("parseSaturatedNatural", "D:\\nim\\lib\\pure\\parseutils.nim");
{	result = (NI)0;
	nimlf_(500, "D:\\nim\\lib\\pure\\parseutils.nim");
	i = ((NI)0);
	nimln_(501);
	{
		NIM_BOOL T3_;
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_2;
		T3_ = (NIM_BOOL)0;
		T3_ = (i < s_p0Len_0);
		if (!(T3_)) goto LA4_;
		if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
		}
		T3_ = ((NU8)(s_p0[i]) == (NU8)(43));
LA4_: ;
		if (!T3_) goto LA5_;
		if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_2)) { raiseOverflow(); goto BeforeRet_;
		};
		i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_2);
	}
LA5_: ;
	nimln_(502);
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = (i < s_p0Len_0);
		if (!(T9_)) goto LA10_;
		if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
		}
		T9_ = (((NU8)(s_p0[i])) >= ((NU8)(48)) && ((NU8)(s_p0[i])) <= ((NU8)(57)));
LA10_: ;
		if (!T9_) goto LA11_;
		nimln_(503);
		(*b_p1) = ((NI)0);
		{
			nimln_(504);
			while (1) {
				NIM_BOOL T15_;
				NI c;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_3;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_7;
				T15_ = (NIM_BOOL)0;
				T15_ = (i < s_p0Len_0);
				if (!(T15_)) goto LA16_;
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				T15_ = (((NU8)(s_p0[i])) >= ((NU8)(48)) && ((NU8)(s_p0[i])) <= ((NU8)(57)));
LA16_: ;
				if (!T15_) goto LA14;
				nimln_(505);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (nimSubInt(((NU8)(s_p0[i])), ((NI)48), &TM__vI9aZNKIcImom6dDyKXW1ZA_3)) { raiseOverflow(); goto BeforeRet_;
				};
				c = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_3);
				nimln_(506);
				{
					NI TM__vI9aZNKIcImom6dDyKXW1ZA_4;
					NI TM__vI9aZNKIcImom6dDyKXW1ZA_5;
					NI TM__vI9aZNKIcImom6dDyKXW1ZA_6;
					if (nimSubInt(((NI)2147483647), c, &TM__vI9aZNKIcImom6dDyKXW1ZA_4)) { raiseOverflow(); goto BeforeRet_;
					};
					if (!((*b_p1) <= (NI)((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_4) / ((NI)10)))) goto LA19_;
					nimln_(507);
					if (nimMulInt((*b_p1), ((NI)10), &TM__vI9aZNKIcImom6dDyKXW1ZA_5)) { raiseOverflow(); goto BeforeRet_;
					};
					if (nimAddInt((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_5), c, &TM__vI9aZNKIcImom6dDyKXW1ZA_6)) { raiseOverflow(); goto BeforeRet_;
					};
					(*b_p1) = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_6);
				}
				goto LA17_;
LA19_: ;
				{
					nimln_(509);
					(*b_p1) = ((NI)2147483647);
				}
LA17_: ;
				nimln_(510);
				if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_7)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_7);
				{
					nimln_(511);
					while (1) {
						NIM_BOOL T24_;
						NI TM__vI9aZNKIcImom6dDyKXW1ZA_8;
						T24_ = (NIM_BOOL)0;
						T24_ = (i < s_p0Len_0);
						if (!(T24_)) goto LA25_;
						if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
						}
						T24_ = ((NU8)(s_p0[i]) == (NU8)(95));
LA25_: ;
						if (!T24_) goto LA23;
						if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_8)) { raiseOverflow(); goto BeforeRet_;
						};
						i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_8);
					} LA23: ;
				}
			} LA14: ;
		}
		nimln_(512);
		result = i;
	}
LA11_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4127);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseSaturatedNatural__pureZparseutils_u962)(NimStringV2 s_p0, NI* b_p1, NI start_p2) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("parseSaturatedNatural", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(1011, "D:\\nim\\lib\\pure\\parseutils.nim");
	nimln_(1013);
	nimln_(1021);
	if ((s_p0.len-1)-start_p2 != -1 && (start_p2 < 0 || start_p2 >= s_p0.len || (s_p0.len-1) < 0 || (s_p0.len-1) >= s_p0.len)){ raiseIndexError4(start_p2, (s_p0.len-1), s_p0.len); goto BeforeRet_;
	}
	result = parseSaturatedNatural__pureZparseutils_u455((((s_p0).p) ? ((NIM_CHAR*)s_p0.p->data+(start_p2)) : NIM_NIL), ((s_p0.len-1))-(start_p2)+1, b_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseHex__pureZstrutils_u1000)(NIM_CHAR* s_p0, NI s_p0Len_0, NI* number_p1, NI maxLen_p2) {
	NI result;
	NI colontmpD_;
	NI colontmpD__2;
	NI i;
	NI output;
	NIM_BOOL foundDigit;
	NI last;
	NI T1_;
	nimfr_("parseHex", "D:\\nim\\lib\\pure\\parseutils.nim");
{	result = (NI)0;
	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	nimlf_(186, "D:\\nim\\lib\\pure\\parseutils.nim");
	i = ((NI)0);
	nimln_(187);
	output = ((NI)0);
	nimln_(188);
	foundDigit = NIM_FALSE;
	nimln_(189);
	T1_ = (NI)0;
	{
		if (!(maxLen_p2 == ((NI)0))) goto LA4_;
		colontmpD_ = s_p0Len_0;
		T1_ = colontmpD_;
	}
	goto LA2_;
LA4_: ;
	{
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_9;
		if (nimAddInt(i, maxLen_p2, &TM__vI9aZNKIcImom6dDyKXW1ZA_9)) { raiseOverflow(); goto BeforeRet_;
		};
		colontmpD__2 = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_9);
		T1_ = colontmpD__2;
	}
LA2_: ;
	last = ((s_p0Len_0 <= T1_) ? s_p0Len_0 : T1_);
	nimln_(190);
	{
		NIM_BOOL T9_;
		NIM_BOOL T10_;
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_10;
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_11;
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_12;
		T9_ = (NIM_BOOL)0;
		T10_ = (NIM_BOOL)0;
		if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_10)) { raiseOverflow(); goto BeforeRet_;
		};
		T10_ = ((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_10) < last);
		if (!(T10_)) goto LA11_;
		if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
		}
		T10_ = ((NU8)(s_p0[i]) == (NU8)(48));
LA11_: ;
		T9_ = T10_;
		if (!(T9_)) goto LA12_;
		if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_11)) { raiseOverflow(); goto BeforeRet_;
		};
		if ((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_11) < 0 || (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_11) >= s_p0Len_0){ raiseIndexError2((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_11),s_p0Len_0-1); goto BeforeRet_;
		}
		T9_ = (((NU8)(s_p0[(NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_11)])) == ((NU8)(120)) || ((NU8)(s_p0[(NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_11)])) == ((NU8)(88)));
LA12_: ;
		if (!T9_) goto LA13_;
		if (nimAddInt(i, ((NI)2), &TM__vI9aZNKIcImom6dDyKXW1ZA_12)) { raiseOverflow(); goto BeforeRet_;
		};
		i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_12);
	}
	goto LA7_;
LA13_: ;
	{
		NIM_BOOL T16_;
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_13;
		nimln_(191);
		T16_ = (NIM_BOOL)0;
		T16_ = (i < last);
		if (!(T16_)) goto LA17_;
		if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
		}
		T16_ = ((NU8)(s_p0[i]) == (NU8)(35));
LA17_: ;
		if (!T16_) goto LA18_;
		if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_13)) { raiseOverflow(); goto BeforeRet_;
		};
		i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_13);
	}
	goto LA7_;
LA18_: ;
LA7_: ;
	{
		nimln_(192);
		while (1) {
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_19;
			if (!(i < last)) goto LA21;
			nimln_(193);
			if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
			}
			switch (((NU8)(s_p0[i]))) {
			case 95:
			{
			}
			break;
			case 48 ... 57:
			{
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_14;
				nimln_(196);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (nimSubInt(((NU8)(s_p0[i])), ((NI)48), &TM__vI9aZNKIcImom6dDyKXW1ZA_14)) { raiseOverflow(); goto BeforeRet_;
				};
				output = (NI)((NI)((NU32)(output) << (NU32)(((NI)4))) | (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_14));
				nimln_(197);
				foundDigit = NIM_TRUE;
			}
			break;
			case 97 ... 102:
			{
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_15;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_16;
				nimln_(199);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (nimSubInt(((NU8)(s_p0[i])), ((NI)97), &TM__vI9aZNKIcImom6dDyKXW1ZA_15)) { raiseOverflow(); goto BeforeRet_;
				};
				if (nimAddInt((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_15), ((NI)10), &TM__vI9aZNKIcImom6dDyKXW1ZA_16)) { raiseOverflow(); goto BeforeRet_;
				};
				output = (NI)((NI)((NU32)(output) << (NU32)(((NI)4))) | (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_16));
				nimln_(200);
				foundDigit = NIM_TRUE;
			}
			break;
			case 65 ... 70:
			{
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_17;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_18;
				nimln_(202);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (nimSubInt(((NU8)(s_p0[i])), ((NI)65), &TM__vI9aZNKIcImom6dDyKXW1ZA_17)) { raiseOverflow(); goto BeforeRet_;
				};
				if (nimAddInt((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_17), ((NI)10), &TM__vI9aZNKIcImom6dDyKXW1ZA_18)) { raiseOverflow(); goto BeforeRet_;
				};
				output = (NI)((NI)((NU32)(output) << (NU32)(((NI)4))) | (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_18));
				nimln_(203);
				foundDigit = NIM_TRUE;
			}
			break;
			default:
			{
				nimln_(204);
				goto LA20;
			}
			break;
			}
			nimln_(205);
			if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_19)) { raiseOverflow(); goto BeforeRet_;
			};
			i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_19);
		} LA21: ;
	} LA20: ;
	nimln_(206);
	{
		if (!foundDigit) goto LA29_;
		nimln_(207);
		(*number_p1) = output;
		nimln_(208);
		result = i;
	}
LA29_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseHex__pureZstrutils_u993)(NimStringV2 s_p0, NI* number_p1, NI start_p2, NI maxLen_p3) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("parseHex", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(796, "D:\\nim\\lib\\pure\\parseutils.nim");
	nimln_(798);
	nimln_(827);
	if ((s_p0.len-1)-start_p2 != -1 && (start_p2 < 0 || start_p2 >= s_p0.len || (s_p0.len-1) < 0 || (s_p0.len-1) >= s_p0.len)){ raiseIndexError4(start_p2, (s_p0.len-1), s_p0.len); goto BeforeRet_;
	}
	result = parseHex__pureZstrutils_u1000((((s_p0).p) ? ((NIM_CHAR*)s_p0.p->data+(start_p2)) : NIM_NIL), ((s_p0.len-1))-(start_p2)+1, number_p1, maxLen_p3);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, integerOutOfRangeError__pureZparseutils_u325)(void) {
	tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg* T1_;
	nimfr_("integerOutOfRangeError", "D:\\nim\\lib\\pure\\parseutils.nim");
{	T1_ = NIM_NIL;
	T1_ = (tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg*) nimNewObj(sizeof(tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg), NIM_ALIGNOF(tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIv2__2gYx9cExnvfgU7mT8iWh7Mg_);
	(*T1_).Sup.Sup.name = "ValueError";
	(*T1_).Sup.Sup.message = TM__vI9aZNKIcImom6dDyKXW1ZA_27;
	(*T1_).Sup.Sup.parent = ((Exception*) NIM_NIL);
	nimlf_(421, "D:\\nim\\lib\\pure\\parseutils.nim");
	raiseExceptionEx((Exception*)T1_, "ValueError", "integerOutOfRangeError", "D:\\nim\\lib\\pure\\parseutils.nim", 421);
goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NI, rawParseInt__pureZparseutils_u376)(NIM_CHAR* s_p0, NI s_p0Len_0, NI64* b_p1) {
	NI result;
	NI64 sign;
	NI i;
NIM_BOOL* nimErr_;
	nimfr_("rawParseInt", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(429, "D:\\nim\\lib\\pure\\parseutils.nim");
	sign = IL64(-1);
	nimln_(430);
	i = ((NI)0);
	nimln_(431);
	{
		if (!(i < s_p0Len_0)) goto LA3_;
		nimln_(432);
		{
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_20;
			if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
			}
			if (!((NU8)(s_p0[i]) == (NU8)(43))) goto LA7_;
			if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_20)) { raiseOverflow(); goto BeforeRet_;
			};
			i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_20);
		}
		goto LA5_;
LA7_: ;
		{
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_21;
			nimln_(433);
			if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
			}
			if (!((NU8)(s_p0[i]) == (NU8)(45))) goto LA10_;
			nimln_(434);
			if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_21)) { raiseOverflow(); goto BeforeRet_;
			};
			i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_21);
			nimln_(435);
			sign = IL64(1);
		}
		goto LA5_;
LA10_: ;
LA5_: ;
	}
LA3_: ;
	nimln_(436);
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = (i < s_p0Len_0);
		if (!(T14_)) goto LA15_;
		if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
		}
		T14_ = (((NU8)(s_p0[i])) >= ((NU8)(48)) && ((NU8)(s_p0[i])) <= ((NU8)(57)));
LA15_: ;
		if (!T14_) goto LA16_;
		nimln_(437);
		(*b_p1) = IL64(0);
		{
			nimln_(438);
			while (1) {
				NIM_BOOL T20_;
				NI c;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_22;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_28;
				T20_ = (NIM_BOOL)0;
				T20_ = (i < s_p0Len_0);
				if (!(T20_)) goto LA21_;
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				T20_ = (((NU8)(s_p0[i])) >= ((NU8)(48)) && ((NU8)(s_p0[i])) <= ((NU8)(57)));
LA21_: ;
				if (!T20_) goto LA19;
				nimln_(439);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (nimSubInt(((NU8)(s_p0[i])), ((NI)48), &TM__vI9aZNKIcImom6dDyKXW1ZA_22)) { raiseOverflow(); goto BeforeRet_;
				};
				c = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_22);
				nimln_(440);
				{
					NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_23;
					NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_24;
					NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_25;
					if (nimAddInt64((IL64(-9223372036854775807) - IL64(1)), ((NI64) (c)), &TM__vI9aZNKIcImom6dDyKXW1ZA_23)) { raiseOverflow(); goto BeforeRet_;
					};
					if (!((NI64)((NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_23) / IL64(10)) <= (*b_p1))) goto LA24_;
					nimln_(441);
					if (nimMulInt64((*b_p1), IL64(10), &TM__vI9aZNKIcImom6dDyKXW1ZA_24)) { raiseOverflow(); goto BeforeRet_;
					};
					if (nimSubInt64((NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_24), ((NI64) (c)), &TM__vI9aZNKIcImom6dDyKXW1ZA_25)) { raiseOverflow(); goto BeforeRet_;
					};
					(*b_p1) = (NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_25);
				}
				goto LA22_;
LA24_: ;
				{
					nimln_(443);
					integerOutOfRangeError__pureZparseutils_u325();
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
LA22_: ;
				nimln_(444);
				if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_28)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_28);
				{
					nimln_(445);
					while (1) {
						NIM_BOOL T29_;
						NI TM__vI9aZNKIcImom6dDyKXW1ZA_29;
						T29_ = (NIM_BOOL)0;
						T29_ = (i < s_p0Len_0);
						if (!(T29_)) goto LA30_;
						if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
						}
						T29_ = ((NU8)(s_p0[i]) == (NU8)(95));
LA30_: ;
						if (!T29_) goto LA28;
						if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_29)) { raiseOverflow(); goto BeforeRet_;
						};
						i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_29);
					} LA28: ;
				}
			} LA19: ;
		}
		nimln_(446);
		{
			NIM_BOOL T33_;
			T33_ = (NIM_BOOL)0;
			T33_ = (sign == IL64(-1));
			if (!(T33_)) goto LA34_;
			T33_ = ((*b_p1) == (IL64(-9223372036854775807) - IL64(1)));
LA34_: ;
			if (!T33_) goto LA35_;
			nimln_(447);
			integerOutOfRangeError__pureZparseutils_u325();
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		goto LA31_;
LA35_: ;
		{
			NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_30;
			nimln_(449);
			if (nimMulInt64((*b_p1), sign, &TM__vI9aZNKIcImom6dDyKXW1ZA_30)) { raiseOverflow(); goto BeforeRet_;
			};
			(*b_p1) = (NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_30);
			nimln_(450);
			result = i;
		}
LA31_: ;
	}
LA16_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestInt)(NIM_CHAR* s_p0, NI s_p0Len_0, NI64* number_p1) {
	NI result;
	NI64 res;
NIM_BOOL* nimErr_;
	nimfr_("parseBiggestInt", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(464, "D:\\nim\\lib\\pure\\parseutils.nim");
	res = IL64(0);
	nimln_(467);
	result = rawParseInt__pureZparseutils_u376(s_p0, s_p0Len_0, (&res));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(468);
	{
		if (!!((result == ((NI)0)))) goto LA3_;
		nimln_(469);
		(*number_p1) = res;
	}
LA3_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseInt)(NIM_CHAR* s_p0, NI s_p0Len_0, NI* number_p1) {
	NI result;
	NI64 res;
NIM_BOOL* nimErr_;
	nimfr_("parseInt", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(482, "D:\\nim\\lib\\pure\\parseutils.nim");
	res = IL64(0);
	nimln_(483);
	result = npuParseBiggestInt(s_p0, s_p0Len_0, (&res));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(485);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (res < IL64(-2147483648));
		if (T3_) goto LA4_;
		T3_ = (IL64(2147483647) < res);
LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(486);
		integerOutOfRangeError__pureZparseutils_u325();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA5_: ;
	nimln_(487);
	{
		if (!!((result == ((NI)0)))) goto LA9_;
		nimln_(488);
		if ((res) < ((NI)(-2147483647 -1)) || (res) > ((NI)2147483647)){ raiseRangeErrorI(res, ((NI)(-2147483647 -1)), ((NI)2147483647)); goto BeforeRet_;
		}
		(*number_p1) = ((NI) (res));
	}
LA9_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseInt__pureZparseutils_u957)(NimStringV2 s_p0, NI* number_p1, NI start_p2) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("parseInt", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(998, "D:\\nim\\lib\\pure\\parseutils.nim");
	nimln_(999);
	nimln_(1008);
	if ((s_p0.len-1)-start_p2 != -1 && (start_p2 < 0 || start_p2 >= s_p0.len || (s_p0.len-1) < 0 || (s_p0.len-1) >= s_p0.len)){ raiseIndexError4(start_p2, (s_p0.len-1), s_p0.len); goto BeforeRet_;
	}
	result = npuParseInt((((s_p0).p) ? ((NIM_CHAR*)s_p0.p->data+(start_p2)) : NIM_NIL), ((s_p0.len-1))-(start_p2)+1, number_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseFloat)(NIM_CHAR* s_p0, NI s_p0Len_0, NF* number_p1) {
	NI result;
	NF bf;
	nimfr_("parseFloat", "D:\\nim\\lib\\pure\\parseutils.nim");
	result = (NI)0;
	nimlf_(590, "D:\\nim\\lib\\pure\\parseutils.nim");
	bf = 0.0;
	nimln_(591);
	result = nimParseBiggestFloat(s_p0, s_p0Len_0, (&bf));
	nimln_(592);
	{
		if (!!((result == ((NI)0)))) goto LA3_;
		nimln_(593);
		(*number_p1) = bf;
	}
LA3_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseFloat__pureZparseutils_u982)(NimStringV2 s_p0, NF* number_p1, NI start_p2) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("parseFloat", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(1054, "D:\\nim\\lib\\pure\\parseutils.nim");
	nimln_(1055);
	nimln_(1066);
	if ((s_p0.len-1)-start_p2 != -1 && (start_p2 < 0 || start_p2 >= s_p0.len || (s_p0.len-1) < 0 || (s_p0.len-1) >= s_p0.len)){ raiseIndexError4(start_p2, (s_p0.len-1), s_p0.len); goto BeforeRet_;
	}
	result = npuParseFloat((((s_p0).p) ? ((NIM_CHAR*)s_p0.p->data+(start_p2)) : NIM_NIL), ((s_p0.len-1))-(start_p2)+1, number_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, rawParseUInt__pureZparseutils_u510)(NIM_CHAR* s_p0, NI s_p0Len_0, NU64* b_p1) {
	NI result;
	NU64 res;
	NU64 prev;
	NI i;
NIM_BOOL* nimErr_;
	nimfr_("rawParseUInt", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(516, "D:\\nim\\lib\\pure\\parseutils.nim");
	res = 0ULL;
	nimln_(517);
	prev = 0ULL;
	nimln_(518);
	i = ((NI)0);
	nimln_(519);
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_31;
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_32;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		if (nimSubInt(s_p0Len_0, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_31)) { raiseOverflow(); goto BeforeRet_;
		};
		T4_ = (i < (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_31));
		if (!(T4_)) goto LA5_;
		if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
		}
		T4_ = ((NU8)(s_p0[i]) == (NU8)(45));
LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_32)) { raiseOverflow(); goto BeforeRet_;
		};
		if ((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_32) < 0 || (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_32) >= s_p0Len_0){ raiseIndexError2((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_32),s_p0Len_0-1); goto BeforeRet_;
		}
		T3_ = (((NU8)(s_p0[(NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_32)])) >= ((NU8)(48)) && ((NU8)(s_p0[(NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_32)])) <= ((NU8)(57)));
LA6_: ;
		if (!T3_) goto LA7_;
		nimln_(520);
		integerOutOfRangeError__pureZparseutils_u325();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA7_: ;
	nimln_(521);
	{
		NIM_BOOL T11_;
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_33;
		T11_ = (NIM_BOOL)0;
		T11_ = (i < s_p0Len_0);
		if (!(T11_)) goto LA12_;
		if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
		}
		T11_ = ((NU8)(s_p0[i]) == (NU8)(43));
LA12_: ;
		if (!T11_) goto LA13_;
		if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_33)) { raiseOverflow(); goto BeforeRet_;
		};
		i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_33);
	}
LA13_: ;
	nimln_(522);
	{
		NIM_BOOL T17_;
		T17_ = (NIM_BOOL)0;
		T17_ = (i < s_p0Len_0);
		if (!(T17_)) goto LA18_;
		if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
		}
		T17_ = (((NU8)(s_p0[i])) >= ((NU8)(48)) && ((NU8)(s_p0[i])) <= ((NU8)(57)));
LA18_: ;
		if (!T17_) goto LA19_;
		nimln_(523);
		(*b_p1) = 0ULL;
		{
			nimln_(524);
			while (1) {
				NIM_BOOL T23_;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_34;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_35;
				T23_ = (NIM_BOOL)0;
				T23_ = (i < s_p0Len_0);
				if (!(T23_)) goto LA24_;
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				T23_ = (((NU8)(s_p0[i])) >= ((NU8)(48)) && ((NU8)(s_p0[i])) <= ((NU8)(57)));
LA24_: ;
				if (!T23_) goto LA22;
				nimln_(525);
				prev = res;
				nimln_(526);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (nimSubInt(((NU8)(s_p0[i])), ((NI)48), &TM__vI9aZNKIcImom6dDyKXW1ZA_34)) { raiseOverflow(); goto BeforeRet_;
				};
				res = (NU64)((NU64)((NU64)((NU64)(res) * (NU64)(10ULL))) + (NU64)(((NU64) ((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_34)))));
				nimln_(527);
				{
					if (!((NU64)(res) < (NU64)(prev))) goto LA27_;
					nimln_(528);
					integerOutOfRangeError__pureZparseutils_u325();
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
LA27_: ;
				nimln_(529);
				if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_35)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_35);
				{
					nimln_(530);
					while (1) {
						NIM_BOOL T31_;
						NI TM__vI9aZNKIcImom6dDyKXW1ZA_36;
						T31_ = (NIM_BOOL)0;
						T31_ = (i < s_p0Len_0);
						if (!(T31_)) goto LA32_;
						if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
						}
						T31_ = ((NU8)(s_p0[i]) == (NU8)(95));
LA32_: ;
						if (!T31_) goto LA30;
						if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_36)) { raiseOverflow(); goto BeforeRet_;
						};
						i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_36);
					} LA30: ;
				}
			} LA22: ;
		}
		nimln_(531);
		(*b_p1) = res;
		nimln_(532);
		result = i;
	}
LA19_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestUInt)(NIM_CHAR* s_p0, NI s_p0Len_0, NU64* number_p1) {
	NI result;
	NU64 res;
NIM_BOOL* nimErr_;
	nimfr_("parseBiggestUInt", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(545, "D:\\nim\\lib\\pure\\parseutils.nim");
	res = 0ULL;
	nimln_(548);
	result = rawParseUInt__pureZparseutils_u510(s_p0, s_p0Len_0, (&res));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(549);
	{
		if (!!((result == ((NI)0)))) goto LA3_;
		nimln_(550);
		(*number_p1) = res;
	}
LA3_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseBiggestUInt__pureZparseutils_u967)(NimStringV2 s_p0, NU64* number_p1, NI start_p2) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("parseBiggestUInt", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(1024, "D:\\nim\\lib\\pure\\parseutils.nim");
	nimln_(1025);
	nimln_(1034);
	if ((s_p0.len-1)-start_p2 != -1 && (start_p2 < 0 || start_p2 >= s_p0.len || (s_p0.len-1) < 0 || (s_p0.len-1) >= s_p0.len)){ raiseIndexError4(start_p2, (s_p0.len-1), s_p0.len); goto BeforeRet_;
	}
	result = npuParseBiggestUInt((((s_p0).p) ? ((NIM_CHAR*)s_p0.p->data+(start_p2)) : NIM_NIL), ((s_p0.len-1))-(start_p2)+1, number_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseBiggestInt__pureZparseutils_u952)(NimStringV2 s_p0, NI64* number_p1, NI start_p2) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("parseBiggestInt", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(988, "D:\\nim\\lib\\pure\\parseutils.nim");
	nimln_(989);
	nimln_(996);
	if ((s_p0.len-1)-start_p2 != -1 && (start_p2 < 0 || start_p2 >= s_p0.len || (s_p0.len-1) < 0 || (s_p0.len-1) >= s_p0.len)){ raiseIndexError4(start_p2, (s_p0.len-1), s_p0.len); goto BeforeRet_;
	}
	result = npuParseBiggestInt((((s_p0).p) ? ((NIM_CHAR*)s_p0.p->data+(start_p2)) : NIM_NIL), ((s_p0.len-1))-(start_p2)+1, number_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, fastSubstr__pureZparseutils_u225)(NIM_CHAR* s_p0, NI s_p0Len_0, NimStringV2* token_p1, NI length_p2) {
	nimfr_("fastSubstr", "D:\\nim\\lib\\pure\\parseutils.nim");
{	nimlf_(328, "D:\\nim\\lib\\pure\\parseutils.nim");
	if ((length_p2) < ((NI)0) || (length_p2) > ((NI)2147483647)){ raiseRangeErrorI(length_p2, ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	setLengthStrV2((&(*token_p1)), ((NI) (length_p2)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		nimlf_(119, "D:\\nim\\lib\\system\\iterators_1.nim");
		i_2 = ((NI)0);
		{
			nimln_(120);
			while (1) {
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_37;
				if (!(i_2 < length_p2)) goto LA3;
				nimlf_(329, "D:\\nim\\lib\\pure\\parseutils.nim");
				i = i_2;
				if (i < 0 || i >= (*token_p1).len){ raiseIndexError2(i,(*token_p1).len-1); goto BeforeRet_;
				}
				nimPrepareStrMutationV2((&(*token_p1)));
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				(*token_p1).p->data[i] = s_p0[i];
				nimlf_(122, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(i_2, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_37)) { raiseOverflow(); goto BeforeRet_;
				};
				i_2 = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_37);
			} LA3: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(NI, minuspercent___system_u790)(NI x_p0, NI y_p1) {
	NI result;
	nimfr_("-%", "D:\\nim\\lib\\system\\arithmetics.nim");
	result = (NI)0;
	nimlf_(363, "D:\\nim\\lib\\system\\arithmetics.nim");
	nimln_(364);
	nimln_(368);
	result = ((NI) ((NU)((NU32)(((NU) (x_p0))) - (NU32)(((NU) (y_p1))))));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p_p0) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
	nimfr_("nimDecRefIsLastCyclicDyn", "D:\\nim\\lib\\system\\orc.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimlf_(478, "D:\\nim\\lib\\system\\orc.nim");
	{
		tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw* cell;
		NI T5_;
		if (!!((p_p0 == NIM_NIL))) goto LA3_;
		nimln_(479);
		nimlf_(43, "D:\\nim\\lib\\system\\arc.nim");
		T5_ = (NI)0;
		T5_ = minuspercent___system_u790(((NI) (ptrdiff_t) (p_p0)), ((NI)8));
		cell = ((tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw*) (T5_));
		nimlf_(480, "D:\\nim\\lib\\system\\orc.nim");
		{
			if (!((NI)((*cell).rc & ((NI)-16)) == ((NI)0))) goto LA8_;
			nimln_(481);
			result = NIM_TRUE;
		}
		goto LA6_;
LA8_: ;
		{
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_38;
			nimln_(484);
			if (nimSubInt((*cell).rc, ((NI)16), &TM__vI9aZNKIcImom6dDyKXW1ZA_38)) { raiseOverflow(); goto BeforeRet_;
			};
			(*cell).rc = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_38);
		}
LA6_: ;
		nimln_(486);
		rememberCycle__system_u3281(result, cell, (*((TNimTypeV2**) (p_p0))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZparseutils_u360)(tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg** dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0));
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0));
	}
LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseBiggestFloat__pureZparseutils_u977)(NimStringV2 s_p0, NF* number_p1, NI start_p2) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("parseBiggestFloat", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(1048, "D:\\nim\\lib\\pure\\parseutils.nim");
	nimln_(1049);
	nimln_(1052);
	if ((s_p0.len-1)-start_p2 != -1 && (start_p2 < 0 || start_p2 >= s_p0.len || (s_p0.len-1) < 0 || (s_p0.len-1) >= s_p0.len)){ raiseIndexError4(start_p2, (s_p0.len-1), s_p0.len); goto BeforeRet_;
	}
	result = npuParseFloat((((s_p0).p) ? ((NIM_CHAR*)s_p0.p->data+(start_p2)) : NIM_NIL), ((s_p0.len-1))-(start_p2)+1, number_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseIdent__pureZparseutils_u56)(NIM_CHAR* s_p0, NI s_p0Len_0, NimStringV2* ident_p1) {
	NI result;
	NI i;
	nimfr_("parseIdent", "D:\\nim\\lib\\pure\\parseutils.nim");
{	result = (NI)0;
	nimlf_(222, "D:\\nim\\lib\\pure\\parseutils.nim");
	i = ((NI)0);
	nimln_(223);
	{
		NIM_BOOL T3_;
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_39;
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_41;
		NimStringV2 T11_;
		T3_ = (NIM_BOOL)0;
		T3_ = (i < s_p0Len_0);
		if (!(T3_)) goto LA4_;
		if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
		}
		T3_ = (((NU8)(s_p0[i])) >= ((NU8)(97)) && ((NU8)(s_p0[i])) <= ((NU8)(122)) || ((NU8)(s_p0[i])) >= ((NU8)(65)) && ((NU8)(s_p0[i])) <= ((NU8)(90)) || ((NU8)(s_p0[i])) == ((NU8)(95)));
LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(224);
		if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_39)) { raiseOverflow(); goto BeforeRet_;
		};
		i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_39);
		{
			nimln_(225);
			while (1) {
				NIM_BOOL T9_;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_40;
				T9_ = (NIM_BOOL)0;
				T9_ = (i < s_p0Len_0);
				if (!(T9_)) goto LA10_;
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				T9_ = (((NU8)(s_p0[i])) >= ((NU8)(97)) && ((NU8)(s_p0[i])) <= ((NU8)(122)) || ((NU8)(s_p0[i])) >= ((NU8)(65)) && ((NU8)(s_p0[i])) <= ((NU8)(90)) || ((NU8)(s_p0[i])) >= ((NU8)(48)) && ((NU8)(s_p0[i])) <= ((NU8)(57)) || ((NU8)(s_p0[i])) == ((NU8)(95)));
LA10_: ;
				if (!T9_) goto LA8;
				if (nimAddInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_40)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_40);
			} LA8: ;
		}
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		nimlf_(226, "D:\\nim\\lib\\pure\\parseutils.nim");
		if (nimSubInt(i, ((NI)1), &TM__vI9aZNKIcImom6dDyKXW1ZA_41)) { raiseOverflow(); goto BeforeRet_;
		};
		if ((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_41)-((NI)0) != -1 && (((NI)0) < 0 || ((NI)0) >= s_p0Len_0 || (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_41) < 0 || (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_41) >= s_p0Len_0)){ raiseIndexError4(((NI)0), (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_41), s_p0Len_0); goto BeforeRet_;
		}
		T11_.len = 0; T11_.p = NIM_NIL;
		T11_ = substr__system_u7853((NIM_CHAR*)(s_p0)+(((NI)0)), ((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_41))-(((NI)0))+1);
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqsink___stdZassertions_u22((&(*ident_p1)), T11_);
		nimlf_(227, "D:\\nim\\lib\\pure\\parseutils.nim");
		result = i;
	}
LA5_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, parseIdent__pureZparseutils_u879)(NimStringV2 s_p0, NimStringV2* ident_p1, NI start_p2) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("parseIdent", "D:\\nim\\lib\\pure\\parseutils.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(829, "D:\\nim\\lib\\pure\\parseutils.nim");
	nimln_(830);
	nimln_(841);
	if ((s_p0.len-1)-start_p2 != -1 && (start_p2 < 0 || start_p2 >= s_p0.len || (s_p0.len-1) < 0 || (s_p0.len-1) >= s_p0.len)){ raiseIndexError4(start_p2, (s_p0.len-1), s_p0.len); goto BeforeRet_;
	}
	result = parseIdent__pureZparseutils_u56((((s_p0).p) ? ((NIM_CHAR*)s_p0.p->data+(start_p2)) : NIM_NIL), ((s_p0.len-1))-(start_p2)+1, ident_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
