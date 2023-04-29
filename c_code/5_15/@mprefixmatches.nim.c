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
typedef NU8 tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4312)(void);
static N_INLINE(void, popFrame)(void);
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__xyuxIF9aCxFKzZet1F6nhpA_15 = { 4 | NIM_STRLIT_FLAG, "None" };
static const NimStringV2 TM__xyuxIF9aCxFKzZet1F6nhpA_16 = {4, (NimStrPayload*)&TM__xyuxIF9aCxFKzZet1F6nhpA_15};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__xyuxIF9aCxFKzZet1F6nhpA_17 = { 6 | NIM_STRLIT_FLAG, "Abbrev" };
static const NimStringV2 TM__xyuxIF9aCxFKzZet1F6nhpA_18 = {6, (NimStrPayload*)&TM__xyuxIF9aCxFKzZet1F6nhpA_17};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__xyuxIF9aCxFKzZet1F6nhpA_19 = { 6 | NIM_STRLIT_FLAG, "Substr" };
static const NimStringV2 TM__xyuxIF9aCxFKzZet1F6nhpA_20 = {6, (NimStrPayload*)&TM__xyuxIF9aCxFKzZet1F6nhpA_19};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__xyuxIF9aCxFKzZet1F6nhpA_21 = { 6 | NIM_STRLIT_FLAG, "Prefix" };
static const NimStringV2 TM__xyuxIF9aCxFKzZet1F6nhpA_22 = {6, (NimStrPayload*)&TM__xyuxIF9aCxFKzZet1F6nhpA_21};
extern NIM_BOOL nimInErrorMode__system_u4115;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4115);
	return result;
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
N_LIB_PRIVATE N_NIMCALL(tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg, prefixMatch__prefixmatches_u10)(NimStringV2 p_p0, NimStringV2 s_p1) {
	tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg result;
	NI i;
NIM_BOOL* nimErr_;
	nimfr_("prefixMatch", "D:\\nim\\compiler\\prefixmatches.nim");
{nimErr_ = nimErrorFlag();
	result = (tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)0;
	nimlf_(21, "D:\\nim\\compiler\\prefixmatches.nim");
	{
		if (!(s_p1.len < p_p0.len)) goto LA3_;
		nimln_(19);
		nimln_(21);
		result = ((tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)0);
		goto BeforeRet_;
	}
LA3_: ;
	nimln_(22);
	i = ((NI)0);
	{
		nimln_(24);
		while (1) {
			NI TM__xyuxIF9aCxFKzZet1F6nhpA_8;
			if (!(i < s_p1.len)) goto LA6;
			nimln_(25);
			{
				NI TM__xyuxIF9aCxFKzZet1F6nhpA_2;
				if (i < 0 || i >= s_p1.len){ raiseIndexError2(i,s_p1.len-1); goto BeforeRet_;
				}
				if (!((NU8)(s_p1.p->data[i]) == (NU8)(95))) goto LA9_;
				if (nimAddInt(i, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_2)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_2);
			}
LA9_: ;
			nimln_(26);
			{
				NIM_BOOL T13_;
				NIM_CHAR T15_;
				NIM_CHAR T16_;
				NI ii;
				NI TM__xyuxIF9aCxFKzZet1F6nhpA_3;
				NI jj;
				T13_ = (NIM_BOOL)0;
				T13_ = (i < s_p1.len);
				if (!(T13_)) goto LA14_;
				nimln_(20);
				if (i < 0 || i >= s_p1.len){ raiseIndexError2(i,s_p1.len-1); goto BeforeRet_;
				}
				T15_ = (NIM_CHAR)0;
				T15_ = nsuToLowerAsciiChar(s_p1.p->data[i]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (((NI)0) < 0 || ((NI)0) >= p_p0.len){ raiseIndexError2(((NI)0),p_p0.len-1); goto BeforeRet_;
				}
				T16_ = (NIM_CHAR)0;
				T16_ = nsuToLowerAsciiChar(p_p0.p->data[((NI)0)]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				T13_ = ((NU8)(T15_) == (NU8)(T16_));
LA14_: ;
				if (!T13_) goto LA17_;
				nimln_(27);
				if (nimAddInt(i, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_3)) { raiseOverflow(); goto BeforeRet_;
				};
				ii = (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_3);
				nimln_(28);
				jj = ((NI)1);
				{
					nimln_(29);
					while (1) {
						NIM_BOOL T21_;
						NI TM__xyuxIF9aCxFKzZet1F6nhpA_6;
						NI TM__xyuxIF9aCxFKzZet1F6nhpA_7;
						T21_ = (NIM_BOOL)0;
						T21_ = (ii < s_p1.len);
						if (!(T21_)) goto LA22_;
						T21_ = (jj < p_p0.len);
LA22_: ;
						if (!T21_) goto LA20;
						nimln_(30);
						{
							NI TM__xyuxIF9aCxFKzZet1F6nhpA_4;
							if (jj < 0 || jj >= p_p0.len){ raiseIndexError2(jj,p_p0.len-1); goto BeforeRet_;
							}
							if (!((NU8)(p_p0.p->data[jj]) == (NU8)(95))) goto LA25_;
							if (nimAddInt(jj, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_4)) { raiseOverflow(); goto BeforeRet_;
							};
							jj = (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_4);
						}
LA25_: ;
						nimln_(31);
						{
							NI TM__xyuxIF9aCxFKzZet1F6nhpA_5;
							if (ii < 0 || ii >= s_p1.len){ raiseIndexError2(ii,s_p1.len-1); goto BeforeRet_;
							}
							if (!((NU8)(s_p1.p->data[ii]) == (NU8)(95))) goto LA29_;
							if (nimAddInt(ii, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_5)) { raiseOverflow(); goto BeforeRet_;
							};
							ii = (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_5);
						}
LA29_: ;
						nimln_(32);
						{
							NIM_CHAR T33_;
							NIM_CHAR T34_;
							nimln_(20);
							if (ii < 0 || ii >= s_p1.len){ raiseIndexError2(ii,s_p1.len-1); goto BeforeRet_;
							}
							T33_ = (NIM_CHAR)0;
							T33_ = nsuToLowerAsciiChar(s_p1.p->data[ii]);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							if (jj < 0 || jj >= p_p0.len){ raiseIndexError2(jj,p_p0.len-1); goto BeforeRet_;
							}
							T34_ = (NIM_CHAR)0;
							T34_ = nsuToLowerAsciiChar(p_p0.p->data[jj]);
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
							if (!!(((NU8)(T33_) == (NU8)(T34_)))) goto LA35_;
							nimln_(32);
							goto LA19;
						}
LA35_: ;
						nimln_(33);
						if (nimAddInt(ii, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_6)) { raiseOverflow(); goto BeforeRet_;
						};
						ii = (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_6);
						nimln_(34);
						if (nimAddInt(jj, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_7)) { raiseOverflow(); goto BeforeRet_;
						};
						jj = (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_7);
					} LA20: ;
				} LA19: ;
				nimln_(36);
				{
					if (!(p_p0.len <= jj)) goto LA39_;
					nimln_(37);
					{
						if (!(i == ((NI)0))) goto LA43_;
						nimln_(19);
						nimln_(37);
						result = ((tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)3);
						goto BeforeRet_;
					}
					goto LA41_;
LA43_: ;
					{
						nimln_(38);
						nimln_(19);
						nimln_(38);
						result = ((tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)2);
						goto BeforeRet_;
					}
LA41_: ;
				}
LA39_: ;
			}
LA17_: ;
			nimln_(39);
			if (nimAddInt(i, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_8)) { raiseOverflow(); goto BeforeRet_;
			};
			i = (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_8);
		} LA6: ;
	}
	nimln_(41);
	{
		NIM_CHAR T48_;
		NIM_CHAR T49_;
		NI j;
		nimln_(20);
		if (((NI)0) < 0 || ((NI)0) >= s_p1.len){ raiseIndexError2(((NI)0),s_p1.len-1); goto BeforeRet_;
		}
		T48_ = (NIM_CHAR)0;
		T48_ = nsuToLowerAsciiChar(s_p1.p->data[((NI)0)]);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (((NI)0) < 0 || ((NI)0) >= p_p0.len){ raiseIndexError2(((NI)0),p_p0.len-1); goto BeforeRet_;
		}
		T49_ = (NIM_CHAR)0;
		T49_ = nsuToLowerAsciiChar(p_p0.p->data[((NI)0)]);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!((NU8)(T48_) == (NU8)(T49_))) goto LA50_;
		nimln_(42);
		i = ((NI)1);
		nimln_(43);
		j = ((NI)1);
		{
			nimln_(44);
			while (1) {
				NI TM__xyuxIF9aCxFKzZet1F6nhpA_14;
				if (!(i < s_p1.len)) goto LA53;
				nimln_(45);
				{
					NIM_BOOL T56_;
					NI TM__xyuxIF9aCxFKzZet1F6nhpA_9;
					T56_ = (NIM_BOOL)0;
					if (nimSubInt(s_p1.len, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_9)) { raiseOverflow(); goto BeforeRet_;
					};
					T56_ = (i < (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_9));
					if (!(T56_)) goto LA57_;
					if (i < 0 || i >= s_p1.len){ raiseIndexError2(i,s_p1.len-1); goto BeforeRet_;
					}
					T56_ = ((NU8)(s_p1.p->data[i]) == (NU8)(95));
LA57_: ;
					if (!T56_) goto LA58_;
					nimln_(46);
					{
						NIM_BOOL T62_;
						NIM_CHAR T64_;
						NI TM__xyuxIF9aCxFKzZet1F6nhpA_10;
						NIM_CHAR T65_;
						NI TM__xyuxIF9aCxFKzZet1F6nhpA_11;
						T62_ = (NIM_BOOL)0;
						T62_ = (j < p_p0.len);
						if (!(T62_)) goto LA63_;
						nimln_(20);
						if (j < 0 || j >= p_p0.len){ raiseIndexError2(j,p_p0.len-1); goto BeforeRet_;
						}
						T64_ = (NIM_CHAR)0;
						T64_ = nsuToLowerAsciiChar(p_p0.p->data[j]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						nimln_(46);
						if (nimAddInt(i, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_10)) { raiseOverflow(); goto BeforeRet_;
						};
						if ((NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_10) < 0 || (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_10) >= s_p1.len){ raiseIndexError2((NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_10),s_p1.len-1); goto BeforeRet_;
						}
						nimln_(20);
						T65_ = (NIM_CHAR)0;
						T65_ = nsuToLowerAsciiChar(s_p1.p->data[(NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_10)]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						T62_ = ((NU8)(T64_) == (NU8)(T65_));
LA63_: ;
						if (!T62_) goto LA66_;
						nimln_(46);
						if (nimAddInt(j, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_11)) { raiseOverflow(); goto BeforeRet_;
						};
						j = (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_11);
					}
					goto LA60_;
LA66_: ;
					{
						nimln_(47);
						nimln_(19);
						nimln_(47);
						result = ((tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)0);
						goto BeforeRet_;
					}
LA60_: ;
				}
LA58_: ;
				nimln_(48);
				{
					NIM_BOOL T71_;
					NIM_BOOL T72_;
					NI TM__xyuxIF9aCxFKzZet1F6nhpA_12;
					T71_ = (NIM_BOOL)0;
					T72_ = (NIM_BOOL)0;
					T72_ = (i < s_p1.len);
					if (!(T72_)) goto LA73_;
					if (i < 0 || i >= s_p1.len){ raiseIndexError2(i,s_p1.len-1); goto BeforeRet_;
					}
					T72_ = (((NU8)(s_p1.p->data[i])) >= ((NU8)(65)) && ((NU8)(s_p1.p->data[i])) <= ((NU8)(90)));
LA73_: ;
					T71_ = T72_;
					if (!(T71_)) goto LA74_;
					if (nimSubInt(i, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_12)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_12) < 0 || (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_12) >= s_p1.len){ raiseIndexError2((NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_12),s_p1.len-1); goto BeforeRet_;
					}
					T71_ = !((((NU8)(s_p1.p->data[(NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_12)])) >= ((NU8)(65)) && ((NU8)(s_p1.p->data[(NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_12)])) <= ((NU8)(90))));
LA74_: ;
					if (!T71_) goto LA75_;
					nimln_(49);
					{
						NIM_BOOL T79_;
						NIM_CHAR T81_;
						NIM_CHAR T82_;
						NI TM__xyuxIF9aCxFKzZet1F6nhpA_13;
						T79_ = (NIM_BOOL)0;
						T79_ = (j < p_p0.len);
						if (!(T79_)) goto LA80_;
						nimln_(20);
						if (j < 0 || j >= p_p0.len){ raiseIndexError2(j,p_p0.len-1); goto BeforeRet_;
						}
						T81_ = (NIM_CHAR)0;
						T81_ = nsuToLowerAsciiChar(p_p0.p->data[j]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						if (i < 0 || i >= s_p1.len){ raiseIndexError2(i,s_p1.len-1); goto BeforeRet_;
						}
						T82_ = (NIM_CHAR)0;
						T82_ = nsuToLowerAsciiChar(s_p1.p->data[i]);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						T79_ = ((NU8)(T81_) == (NU8)(T82_));
LA80_: ;
						if (!T79_) goto LA83_;
						nimln_(49);
						if (nimAddInt(j, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_13)) { raiseOverflow(); goto BeforeRet_;
						};
						j = (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_13);
					}
					goto LA77_;
LA83_: ;
					{
						nimln_(50);
						nimln_(19);
						nimln_(50);
						result = ((tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)0);
						goto BeforeRet_;
					}
LA77_: ;
				}
LA75_: ;
				nimln_(51);
				if (nimAddInt(i, ((NI)1), &TM__xyuxIF9aCxFKzZet1F6nhpA_14)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__xyuxIF9aCxFKzZet1F6nhpA_14);
			} LA53: ;
		}
		nimln_(52);
		{
			if (!(p_p0.len <= j)) goto LA88_;
			nimln_(53);
			nimln_(19);
			nimln_(53);
			result = ((tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)1);
			goto BeforeRet_;
		}
		goto LA86_;
LA88_: ;
		{
			nimln_(55);
			nimln_(19);
			nimln_(55);
			result = ((tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)0);
			goto BeforeRet_;
		}
LA86_: ;
	}
LA50_: ;
	nimln_(56);
	nimln_(19);
	nimln_(56);
	result = ((tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)0);
	goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___prefixmatches_u7)(tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg e_p0) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	switch (e_p0) {
	case ((tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)0):
	{
		result = TM__xyuxIF9aCxFKzZet1F6nhpA_16;
	}
	break;
	case ((tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)1):
	{
		result = TM__xyuxIF9aCxFKzZet1F6nhpA_18;
	}
	break;
	case ((tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)2):
	{
		result = TM__xyuxIF9aCxFKzZet1F6nhpA_20;
	}
	break;
	case ((tyEnum_PrefixMatch__IouyDb9a9agAoVd5otBlkcEg)3):
	{
		result = TM__xyuxIF9aCxFKzZet1F6nhpA_22;
	}
	break;
	}
	return result;
}
