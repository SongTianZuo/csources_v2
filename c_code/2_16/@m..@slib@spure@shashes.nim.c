/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64

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
typedef struct tyTuple__9bJppzRV54Lg5zLBHJhjoGA tyTuple__9bJppzRV54Lg5zLBHJhjoGA;
typedef struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA;
typedef struct tyTuple__47w2DboNEPf69aPgubZdd7Q tyTuple__47w2DboNEPf69aPgubZdd7Q;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA {
	NU16 line;
	NI16 col;
	NI32 fileIndex;
};
struct tyTuple__9bJppzRV54Lg5zLBHJhjoGA {
tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA Field0;
NI Field1;
};
struct tyTuple__47w2DboNEPf69aPgubZdd7Q {
NI Field0;
NI Field1;
NI Field2;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
};
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash__pureZhashes_u195)(NU8* x_p0, NI x_p0Len_0);
N_LIB_PRIVATE N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NIM_BOOL, nimDivInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
static N_INLINE(NU32, rotl32__pureZhashes_u183)(NU32 x_p0, NI r_p1);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError4)(NI l1_p0, NI h1_p1, NI h2_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
static N_INLINE(NI, emarkamp___pureZhashes_u4)(NI h_p0, NI val_p1);
static N_INLINE(NI, emarkdollar___pureZhashes_u19)(NI h_p0);
N_LIB_PRIVATE N_NIMCALL(NI, hash__lineinfos_u240)(tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA i_p0);
static N_INLINE(NI, hash__pureZhashes_u131)(NI x_p0);
static N_INLINE(NI, hashWangYi1__pureZhashes_u139)(NU64 x_p0);
static N_INLINE(NU64, hiXorLo__pureZhashes_u80)(NU64 a_p0, NU64 b_p1);
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_u284)(NimStringV2 x_p0);
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern NIM_BOOL nimInErrorMode__system_u4097;
static N_INLINE(NIM_BOOL, nimDivInt)(NI a_p0, NI b_p1, NI* res_p2) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a_p0 == ((NI)(IL64(-9223372036854775807) - IL64(1))));
		if (!(T3_)) goto LA4_;
		T3_ = (b_p1 == ((NI)-1));
LA4_: ;
		if (!T3_) goto LA5_;
		result = NIM_TRUE;
	}
	goto LA1_;
LA5_: ;
	{
		(*res_p2) = (NI)(a_p0 / b_p1);
	}
