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

typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ {
	NI bytes;
	NI16* data;
};
typedef NI16 tyUncheckedArray__Tyd4y3haUOOHTj71TPIRag[1];
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZwidestrs_u306)(NI16* w_p0, NI estimate_p1, NI replacement_p2);
N_NIMCALL(NimStringV2, rawNewString)(NI cap_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(NI, ord__stdZwidestrs_u48)(NI16 arg_p0);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
N_LIB_PRIVATE N_NIMCALL(void, createWide__stdZwidestrs_u34)(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ* a_p0, NI bytes_p1);
N_LIB_PRIVATE N_NOCONV(void*, alloc0Impl__system_u1738)(NI size_p0);
N_LIB_PRIVATE N_NOCONV(void, dealloc)(void* p_p0);
N_LIB_PRIVATE N_NIMCALL(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ, newWideCString__stdZwidestrs_u271)(NCSTRING source_p0, NI L_p1);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s_p0);
static N_INLINE(NI, nimCStrLen)(NCSTRING a_p0);
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
N_LIB_PRIVATE N_NIMCALL(NI, ord__stdZwidestrs_u48)(NI16 arg_p0) {
	NI result;
	nimfr_("ord", "D:\\nim\\lib\\std\\widestrs.nim");
	result = (NI)0;
	nimlf_(66, "D:\\nim\\lib\\std\\widestrs.nim");
	result = ((NI) (((NU16) (arg_p0))));
	popFrame();
	return result;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1) {
	NI TM__R8z9bzATizpQoD67YeHNTdg_7;
	NI TM__R8z9bzATizpQoD67YeHNTdg_8;
{	prepareAdd(s_p0, ((NI)1));
	(*(*s_p0).p).data[(*s_p0).len] = c_p1;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_7)) { raiseOverflow(); goto BeforeRet_;
	};
	(*(*s_p0).p).data[(NI)(TM__R8z9bzATizpQoD67YeHNTdg_7)] = 0;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_8)) { raiseOverflow(); goto BeforeRet_;
	};
	(*s_p0).len = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_8);
	}
