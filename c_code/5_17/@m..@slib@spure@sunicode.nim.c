/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64
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
typedef struct tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw;
typedef struct TNimTypeV2 TNimTypeV2;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
typedef struct {
N_NIMCALL_PTR(NimStringV2, ClP_0) (NimStringV2 key_p0, void* ClE_0);
void* ClE_0;
} tyProc__oFHfEKFsiYTMAy9a42cSiKw;
struct tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw {
	NI rc;
	NI rootIdx;
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
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4312)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(NI, runeLenAt__pureZunicode_u94)(NIM_CHAR* s_p0, NI s_p0Len_0, NI i_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NIM_BOOL, lteqpercent___system_u1059)(NI32 x_p0, NI32 y_p1);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s_p0, NI newLen_p1);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s_p0);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__system_u2328)(NimStringV2* s_p0);
static N_INLINE(void, nimIncRefCyclic)(void* p_p0, NIM_BOOL cyclic_p1);
static N_INLINE(NI, minuspercent___system_u790)(NI x_p0, NI y_p1);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p_p0);
static N_INLINE(NIM_BOOL, nimSubInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_u3269)(NIM_BOOL isDestroyAction_p0, tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw* s_p1, TNimTypeV2* desc_p2);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p_p0);
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__e1RUVS0Bw7xmj9cnDPXLJMQ_25 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__e1RUVS0Bw7xmj9cnDPXLJMQ_26 = {0, (NimStrPayload*)&TM__e1RUVS0Bw7xmj9cnDPXLJMQ_25};
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern NIM_BOOL nimInErrorMode__system_u4115;
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2) {
	NIM_BOOL result;
	NI r;
	result = (NIM_BOOL)0;
	r = ((NI) ((NU)((NU64)(((NU) (a_p0))) + (NU64)(((NU) (b_p1))))));
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
N_LIB_PRIVATE N_NIMCALL(NI, nucruneLen)(NIM_CHAR* s_p0, NI s_p0Len_0) {
	NI result;
	NI i;
	nimfr_("runeLen", "D:\\nim\\lib\\pure\\unicode.nim");
{	result = (NI)0;
	nimlf_(52, "D:\\nim\\lib\\pure\\unicode.nim");
	result = ((NI)0);
	nimln_(53);
	i = ((NI)0);
	{
		nimln_(54);
		while (1) {
			NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_9;
			if (!(i < s_p0Len_0)) goto LA2;
			nimln_(55);
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_2;
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (!((NU64)(((NU) (((NU8)(s_p0[i]))))) <= (NU64)(((NU)127)))) goto LA5_;
				if (nimAddInt(i, ((NI)1), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_2)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_2);
			}
			goto LA3_;
LA5_: ;
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_3;
				nimln_(56);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i]))))) >> (NU64)(((NI)5))) == ((NU)6))) goto LA8_;
				if (nimAddInt(i, ((NI)2), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_3)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_3);
			}
			goto LA3_;
LA8_: ;
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_4;
				nimln_(57);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i]))))) >> (NU64)(((NI)4))) == ((NU)14))) goto LA11_;
				if (nimAddInt(i, ((NI)3), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_4)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_4);
			}
			goto LA3_;
LA11_: ;
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_5;
				nimln_(58);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i]))))) >> (NU64)(((NI)3))) == ((NU)30))) goto LA14_;
				if (nimAddInt(i, ((NI)4), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_5)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_5);
			}
			goto LA3_;
LA14_: ;
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_6;
				nimln_(59);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i]))))) >> (NU64)(((NI)2))) == ((NU)62))) goto LA17_;
				if (nimAddInt(i, ((NI)5), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_6)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_6);
			}
			goto LA3_;
LA17_: ;
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_7;
				nimln_(60);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i]))))) >> (NU64)(((NI)1))) == ((NU)126))) goto LA20_;
				if (nimAddInt(i, ((NI)6), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_7)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_7);
			}
			goto LA3_;
