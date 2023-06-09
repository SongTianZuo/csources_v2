/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>
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

typedef struct tyObject_PTerminalcolonObjectType___FO9aLL0kgeAwUvNNpxT9akJw tyObject_PTerminalcolonObjectType___FO9aLL0kgeAwUvNNpxT9akJw;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef NU16 tySet_tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw;
typedef NU8 tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
typedef NU8 tyEnum_ForegroundColor__AV3s1f0BYPys8NwQkam1FQ;
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__stdZsyncio_u262)(FILE* f_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4324)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(void, write__stdZsyncio_u238)(FILE* f_p0, NimStringV2 s_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, ansiStyleCode__pureZterminal_u376)(NI style_p0);
N_NIMCALL(NimStringV2, rawNewString)(NI cap_p0);
N_LIB_PRIVATE N_NIMCALL(void, formatValue__pureZstrformat_u172)(NimStringV2* result_p0, NimStringV2 value_p1, NimStringV2 specifier_p2);
N_LIB_PRIVATE N_NIMCALL(void, formatValue__pureZterminal_u253)(NimStringV2* result_p0, NI value_p1, NimStringV2 specifier_p2);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___stdZassertions_u13)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__CN3raB9atujkEiPpxYAdlgQ_2 = { 2 | NIM_STRLIT_FLAG, "\033[" };
static const NimStringV2 TM__CN3raB9atujkEiPpxYAdlgQ_3 = {2, (NimStrPayload*)&TM__CN3raB9atujkEiPpxYAdlgQ_2};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__CN3raB9atujkEiPpxYAdlgQ_4 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__CN3raB9atujkEiPpxYAdlgQ_5 = {0, (NimStrPayload*)&TM__CN3raB9atujkEiPpxYAdlgQ_4};
static const NimStringV2 TM__CN3raB9atujkEiPpxYAdlgQ_6 = {0, (NimStrPayload*)&TM__CN3raB9atujkEiPpxYAdlgQ_4};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__CN3raB9atujkEiPpxYAdlgQ_7 = { 1 | NIM_STRLIT_FLAG, "m" };
static const NimStringV2 TM__CN3raB9atujkEiPpxYAdlgQ_8 = {1, (NimStrPayload*)&TM__CN3raB9atujkEiPpxYAdlgQ_7};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__CN3raB9atujkEiPpxYAdlgQ_12 = { 4 | NIM_STRLIT_FLAG, "\033[0m" };
static const NimStringV2 TM__CN3raB9atujkEiPpxYAdlgQ_13 = {4, (NimStrPayload*)&TM__CN3raB9atujkEiPpxYAdlgQ_12};
N_LIB_PRIVATE tyObject_PTerminalcolonObjectType___FO9aLL0kgeAwUvNNpxT9akJw* gTerm__pureZterminal_u12;
N_LIB_PRIVATE NI gFG__pureZterminal_u359;
N_LIB_PRIVATE NI gBG__pureZterminal_u360;
extern NIM_BOOL nimInErrorMode__system_u4127;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4127);
	return result;
}
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isatty__pureZterminal_u601)(FILE* f_p0) {
	NIM_BOOL result;
	int T1_;
	int T2_;
NIM_BOOL* nimErr_;
	nimfr_("isatty", "D:\\nim\\lib\\pure\\terminal.nim");
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	nimlf_(766, "D:\\nim\\lib\\pure\\terminal.nim");
	T1_ = (int)0;
	T1_ = getFileHandle__stdZsyncio_u262(f_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (int)0;
	T2_ = isatty(T1_);
	result = !((T2_ == ((NI32)0)));
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
		NI TM__CN3raB9atujkEiPpxYAdlgQ_9;
		NI TM__CN3raB9atujkEiPpxYAdlgQ_10;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__CN3raB9atujkEiPpxYAdlgQ_9)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__CN3raB9atujkEiPpxYAdlgQ_9)) < ((NI)0) || ((NI)(TM__CN3raB9atujkEiPpxYAdlgQ_9)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__CN3raB9atujkEiPpxYAdlgQ_9), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__CN3raB9atujkEiPpxYAdlgQ_9))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__CN3raB9atujkEiPpxYAdlgQ_10)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__CN3raB9atujkEiPpxYAdlgQ_10);
	}
LA3_: ;
	}
BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, ansiStyleCode__pureZterminal_u376)(NI style_p0) {
	NimStringV2 result;
	NimStringV2 fmtRes;
NIM_BOOL* nimErr_;
	nimfr_("ansiStyleCode", "D:\\nim\\lib\\pure\\terminal.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	fmtRes.len = 0; fmtRes.p = NIM_NIL;
	nimlf_(587, "D:\\nim\\lib\\pure\\strformat.nim");
	nimlf_(586, "D:\\nim\\lib\\pure\\terminal.nim");
	fmtRes = rawNewString(((NI)41));
	formatValue__pureZstrformat_u172((&fmtRes), TM__CN3raB9atujkEiPpxYAdlgQ_3, TM__CN3raB9atujkEiPpxYAdlgQ_5);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	formatValue__pureZterminal_u253((&fmtRes), style_p0, TM__CN3raB9atujkEiPpxYAdlgQ_6);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	prepareAdd((&fmtRes), 1);
appendString((&fmtRes), TM__CN3raB9atujkEiPpxYAdlgQ_8);
	result = fmtRes;
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqwasMoved___stdZassertions_u13((&fmtRes));
	{
		LA1_:;
	}
	{
		eqdestroy___stdZassertions_u16((&fmtRes));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, setStyle__pureZterminal_u394)(FILE* f_p0, tySet_tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw style_p1) {
NIM_BOOL* nimErr_;
	nimfr_("setStyle", "D:\\nim\\lib\\pure\\terminal.nim");
{nimErr_ = nimErrorFlag();
	{
		tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw s;
		NI i;
		s = (tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw)0;
		nimlf_(57, "D:\\nim\\lib\\system\\iterators.nim");
		i = ((NI)1);
		{
			nimln_(58);
			while (1) {
				NI TM__CN3raB9atujkEiPpxYAdlgQ_11;
				if (!(i <= ((NI)9))) goto LA3;
				nimln_(59);
				{
					NimStringV2 colontmpD_;
					if ((i) < ((tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw)1) || (i) > ((tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw)9)){ raiseRangeErrorI(i, ((tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw)1), ((tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw)9)); goto BeforeRet_;
					}
					if (!((style_p1 &((NU16)1<<((NU)((((tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw) (i)) - 1))&15U)))!=0)) goto LA6_;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					nimlf_(607, "D:\\nim\\lib\\pure\\terminal.nim");
					if ((i) < ((tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw)1) || (i) > ((tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw)9)){ raiseRangeErrorI(i, ((tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw)1), ((tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw)9)); goto LA8_;
					}
					s = ((tyEnum_Style__9ai59aG79aBZJarJCUj9bn5lpw) (i));
					colontmpD_ = ansiStyleCode__pureZterminal_u376(((NI) (s)));
					if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
					write__stdZsyncio_u238(f_p0, colontmpD_);
					if (NIM_UNLIKELY(*nimErr_)) goto LA8_;
					{
						LA8_:;
					}
					{
						nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
						eqdestroy___stdZassertions_u16((&colontmpD_));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
LA6_: ;
				nimlf_(60, "D:\\nim\\lib\\system\\iterators.nim");
				if (nimAddInt(i, ((NI)1), &TM__CN3raB9atujkEiPpxYAdlgQ_11)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__CN3raB9atujkEiPpxYAdlgQ_11);
			} LA3: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, resetAttributes__pureZterminal_u361)(FILE* f_p0) {
NIM_BOOL* nimErr_;
	nimfr_("resetAttributes", "D:\\nim\\lib\\pure\\terminal.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(569, "D:\\nim\\lib\\pure\\terminal.nim");
	write__stdZsyncio_u238(f_p0, TM__CN3raB9atujkEiPpxYAdlgQ_13);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(570);
	gFG__pureZterminal_u359 = ((NI)0);
	nimln_(571);
	gBG__pureZterminal_u360 = ((NI)0);
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, setForegroundColor__pureZterminal_u483)(FILE* f_p0, tyEnum_ForegroundColor__AV3s1f0BYPys8NwQkam1FQ fg_p1, NIM_BOOL bright_p2) {
	NimStringV2 colontmpD_;
NIM_BOOL* nimErr_;
	nimfr_("setForegroundColor", "D:\\nim\\lib\\pure\\terminal.nim");
{nimErr_ = nimErrorFlag();
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	nimlf_(680, "D:\\nim\\lib\\pure\\terminal.nim");
	gFG__pureZterminal_u359 = fg_p1;
	nimln_(681);
	{
		NI TM__CN3raB9atujkEiPpxYAdlgQ_14;
		if (!bright_p2) goto LA4_;
		if (nimAddInt(gFG__pureZterminal_u359, ((NI)60), &TM__CN3raB9atujkEiPpxYAdlgQ_14)) { raiseOverflow(); goto LA1_;
		};
		gFG__pureZterminal_u359 = (NI)(TM__CN3raB9atujkEiPpxYAdlgQ_14);
	}
LA4_: ;
	nimln_(682);
	colontmpD_ = ansiStyleCode__pureZterminal_u376(gFG__pureZterminal_u359);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	write__stdZsyncio_u238(f_p0, colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD_));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