BeforeRet_: ;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4097);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZwidestrs_u306)(NI16* w_p0, NI estimate_p1, NI replacement_p2) {
	NimStringV2 result;
	NI TM__R8z9bzATizpQoD67YeHNTdg_2;
	NI i;
NIM_BOOL* nimErr_;
	nimfr_("$", "D:\\nim\\lib\\std\\widestrs.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(177, "D:\\nim\\lib\\std\\widestrs.nim");
	if (nimAddInt(estimate_p1, (NI)((NI32)(estimate_p1) >> (NU32)(((NI)2))), &TM__R8z9bzATizpQoD67YeHNTdg_2)) { raiseOverflow(); goto BeforeRet_;
	};
	if (((NI)(TM__R8z9bzATizpQoD67YeHNTdg_2)) < ((NI)0) || ((NI)(TM__R8z9bzATizpQoD67YeHNTdg_2)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__R8z9bzATizpQoD67YeHNTdg_2), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	result = rawNewString(((NI) ((NI)(TM__R8z9bzATizpQoD67YeHNTdg_2))));
	nimln_(179);
	i = ((NI)0);
	{
		nimln_(180);
		while (1) {
			NI ch;
			NI TM__R8z9bzATizpQoD67YeHNTdg_3;
			if (!!((w_p0[i] == ((NI16)0)))) goto LA2;
			nimln_(181);
			ch = ord__stdZwidestrs_u48(w_p0[i]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			nimln_(182);
			if (nimAddInt(i, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_3)) { raiseOverflow(); goto BeforeRet_;
			};
			i = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_3);
			nimln_(183);
			{
				NIM_BOOL T5_;
				NI ch2;
				T5_ = (NIM_BOOL)0;
				T5_ = (((NI)55296) <= ch);
				if (!(T5_)) goto LA6_;
				T5_ = (ch <= ((NI)56319));
LA6_: ;
				if (!T5_) goto LA7_;
				nimln_(185);
				ch2 = ord__stdZwidestrs_u48(w_p0[i]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimln_(188);
				{
					NIM_BOOL T11_;
					NI TM__R8z9bzATizpQoD67YeHNTdg_4;
					NI TM__R8z9bzATizpQoD67YeHNTdg_5;
					NI TM__R8z9bzATizpQoD67YeHNTdg_6;
					T11_ = (NIM_BOOL)0;
					T11_ = (((NI)56320) <= ch2);
					if (!(T11_)) goto LA12_;
					T11_ = (ch2 <= ((NI)57343));
LA12_: ;
					if (!T11_) goto LA13_;
					nimln_(189);
					if (nimAddInt((NI)((NU32)((NI)(ch & ((NI)1023))) << (NU32)(((NI)10))), (NI)(ch2 & ((NI)1023)), &TM__R8z9bzATizpQoD67YeHNTdg_4)) { raiseOverflow(); goto BeforeRet_;
					};
					if (nimAddInt((NI)(TM__R8z9bzATizpQoD67YeHNTdg_4), ((NI)65536), &TM__R8z9bzATizpQoD67YeHNTdg_5)) { raiseOverflow(); goto BeforeRet_;
					};
					ch = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_5);
					nimln_(190);
					if (nimAddInt(i, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_6)) { raiseOverflow(); goto BeforeRet_;
					};
					i = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_6);
				}
				goto LA9_;
LA13_: ;
				{
					nimln_(193);
					ch = replacement_p2;
				}
LA9_: ;
			}
			goto LA3_;
LA7_: ;
			{
				NIM_BOOL T17_;
				nimln_(194);
				T17_ = (NIM_BOOL)0;
				T17_ = (((NI)56320) <= ch);
				if (!(T17_)) goto LA18_;
				T17_ = (ch <= ((NI)57343));
LA18_: ;
				if (!T17_) goto LA19_;
				nimln_(196);
				ch = replacement_p2;
			}
			goto LA3_;
LA19_: ;
LA3_: ;
			nimln_(198);
			{
				if (!(ch < ((NI)128))) goto LA23_;
				nimln_(199);
				if ((ch) < ((NI)0) || (ch) > ((NI)255)){ raiseRangeErrorI(ch, ((NI)0), ((NI)255)); goto BeforeRet_;
				}
				nimAddCharV1((&result), ((NIM_CHAR) (((NI) (ch)))));
			}
			goto LA21_;
LA23_: ;
			{
				nimln_(200);
				if (!(ch < ((NI)2048))) goto LA26_;
				nimln_(201);
				if (((NI)((NI)((NI32)(ch) >> (NU32)(((NI)6))) | ((NI)192))) < ((NI)0) || ((NI)((NI)((NI32)(ch) >> (NU32)(((NI)6))) | ((NI)192))) > ((NI)255)){ raiseRangeErrorI((NI)((NI)((NI32)(ch) >> (NU32)(((NI)6))) | ((NI)192)), ((NI)0), ((NI)255)); goto BeforeRet_;
				}
				nimAddCharV1((&result), ((NIM_CHAR) (((NI) ((NI)((NI)((NI32)(ch) >> (NU32)(((NI)6))) | ((NI)192)))))));
				nimln_(202);
				if (((NI)((NI)(ch & ((NI)63)) | ((NI)128))) < ((NI)0) || ((NI)((NI)(ch & ((NI)63)) | ((NI)128))) > ((NI)255)){ raiseRangeErrorI((NI)((NI)(ch & ((NI)63)) | ((NI)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
				}
				nimAddCharV1((&result), ((NIM_CHAR) (((NI) ((NI)((NI)(ch & ((NI)63)) | ((NI)128)))))));
			}
			goto LA21_;
LA26_: ;
			{
				nimln_(203);
				if (!(ch < ((NI)65536))) goto LA29_;
				nimln_(204);
				if (((NI)((NI)((NI32)(ch) >> (NU32)(((NI)12))) | ((NI)224))) < ((NI)0) || ((NI)((NI)((NI32)(ch) >> (NU32)(((NI)12))) | ((NI)224))) > ((NI)255)){ raiseRangeErrorI((NI)((NI)((NI32)(ch) >> (NU32)(((NI)12))) | ((NI)224)), ((NI)0), ((NI)255)); goto BeforeRet_;
				}
				nimAddCharV1((&result), ((NIM_CHAR) (((NI) ((NI)((NI)((NI32)(ch) >> (NU32)(((NI)12))) | ((NI)224)))))));
				nimln_(205);
				if (((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI)6))) & ((NI)63)) | ((NI)128))) < ((NI)0) || ((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI)6))) & ((NI)63)) | ((NI)128))) > ((NI)255)){ raiseRangeErrorI((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI)6))) & ((NI)63)) | ((NI)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
				}
				nimAddCharV1((&result), ((NIM_CHAR) (((NI) ((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI)6))) & ((NI)63)) | ((NI)128)))))));
				nimln_(206);
				if (((NI)((NI)(ch & ((NI)63)) | ((NI)128))) < ((NI)0) || ((NI)((NI)(ch & ((NI)63)) | ((NI)128))) > ((NI)255)){ raiseRangeErrorI((NI)((NI)(ch & ((NI)63)) | ((NI)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
				}
				nimAddCharV1((&result), ((NIM_CHAR) (((NI) ((NI)((NI)(ch & ((NI)63)) | ((NI)128)))))));
			}
			goto LA21_;
LA29_: ;
			{
				nimln_(207);
				if (!(ch <= ((NI)1114111))) goto LA32_;
				nimln_(208);
				if (((NI)((NI)((NI32)(ch) >> (NU32)(((NI)18))) | ((NI)240))) < ((NI)0) || ((NI)((NI)((NI32)(ch) >> (NU32)(((NI)18))) | ((NI)240))) > ((NI)255)){ raiseRangeErrorI((NI)((NI)((NI32)(ch) >> (NU32)(((NI)18))) | ((NI)240)), ((NI)0), ((NI)255)); goto BeforeRet_;
				}
				nimAddCharV1((&result), ((NIM_CHAR) (((NI) ((NI)((NI)((NI32)(ch) >> (NU32)(((NI)18))) | ((NI)240)))))));
				nimln_(209);
				if (((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI)12))) & ((NI)63)) | ((NI)128))) < ((NI)0) || ((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI)12))) & ((NI)63)) | ((NI)128))) > ((NI)255)){ raiseRangeErrorI((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI)12))) & ((NI)63)) | ((NI)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
				}
				nimAddCharV1((&result), ((NIM_CHAR) (((NI) ((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI)12))) & ((NI)63)) | ((NI)128)))))));
				nimln_(210);
				if (((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI)6))) & ((NI)63)) | ((NI)128))) < ((NI)0) || ((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI)6))) & ((NI)63)) | ((NI)128))) > ((NI)255)){ raiseRangeErrorI((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI)6))) & ((NI)63)) | ((NI)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
				}
				nimAddCharV1((&result), ((NIM_CHAR) (((NI) ((NI)((NI)((NI)((NI32)(ch) >> (NU32)(((NI)6))) & ((NI)63)) | ((NI)128)))))));
				nimln_(211);
				if (((NI)((NI)(ch & ((NI)63)) | ((NI)128))) < ((NI)0) || ((NI)((NI)(ch & ((NI)63)) | ((NI)128))) > ((NI)255)){ raiseRangeErrorI((NI)((NI)(ch & ((NI)63)) | ((NI)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
				}
				nimAddCharV1((&result), ((NIM_CHAR) (((NI) ((NI)((NI)(ch & ((NI)63)) | ((NI)128)))))));
			}
			goto LA21_;
LA32_: ;
			{
				nimln_(214);
				nimAddCharV1((&result), 239);
				nimln_(215);
				nimAddCharV1((&result), 191);
				nimln_(216);
				nimAddCharV1((&result), 189);
			}
LA21_: ;
		} LA2: ;
	}
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZwidestrs_u372)(NI16* s_p0) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
	nimfr_("$", "D:\\nim\\lib\\std\\widestrs.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(219, "D:\\nim\\lib\\std\\widestrs.nim");
	result = dollar___stdZwidestrs_u306(s_p0, ((NI)80), ((NI)65533));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a_p0, v_p1, ((size_t) (size_p2)));
}
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_u7(p_p0, ((int)0), size_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, createWide__stdZwidestrs_u34)(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ* a_p0, NI bytes_p1) {
	void* T1_;
	nimfr_("createWide", "D:\\nim\\lib\\std\\widestrs.nim");
{	nimlf_(42, "D:\\nim\\lib\\std\\widestrs.nim");
	(*a_p0).bytes = bytes_p1;
	nimln_(46);
	if ((bytes_p1) < ((NI)0) || (bytes_p1) > ((NI)2147483647)){ raiseRangeErrorI(bytes_p1, ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	T1_ = (void*)0;
	T1_ = alloc0Impl__system_u1738(((NI) (bytes_p1)));
	(*a_p0).data = ((NI16*) (T1_));
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ, newWideCString__stdZwidestrs_u271)(NCSTRING source_p0, NI L_p1) {
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ result;
	NI TM__R8z9bzATizpQoD67YeHNTdg_9;
	NI TM__R8z9bzATizpQoD67YeHNTdg_10;
	NI d;
NIM_BOOL* nimErr_;
	nimfr_("newWideCString", "D:\\nim\\lib\\std\\widestrs.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	nimlf_(149, "D:\\nim\\lib\\std\\widestrs.nim");
	if (nimMulInt(L_p1, ((NI)2), &TM__R8z9bzATizpQoD67YeHNTdg_9)) { raiseOverflow(); goto BeforeRet_;
	};
	if (nimAddInt((NI)(TM__R8z9bzATizpQoD67YeHNTdg_9), ((NI)2), &TM__R8z9bzATizpQoD67YeHNTdg_10)) { raiseOverflow(); goto BeforeRet_;
	};
	createWide__stdZwidestrs_u34((&result), (NI)(TM__R8z9bzATizpQoD67YeHNTdg_10));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(150);
	d = ((NI)0);
	{
		NI ch;
		NI i;
		NI result_2;
		ch = (NI)0;
		nimln_(139);
		i = ((NI)0);
		result_2 = (NI)0;
		{
			nimln_(141);
			while (1) {
				NI TM__R8z9bzATizpQoD67YeHNTdg_32;
				if (!(i < L_p1)) goto LA3;
				nimln_(142);
				{
					NI TM__R8z9bzATizpQoD67YeHNTdg_11;
					nimln_(98);
					if (!(((NU8)(source_p0[i])) <= ((NI)127))) goto LA6_;
					nimln_(142);
					nimln_(99);
					result_2 = ((NU8)(source_p0[i]));
					nimln_(100);
					if (nimAddInt(i, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_11)) { raiseOverflow(); goto BeforeRet_;
					};
					i = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_11);
				}
				goto LA4_;
LA6_: ;
				{
					nimln_(101);
					if (!((NI)((NI32)(((NU8)(source_p0[i]))) >> (NU32)(((NI)5))) == ((NI)6))) goto LA9_;
					nimln_(103);
					{
						NI TM__R8z9bzATizpQoD67YeHNTdg_12;
						NI TM__R8z9bzATizpQoD67YeHNTdg_13;
						NI TM__R8z9bzATizpQoD67YeHNTdg_14;
						if (nimSubInt(L_p1, ((NI)2), &TM__R8z9bzATizpQoD67YeHNTdg_12)) { raiseOverflow(); goto BeforeRet_;
						};
						if (!(i <= (NI)(TM__R8z9bzATizpQoD67YeHNTdg_12))) goto LA13_;
						nimln_(142);
						nimln_(104);
						if (nimAddInt(i, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_13)) { raiseOverflow(); goto BeforeRet_;
						};
						result_2 = (NI)((NI)((NU32)((NI)(((NU8)(source_p0[i])) & ((NI)31))) << (NU32)(((NI)6))) | (NI)(((NU8)(source_p0[(NI)(TM__R8z9bzATizpQoD67YeHNTdg_13)])) & ((NI)63)));
						nimln_(105);
						if (nimAddInt(i, ((NI)2), &TM__R8z9bzATizpQoD67YeHNTdg_14)) { raiseOverflow(); goto BeforeRet_;
						};
						i = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_14);
					}
					goto LA11_;
LA13_: ;
					{
						NI TM__R8z9bzATizpQoD67YeHNTdg_15;
						nimln_(142);
						nimln_(107);
						result_2 = ((NI)65533);
						nimln_(108);
						if (nimAddInt(i, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_15)) { raiseOverflow(); goto BeforeRet_;
						};
						i = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_15);
					}
LA11_: ;
				}
				goto LA4_;
LA9_: ;
				{
					nimln_(109);
					if (!((NI)((NI32)(((NU8)(source_p0[i]))) >> (NU32)(((NI)4))) == ((NI)14))) goto LA17_;
					nimln_(110);
					{
						NI TM__R8z9bzATizpQoD67YeHNTdg_16;
						NI TM__R8z9bzATizpQoD67YeHNTdg_17;
						NI TM__R8z9bzATizpQoD67YeHNTdg_18;
						NI TM__R8z9bzATizpQoD67YeHNTdg_19;
						if (nimSubInt(L_p1, ((NI)3), &TM__R8z9bzATizpQoD67YeHNTdg_16)) { raiseOverflow(); goto BeforeRet_;
						};
						if (!(i <= (NI)(TM__R8z9bzATizpQoD67YeHNTdg_16))) goto LA21_;
						nimln_(142);
						nimln_(114);
						nimln_(113);
						nimln_(114);
						if (nimAddInt(i, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_17)) { raiseOverflow(); goto BeforeRet_;
						};
						nimln_(115);
						if (nimAddInt(i, ((NI)2), &TM__R8z9bzATizpQoD67YeHNTdg_18)) { raiseOverflow(); goto BeforeRet_;
						};
						result_2 = (NI)((NI)((NI)((NU32)((NI)(((NU8)(source_p0[i])) & ((NI)15))) << (NU32)(((NI)12))) | (NI)((NU32)((NI)(((NU8)(source_p0[(NI)(TM__R8z9bzATizpQoD67YeHNTdg_17)])) & ((NI)63))) << (NU32)(((NI)6)))) | (NI)(((NU8)(source_p0[(NI)(TM__R8z9bzATizpQoD67YeHNTdg_18)])) & ((NI)63)));
						nimln_(116);
						if (nimAddInt(i, ((NI)3), &TM__R8z9bzATizpQoD67YeHNTdg_19)) { raiseOverflow(); goto BeforeRet_;
						};
						i = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_19);
					}
					goto LA19_;
LA21_: ;
					{
						NI TM__R8z9bzATizpQoD67YeHNTdg_20;
						nimln_(142);
						nimln_(118);
						result_2 = ((NI)65533);
						nimln_(119);
						if (nimAddInt(i, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_20)) { raiseOverflow(); goto BeforeRet_;
						};
						i = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_20);
					}
LA19_: ;
				}
				goto LA4_;
LA17_: ;
				{
					nimln_(120);
					if (!((NI)((NI32)(((NU8)(source_p0[i]))) >> (NU32)(((NI)3))) == ((NI)30))) goto LA25_;
					nimln_(121);
					{
						NI TM__R8z9bzATizpQoD67YeHNTdg_21;
						NI TM__R8z9bzATizpQoD67YeHNTdg_22;
						NI TM__R8z9bzATizpQoD67YeHNTdg_23;
						NI TM__R8z9bzATizpQoD67YeHNTdg_24;
						NI TM__R8z9bzATizpQoD67YeHNTdg_25;
						if (nimSubInt(L_p1, ((NI)4), &TM__R8z9bzATizpQoD67YeHNTdg_21)) { raiseOverflow(); goto BeforeRet_;
						};
						if (!(i <= (NI)(TM__R8z9bzATizpQoD67YeHNTdg_21))) goto LA29_;
						nimln_(142);
						nimln_(127);
						nimln_(126);
						nimln_(125);
						nimln_(126);
						if (nimAddInt(i, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_22)) { raiseOverflow(); goto BeforeRet_;
						};
						nimln_(127);
						if (nimAddInt(i, ((NI)2), &TM__R8z9bzATizpQoD67YeHNTdg_23)) { raiseOverflow(); goto BeforeRet_;
						};
						nimln_(128);
						if (nimAddInt(i, ((NI)3), &TM__R8z9bzATizpQoD67YeHNTdg_24)) { raiseOverflow(); goto BeforeRet_;
						};
						result_2 = (NI)((NI)((NI)((NI)((NU32)((NI)(((NU8)(source_p0[i])) & ((NI)7))) << (NU32)(((NI)18))) | (NI)((NU32)((NI)(((NU8)(source_p0[(NI)(TM__R8z9bzATizpQoD67YeHNTdg_22)])) & ((NI)63))) << (NU32)(((NI)12)))) | (NI)((NU32)((NI)(((NU8)(source_p0[(NI)(TM__R8z9bzATizpQoD67YeHNTdg_23)])) & ((NI)63))) << (NU32)(((NI)6)))) | (NI)(((NU8)(source_p0[(NI)(TM__R8z9bzATizpQoD67YeHNTdg_24)])) & ((NI)63)));
						nimln_(129);
						if (nimAddInt(i, ((NI)4), &TM__R8z9bzATizpQoD67YeHNTdg_25)) { raiseOverflow(); goto BeforeRet_;
						};
						i = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_25);
					}
					goto LA27_;
LA29_: ;
					{
						NI TM__R8z9bzATizpQoD67YeHNTdg_26;
						nimln_(142);
						nimln_(131);
						result_2 = ((NI)65533);
						nimln_(132);
						if (nimAddInt(i, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_26)) { raiseOverflow(); goto BeforeRet_;
						};
						i = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_26);
					}
LA27_: ;
				}
				goto LA4_;
LA25_: ;
				{
					NI TM__R8z9bzATizpQoD67YeHNTdg_27;
					nimln_(142);
					nimln_(134);
					result_2 = ((NI)65533);
					nimln_(135);
					if (nimAddInt(i, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_27)) { raiseOverflow(); goto BeforeRet_;
					};
					i = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_27);
				}
