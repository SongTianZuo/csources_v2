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
typedef struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg tyTuple__7q7q3E6Oj24ZNVJb9aonhAg;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
typedef NimStringV2 tyArray__Re75IspeoxXy2oCZHwcRrA[2];
struct tyTuple__7q7q3E6Oj24ZNVJb9aonhAg {
NimStringV2 Field0;
NimStringV2 Field1;
NimStringV2 Field2;
};
typedef NimStringV2 tyArray__sMpvt1sOxOJ3LFGulnbeMQ[4];
typedef NimStringV2 tyArray__nHXaesL0DJZHyVS07ARPRA[1];
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatOpenArray)(NimStringV2 formatstr_p0, NimStringV2* a_p1, NI a_p1Len_0);
static N_INLINE(NIM_BOOL, contains__stdZenvvars_u51)(NIM_CHAR* a_p0, NI a_p0Len_0, NIM_CHAR item_p1);
static N_INLINE(NI, find__stdZenvvars_u56)(NIM_CHAR* a_p0, NI a_p0Len_0, NIM_CHAR item_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__stdZassertions_u274)(NimStringV2 msg_p0);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___nimpaths_u39)(tyTuple__7q7q3E6Oj24ZNVJb9aonhAg* x_p0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, interp__nimpaths_u35)(NimStringV2 path_p0, NimStringV2 nimr_p1);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nosfileExists)(NimStringV2 filename_p0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nospquoteShell)(NimStringV2 s_p0);
N_LIB_PRIVATE N_NIMCALL(void, echoBinSafe)(NimStringV2* args_p0, NI args_p0Len_0);
N_LIB_PRIVATE N_NIMCALL(NI, nosexecShellCmd)(NimStringV2 command_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___stdZassertions_u13)(NimStringV2* dest_p0);
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_2 = { 4 | NIM_STRLIT_FLAG, "nimr" };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_3 = {4, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_2};
static const struct {
  NI cap; NIM_CHAR data[55+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_6 = { 55 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\nimpaths.nim(43, 3) `\'$\' notin result` " };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_7 = {55, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_6};
static const struct {
  NI cap; NIM_CHAR data[30+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_10 = { 30 | NIM_STRLIT_FLAG, "$nimr/tools/dochack/dochack.js" };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_11 = {30, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_10};
static const struct {
  NI cap; NIM_CHAR data[24+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_12 = { 24 | NIM_STRLIT_FLAG, "$nim js -d:release $file" };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_13 = {24, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_12};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_14 = { 3 | NIM_STRLIT_FLAG, "nim" };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_15 = {3, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_14};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_16 = { 4 | NIM_STRLIT_FLAG, "file" };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_17 = {4, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_16};
static const struct {
  NI cap; NIM_CHAR data[31+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_18 = { 31 | NIM_STRLIT_FLAG, "$nimr/tools/dochack/dochack.nim" };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_19 = {31, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_18};
static const struct {
  NI cap; NIM_CHAR data[20+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_20 = { 20 | NIM_STRLIT_FLAG, "getDocHacksJs: cmd: " };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_21 = {20, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_20};
static const struct {
  NI cap; NIM_CHAR data[61+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_22 = { 61 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\nimpaths.nim(52, 5) `execShellCmd(cmd) == 0` " };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_23 = {61, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_22};
static const struct {
  NI cap; NIM_CHAR data[60+1];
} TM__m6t49a5Ns3blAkni6Qq1Nhw_24 = { 60 | NIM_STRLIT_FLAG, "D:\\nim\\compiler\\nimpaths.nim(53, 3) `docHackJs2.fileExists` " };
static const NimStringV2 TM__m6t49a5Ns3blAkni6Qq1Nhw_25 = {60, (NimStrPayload*)&TM__m6t49a5Ns3blAkni6Qq1Nhw_24};
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
static N_INLINE(NI, find__stdZenvvars_u56)(NIM_CHAR* a_p0, NI a_p0Len_0, NIM_CHAR item_p1) {
	NI result;
	nimfr_("find", "D:\\nim\\lib\\system.nim");
{	result = (NI)0;
	nimlf_(1623, "D:\\nim\\lib\\system.nim");
	result = ((NI)0);
	{
		NIM_CHAR i;
		NI i_2;
		i = (NIM_CHAR)0;
		nimlf_(23, "D:\\nim\\lib\\system\\iterators.nim");
		i_2 = ((NI)0);
		{
			nimln_(24);
			while (1) {
				NI TM__m6t49a5Ns3blAkni6Qq1Nhw_4;
				NI TM__m6t49a5Ns3blAkni6Qq1Nhw_5;
				if (!(i_2 < a_p0Len_0)) goto LA3;
				nimlf_(1624, "D:\\nim\\lib\\system.nim");
				if (i_2 < 0 || i_2 >= a_p0Len_0){ raiseIndexError2(i_2,a_p0Len_0-1); goto BeforeRet_;
				}
				i = a_p0[i_2];
				{
					nimln_(1625);
					if (!((NU8)(i) == (NU8)(item_p1))) goto LA6_;
					goto BeforeRet_;
				}
LA6_: ;
				nimln_(1624);
				if (nimAddInt(result, ((NI)1), &TM__m6t49a5Ns3blAkni6Qq1Nhw_4)) { raiseOverflow(); goto BeforeRet_;
				};
				result = (NI)(TM__m6t49a5Ns3blAkni6Qq1Nhw_4);
				nimlf_(26, "D:\\nim\\lib\\system\\iterators.nim");
				if (nimAddInt(i_2, ((NI)1), &TM__m6t49a5Ns3blAkni6Qq1Nhw_5)) { raiseOverflow(); goto BeforeRet_;
				};
				i_2 = (NI)(TM__m6t49a5Ns3blAkni6Qq1Nhw_5);
			} LA3: ;
		}
	}
	nimlf_(1627, "D:\\nim\\lib\\system.nim");
	result = ((NI)-1);
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, contains__stdZenvvars_u51)(NIM_CHAR* a_p0, NI a_p0Len_0, NIM_CHAR item_p1) {
	NIM_BOOL result;
	NI T1_;
	nimfr_("contains", "D:\\nim\\lib\\system.nim");
{	result = (NIM_BOOL)0;
	nimlf_(1641, "D:\\nim\\lib\\system.nim");
	nimln_(1629);
	nimln_(1641);
	T1_ = (NI)0;
	T1_ = find__stdZenvvars_u56(a_p0, a_p0Len_0, item_p1);
	result = (((NI)0) <= T1_);
	goto BeforeRet_;
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
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1) {
{	{
		NI TM__m6t49a5Ns3blAkni6Qq1Nhw_8;
		NI TM__m6t49a5Ns3blAkni6Qq1Nhw_9;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__m6t49a5Ns3blAkni6Qq1Nhw_8)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__m6t49a5Ns3blAkni6Qq1Nhw_8)) < ((NI)0) || ((NI)(TM__m6t49a5Ns3blAkni6Qq1Nhw_8)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__m6t49a5Ns3blAkni6Qq1Nhw_8), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__m6t49a5Ns3blAkni6Qq1Nhw_8))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__m6t49a5Ns3blAkni6Qq1Nhw_9)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__m6t49a5Ns3blAkni6Qq1Nhw_9);
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
N_LIB_PRIVATE N_NIMCALL(NimStringV2, interp__nimpaths_u35)(NimStringV2 path_p0, NimStringV2 nimr_p1) {
	NimStringV2 result;
	tyArray__Re75IspeoxXy2oCZHwcRrA T1_;
NIM_BOOL* nimErr_;
	nimfr_("interp", "D:\\nim\\compiler\\nimpaths.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(42, "D:\\nim\\compiler\\nimpaths.nim");
	T1_[0] = TM__m6t49a5Ns3blAkni6Qq1Nhw_3;
	T1_[1] = nimr_p1;
	result = nsuFormatOpenArray(path_p0, T1_, 2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(43);
	{
		NIM_BOOL T4_;
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		NimStringV2 T7_;
		tyTuple__7q7q3E6Oj24ZNVJb9aonhAg T8_;
		T4_ = (NIM_BOOL)0;
		T4_ = contains__stdZenvvars_u51(((result).p) ? (result.p->data) : NIM_NIL, result.len, 36);
		if (!!(!(T4_))) goto LA5_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		T7_.len = 0; T7_.p = NIM_NIL;
		T8_.Field0 = path_p0;
		T8_.Field1 = nimr_p1;
		T8_.Field2 = result;
		colontmpD_ = dollar___nimpaths_u39((&T8_));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T7_ = rawNewString(colontmpD_.len + 55);
appendString((&T7_), TM__m6t49a5Ns3blAkni6Qq1Nhw_7);
appendString((&T7_), colontmpD_);
		colontmpD__2 = T7_;
		failedAssertImpl__stdZassertions_u274(colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD__2));
		eqdestroy___stdZassertions_u16((&colontmpD_));
	}
LA5_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, getDocHacksJs__nimpaths_u133)(NimStringV2 nimr_p0, NimStringV2 nim_p1, NIM_BOOL forceRebuild_p2) {
	NimStringV2 result;
	NimStringV2 docHackJs2;
NIM_BOOL* nimErr_;
	nimfr_("getDocHacksJs", "D:\\nim\\compiler\\nimpaths.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	docHackJs2.len = 0; docHackJs2.p = NIM_NIL;
	nimlf_(48, "D:\\nim\\compiler\\nimpaths.nim");
	docHackJs2 = interp__nimpaths_u35(TM__m6t49a5Ns3blAkni6Qq1Nhw_11, nimr_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(49);
	{
		NIM_BOOL T4_;
		NIM_BOOL T6_;
		NimStringV2 cmd;
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		NimStringV2 colontmpD__3;
		NimStringV2 colontmpD__4;
		tyArray__sMpvt1sOxOJ3LFGulnbeMQ T10_;
		tyArray__nHXaesL0DJZHyVS07ARPRA T11_;
		NimStringV2 T12_;
		T4_ = (NIM_BOOL)0;
		T4_ = forceRebuild_p2;
		if (T4_) goto LA5_;
		T6_ = (NIM_BOOL)0;
		T6_ = nosfileExists(docHackJs2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		T4_ = !(T6_);
LA5_: ;
		if (!T4_) goto LA7_;
		cmd.len = 0; cmd.p = NIM_NIL;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
		colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
		nimln_(50);
		T10_[0] = TM__m6t49a5Ns3blAkni6Qq1Nhw_15;
		colontmpD_ = nospquoteShell(nim_p1);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		T10_[1] = colontmpD_;
		T10_[2] = TM__m6t49a5Ns3blAkni6Qq1Nhw_17;
		colontmpD__2 = interp__nimpaths_u35(TM__m6t49a5Ns3blAkni6Qq1Nhw_19, nimr_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		colontmpD__3 = nospquoteShell(colontmpD__2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		T10_[3] = colontmpD__3;
		cmd = nsuFormatOpenArray(TM__m6t49a5Ns3blAkni6Qq1Nhw_13, T10_, 4);
		if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
		nimln_(51);
		T12_.len = 0; T12_.p = NIM_NIL;
		T12_ = rawNewString(cmd.len + 20);
appendString((&T12_), TM__m6t49a5Ns3blAkni6Qq1Nhw_21);
appendString((&T12_), cmd);
		colontmpD__4 = T12_;
		T11_[0] = colontmpD__4;
		echoBinSafe(T11_, 1);
		nimln_(52);
		{
			NI T15_;
			NimStringV2 colontmpD__5;
			NimStringV2 T18_;
			T15_ = (NI)0;
			T15_ = nosexecShellCmd(cmd);
			if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
			if (!!((T15_ == ((NI)0)))) goto LA16_;
			colontmpD__5.len = 0; colontmpD__5.p = NIM_NIL;
			T18_.len = 0; T18_.p = NIM_NIL;
			T18_ = rawNewString(cmd.len + 61);
appendString((&T18_), TM__m6t49a5Ns3blAkni6Qq1Nhw_23);
appendString((&T18_), cmd);
			colontmpD__5 = T18_;
			failedAssertImpl__stdZassertions_u274(colontmpD__5);
			if (NIM_UNLIKELY(*nimErr_)) goto LA9_;
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__5));
		}
LA16_: ;
		{
			LA9_:;
		}
		{
			eqdestroy___stdZassertions_u16((&colontmpD__4));
			eqdestroy___stdZassertions_u16((&colontmpD__3));
			eqdestroy___stdZassertions_u16((&colontmpD__2));
			eqdestroy___stdZassertions_u16((&colontmpD_));
			eqdestroy___stdZassertions_u16((&cmd));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA7_: ;
	nimlf_(53, "D:\\nim\\compiler\\nimpaths.nim");
	{
		NIM_BOOL T23_;
		T23_ = (NIM_BOOL)0;
		T23_ = nosfileExists(docHackJs2);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
		if (!!(T23_)) goto LA24_;
		failedAssertImpl__stdZassertions_u274(TM__m6t49a5Ns3blAkni6Qq1Nhw_25);
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA24_: ;
	nimln_(54);
	result = docHackJs2;
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqwasMoved___stdZassertions_u13((&docHackJs2));
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_u16((&docHackJs2));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