LA20_: ;
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_8;
				nimln_(61);
				if (nimAddInt(i, ((NI)1), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_8)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_8);
			}
LA3_: ;
			nimln_(62);
			if (nimAddInt(result, ((NI)1), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_9)) { raiseOverflow(); goto BeforeRet_;
			};
			result = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_9);
		} LA2: ;
	}
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, runeLenAt__pureZunicode_u94)(NIM_CHAR* s_p0, NI s_p0Len_0, NI i_p1) {
	NI result;
	nimfr_("runeLenAt", "D:\\nim\\lib\\pure\\unicode.nim");
{	result = (NI)0;
	nimlf_(74, "D:\\nim\\lib\\pure\\unicode.nim");
	{
		if (i_p1 < 0 || i_p1 >= s_p0Len_0){ raiseIndexError2(i_p1,s_p0Len_0-1); goto BeforeRet_;
		}
		if (!((NU64)(((NU) (((NU8)(s_p0[i_p1]))))) <= (NU64)(((NU)127)))) goto LA3_;
		result = ((NI)1);
	}
	goto LA1_;
LA3_: ;
	{
		nimln_(75);
		if (i_p1 < 0 || i_p1 >= s_p0Len_0){ raiseIndexError2(i_p1,s_p0Len_0-1); goto BeforeRet_;
		}
		if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i_p1]))))) >> (NU64)(((NI)5))) == ((NU)6))) goto LA6_;
		result = ((NI)2);
	}
	goto LA1_;
LA6_: ;
	{
		nimln_(76);
		if (i_p1 < 0 || i_p1 >= s_p0Len_0){ raiseIndexError2(i_p1,s_p0Len_0-1); goto BeforeRet_;
		}
		if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i_p1]))))) >> (NU64)(((NI)4))) == ((NU)14))) goto LA9_;
		result = ((NI)3);
	}
	goto LA1_;
LA9_: ;
	{
		nimln_(77);
		if (i_p1 < 0 || i_p1 >= s_p0Len_0){ raiseIndexError2(i_p1,s_p0Len_0-1); goto BeforeRet_;
		}
		if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i_p1]))))) >> (NU64)(((NI)3))) == ((NU)30))) goto LA12_;
		result = ((NI)4);
	}
	goto LA1_;
LA12_: ;
	{
		nimln_(78);
		if (i_p1 < 0 || i_p1 >= s_p0Len_0){ raiseIndexError2(i_p1,s_p0Len_0-1); goto BeforeRet_;
		}
		if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i_p1]))))) >> (NU64)(((NI)2))) == ((NU)62))) goto LA15_;
		result = ((NI)5);
	}
	goto LA1_;
LA15_: ;
	{
		nimln_(79);
		if (i_p1 < 0 || i_p1 >= s_p0Len_0){ raiseIndexError2(i_p1,s_p0Len_0-1); goto BeforeRet_;
		}
		if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i_p1]))))) >> (NU64)(((NI)1))) == ((NU)126))) goto LA18_;
		result = ((NI)6);
	}
	goto LA1_;
LA18_: ;
	{
		nimln_(80);
		result = ((NI)1);
	}
