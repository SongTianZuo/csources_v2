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
typedef struct tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A;
typedef struct tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ tySequence__OC4OxQhfzCBuUQxMi5llBQ;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content;
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
struct tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A {
  tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg Sup;
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

      N_LIB_PRIVATE N_NOINLINE(void, raiseAssert__stdZassertions_u31)(NimStringV2 msg_p0);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size_p0, NI alignment_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___stdZassertions_u13)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e_p0, NCSTRING ename_p1, NCSTRING procname_p2, NCSTRING filename_p3, NI line_p4);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4292)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
extern TNimTypeV2 NTIv2__3Nf0agRDkt9a349bK2N7oP7A_;
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
N_LIB_PRIVATE N_NOINLINE(void, raiseAssert__stdZassertions_u31)(NimStringV2 msg_p0) {
	NimStringV2 colontmpD_;
	tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A* T1_;
	nimfr_("raiseAssert", "D:\\nim\\lib\\std\\assertions.nim");
{	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	T1_ = NIM_NIL;
	T1_ = (tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A*) nimNewObj(sizeof(tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A), NIM_ALIGNOF(tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIv2__3Nf0agRDkt9a349bK2N7oP7A_);
	(*T1_).Sup.Sup.name = "AssertionDefect";
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqwasMoved___stdZassertions_u13((&colontmpD_));
	eqcopy___stdZassertions_u19((&colontmpD_), msg_p0);
	(*T1_).Sup.Sup.message = colontmpD_;
	(*T1_).Sup.Sup.parent = ((Exception*) NIM_NIL);
	nimln_(34);
	raiseExceptionEx((Exception*)T1_, "AssertionDefect", "raiseAssert", "D:\\nim\\lib\\std\\assertions.nim", 34);
goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4095);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0) {
NIM_BOOL* nimErr_;
	nimfr_("failedAssertImpl", "D:\\nim\\lib\\std\\assertions.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(41, "D:\\nim\\lib\\std\\assertions.nim");
	raiseAssert__stdZassertions_u31(msg_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