LA1_: ;
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
static N_INLINE(NU32, rotl32__pureZhashes_u183)(NU32 x_p0, NI r_p1) {
	NU32 result;
	NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_5;
	nimfr_("rotl32", "D:\\nim\\lib\\pure\\hashes.nim");
{	result = (NU32)0;
	nimlf_(303, "D:\\nim\\lib\\pure\\hashes.nim");
	nimln_(304);
	if (nimSubInt(((NI)32), r_p1, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_5)) { raiseOverflow(); goto BeforeRet_;
	};
	result = (NU32)((NU32)((NU64)(x_p0) << (NU64)(r_p1)) | (NU32)((NU32)(x_p0) >> (NU64)((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_5))));
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4097);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, murmurHash__pureZhashes_u195)(NU8* x_p0, NI x_p0Len_0) {
	NI result;
	NI size;
	NI stepSize;
	NI n;
	NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_2;
	NU32 h1;
	NI i;
	NU32 k1_2;
	NI rem;
	NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_6;
NIM_BOOL* nimErr_;
	nimfr_("murmurHash", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(315, "D:\\nim\\lib\\pure\\hashes.nim");
	size = x_p0Len_0;
	nimln_(316);
	stepSize = ((NI)4);
	nimln_(317);
	if (stepSize == 0){ raiseDivByZero(); goto BeforeRet_;
	}
	if (nimDivInt(size, stepSize, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_2)) { raiseOverflow(); goto BeforeRet_;
	};
	n = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_2);
	h1 = (NU32)0;
	nimln_(320);
	i = ((NI)0);
	{
		nimln_(323);
		while (1) {
			NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_3;
			NU32 k1;
			NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_4;
			if (nimMulInt(n, stepSize, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_3)) { raiseOverflow(); goto BeforeRet_;
			};
			if (!(i < (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_3))) goto LA2;
			k1 = (NU32)0;
			nimln_(331);
			if (i < 0 || i >= x_p0Len_0){ raiseIndexError2(i,x_p0Len_0-1); goto BeforeRet_;
			}
			k1 = (*((NU32*) ((&x_p0[i]))));
			nimln_(332);
			if (nimAddInt(i, stepSize, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_4)) { raiseOverflow(); goto BeforeRet_;
			};
			i = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_4);
			nimln_(334);
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32)IL64(3432918353))));
			nimln_(335);
			k1 = rotl32__pureZhashes_u183(k1, ((NI)15));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			nimln_(336);
			k1 = (NU32)((NU32)(k1) * (NU32)(((NU32)461845907)));
			nimln_(338);
			h1 = (NU32)(h1 ^ k1);
			nimln_(339);
			h1 = rotl32__pureZhashes_u183(h1, ((NI)13));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			nimln_(340);
			h1 = (NU32)((NU32)((NU32)((NU32)(h1) * (NU32)(((NU32)5)))) + (NU32)(((NU32)IL64(3864292196))));
		} LA2: ;
	}
	k1_2 = (NU32)0;
	nimln_(344);
	if (stepSize == 0){ raiseDivByZero(); goto BeforeRet_;
	}
	if (nimModInt(size, stepSize, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_6)) { raiseOverflow(); goto BeforeRet_;
	};
	rem = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_6);
	{
		nimln_(345);
		while (1) {
			NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_7;
			NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_8;
			if (!(((NI)0) < rem)) goto LA4;
			nimln_(346);
			if (nimSubInt(rem, ((NI)1), &TM__7tkD9cFJSchVDwHuwaY9bP9bA_7)) { raiseOverflow(); goto BeforeRet_;
			};
			rem = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_7);
			nimln_(347);
			if (nimAddInt(i, rem, &TM__7tkD9cFJSchVDwHuwaY9bP9bA_8)) { raiseOverflow(); goto BeforeRet_;
			};
			if ((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_8) < 0 || (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_8) >= x_p0Len_0){ raiseIndexError2((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_8),x_p0Len_0-1); goto BeforeRet_;
			}
			k1_2 = (NU32)((NU32)((NU64)(k1_2) << (NU64)(((NI)8))) | ((NU32) (x_p0[(NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_8)])));
		} LA4: ;
	}
	nimln_(348);
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32)IL64(3432918353))));
	nimln_(349);
	k1_2 = rotl32__pureZhashes_u183(k1_2, ((NI)15));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(350);
	k1_2 = (NU32)((NU32)(k1_2) * (NU32)(((NU32)461845907)));
	nimln_(351);
	h1 = (NU32)(h1 ^ k1_2);
	nimln_(354);
	h1 = (NU32)(h1 ^ ((NU32) (size)));
	nimln_(355);
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU64)(((NI)16))));
	nimln_(356);
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32)IL64(2246822507))));
	nimln_(357);
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU64)(((NI)13))));
	nimln_(358);
	h1 = (NU32)((NU32)(h1) * (NU32)(((NU32)IL64(3266489909))));
	nimln_(359);
	h1 = (NU32)(h1 ^ (NU32)((NU32)(h1) >> (NU64)(((NI)16))));
	nimln_(360);
	nimln_(306);
	nimln_(360);
	result = ((NI) (h1));
	goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_u284)(NimStringV2 x_p0) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("hash", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(386, "D:\\nim\\lib\\pure\\hashes.nim");
	if ((x_p0.len-1)-((NI)0) != -1 && (((NI)0) < 0 || ((NI)0) >= x_p0.len || (x_p0.len-1) < 0 || (x_p0.len-1) >= x_p0.len)){ raiseIndexError4(((NI)0), (x_p0.len-1), x_p0.len); goto BeforeRet_;
	}
	result = murmurHash__pureZhashes_u195((((x_p0).p) ? ((NU8*)x_p0.p->data+(((NI)0))) : NIM_NIL), ((x_p0.len-1))-(((NI)0))+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NI, emarkamp___pureZhashes_u4)(NI h_p0, NI val_p1) {
	NI result;
	NU h_2;
	NU val_2;
	NU res;
	nimfr_("!&", "D:\\nim\\lib\\pure\\hashes.nim");
	result = (NI)0;
	nimlf_(83, "D:\\nim\\lib\\pure\\hashes.nim");
	h_2 = ((NU) (h_p0));
	nimln_(84);
	val_2 = ((NU) (val_p1));
	nimln_(85);
	res = (NU)((NU64)(h_2) + (NU64)(val_2));
	nimln_(86);
	res = (NU)((NU64)(res) + (NU64)((NU)((NU64)(res) << (NU64)(((NI)10)))));
	nimln_(87);
	res = (NU)(res ^ (NU)((NU64)(res) >> (NU64)(((NI)6))));
	nimln_(88);
	result = ((NI) (res));
	popFrame();
	return result;
}
static N_INLINE(NI, emarkdollar___pureZhashes_u19)(NI h_p0) {
	NI result;
	NU h_2;
	NU res;
	nimfr_("!$", "D:\\nim\\lib\\pure\\hashes.nim");
	result = (NI)0;
	nimlf_(94, "D:\\nim\\lib\\pure\\hashes.nim");
	h_2 = ((NU) (h_p0));
	nimln_(95);
	res = (NU)((NU64)(h_2) + (NU64)((NU)((NU64)(h_2) << (NU64)(((NI)3)))));
	nimln_(96);
	res = (NU)(res ^ (NU)((NU64)(res) >> (NU64)(((NI)11))));
	nimln_(97);
	res = (NU)((NU64)(res) + (NU64)((NU)((NU64)(res) << (NU64)(((NI)15)))));
	nimln_(98);
	result = ((NI) (res));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreCase__pureZhashes_u362)(NimStringV2 x_p0) {
	NI result;
	NI h;
NIM_BOOL* nimErr_;
	nimfr_("hashIgnoreCase", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(476, "D:\\nim\\lib\\pure\\hashes.nim");
	h = ((NI)0);
	{
		NI i;
		NI colontmp_;
		NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_9;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimlf_(75, "D:\\nim\\lib\\system\\iterators_1.nim");
		nimlf_(477, "D:\\nim\\lib\\pure\\hashes.nim");
		if (nimSubInt(x_p0.len, ((NI)1), &TM__7tkD9cFJSchVDwHuwaY9bP9bA_9)) { raiseOverflow(); goto BeforeRet_;
		};
		colontmp_ = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_9);
		nimlf_(90, "D:\\nim\\lib\\system\\iterators_1.nim");
		res = ((NI)0);
		{
			nimln_(91);
			while (1) {
				NIM_CHAR c;
				NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_11;
				if (!(res <= colontmp_)) goto LA3;
				nimlf_(477, "D:\\nim\\lib\\pure\\hashes.nim");
				i = res;
				nimln_(478);
				if (i < 0 || i >= x_p0.len){ raiseIndexError2(i,x_p0.len-1); goto BeforeRet_;
				}
				c = x_p0.p->data[i];
				nimln_(477);
				{
					NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_10;
					nimln_(479);
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA6_;
					nimln_(480);
					if (nimAddInt(((NU8)(c)), ((NI)32), &TM__7tkD9cFJSchVDwHuwaY9bP9bA_10)) { raiseOverflow(); goto BeforeRet_;
					};
					if (((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_10)) < ((NI)0) || ((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_10)) > ((NI)255)){ raiseRangeErrorI((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_10), ((NI)0), ((NI)255)); goto BeforeRet_;
					}
					c = ((NIM_CHAR) (((NI) ((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_10)))));
				}
LA6_: ;
				nimln_(481);
				h = emarkamp___pureZhashes_u4(h, ((NU8)(c)));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimlf_(93, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(res, ((NI)1), &TM__7tkD9cFJSchVDwHuwaY9bP9bA_11)) { raiseOverflow(); goto BeforeRet_;
				};
				res = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_11);
			} LA3: ;
		}
	}
	nimlf_(482, "D:\\nim\\lib\\pure\\hashes.nim");
	result = emarkdollar___pureZhashes_u19(h);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hashIgnoreStyle__pureZhashes_u295)(NimStringV2 x_p0) {
	NI result;
	NI h;
	NI i;
	NI xLen;
NIM_BOOL* nimErr_;
	nimfr_("hashIgnoreStyle", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(426, "D:\\nim\\lib\\pure\\hashes.nim");
	h = ((NI)0);
	nimln_(427);
	i = ((NI)0);
	nimln_(428);
	xLen = x_p0.len;
	{
		nimln_(429);
		while (1) {
			NIM_CHAR c;
			if (!(i < xLen)) goto LA2;
			nimln_(430);
			if (i < 0 || i >= x_p0.len){ raiseIndexError2(i,x_p0.len-1); goto BeforeRet_;
			}
			c = x_p0.p->data[i];
			nimln_(431);
			{
				NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_12;
				if (!((NU8)(c) == (NU8)(95))) goto LA5_;
				nimln_(432);
				if (nimAddInt(i, ((NI)1), &TM__7tkD9cFJSchVDwHuwaY9bP9bA_12)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_12);
			}
			goto LA3_;
LA5_: ;
			{
				NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_14;
				nimln_(434);
				{
					NI TM__7tkD9cFJSchVDwHuwaY9bP9bA_13;
					if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA10_;
					nimln_(435);
					if (nimAddInt(((NU8)(c)), ((NI)32), &TM__7tkD9cFJSchVDwHuwaY9bP9bA_13)) { raiseOverflow(); goto BeforeRet_;
					};
					if (((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_13)) < ((NI)0) || ((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_13)) > ((NI)255)){ raiseRangeErrorI((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_13), ((NI)0), ((NI)255)); goto BeforeRet_;
					}
					c = ((NIM_CHAR) (((NI) ((NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_13)))));
				}
LA10_: ;
				nimln_(436);
				h = emarkamp___pureZhashes_u4(h, ((NU8)(c)));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimln_(437);
				if (nimAddInt(i, ((NI)1), &TM__7tkD9cFJSchVDwHuwaY9bP9bA_14)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__7tkD9cFJSchVDwHuwaY9bP9bA_14);
			}
LA3_: ;
		} LA2: ;
	}
	nimln_(438);
	result = emarkdollar___pureZhashes_u19(h);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NU64, hiXorLo__pureZhashes_u80)(NU64 a_p0, NU64 b_p1) {
	NU64 result;
	nimfr_("hiXorLo", "D:\\nim\\lib\\pure\\hashes.nim");
	result = (NU64)0;
	nimlf_(125, "D:\\nim\\lib\\pure\\hashes.nim");
	__uint128_t r = a_p0; r *= b_p1; result = (r >> 64) ^ r;
	popFrame();
	return result;
}
static N_INLINE(NI, hashWangYi1__pureZhashes_u139)(NU64 x_p0) {
	NI result;
	NU64 T1_;
	NU64 T2_;
NIM_BOOL* nimErr_;
	nimfr_("hashWangYi1", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(186, "D:\\nim\\lib\\pure\\hashes.nim");
	nimln_(173);
	T1_ = (NU64)0;
	T1_ = hiXorLo__pureZhashes_u80(11562461410679940143ULL, (NU64)(x_p0 ^ 16646288086500911323ULL));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(186);
	T2_ = (NU64)0;
	T2_ = hiXorLo__pureZhashes_u80(T1_, 16952864883938283885ULL);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = ((NI) (T2_));
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NI, hash__pureZhashes_u131)(NI x_p0) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("hash", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(213, "D:\\nim\\lib\\pure\\hashes.nim");
	nimln_(214);
	nimln_(215);
	result = hashWangYi1__pureZhashes_u139(((NU64) (x_p0)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__lineinfos_u243)(tyTuple__47w2DboNEPf69aPgubZdd7Q x_p0) {
	NI result;
	NI T1_;
	NI T2_;
	NI T3_;
NIM_BOOL* nimErr_;
	nimfr_("hash", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(539, "D:\\nim\\lib\\pure\\hashes.nim");
	result = ((NI)0);
	nimln_(541);
	T1_ = (NI)0;
	T1_ = hash__pureZhashes_u131(x_p0.Field0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_u4(result, T1_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NI)0;
	T2_ = hash__pureZhashes_u131(x_p0.Field1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_u4(result, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T3_ = (NI)0;
	T3_ = hash__pureZhashes_u131(x_p0.Field2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_u4(result, T3_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(542);
	result = emarkdollar___pureZhashes_u19(result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__lookups_u1056)(tyTuple__9bJppzRV54Lg5zLBHJhjoGA x_p0) {
	NI result;
	NI T1_;
	NI T2_;
NIM_BOOL* nimErr_;
	nimfr_("hash", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(539, "D:\\nim\\lib\\pure\\hashes.nim");
	result = ((NI)0);
	nimln_(541);
	T1_ = (NI)0;
	T1_ = hash__lineinfos_u240(x_p0.Field0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_u4(result, T1_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NI)0;
	T2_ = hash__pureZhashes_u131(x_p0.Field1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_u4(result, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(542);
	result = emarkdollar___pureZhashes_u19(result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__sigmatch_u6364)(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ x_p0) {
	NI result;
	NI T1_;
	NI T2_;
NIM_BOOL* nimErr_;
	nimfr_("hash", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(539, "D:\\nim\\lib\\pure\\hashes.nim");
	result = ((NI)0);
	nimln_(541);
	T1_ = (NI)0;
	T1_ = hash__pureZhashes_u131(x_p0.Field0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_u4(result, T1_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NI)0;
	T2_ = hash__pureZhashes_u131(x_p0.Field1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_u4(result, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(542);
	result = emarkdollar___pureZhashes_u19(result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__pureZhashes_u290)(NimStringV2 sBuf_p0, NI sPos_p1, NI ePos_p2) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("hash", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(404, "D:\\nim\\lib\\pure\\hashes.nim");
	nimln_(405);
	nimln_(413);
	if (ePos_p2-sPos_p1 != -1 && (sPos_p1 < 0 || sPos_p1 >= sBuf_p0.len || ePos_p2 < 0 || ePos_p2 >= sBuf_p0.len)){ raiseIndexError4(sPos_p1, ePos_p2, sBuf_p0.len); goto BeforeRet_;
	}
	result = murmurHash__pureZhashes_u195((((sBuf_p0).p) ? ((NU8*)sBuf_p0.p->data+(sPos_p1)) : NIM_NIL), (ePos_p2)-(sPos_p1)+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__vm_u14081)(NU8* aBuf_p0, NI aBuf_p0Len_0, NI sPos_p1, NI ePos_p2) {
	NI result;
NIM_BOOL* nimErr_;
	nimfr_("hash", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(574, "D:\\nim\\lib\\pure\\hashes.nim");
	if (ePos_p2-sPos_p1 != -1 && (sPos_p1 < 0 || sPos_p1 >= aBuf_p0Len_0 || ePos_p2 < 0 || ePos_p2 >= aBuf_p0Len_0)){ raiseIndexError4(sPos_p1, ePos_p2, aBuf_p0Len_0); goto BeforeRet_;
	}
	result = murmurHash__pureZhashes_u195((NU8*)(aBuf_p0)+(sPos_p1), (ePos_p2)-(sPos_p1)+1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, hash__packagesZdocutilsZrst_u6453)(tyTuple__UV3llMMYFckfui8YMBuUZA* x_p0) {
	NI result;
	NI T1_;
	NI T2_;
NIM_BOOL* nimErr_;
	nimfr_("hash", "D:\\nim\\lib\\pure\\hashes.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(539, "D:\\nim\\lib\\pure\\hashes.nim");
	result = ((NI)0);
	nimln_(541);
	T1_ = (NI)0;
	T1_ = hash__pureZhashes_u284((*x_p0).Field0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_u4(result, T1_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NI)0;
	T2_ = hash__pureZhashes_u284((*x_p0).Field1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = emarkamp___pureZhashes_u4(result, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(542);
	result = emarkdollar___pureZhashes_u19(result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