LA1_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4115);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, runeOffset__pureZunicode_u823)(NIM_CHAR* s_p0, NI s_p0Len_0, NI pos_p1, NI start_p2) {
	NI result;
	NI i;
	NI o;
NIM_BOOL* nimErr_;
	nimfr_("runeOffset", "D:\\nim\\lib\\pure\\unicode.nim");
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	nimlf_(331, "D:\\nim\\lib\\pure\\unicode.nim");
	i = ((NI)0);
	nimln_(332);
	o = start_p2;
	{
		nimln_(333);
		while (1) {
			NI T3_;
			NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_10;
			NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_11;
			if (!(i < ((NI) (pos_p1)))) goto LA2;
			nimln_(334);
			T3_ = (NI)0;
			T3_ = runeLenAt__pureZunicode_u94(s_p0, s_p0Len_0, o);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			if ((T3_) < ((NI)0) || (T3_) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI(T3_, ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
			}
			if (nimAddInt(o, ((NI) (T3_)), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_10)) { raiseOverflow(); goto BeforeRet_;
			};
			if (TM__e1RUVS0Bw7xmj9cnDPXLJMQ_10 < 0 || TM__e1RUVS0Bw7xmj9cnDPXLJMQ_10 > IL64(9223372036854775807)){ raiseOverflow(); goto BeforeRet_;
			}
			o = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_10);
			nimln_(335);
			{
				if (!(s_p0Len_0 <= ((NI) (o)))) goto LA6_;
				nimln_(336);
				nimln_(313);
				nimln_(336);
				result = ((NI)-1);
				goto BeforeRet_;
			}
LA6_: ;
			nimln_(337);
			if (nimAddInt(i, ((NI)1), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_11)) { raiseOverflow(); goto BeforeRet_;
			};
			i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_11);
		} LA2: ;
	}
	nimln_(338);
	nimln_(313);
	nimln_(338);
	result = ((NI) (o));
	goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, validateUtf8__pureZunicode_u336)(NIM_CHAR* s_p0, NI s_p0Len_0) {
	NI result;
	NI i;
	NI L;
	nimfr_("validateUtf8", "D:\\nim\\lib\\pure\\unicode.nim");
{	result = (NI)0;
	nimlf_(184, "D:\\nim\\lib\\pure\\unicode.nim");
	i = ((NI)0);
	nimln_(185);
	L = s_p0Len_0;
	{
		nimln_(186);
		while (1) {
			if (!(i < L)) goto LA2;
			nimln_(187);
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_12;
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (!((NU64)(((NU) (((NU8)(s_p0[i]))))) <= (NU64)(((NU)127)))) goto LA5_;
				nimln_(188);
				if (nimAddInt(i, ((NI)1), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_12)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_12);
			}
			goto LA3_;
LA5_: ;
			{
				nimln_(189);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i]))))) >> (NU64)(((NI)5))) == ((NU)6))) goto LA8_;
				nimln_(190);
				{
					if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
					}
					if (!((NU64)(((NU) (((NU8)(s_p0[i]))))) < (NU64)(((NU)194)))) goto LA12_;
					nimln_(176);
					nimln_(190);
					result = i;
					goto BeforeRet_;
				}
LA12_: ;
				nimln_(191);
				{
					NIM_BOOL T16_;
					NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_13;
					NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_14;
					NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_15;
					T16_ = (NIM_BOOL)0;
					if (nimAddInt(i, ((NI)1), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_13)) { raiseOverflow(); goto BeforeRet_;
					};
					T16_ = ((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_13) < L);
					if (!(T16_)) goto LA17_;
					if (nimAddInt(i, ((NI)1), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_14)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_14) < 0 || (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_14) >= s_p0Len_0){ raiseIndexError2((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_14),s_p0Len_0-1); goto BeforeRet_;
					}
					T16_ = ((NU)((NU64)(((NU) (((NU8)(s_p0[(NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_14)]))))) >> (NU64)(((NI)6))) == ((NU)2));
LA17_: ;
					if (!T16_) goto LA18_;
					if (nimAddInt(i, ((NI)2), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_15)) { raiseOverflow(); goto BeforeRet_;
					};
					i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_15);
				}
				goto LA14_;
LA18_: ;
				{
					nimln_(192);
					nimln_(176);
					nimln_(192);
					result = i;
					goto BeforeRet_;
				}
LA14_: ;
			}
			goto LA3_;
