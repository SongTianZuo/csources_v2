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
typedef struct tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ;
typedef struct tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ tySequence__OC4OxQhfzCBuUQxMi5llBQ;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
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
struct tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg {
  Exception Sup;
};
struct tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ {
  tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg Sup;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
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

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      static N_INLINE(NIM_BOOL, nimSubInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4292)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str_p0);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size_p0, NI alignment_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___stdZassertions_u13)(NimStringV2* dest_p0);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___systemZdollars_u3)(NI x_p0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e_p0, NCSTRING ename_p1, NCSTRING procname_p2, NCSTRING filename_p3, NI line_p4);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void*, newSeqPayload)(NI cap_p0, NI elemSize_p1, NI elemAlign_p2);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s_p0, NI newLen_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
N_LIB_PRIVATE N_NIMCALL(void, add__stdZenumutils_u69)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x_p0, NimStringV2 value_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
extern TNimTypeV2 NTIv2__NJdlNxUmKiqDB6nnzMNJbQ_;
static const struct {
  NI cap; NIM_CHAR data[43+1];
} TM__MZPGKsURfItHSi3RvnOT8Q_4 = { 43 | NIM_STRLIT_FLAG, "index out of bounds, the container is empty" };
static const NimStringV2 TM__MZPGKsURfItHSi3RvnOT8Q_5 = {43, (NimStrPayload*)&TM__MZPGKsURfItHSi3RvnOT8Q_4};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__MZPGKsURfItHSi3RvnOT8Q_6 = { 6 | NIM_STRLIT_FLAG, "index " };
static const NimStringV2 TM__MZPGKsURfItHSi3RvnOT8Q_7 = {6, (NimStrPayload*)&TM__MZPGKsURfItHSi3RvnOT8Q_6};
static const struct {
  NI cap; NIM_CHAR data[13+1];
} TM__MZPGKsURfItHSi3RvnOT8Q_10 = { 13 | NIM_STRLIT_FLAG, " not in 0 .. " };
static const NimStringV2 TM__MZPGKsURfItHSi3RvnOT8Q_11 = {13, (NimStrPayload*)&TM__MZPGKsURfItHSi3RvnOT8Q_10};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__MZPGKsURfItHSi3RvnOT8Q_13 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__MZPGKsURfItHSi3RvnOT8Q_14 = {0, (NimStrPayload*)&TM__MZPGKsURfItHSi3RvnOT8Q_13};
extern int cmdCount;
extern NCSTRING* cmdLine;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern TFrame* framePtr__system_u3741;
extern NIM_BOOL nimInErrorMode__system_u4095;
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
N_LIB_PRIVATE N_NIMCALL(NI, paramCount__stdZcmdline_u59)(void) {
	NI result;
	NI32 TM__MZPGKsURfItHSi3RvnOT8Q_2;
	nimfr_("paramCount", "D:\\nim\\lib\\std\\cmdline.nim");
{	result = (NI)0;
	nimlf_(276, "D:\\nim\\lib\\std\\cmdline.nim");
	if (nimSubInt(cmdCount, ((NI32)1), &TM__MZPGKsURfItHSi3RvnOT8Q_2)) { raiseOverflow(); goto BeforeRet_;
	};
	result = ((NI) ((NI32)(TM__MZPGKsURfItHSi3RvnOT8Q_2)));
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
		NI TM__MZPGKsURfItHSi3RvnOT8Q_8;
		NI TM__MZPGKsURfItHSi3RvnOT8Q_9;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__MZPGKsURfItHSi3RvnOT8Q_8)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__MZPGKsURfItHSi3RvnOT8Q_8)) < ((NI)0) || ((NI)(TM__MZPGKsURfItHSi3RvnOT8Q_8)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__MZPGKsURfItHSi3RvnOT8Q_8), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__MZPGKsURfItHSi3RvnOT8Q_8))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__MZPGKsURfItHSi3RvnOT8Q_9)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__MZPGKsURfItHSi3RvnOT8Q_9);
	}
LA3_: ;
	}
BeforeRet_: ;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4095);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, paramStr__stdZcmdline_u53)(NI i_p0) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
	nimfr_("paramStr", "D:\\nim\\lib\\std\\cmdline.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(269, "D:\\nim\\lib\\std\\cmdline.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI32) (i_p0)) < cmdCount);
		if (!(T3_)) goto LA4_;
		T3_ = (((NI)0) <= i_p0);
LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(270);
		result = cstrToNimstr(cmdLine[i_p0]);
	}
	goto LA1_;