LA4_: ;
				nimln_(151);
				ch = result_2;
				{
					nimln_(153);
					if (!(ch <= ((NI)65535))) goto LA35_;
					nimln_(154);
					{
						NIM_BOOL T39_;
						T39_ = (NIM_BOOL)0;
						T39_ = (((NI)55296) <= ch);
						if (!(T39_)) goto LA40_;
						T39_ = (ch <= ((NI)57343));
LA40_: ;
						if (!T39_) goto LA41_;
						nimln_(155);
						result.data[d] = ((NI16)-3);
					}
					goto LA37_;
LA41_: ;
					{
						nimln_(157);
						result.data[d] = ((NI16) (((NU16) (ch))));
					}
LA37_: ;
				}
				goto LA33_;
LA35_: ;
				{
					nimln_(158);
					if (!(((NI)1114111) < ch)) goto LA45_;
					nimln_(159);
					result.data[d] = ((NI16)-3);
				}
				goto LA33_;
LA45_: ;
				{
					NI ch_2;
					NI TM__R8z9bzATizpQoD67YeHNTdg_28;
					NI TM__R8z9bzATizpQoD67YeHNTdg_29;
					NI TM__R8z9bzATizpQoD67YeHNTdg_30;
					NI TM__R8z9bzATizpQoD67YeHNTdg_31;
					nimln_(161);
					if (nimSubInt(ch, ((NI)65536), &TM__R8z9bzATizpQoD67YeHNTdg_28)) { raiseOverflow(); goto BeforeRet_;
					};
					ch_2 = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_28);
					nimln_(162);
					if (nimAddInt((NI)((NI32)(ch_2) >> (NU32)(((NI)10))), ((NI)55296), &TM__R8z9bzATizpQoD67YeHNTdg_29)) { raiseOverflow(); goto BeforeRet_;
					};
					result.data[d] = ((NI16) (((NU16) ((NI)(TM__R8z9bzATizpQoD67YeHNTdg_29)))));
					nimln_(163);
					if (nimAddInt(d, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_30)) { raiseOverflow(); goto BeforeRet_;
					};
					d = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_30);
					nimln_(164);
					if (nimAddInt((NI)(ch_2 & ((NI)1023)), ((NI)56320), &TM__R8z9bzATizpQoD67YeHNTdg_31)) { raiseOverflow(); goto BeforeRet_;
					};
					result.data[d] = ((NI16) (((NU16) ((NI)(TM__R8z9bzATizpQoD67YeHNTdg_31)))));
				}