LA8_: ;
			{
				nimln_(193);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i]))))) >> (NU64)(((NI)4))) == ((NU)14))) goto LA22_;
				nimln_(194);
				{
					NIM_BOOL T26_;
					NIM_BOOL T27_;
					NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_16;
					NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_17;
					NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_18;
					NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_19;
					T26_ = (NIM_BOOL)0;
					T27_ = (NIM_BOOL)0;
					if (nimAddInt(i, ((NI)2), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_16)) { raiseOverflow(); goto BeforeRet_;
					};
					T27_ = ((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_16) < L);
					if (!(T27_)) goto LA28_;
					if (nimAddInt(i, ((NI)1), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_17)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_17) < 0 || (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_17) >= s_p0Len_0){ raiseIndexError2((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_17),s_p0Len_0-1); goto BeforeRet_;
					}
					T27_ = ((NU)((NU64)(((NU) (((NU8)(s_p0[(NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_17)]))))) >> (NU64)(((NI)6))) == ((NU)2));
LA28_: ;
					T26_ = T27_;
					if (!(T26_)) goto LA29_;
					if (nimAddInt(i, ((NI)2), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_18)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_18) < 0 || (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_18) >= s_p0Len_0){ raiseIndexError2((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_18),s_p0Len_0-1); goto BeforeRet_;
					}
					T26_ = ((NU)((NU64)(((NU) (((NU8)(s_p0[(NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_18)]))))) >> (NU64)(((NI)6))) == ((NU)2));
LA29_: ;
					if (!T26_) goto LA30_;
					nimln_(195);
					if (nimAddInt(i, ((NI)3), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_19)) { raiseOverflow(); goto BeforeRet_;
					};
					i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_19);
				}
				goto LA24_;
LA30_: ;
				{
					nimln_(196);
					nimln_(176);
					nimln_(196);
					result = i;
					goto BeforeRet_;
				}
LA24_: ;
			}
			goto LA3_;
LA22_: ;
			{
				nimln_(197);
				if (i < 0 || i >= s_p0Len_0){ raiseIndexError2(i,s_p0Len_0-1); goto BeforeRet_;
				}
				if (!((NU)((NU64)(((NU) (((NU8)(s_p0[i]))))) >> (NU64)(((NI)3))) == ((NU)30))) goto LA34_;
				nimln_(198);
				{
					NIM_BOOL T38_;
					NIM_BOOL T39_;
					NIM_BOOL T40_;
					NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_20;
					NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_21;
					NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_22;
					NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_23;
					NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_24;
					nimln_(199);
					T38_ = (NIM_BOOL)0;
					nimln_(198);
					T39_ = (NIM_BOOL)0;
					T40_ = (NIM_BOOL)0;
					if (nimAddInt(i, ((NI)3), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_20)) { raiseOverflow(); goto BeforeRet_;
					};
					T40_ = ((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_20) < L);
					if (!(T40_)) goto LA41_;
					if (nimAddInt(i, ((NI)1), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_21)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_21) < 0 || (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_21) >= s_p0Len_0){ raiseIndexError2((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_21),s_p0Len_0-1); goto BeforeRet_;
					}
					T40_ = ((NU)((NU64)(((NU) (((NU8)(s_p0[(NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_21)]))))) >> (NU64)(((NI)6))) == ((NU)2));
LA41_: ;
					T39_ = T40_;
					if (!(T39_)) goto LA42_;
					nimln_(199);
					if (nimAddInt(i, ((NI)2), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_22)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_22) < 0 || (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_22) >= s_p0Len_0){ raiseIndexError2((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_22),s_p0Len_0-1); goto BeforeRet_;
					}
					T39_ = ((NU)((NU64)(((NU) (((NU8)(s_p0[(NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_22)]))))) >> (NU64)(((NI)6))) == ((NU)2));