LA5_: ;
	{
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ* T9_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		T9_ = NIM_NIL;
		T9_ = (tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ*) nimNewObj(sizeof(tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ), NIM_ALIGNOF(tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ));
		(*T9_).Sup.Sup.Sup.m_type = (&NTIv2__NJdlNxUmKiqDB6nnzMNJbQ_);
		(*T9_).Sup.Sup.name = "IndexDefect";
		nimln_(272);
		{
			NI32 TM__MZPGKsURfItHSi3RvnOT8Q_3;
			NimStringV2 blitTmp;
			nimlf_(8, "D:\\nim\\lib\\system\\indexerrors.nim");
			nimlf_(272, "D:\\nim\\lib\\std\\cmdline.nim");
			if (nimSubInt(cmdCount, ((NI32)1), &TM__MZPGKsURfItHSi3RvnOT8Q_3)) { raiseOverflow(); goto LA8_;
			};
			if (!((NI32)(TM__MZPGKsURfItHSi3RvnOT8Q_3) < ((NI32)0))) goto LA12_;
			nimlf_(8, "D:\\nim\\lib\\system\\indexerrors.nim");
			colontmpD_ = TM__MZPGKsURfItHSi3RvnOT8Q_5;
			blitTmp = colontmpD_;
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqwasMoved___stdZassertions_u13((&colontmpD_));
			(*T9_).Sup.Sup.message = blitTmp;
		}
		goto LA10_;
LA12_: ;
		{
			NimStringV2 colontmpD__3;
			NimStringV2 colontmpD__4;
			NimStringV2 T15_;
			NI32 TM__MZPGKsURfItHSi3RvnOT8Q_12;
			NimStringV2 blitTmp_2;
			colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
			colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
			nimlf_(9, "D:\\nim\\lib\\system\\indexerrors.nim");
			T15_.len = 0; T15_.p = NIM_NIL;
			colontmpD__3 = dollar___systemZdollars_u3(i_p0);
			if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
			nimlf_(272, "D:\\nim\\lib\\std\\cmdline.nim");
			if (nimSubInt(cmdCount, ((NI32)1), &TM__MZPGKsURfItHSi3RvnOT8Q_12)) { raiseOverflow(); goto LA8_;
			};
			nimlf_(9, "D:\\nim\\lib\\system\\indexerrors.nim");
			colontmpD__4 = dollar___systemZdollars_u3(((NI) ((NI32)(TM__MZPGKsURfItHSi3RvnOT8Q_12))));
			if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
			T15_ = rawNewString(colontmpD__3.len + colontmpD__4.len + 19);
appendString((&T15_), TM__MZPGKsURfItHSi3RvnOT8Q_7);
appendString((&T15_), colontmpD__3);
appendString((&T15_), TM__MZPGKsURfItHSi3RvnOT8Q_11);
appendString((&T15_), colontmpD__4);
			colontmpD__2 = T15_;
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__4));
			eqdestroy___stdZassertions_u16((&colontmpD__3));
			nimlf_(9, "D:\\nim\\lib\\system\\indexerrors.nim");
			blitTmp_2 = colontmpD__2;
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqwasMoved___stdZassertions_u13((&colontmpD__2));
			(*T9_).Sup.Sup.message = blitTmp_2;
		}
LA10_: ;
		(*T9_).Sup.Sup.parent = ((Exception*) NIM_NIL);
		nimlf_(272, "D:\\nim\\lib\\std\\cmdline.nim");
		raiseExceptionEx((Exception*)T9_, "IndexDefect", "paramStr", "D:\\nim\\lib\\std\\cmdline.nim", 272);
goto LA8_;
		{
			LA8_:;
		}
		{
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__2));
			eqdestroy___stdZassertions_u16((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA1_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1) {
	NI TM__MZPGKsURfItHSi3RvnOT8Q_17;
	NI TM__MZPGKsURfItHSi3RvnOT8Q_18;
{	prepareAdd(s_p0, ((NI)1));
	(*(*s_p0).p).data[(*s_p0).len] = c_p1;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__MZPGKsURfItHSi3RvnOT8Q_17)) { raiseOverflow(); goto BeforeRet_;
	};
	(*(*s_p0).p).data[(NI)(TM__MZPGKsURfItHSi3RvnOT8Q_17)] = 0;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__MZPGKsURfItHSi3RvnOT8Q_18)) { raiseOverflow(); goto BeforeRet_;
	};
	(*s_p0).len = (NI)(TM__MZPGKsURfItHSi3RvnOT8Q_18);
	}
BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ, nosparseCmdLine)(NimStringV2 c_p0) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ result;
	NimStringV2 a;
	NI i;