LA33_: ;
				nimln_(151);
				if (nimAddInt(d, ((NI)1), &TM__R8z9bzATizpQoD67YeHNTdg_32)) { raiseOverflow(); goto BeforeRet_;
				};
				d = (NI)(TM__R8z9bzATizpQoD67YeHNTdg_32);
			} LA3: ;
		}
	}
	nimln_(166);
	result.data[d] = ((NI16)0);
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZwidestrs_u31)(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ* a_p0, tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ b_p1) {
	nimfr_("=sink", "D:\\nim\\lib\\std\\widestrs.nim");
	nimlf_(38, "D:\\nim\\lib\\std\\widestrs.nim");
	(*a_p0).bytes = b_p1.bytes;
	nimln_(39);
	(*a_p0).data = b_p1.data;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZwidestrs_u375)(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ s_p0, NI estimate_p1, NI replacement_p2) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
	nimfr_("$", "D:\\nim\\lib\\std\\widestrs.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(222, "D:\\nim\\lib\\std\\widestrs.nim");
	nimln_(223);
	result = dollar___stdZwidestrs_u306(s_p0.data, estimate_p1, replacement_p2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZwidestrs_u6)(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ* a_p0) {
	nimfr_("=destroy", "D:\\nim\\lib\\std\\widestrs.nim");
	nimlf_(29, "D:\\nim\\lib\\std\\widestrs.nim");
	{
		if (!!(((*a_p0).data == ((NI16*) NIM_NIL)))) goto LA3_;
		nimln_(33);
		dealloc(((void*) ((*a_p0).data)));
	}
LA3_: ;
	popFrame();
}
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
N_LIB_PRIVATE N_NIMCALL(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ, newWideCString__stdZwidestrs_u303)(NimStringV2 s_p0) {
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ result;
NIM_BOOL* nimErr_;
	nimfr_("newWideCString", "D:\\nim\\lib\\std\\widestrs.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	nimlf_(174, "D:\\nim\\lib\\std\\widestrs.nim");
	result = newWideCString__stdZwidestrs_u271(nimToCStringConv(s_p0), s_p0.len);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NI, nimCStrLen)(NCSTRING a_p0) {
	NI result;
	size_t T1_;
	result = (NI)0;
	T1_ = (size_t)0;
	T1_ = strlen(a_p0);
	result = ((NI) (T1_));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ, newWideCString__stdZwidestrs_u292)(NCSTRING s_p0) {
	tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ result;
NIM_BOOL* nimErr_;
	nimfr_("newWideCString", "D:\\nim\\lib\\std\\widestrs.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
	nimlf_(169, "D:\\nim\\lib\\std\\widestrs.nim");
	{
		if (!(s_p0 == 0)) goto LA3_;
		nimln_(168);
		nimln_(169);
		nimZeroMem((void*)(&result), sizeof(tyObject_WideCStringObj__qZlS9aXUUYG9cVv6VNCsI5NQ));
		result.bytes = ((NI)0);
		result.data = ((NI16*) NIM_NIL);
		goto BeforeRet_;
	}
LA3_: ;
	nimln_(171);
	result = newWideCString__stdZwidestrs_u271(s_p0, (s_p0 ? nimCStrLen(s_p0) : 0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