LA42_: ;
					T38_ = T39_;
					if (!(T38_)) goto LA43_;
					nimln_(200);
					if (nimAddInt(i, ((NI)3), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_23)) { raiseOverflow(); goto BeforeRet_;
					};
					if ((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_23) < 0 || (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_23) >= s_p0Len_0){ raiseIndexError2((NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_23),s_p0Len_0-1); goto BeforeRet_;
					}
					T38_ = ((NU)((NU64)(((NU) (((NU8)(s_p0[(NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_23)]))))) >> (NU64)(((NI)6))) == ((NU)2));
LA43_: ;
					if (!T38_) goto LA44_;
					nimln_(201);
					if (nimAddInt(i, ((NI)4), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_24)) { raiseOverflow(); goto BeforeRet_;
					};
					i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_24);
				}
				goto LA36_;
LA44_: ;
				{
					nimln_(202);
					nimln_(176);
					nimln_(202);
					result = i;
					goto BeforeRet_;
				}
LA36_: ;
			}
			goto LA3_;
LA34_: ;
			{
				nimln_(204);
				nimln_(176);
				nimln_(204);
				result = i;
				goto BeforeRet_;
			}
LA3_: ;
		} LA2: ;
	}
	nimln_(205);
	nimln_(176);
	nimln_(205);
	result = ((NI)-1);
	goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___pureZunicode_u1096)(NI32 a_p0, NI32 b_p1) {
	NIM_BOOL result;
	nimfr_("==", "D:\\nim\\lib\\pure\\unicode.nim");
{	result = (NIM_BOOL)0;
	nimlf_(462, "D:\\nim\\lib\\pure\\unicode.nim");
	nimln_(460);
	nimln_(462);
	result = (((NI) (a_p0)) == ((NI) (b_p1)));
	goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, size__pureZunicode_u5947)(NI32 r_p0) {
	NI result;
	NU32 v;
	nimfr_("size", "D:\\nim\\lib\\pure\\unicode.nim");
	result = (NI)0;
	nimlf_(926, "D:\\nim\\lib\\pure\\unicode.nim");
	v = ((NU32) (r_p0));
	nimln_(927);
	{
		if (!((NU32)(v) <= (NU32)(((NU32)127)))) goto LA3_;
		result = ((NI)1);
	}
	goto LA1_;
LA3_: ;
	{
		nimln_(928);
		if (!((NU32)(v) <= (NU32)(((NU32)2047)))) goto LA6_;
		result = ((NI)2);
	}
	goto LA1_;
LA6_: ;
	{
		nimln_(929);
		if (!((NU32)(v) <= (NU32)(((NU32)65535)))) goto LA9_;
		result = ((NI)3);
	}
	goto LA1_;
LA9_: ;
	{
		nimln_(930);
		if (!((NU32)(v) <= (NU32)(((NU32)2097151)))) goto LA12_;
		result = ((NI)4);
	}
	goto LA1_;
LA12_: ;
	{
		nimln_(931);
		if (!((NU32)(v) <= (NU32)(((NU32)67108863)))) goto LA15_;
		result = ((NI)5);
	}
	goto LA1_;
LA15_: ;
	{
		nimln_(932);
		if (!((NU32)(v) <= (NU32)(((NU32)2147483647)))) goto LA18_;
		result = ((NI)6);
	}
	goto LA1_;
LA18_: ;
	{
		nimln_(933);
		result = ((NI)1);
	}
LA1_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, lteqpercent___system_u1059)(NI32 x_p0, NI32 y_p1) {
	NIM_BOOL result;
	nimfr_("<=%", "D:\\nim\\lib\\system\\comparisons.nim");
	result = (NIM_BOOL)0;
	nimlf_(185, "D:\\nim\\lib\\system\\comparisons.nim");
	result = ((NU32)(((NU32) (x_p0))) <= (NU32)(((NU32) (y_p1))));
	popFrame();
	return result;
}
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !(((*s_p0).p == ((NimStrPayload*) NIM_NIL)));
		if (!(T3_)) goto LA4_;
		T3_ = ((NI)((*(*s_p0).p).cap & ((NI)IL64(4611686018427387904))) == ((NI)IL64(4611686018427387904)));
LA4_: ;
		if (!T3_) goto LA5_;
		nimPrepareStrMutationImpl__system_u2328(s_p0);
	}