NIM_BOOL* nimErr_;
	nimfr_("parseCmdLine", "D:\\nim\\lib\\std\\cmdline.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	a.len = 0; a.p = NIM_NIL;
	nimlf_(86, "D:\\nim\\lib\\std\\cmdline.nim");
	result.len = 0; result.p = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content*) newSeqPayload(0, sizeof(NimStringV2), NIM_ALIGNOF(NimStringV2));
	nimln_(87);
	i = ((NI)0);
	nimln_(88);
	a = TM__MZPGKsURfItHSi3RvnOT8Q_14;
	{
		nimln_(89);
		while (1) {
			NimStringV2 colontmpD_;
			colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
			nimln_(90);
			setLengthStrV2((&a), ((NI)0));
			{
				nimln_(92);
				while (1) {
					NIM_BOOL T6_;
					NI TM__MZPGKsURfItHSi3RvnOT8Q_15;
					T6_ = (NIM_BOOL)0;
					T6_ = (i < c_p0.len);
					if (!(T6_)) goto LA7_;
					if (i < 0 || i >= c_p0.len){ raiseIndexError2(i,c_p0.len-1); goto LA1_;
					}
					T6_ = (((NU8)(c_p0.p->data[i])) == ((NU8)(32)) || ((NU8)(c_p0.p->data[i])) == ((NU8)(9)) || ((NU8)(c_p0.p->data[i])) == ((NU8)(10)) || ((NU8)(c_p0.p->data[i])) == ((NU8)(13)));
LA7_: ;
					if (!T6_) goto LA5;
					if (nimAddInt(i, ((NI)1), &TM__MZPGKsURfItHSi3RvnOT8Q_15)) { raiseOverflow(); goto LA1_;
					};
					i = (NI)(TM__MZPGKsURfItHSi3RvnOT8Q_15);
				} LA5: ;
			}
			nimln_(93);
			{
				if (!(c_p0.len <= i)) goto LA10_;
				goto LA2;
			}
LA10_: ;
			nimln_(129);
			if (i < 0 || i >= c_p0.len){ raiseIndexError2(i,c_p0.len-1); goto LA1_;
			}
			switch (((NU8)(c_p0.p->data[i]))) {
			case 39:
			case 34:
			{
				NIM_CHAR delim;
				NI TM__MZPGKsURfItHSi3RvnOT8Q_16;
				nimln_(131);
				if (i < 0 || i >= c_p0.len){ raiseIndexError2(i,c_p0.len-1); goto LA1_;
				}
				delim = c_p0.p->data[i];
				nimln_(132);
				if (nimAddInt(i, ((NI)1), &TM__MZPGKsURfItHSi3RvnOT8Q_16)) { raiseOverflow(); goto LA1_;
				};
				i = (NI)(TM__MZPGKsURfItHSi3RvnOT8Q_16);
				{
					nimln_(133);
					while (1) {
						NIM_BOOL T15_;
						NI TM__MZPGKsURfItHSi3RvnOT8Q_19;
						T15_ = (NIM_BOOL)0;
						T15_ = (i < c_p0.len);
						if (!(T15_)) goto LA16_;
						if (i < 0 || i >= c_p0.len){ raiseIndexError2(i,c_p0.len-1); goto LA1_;
						}
						T15_ = !(((NU8)(c_p0.p->data[i]) == (NU8)(delim)));
LA16_: ;
						if (!T15_) goto LA14;
						nimln_(134);
						if (i < 0 || i >= c_p0.len){ raiseIndexError2(i,c_p0.len-1); goto LA1_;
						}
						nimAddCharV1((&a), c_p0.p->data[i]);
						nimln_(135);
						if (nimAddInt(i, ((NI)1), &TM__MZPGKsURfItHSi3RvnOT8Q_19)) { raiseOverflow(); goto LA1_;
						};
						i = (NI)(TM__MZPGKsURfItHSi3RvnOT8Q_19);
					} LA14: ;
				}
				nimln_(136);
				{
					NI TM__MZPGKsURfItHSi3RvnOT8Q_20;
					if (!(i < c_p0.len)) goto LA19_;
					if (nimAddInt(i, ((NI)1), &TM__MZPGKsURfItHSi3RvnOT8Q_20)) { raiseOverflow(); goto LA1_;
					};
					i = (NI)(TM__MZPGKsURfItHSi3RvnOT8Q_20);
				}
LA19_: ;
			}
			break;
			default:
			{
				{
					nimln_(138);
					while (1) {
						NIM_BOOL T24_;
						NI TM__MZPGKsURfItHSi3RvnOT8Q_21;
						T24_ = (NIM_BOOL)0;
						T24_ = (i < c_p0.len);
						if (!(T24_)) goto LA25_;
						if (i < 0 || i >= c_p0.len){ raiseIndexError2(i,c_p0.len-1); goto LA1_;
						}
						T24_ = ((NU8)(32) < (NU8)(c_p0.p->data[i]));
LA25_: ;
						if (!T24_) goto LA23;
						nimln_(139);
						if (i < 0 || i >= c_p0.len){ raiseIndexError2(i,c_p0.len-1); goto LA1_;
						}
						nimAddCharV1((&a), c_p0.p->data[i]);
						nimln_(140);
						if (nimAddInt(i, ((NI)1), &TM__MZPGKsURfItHSi3RvnOT8Q_21)) { raiseOverflow(); goto LA1_;
						};
						i = (NI)(TM__MZPGKsURfItHSi3RvnOT8Q_21);
					} LA23: ;
				}
			}
			break;
			}
			nimln_(141);
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqwasMoved___stdZassertions_u13((&colontmpD_));
			eqcopy___stdZassertions_u19((&colontmpD_), a);
			nimlf_(141, "D:\\nim\\lib\\std\\cmdline.nim");
			add__stdZenumutils_u69((&result), colontmpD_);
		}
	} LA2: ;
	{
		LA1_:;
	}
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&a));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