LA5_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nuctoUTF8)(NI32 c_p0) {
	NimStringV2 result;
	NI32 iX60gensym21_;
	nimfr_("toUTF8", "D:\\nim\\lib\\pure\\unicode.nim");
{	result.len = 0; result.p = NIM_NIL;
	nimlf_(276, "D:\\nim\\lib\\pure\\unicode.nim");
	result = TM__e1RUVS0Bw7xmj9cnDPXLJMQ_26;
	nimln_(221);
	iX60gensym21_ = c_p0;
	nimln_(277);
	{
		NIM_BOOL T3_;
		nimln_(222);
		T3_ = (NIM_BOOL)0;
		T3_ = lteqpercent___system_u1059(iX60gensym21_, ((NI32)127));
		if (!T3_) goto LA4_;
		nimln_(223);
		setLengthStrV2((&result), ((NI)1));
		nimln_(224);
		if (((NI)0) < 0 || ((NI)0) >= result.len){ raiseIndexError2(((NI)0),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if ((iX60gensym21_) < ((NI)0) || (iX60gensym21_) > ((NI)255)){ raiseRangeErrorI(iX60gensym21_, ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)0)] = ((NIM_CHAR) (((NI) (iX60gensym21_))));
	}
	goto LA1_;
LA4_: ;
	{
		NIM_BOOL T7_;
		nimln_(226);
		T7_ = (NIM_BOOL)0;
		T7_ = lteqpercent___system_u1059(iX60gensym21_, ((NI32)2047));
		if (!T7_) goto LA8_;
		nimln_(227);
		setLengthStrV2((&result), ((NI)2));
		nimln_(228);
		if (((NI)0) < 0 || ((NI)0) >= result.len){ raiseIndexError2(((NI)0),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) | ((NI32)192))) < ((NI)0) || ((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) | ((NI32)192))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) | ((NI32)192)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) | ((NI32)192))))));
		nimln_(229);
		if (((NI)1) < 0 || ((NI)1) >= result.len){ raiseIndexError2(((NI)1),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))))));
	}
	goto LA1_;
LA8_: ;
	{
		NIM_BOOL T11_;
		nimln_(231);
		T11_ = (NIM_BOOL)0;
		T11_ = lteqpercent___system_u1059(iX60gensym21_, ((NI32)65535));
		if (!T11_) goto LA12_;
		nimln_(232);
		setLengthStrV2((&result), ((NI)3));
		nimln_(233);
		if (((NI)0) < 0 || ((NI)0) >= result.len){ raiseIndexError2(((NI)0),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) | ((NI32)224))) < ((NI)0) || ((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) | ((NI32)224))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) | ((NI32)224)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) | ((NI32)224))))));
		nimln_(234);
		if (((NI)1) < 0 || ((NI)1) >= result.len){ raiseIndexError2(((NI)1),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128))))));
		nimln_(235);
		if (((NI)2) < 0 || ((NI)2) >= result.len){ raiseIndexError2(((NI)2),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))))));
	}
	goto LA1_;
LA12_: ;
	{
		NIM_BOOL T15_;
		nimln_(237);
		T15_ = (NIM_BOOL)0;
		T15_ = lteqpercent___system_u1059(iX60gensym21_, ((NI32)2097151));
		if (!T15_) goto LA16_;
		nimln_(238);
		setLengthStrV2((&result), ((NI)4));
		nimln_(239);
		if (((NI)0) < 0 || ((NI)0) >= result.len){ raiseIndexError2(((NI)0),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)18))) | ((NI32)240))) < ((NI)0) || ((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)18))) | ((NI32)240))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)18))) | ((NI32)240)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)18))) | ((NI32)240))))));
		nimln_(240);
		if (((NI)1) < 0 || ((NI)1) >= result.len){ raiseIndexError2(((NI)1),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) & ((NI32)63)) | ((NI32)128))))));
		nimln_(241);
		if (((NI)2) < 0 || ((NI)2) >= result.len){ raiseIndexError2(((NI)2),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128))))));
		nimln_(242);
		if (((NI)3) < 0 || ((NI)3) >= result.len){ raiseIndexError2(((NI)3),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)3)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))))));
	}
	goto LA1_;
LA16_: ;
	{
		NIM_BOOL T19_;
		nimln_(244);
		T19_ = (NIM_BOOL)0;
		T19_ = lteqpercent___system_u1059(iX60gensym21_, ((NI32)67108863));
		if (!T19_) goto LA20_;
		nimln_(245);
		setLengthStrV2((&result), ((NI)5));
		nimln_(246);
		if (((NI)0) < 0 || ((NI)0) >= result.len){ raiseIndexError2(((NI)0),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)24))) | ((NI32)248))) < ((NI)0) || ((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)24))) | ((NI32)248))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)24))) | ((NI32)248)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)24))) | ((NI32)248))))));
		nimln_(247);
		if (((NI)1) < 0 || ((NI)1) >= result.len){ raiseIndexError2(((NI)1),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)18))) & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)18))) & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)18))) & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)18))) & ((NI32)63)) | ((NI32)128))))));
		nimln_(248);
		if (((NI)2) < 0 || ((NI)2) >= result.len){ raiseIndexError2(((NI)2),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) & ((NI32)63)) | ((NI32)128))))));
		nimln_(249);
		if (((NI)3) < 0 || ((NI)3) >= result.len){ raiseIndexError2(((NI)3),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)3)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128))))));
		nimln_(250);
		if (((NI)4) < 0 || ((NI)4) >= result.len){ raiseIndexError2(((NI)4),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)4)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))))));
	}
	goto LA1_;
LA20_: ;
	{
		NIM_BOOL T23_;
		nimln_(252);
		T23_ = (NIM_BOOL)0;
		T23_ = lteqpercent___system_u1059(iX60gensym21_, ((NI32)2147483647));
		if (!T23_) goto LA24_;
		nimln_(253);
		setLengthStrV2((&result), ((NI)6));
		nimln_(254);
		if (((NI)0) < 0 || ((NI)0) >= result.len){ raiseIndexError2(((NI)0),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)30))) | ((NI32)252))) < ((NI)0) || ((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)30))) | ((NI32)252))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)30))) | ((NI32)252)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)30))) | ((NI32)252))))));
		nimln_(255);
		if (((NI)1) < 0 || ((NI)1) >= result.len){ raiseIndexError2(((NI)1),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)24))) & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)24))) & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)24))) & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)24))) & ((NI32)63)) | ((NI32)128))))));
		nimln_(256);
		if (((NI)2) < 0 || ((NI)2) >= result.len){ raiseIndexError2(((NI)2),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)18))) & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)18))) & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)18))) & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)18))) & ((NI32)63)) | ((NI32)128))))));
		nimln_(257);
		if (((NI)3) < 0 || ((NI)3) >= result.len){ raiseIndexError2(((NI)3),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)3)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)12))) & ((NI32)63)) | ((NI32)128))))));
		nimln_(258);
		if (((NI)4) < 0 || ((NI)4) >= result.len){ raiseIndexError2(((NI)4),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)4)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym21_) >> (NU64)(((NI)6))) & ((NI32)63)) | ((NI32)128))))));
		nimln_(259);
		if (((NI)5) < 0 || ((NI)5) >= result.len){ raiseIndexError2(((NI)5),result.len-1); goto BeforeRet_;
		}
		nimPrepareStrMutationV2((&result));
		if (((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))) < ((NI)0) || ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))) > ((NI)255)){ raiseRangeErrorI((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128)), ((NI)0), ((NI)255)); goto BeforeRet_;
		}
		result.p->data[((NI)5)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym21_ & ((NI32)63)) | ((NI32)128))))));
	}
	goto LA1_;
LA24_: ;
	{
	}
LA1_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
static N_INLINE(NI, minuspercent___system_u790)(NI x_p0, NI y_p1) {
	NI result;
	nimfr_("-%", "D:\\nim\\lib\\system\\arithmetics.nim");
	result = (NI)0;
	nimlf_(363, "D:\\nim\\lib\\system\\arithmetics.nim");
	nimln_(364);
	nimln_(368);
	result = ((NI) ((NU)((NU64)(((NU) (x_p0))) - (NU64)(((NU) (y_p1))))));
	popFrame();
	return result;
}
static N_INLINE(void, nimIncRefCyclic)(void* p_p0, NIM_BOOL cyclic_p1) {
	tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw* h;
	NI T1_;
	NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_27;
	nimfr_("nimIncRefCyclic", "D:\\nim\\lib\\system\\orc.nim");
{	nimlf_(45, "D:\\nim\\lib\\system\\orc.nim");
	nimlf_(43, "D:\\nim\\lib\\system\\arc.nim");
	T1_ = (NI)0;
	T1_ = minuspercent___system_u790(((NI) (ptrdiff_t) (p_p0)), ((NI)16));
	h = ((tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw*) (T1_));
	nimlf_(46, "D:\\nim\\lib\\system\\orc.nim");
	if (nimAddInt((*h).rc, ((NI)16), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_27)) { raiseOverflow(); goto BeforeRet_;
	};
	(*h).rc = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_27);
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(NIM_BOOL, nimSubInt)(NI a_p0, NI b_p1, NI* res_p2) {
	NIM_BOOL result;
	NI r;
	result = (NIM_BOOL)0;
	r = ((NI) ((NU)((NU64)(((NU) (a_p0))) - (NU64)(((NU) (b_p1))))));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI)0) <= (NI)(r ^ a_p0));
		if (T3_) goto LA4_;
		T3_ = (((NI)0) <= (NI)(r ^ (NI)((NU64) ~(b_p1))));
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
		T5_ = minuspercent___system_u790(((NI) (ptrdiff_t) (p_p0)), ((NI)16));
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
			NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_28;
			nimln_(484);
			if (nimSubInt((*cell).rc, ((NI)16), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_28)) { raiseOverflow(); goto BeforeRet_;
			};
			(*cell).rc = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_28);
		}
LA6_: ;
		nimln_(486);
		rememberCycle__system_u3269(result, cell, (*((TNimTypeV2**) (p_p0))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___pureZunicode_u3753)(tyProc__oFHfEKFsiYTMAy9a42cSiKw* dest_p0, tyProc__oFHfEKFsiYTMAy9a42cSiKw src_p1, NIM_BOOL cyclic_p2) {
	void* colontmp_;
	colontmp_ = (*dest_p0).ClE_0;
	{
		if (!src_p1.ClE_0) goto LA3_;
		nimIncRefCyclic(src_p1.ClE_0, cyclic_p2);
	}
LA3_: ;
	(*dest_p0).ClE_0 = src_p1.ClE_0;
	(*dest_p0).ClP_0 = src_p1.ClP_0;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLastCyclicDyn(colontmp_);
		if (!T7_) goto LA8_;
		nimDestroyAndDispose(colontmp_);
	}
LA8_: ;
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
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___pureZunicode_u3747)(tyProc__oFHfEKFsiYTMAy9a42cSiKw* dest_p0) {
	nimZeroMem((void*)(&(*dest_p0)), sizeof(tyProc__oFHfEKFsiYTMAy9a42cSiKw));
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZunicode_u3750)(tyProc__oFHfEKFsiYTMAy9a42cSiKw* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).ClE_0);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).ClE_0);
	}
LA4_: ;
}
