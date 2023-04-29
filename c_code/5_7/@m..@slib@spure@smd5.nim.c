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

typedef struct tyObject_MD5Context__YpunvoXPYpj7K4r5Ge7q6A tyObject_MD5Context__YpunvoXPYpj7K4r5Ge7q6A;
typedef NU32 tyArray__FleBT9cC2nxhgiXmSYYnEKA[4];
typedef NU32 tyArray__JlnxiR65D9cjJpwi6uBZRtA[2];
typedef NU8 tyArray__w5VB8h5K8DB3oWrO5U2wqg[64];
struct tyObject_MD5Context__YpunvoXPYpj7K4r5Ge7q6A {
	tyArray__FleBT9cC2nxhgiXmSYYnEKA state;
	tyArray__JlnxiR65D9cjJpwi6uBZRtA count;
	tyArray__w5VB8h5K8DB3oWrO5U2wqg buffer;
};
typedef NU32 tyArray__U0SiHM0pVagA9c71oWelQMA[16];
typedef struct {
NU8* Field0;
NI Field1;
} tyOpenArray__UMVJID9bgFAzHOc9bt5jE4PA;
typedef NU8 tyArray__cdsir9aPB24hAk6k77P9b9bCA[8];
static N_INLINE(void, clearBuffer__pureZmd53_u321)(tyObject_MD5Context__YpunvoXPYpj7K4r5Ge7q6A* c_p0);
static N_INLINE(void, zeroMem__system_u1717)(void* p_p0, NI size_p1);
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4312)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, md5Update__pureZmd53_u189)(tyObject_MD5Context__YpunvoXPYpj7K4r5Ge7q6A* c_p0, NU8* input_p1, NI input_p1Len_0);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
static N_INLINE(NIM_BOOL, nimSubInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, writeBuffer__pureZmd53_u349)(tyObject_MD5Context__YpunvoXPYpj7K4r5Ge7q6A* c_p0, NI index_p1, NU8* input_p2, NI input_p2Len_0, NI inputIndex_p3, NI len_p4);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NIMCALL(void, transform__pureZmd53_u163)(NU8* buffer_p0, NI buffer_p0Len_0, NU32* state_p1);
N_LIB_PRIVATE N_NIMCALL(void, encode__pureZmd53_u74)(NU32* dest_p0, NU8* src_p1, NI src_p1Len_0);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NIMCALL(void, FF__pureZmd53_u42)(NU32* a_p0, NU32 b_p1, NU32 c_p2, NU32 d_p3, NU32 x_p4, NU8 s_p5, NU32 ac_p6);
static N_INLINE(NU32, F__pureZmd53_u11)(NU32 x_p0, NU32 y_p1, NU32 z_p2);
static N_INLINE(void, rot__pureZmd53_u31)(NU32* x_p0, NU8 n_p1);
N_LIB_PRIVATE N_NIMCALL(void, GG__pureZmd53_u50)(NU32* a_p0, NU32 b_p1, NU32 c_p2, NU32 d_p3, NU32 x_p4, NU8 s_p5, NU32 ac_p6);
static N_INLINE(NU32, G__pureZmd53_u16)(NU32 x_p0, NU32 y_p1, NU32 z_p2);
N_LIB_PRIVATE N_NIMCALL(void, HH__pureZmd53_u58)(NU32* a_p0, NU32 b_p1, NU32 c_p2, NU32 d_p3, NU32 x_p4, NU8 s_p5, NU32 ac_p6);
static N_INLINE(NU32, H__pureZmd53_u21)(NU32 x_p0, NU32 y_p1, NU32 z_p2);
N_LIB_PRIVATE N_NIMCALL(void, II__pureZmd53_u66)(NU32* a_p0, NU32 b_p1, NU32 c_p2, NU32 d_p3, NU32 x_p4, NU8 s_p5, NU32 ac_p6);
static N_INLINE(NU32, I__pureZmd53_u26)(NU32 x_p0, NU32 y_p1, NU32 z_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError4)(NI l1_p0, NI h1_p1, NI h2_p2);
N_LIB_PRIVATE N_NIMCALL(void, decode__pureZmd53_u116)(NU8* dest_p0, NI dest_p0Len_0, NU32* src_p1, NI src_p1Len_0);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError)(void);
N_LIB_PRIVATE NIM_CONST tyArray__w5VB8h5K8DB3oWrO5U2wqg padding__pureZmd53_u10 = {((NU8)128),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0),
((NU8)0)}
;
extern NIM_BOOL nimInErrorMode__system_u4115;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a_p0, v_p1, ((size_t) (size_p2)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4115);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__systemZmemory_u7(p_p0, ((int)0), size_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
}
static N_INLINE(void, zeroMem__system_u1717)(void* p_p0, NI size_p1) {
	nimZeroMem(p_p0, size_p1);
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
static N_INLINE(void, clearBuffer__pureZmd53_u321)(tyObject_MD5Context__YpunvoXPYpj7K4r5Ge7q6A* c_p0) {
	nimfr_("clearBuffer", "D:\\nim\\lib\\pure\\md5.nim");
	nimlf_(278, "D:\\nim\\lib\\pure\\md5.nim");
	zeroMem__system_u1717(((void*) ((*c_p0).buffer)), ((NI)64));
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, md5Init__pureZmd53_u187)(tyObject_MD5Context__YpunvoXPYpj7K4r5Ge7q6A* c_p0) {
NIM_BOOL* nimErr_;
	nimfr_("md5Init", "D:\\nim\\lib\\pure\\md5.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(287, "D:\\nim\\lib\\pure\\md5.nim");
	(*c_p0).state[(((NI)0))- 0] = ((NU32)1732584193);
	nimln_(288);
	(*c_p0).state[(((NI)1))- 0] = ((NU32)IL64(4023233417));
	nimln_(289);
	(*c_p0).state[(((NI)2))- 0] = ((NU32)IL64(2562383102));
	nimln_(290);
	(*c_p0).state[(((NI)3))- 0] = ((NU32)271733878);
	nimln_(291);
	(*c_p0).count[(((NI)0))- 0] = ((NU32)0);
	nimln_(292);
	(*c_p0).count[(((NI)1))- 0] = ((NU32)0);
	nimln_(293);
	clearBuffer__pureZmd53_u321(c_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
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
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest_p0, source_p1, ((size_t) (size_p2)));
}
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2) {
	nimCopyMem(dest_p0, source_p1, size_p2);
}
static N_INLINE(void, writeBuffer__pureZmd53_u349)(tyObject_MD5Context__YpunvoXPYpj7K4r5Ge7q6A* c_p0, NI index_p1, NU8* input_p2, NI input_p2Len_0, NI inputIndex_p3, NI len_p4) {
	nimfr_("writeBuffer", "D:\\nim\\lib\\pure\\md5.nim");
{	nimlf_(298, "D:\\nim\\lib\\pure\\md5.nim");
	if ((NU)(index_p1) > (NU)(63)){ raiseIndexError2(index_p1, 63); goto BeforeRet_;
	}
	if (inputIndex_p3 < 0 || inputIndex_p3 >= input_p2Len_0){ raiseIndexError2(inputIndex_p3,input_p2Len_0-1); goto BeforeRet_;
	}
	if ((len_p4) < ((NI)0) || (len_p4) > ((NI)2147483647)){ raiseRangeErrorI(len_p4, ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	copyMem__system_u1720(((void*) ((&(*c_p0).buffer[(index_p1)- 0]))), ((void*) ((&input_p2[inputIndex_p3]))), ((NI) (len_p4)));
	}
BeforeRet_: ;
	popFrame();
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
N_LIB_PRIVATE N_NIMCALL(void, encode__pureZmd53_u74)(NU32* dest_p0, NU8* src_p1, NI src_p1Len_0) {
	NI j;
	nimfr_("encode", "D:\\nim\\lib\\pure\\md5.nim");
{	nimlf_(84, "D:\\nim\\lib\\pure\\md5.nim");
	j = ((NI)0);
	{
		NI i;
		NI res;
		i = (NI)0;
		nimlf_(90, "D:\\nim\\lib\\system\\iterators_1.nim");
		res = ((NI)0);
		{
			nimln_(91);
			while (1) {
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_3;
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_4;
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_5;
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_6;
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_7;
				if (!(res <= ((NI)15))) goto LA3;
				nimlf_(85, "D:\\nim\\lib\\pure\\md5.nim");
				i = res;
				nimln_(86);
				if ((NU)(i) > (NU)(15)){ raiseIndexError2(i, 15); goto BeforeRet_;
				}
				nimln_(88);
				nimln_(87);
				nimln_(86);
				if (j < 0 || j >= src_p1Len_0){ raiseIndexError2(j,src_p1Len_0-1); goto BeforeRet_;
				}
				nimln_(87);
				if (nimAddInt(j, ((NI)1), &TM__evv4Z8qaB9aehA3eX73W1Cw_3)) { raiseOverflow(); goto BeforeRet_;
				};
				if ((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_3) < 0 || (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_3) >= src_p1Len_0){ raiseIndexError2((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_3),src_p1Len_0-1); goto BeforeRet_;
				}
				nimln_(88);
				if (nimAddInt(j, ((NI)2), &TM__evv4Z8qaB9aehA3eX73W1Cw_4)) { raiseOverflow(); goto BeforeRet_;
				};
				if ((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_4) < 0 || (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_4) >= src_p1Len_0){ raiseIndexError2((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_4),src_p1Len_0-1); goto BeforeRet_;
				}
				nimln_(89);
				if (nimAddInt(j, ((NI)3), &TM__evv4Z8qaB9aehA3eX73W1Cw_5)) { raiseOverflow(); goto BeforeRet_;
				};
				if ((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_5) < 0 || (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_5) >= src_p1Len_0){ raiseIndexError2((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_5),src_p1Len_0-1); goto BeforeRet_;
				}
				dest_p0[(i)- 0] = (NU32)((NU32)((NU32)(((NU32) (src_p1[j])) | (NU32)((NU32)(((NU32) (src_p1[(NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_3)]))) << (NU32)(((NI)8)))) | (NU32)((NU32)(((NU32) (src_p1[(NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_4)]))) << (NU32)(((NI)16)))) | (NU32)((NU32)(((NU32) (src_p1[(NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_5)]))) << (NU32)(((NI)24))));
				nimln_(85);
				if (nimAddInt(j, ((NI)4), &TM__evv4Z8qaB9aehA3eX73W1Cw_6)) { raiseOverflow(); goto BeforeRet_;
				};
				j = (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_6);
				nimlf_(93, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(res, ((NI)1), &TM__evv4Z8qaB9aehA3eX73W1Cw_7)) { raiseOverflow(); goto BeforeRet_;
				};
				res = (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_7);
			} LA3: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(NU32, F__pureZmd53_u11)(NU32 x_p0, NU32 y_p1, NU32 z_p2) {
	NU32 result;
	nimfr_("F", "D:\\nim\\lib\\pure\\md5.nim");
	result = (NU32)0;
	nimlf_(49, "D:\\nim\\lib\\pure\\md5.nim");
	result = (NU32)((NU32)(x_p0 & y_p1) | (NU32)((NU32)((NU32) ~(x_p0)) & z_p2));
	popFrame();
	return result;
}
static N_INLINE(void, rot__pureZmd53_u31)(NU32* x_p0, NU8 n_p1) {
	nimfr_("rot", "D:\\nim\\lib\\pure\\md5.nim");
	nimlf_(61, "D:\\nim\\lib\\pure\\md5.nim");
	(*x_p0) = (NU32)((NU32)((NU32)((*x_p0)) << (NU32)(n_p1)) | (NU32)((NU32)((*x_p0)) >> (NU32)((NU32)((NU32)(((NU32)32)) - (NU32)(((NU32) (n_p1)))))));
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, FF__pureZmd53_u42)(NU32* a_p0, NU32 b_p1, NU32 c_p2, NU32 d_p3, NU32 x_p4, NU8 s_p5, NU32 ac_p6) {
	NU32 T1_;
NIM_BOOL* nimErr_;
	nimfr_("FF", "D:\\nim\\lib\\pure\\md5.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(64, "D:\\nim\\lib\\pure\\md5.nim");
	T1_ = (NU32)0;
	T1_ = F__pureZmd53_u11(b_p1, c_p2, d_p3);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a_p0) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a_p0)) + (NU32)(T1_))) + (NU32)(x_p4))) + (NU32)(ac_p6));
	nimln_(65);
	rot__pureZmd53_u31(a_p0, s_p5);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(66);
	(*a_p0) = (NU32)((NU32)((*a_p0)) + (NU32)(b_p1));
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(NU32, G__pureZmd53_u16)(NU32 x_p0, NU32 y_p1, NU32 z_p2) {
	NU32 result;
	nimfr_("G", "D:\\nim\\lib\\pure\\md5.nim");
	result = (NU32)0;
	nimlf_(52, "D:\\nim\\lib\\pure\\md5.nim");
	result = (NU32)((NU32)(x_p0 & z_p2) | (NU32)(y_p1 & (NU32)((NU32) ~(z_p2))));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, GG__pureZmd53_u50)(NU32* a_p0, NU32 b_p1, NU32 c_p2, NU32 d_p3, NU32 x_p4, NU8 s_p5, NU32 ac_p6) {
	NU32 T1_;
NIM_BOOL* nimErr_;
	nimfr_("GG", "D:\\nim\\lib\\pure\\md5.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(69, "D:\\nim\\lib\\pure\\md5.nim");
	T1_ = (NU32)0;
	T1_ = G__pureZmd53_u16(b_p1, c_p2, d_p3);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a_p0) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a_p0)) + (NU32)(T1_))) + (NU32)(x_p4))) + (NU32)(ac_p6));
	nimln_(70);
	rot__pureZmd53_u31(a_p0, s_p5);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(71);
	(*a_p0) = (NU32)((NU32)((*a_p0)) + (NU32)(b_p1));
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(NU32, H__pureZmd53_u21)(NU32 x_p0, NU32 y_p1, NU32 z_p2) {
	NU32 result;
	nimfr_("H", "D:\\nim\\lib\\pure\\md5.nim");
	result = (NU32)0;
	nimlf_(55, "D:\\nim\\lib\\pure\\md5.nim");
	result = (NU32)((NU32)(x_p0 ^ y_p1) ^ z_p2);
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, HH__pureZmd53_u58)(NU32* a_p0, NU32 b_p1, NU32 c_p2, NU32 d_p3, NU32 x_p4, NU8 s_p5, NU32 ac_p6) {
	NU32 T1_;
NIM_BOOL* nimErr_;
	nimfr_("HH", "D:\\nim\\lib\\pure\\md5.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(74, "D:\\nim\\lib\\pure\\md5.nim");
	T1_ = (NU32)0;
	T1_ = H__pureZmd53_u21(b_p1, c_p2, d_p3);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a_p0) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a_p0)) + (NU32)(T1_))) + (NU32)(x_p4))) + (NU32)(ac_p6));
	nimln_(75);
	rot__pureZmd53_u31(a_p0, s_p5);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(76);
	(*a_p0) = (NU32)((NU32)((*a_p0)) + (NU32)(b_p1));
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(NU32, I__pureZmd53_u26)(NU32 x_p0, NU32 y_p1, NU32 z_p2) {
	NU32 result;
	nimfr_("I", "D:\\nim\\lib\\pure\\md5.nim");
	result = (NU32)0;
	nimlf_(58, "D:\\nim\\lib\\pure\\md5.nim");
	result = (NU32)(y_p1 ^ (NU32)(x_p0 | (NU32)((NU32) ~(z_p2))));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, II__pureZmd53_u66)(NU32* a_p0, NU32 b_p1, NU32 c_p2, NU32 d_p3, NU32 x_p4, NU8 s_p5, NU32 ac_p6) {
	NU32 T1_;
NIM_BOOL* nimErr_;
	nimfr_("II", "D:\\nim\\lib\\pure\\md5.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(79, "D:\\nim\\lib\\pure\\md5.nim");
	T1_ = (NU32)0;
	T1_ = I__pureZmd53_u26(b_p1, c_p2, d_p3);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a_p0) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a_p0)) + (NU32)(T1_))) + (NU32)(x_p4))) + (NU32)(ac_p6));
	nimln_(80);
	rot__pureZmd53_u31(a_p0, s_p5);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(81);
	(*a_p0) = (NU32)((NU32)((*a_p0)) + (NU32)(b_p1));
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, transform__pureZmd53_u163)(NU8* buffer_p0, NI buffer_p0Len_0, NU32* state_p1) {
	tyArray__U0SiHM0pVagA9c71oWelQMA myBlock;
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
NIM_BOOL* nimErr_;
	nimfr_("transform", "D:\\nim\\lib\\pure\\md5.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)myBlock, sizeof(tyArray__U0SiHM0pVagA9c71oWelQMA));
	nimlf_(142, "D:\\nim\\lib\\pure\\md5.nim");
	encode__pureZmd53_u74(myBlock, buffer_p0, buffer_p0Len_0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(143);
	a = state_p1[(((NI)0))- 0];
	nimln_(144);
	b = state_p1[(((NI)1))- 0];
	nimln_(145);
	c = state_p1[(((NI)2))- 0];
	nimln_(146);
	d = state_p1[(((NI)3))- 0];
	nimln_(147);
	FF__pureZmd53_u42((&a), b, c, d, myBlock[(((NI)0))- 0], ((NU8)7), ((NU32)IL64(3614090360)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(148);
	FF__pureZmd53_u42((&d), a, b, c, myBlock[(((NI)1))- 0], ((NU8)12), ((NU32)IL64(3905402710)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(149);
	FF__pureZmd53_u42((&c), d, a, b, myBlock[(((NI)2))- 0], ((NU8)17), ((NU32)606105819));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(150);
	FF__pureZmd53_u42((&b), c, d, a, myBlock[(((NI)3))- 0], ((NU8)22), ((NU32)IL64(3250441966)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(151);
	FF__pureZmd53_u42((&a), b, c, d, myBlock[(((NI)4))- 0], ((NU8)7), ((NU32)IL64(4118548399)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(152);
	FF__pureZmd53_u42((&d), a, b, c, myBlock[(((NI)5))- 0], ((NU8)12), ((NU32)1200080426));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(153);
	FF__pureZmd53_u42((&c), d, a, b, myBlock[(((NI)6))- 0], ((NU8)17), ((NU32)IL64(2821735955)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(154);
	FF__pureZmd53_u42((&b), c, d, a, myBlock[(((NI)7))- 0], ((NU8)22), ((NU32)IL64(4249261313)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(155);
	FF__pureZmd53_u42((&a), b, c, d, myBlock[(((NI)8))- 0], ((NU8)7), ((NU32)1770035416));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(156);
	FF__pureZmd53_u42((&d), a, b, c, myBlock[(((NI)9))- 0], ((NU8)12), ((NU32)IL64(2336552879)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(157);
	FF__pureZmd53_u42((&c), d, a, b, myBlock[(((NI)10))- 0], ((NU8)17), ((NU32)IL64(4294925233)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(158);
	FF__pureZmd53_u42((&b), c, d, a, myBlock[(((NI)11))- 0], ((NU8)22), ((NU32)IL64(2304563134)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(159);
	FF__pureZmd53_u42((&a), b, c, d, myBlock[(((NI)12))- 0], ((NU8)7), ((NU32)1804603682));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(160);
	FF__pureZmd53_u42((&d), a, b, c, myBlock[(((NI)13))- 0], ((NU8)12), ((NU32)IL64(4254626195)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(161);
	FF__pureZmd53_u42((&c), d, a, b, myBlock[(((NI)14))- 0], ((NU8)17), ((NU32)IL64(2792965006)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(162);
	FF__pureZmd53_u42((&b), c, d, a, myBlock[(((NI)15))- 0], ((NU8)22), ((NU32)1236535329));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(163);
	GG__pureZmd53_u50((&a), b, c, d, myBlock[(((NI)1))- 0], ((NU8)5), ((NU32)IL64(4129170786)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(164);
	GG__pureZmd53_u50((&d), a, b, c, myBlock[(((NI)6))- 0], ((NU8)9), ((NU32)IL64(3225465664)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(165);
	GG__pureZmd53_u50((&c), d, a, b, myBlock[(((NI)11))- 0], ((NU8)14), ((NU32)643717713));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(166);
	GG__pureZmd53_u50((&b), c, d, a, myBlock[(((NI)0))- 0], ((NU8)20), ((NU32)IL64(3921069994)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(167);
	GG__pureZmd53_u50((&a), b, c, d, myBlock[(((NI)5))- 0], ((NU8)5), ((NU32)IL64(3593408605)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(168);
	GG__pureZmd53_u50((&d), a, b, c, myBlock[(((NI)10))- 0], ((NU8)9), ((NU32)38016083));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(169);
	GG__pureZmd53_u50((&c), d, a, b, myBlock[(((NI)15))- 0], ((NU8)14), ((NU32)IL64(3634488961)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(170);
	GG__pureZmd53_u50((&b), c, d, a, myBlock[(((NI)4))- 0], ((NU8)20), ((NU32)IL64(3889429448)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(171);
	GG__pureZmd53_u50((&a), b, c, d, myBlock[(((NI)9))- 0], ((NU8)5), ((NU32)568446438));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(172);
	GG__pureZmd53_u50((&d), a, b, c, myBlock[(((NI)14))- 0], ((NU8)9), ((NU32)IL64(3275163606)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(173);
	GG__pureZmd53_u50((&c), d, a, b, myBlock[(((NI)3))- 0], ((NU8)14), ((NU32)IL64(4107603335)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(174);
	GG__pureZmd53_u50((&b), c, d, a, myBlock[(((NI)8))- 0], ((NU8)20), ((NU32)1163531501));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(175);
	GG__pureZmd53_u50((&a), b, c, d, myBlock[(((NI)13))- 0], ((NU8)5), ((NU32)IL64(2850285829)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(176);
	GG__pureZmd53_u50((&d), a, b, c, myBlock[(((NI)2))- 0], ((NU8)9), ((NU32)IL64(4243563512)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(177);
	GG__pureZmd53_u50((&c), d, a, b, myBlock[(((NI)7))- 0], ((NU8)14), ((NU32)1735328473));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(178);
	GG__pureZmd53_u50((&b), c, d, a, myBlock[(((NI)12))- 0], ((NU8)20), ((NU32)IL64(2368359562)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(179);
	HH__pureZmd53_u58((&a), b, c, d, myBlock[(((NI)5))- 0], ((NU8)4), ((NU32)IL64(4294588738)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(180);
	HH__pureZmd53_u58((&d), a, b, c, myBlock[(((NI)8))- 0], ((NU8)11), ((NU32)IL64(2272392833)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(181);
	HH__pureZmd53_u58((&c), d, a, b, myBlock[(((NI)11))- 0], ((NU8)16), ((NU32)1839030562));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(182);
	HH__pureZmd53_u58((&b), c, d, a, myBlock[(((NI)14))- 0], ((NU8)23), ((NU32)IL64(4259657740)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(183);
	HH__pureZmd53_u58((&a), b, c, d, myBlock[(((NI)1))- 0], ((NU8)4), ((NU32)IL64(2763975236)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(184);
	HH__pureZmd53_u58((&d), a, b, c, myBlock[(((NI)4))- 0], ((NU8)11), ((NU32)1272893353));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(185);
	HH__pureZmd53_u58((&c), d, a, b, myBlock[(((NI)7))- 0], ((NU8)16), ((NU32)IL64(4139469664)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(186);
	HH__pureZmd53_u58((&b), c, d, a, myBlock[(((NI)10))- 0], ((NU8)23), ((NU32)IL64(3200236656)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(187);
	HH__pureZmd53_u58((&a), b, c, d, myBlock[(((NI)13))- 0], ((NU8)4), ((NU32)681279174));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(188);
	HH__pureZmd53_u58((&d), a, b, c, myBlock[(((NI)0))- 0], ((NU8)11), ((NU32)IL64(3936430074)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(189);
	HH__pureZmd53_u58((&c), d, a, b, myBlock[(((NI)3))- 0], ((NU8)16), ((NU32)IL64(3572445317)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(190);
	HH__pureZmd53_u58((&b), c, d, a, myBlock[(((NI)6))- 0], ((NU8)23), ((NU32)76029189));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(191);
	HH__pureZmd53_u58((&a), b, c, d, myBlock[(((NI)9))- 0], ((NU8)4), ((NU32)IL64(3654602809)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(192);
	HH__pureZmd53_u58((&d), a, b, c, myBlock[(((NI)12))- 0], ((NU8)11), ((NU32)IL64(3873151461)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(193);
	HH__pureZmd53_u58((&c), d, a, b, myBlock[(((NI)15))- 0], ((NU8)16), ((NU32)530742520));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(194);
	HH__pureZmd53_u58((&b), c, d, a, myBlock[(((NI)2))- 0], ((NU8)23), ((NU32)IL64(3299628645)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(195);
	II__pureZmd53_u66((&a), b, c, d, myBlock[(((NI)0))- 0], ((NU8)6), ((NU32)IL64(4096336452)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(196);
	II__pureZmd53_u66((&d), a, b, c, myBlock[(((NI)7))- 0], ((NU8)10), ((NU32)1126891415));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(197);
	II__pureZmd53_u66((&c), d, a, b, myBlock[(((NI)14))- 0], ((NU8)15), ((NU32)IL64(2878612391)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(198);
	II__pureZmd53_u66((&b), c, d, a, myBlock[(((NI)5))- 0], ((NU8)21), ((NU32)IL64(4237533241)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(199);
	II__pureZmd53_u66((&a), b, c, d, myBlock[(((NI)12))- 0], ((NU8)6), ((NU32)1700485571));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(200);
	II__pureZmd53_u66((&d), a, b, c, myBlock[(((NI)3))- 0], ((NU8)10), ((NU32)IL64(2399980690)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(201);
	II__pureZmd53_u66((&c), d, a, b, myBlock[(((NI)10))- 0], ((NU8)15), ((NU32)IL64(4293915773)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(202);
	II__pureZmd53_u66((&b), c, d, a, myBlock[(((NI)1))- 0], ((NU8)21), ((NU32)IL64(2240044497)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(203);
	II__pureZmd53_u66((&a), b, c, d, myBlock[(((NI)8))- 0], ((NU8)6), ((NU32)1873313359));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(204);
	II__pureZmd53_u66((&d), a, b, c, myBlock[(((NI)15))- 0], ((NU8)10), ((NU32)IL64(4264355552)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(205);
	II__pureZmd53_u66((&c), d, a, b, myBlock[(((NI)6))- 0], ((NU8)15), ((NU32)IL64(2734768916)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(206);
	II__pureZmd53_u66((&b), c, d, a, myBlock[(((NI)13))- 0], ((NU8)21), ((NU32)1309151649));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(207);
	II__pureZmd53_u66((&a), b, c, d, myBlock[(((NI)4))- 0], ((NU8)6), ((NU32)IL64(4149444226)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(208);
	II__pureZmd53_u66((&d), a, b, c, myBlock[(((NI)11))- 0], ((NU8)10), ((NU32)IL64(3174756917)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(209);
	II__pureZmd53_u66((&c), d, a, b, myBlock[(((NI)2))- 0], ((NU8)15), ((NU32)718787259));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(210);
	II__pureZmd53_u66((&b), c, d, a, myBlock[(((NI)9))- 0], ((NU8)21), ((NU32)IL64(3951481745)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(211);
	state_p1[(((NI)0))- 0] = (NU32)((NU32)(state_p1[(((NI)0))- 0]) + (NU32)(a));
	nimln_(212);
	state_p1[(((NI)1))- 0] = (NU32)((NU32)(state_p1[(((NI)1))- 0]) + (NU32)(b));
	nimln_(213);
	state_p1[(((NI)2))- 0] = (NU32)((NU32)(state_p1[(((NI)2))- 0]) + (NU32)(c));
	nimln_(214);
	state_p1[(((NI)3))- 0] = (NU32)((NU32)(state_p1[(((NI)3))- 0]) + (NU32)(d));
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, md5Update__pureZmd53_u189)(tyObject_MD5Context__YpunvoXPYpj7K4r5Ge7q6A* c_p0, NU8* input_p1, NI input_p1Len_0) {
	NI Index;
	NI PartLen;
	NI TM__evv4Z8qaB9aehA3eX73W1Cw_2;
NIM_BOOL* nimErr_;
	nimfr_("md5Update", "D:\\nim\\lib\\pure\\md5.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(310, "D:\\nim\\lib\\pure\\md5.nim");
	if ((NI64)((NU32)((NU32)((NU32)((*c_p0).count[(((NI)0))- 0]) >> (NU32)(((NI)3))) & ((NU32)63))) < ((NI)(-2147483647 -1)) || (NI64)((NU32)((NU32)((NU32)((*c_p0).count[(((NI)0))- 0]) >> (NU32)(((NI)3))) & ((NU32)63))) > ((NI)2147483647)){ raiseRangeErrorI((NU32)((NU32)((NU32)((*c_p0).count[(((NI)0))- 0]) >> (NU32)(((NI)3))) & ((NU32)63)), ((NI)(-2147483647 -1)), ((NI)2147483647)); goto BeforeRet_;
	}
	Index = ((NI) ((NU32)((NU32)((NU32)((*c_p0).count[(((NI)0))- 0]) >> (NU32)(((NI)3))) & ((NU32)63))));
	nimln_(311);
	(*c_p0).count[(((NI)0))- 0] = (NU32)((NU32)((*c_p0).count[(((NI)0))- 0]) + (NU32)((NU32)((NU32)(((NU32) (input_p1Len_0))) << (NU32)(((NI)3)))));
	nimln_(312);
	{
		if (!((NU32)((*c_p0).count[(((NI)0))- 0]) < (NU32)((NU32)((NU32)(((NU32) (input_p1Len_0))) << (NU32)(((NI)3)))))) goto LA3_;
		(*c_p0).count[(((NI)1))- 0] = (NU32)((NU32)((*c_p0).count[(((NI)1))- 0]) + (NU32)(((NU32)1)));
	}
LA3_: ;
	nimln_(313);
	(*c_p0).count[(((NI)1))- 0] = (NU32)((NU32)((*c_p0).count[(((NI)1))- 0]) + (NU32)((NU32)((NU32)(((NU32) (input_p1Len_0))) >> (NU32)(((NI)29)))));
	nimln_(314);
	if (nimSubInt(((NI)64), Index, &TM__evv4Z8qaB9aehA3eX73W1Cw_2)) { raiseOverflow(); goto BeforeRet_;
	};
	PartLen = (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_2);
	nimln_(315);
	{
		NI i;
		if (!(PartLen <= input_p1Len_0)) goto LA7_;
		nimln_(316);
		writeBuffer__pureZmd53_u349(c_p0, Index, input_p1, input_p1Len_0, ((NI)0), PartLen);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(317);
		transform__pureZmd53_u163((*c_p0).buffer, 64, (*c_p0).state);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nimln_(318);
		i = PartLen;
		{
			nimln_(319);
			while (1) {
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_8;
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_9;
				tyOpenArray__UMVJID9bgFAzHOc9bt5jE4PA T11_;
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_10;
				if (nimAddInt(i, ((NI)63), &TM__evv4Z8qaB9aehA3eX73W1Cw_8)) { raiseOverflow(); goto BeforeRet_;
				};
				if (!((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_8) < input_p1Len_0)) goto LA10;
				nimln_(320);
				nimln_(126);
				nimln_(320);
				if (nimAddInt(i, ((NI)63), &TM__evv4Z8qaB9aehA3eX73W1Cw_9)) { raiseOverflow(); goto BeforeRet_;
				};
				if ((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_9)-i != -1 && (i < 0 || i >= input_p1Len_0 || (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_9) < 0 || (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_9) >= input_p1Len_0)){ raiseIndexError4(i, (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_9), input_p1Len_0); goto BeforeRet_;
				}
				T11_.Field0 = (NU8*)(input_p1)+(i); T11_.Field1 = ((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_9))-(i)+1;
				transform__pureZmd53_u163(T11_.Field0, T11_.Field1, (*c_p0).state);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				nimln_(321);
				if (nimAddInt(i, ((NI)64), &TM__evv4Z8qaB9aehA3eX73W1Cw_10)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_10);
			} LA10: ;
		}
		nimln_(322);
		{
			NI TM__evv4Z8qaB9aehA3eX73W1Cw_11;
			if (!(i < input_p1Len_0)) goto LA14_;
			nimln_(323);
			if (nimSubInt(input_p1Len_0, i, &TM__evv4Z8qaB9aehA3eX73W1Cw_11)) { raiseOverflow(); goto BeforeRet_;
			};
			writeBuffer__pureZmd53_u349(c_p0, ((NI)0), input_p1, input_p1Len_0, i, (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_11));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
LA14_: ;
	}
	goto LA5_;
LA7_: ;
	{
		nimln_(324);
		if (!(((NI)0) < input_p1Len_0)) goto LA17_;
		nimln_(325);
		writeBuffer__pureZmd53_u349(c_p0, Index, input_p1, input_p1Len_0, ((NI)0), input_p1Len_0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA5_;
LA17_: ;
LA5_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, md5Update__pureZmd53_u195)(tyObject_MD5Context__YpunvoXPYpj7K4r5Ge7q6A* c_p0, NCSTRING input_p1, NI len_p2) {
	NI TM__evv4Z8qaB9aehA3eX73W1Cw_12;
	tyOpenArray__UMVJID9bgFAzHOc9bt5jE4PA T1_;
NIM_BOOL* nimErr_;
	nimfr_("md5Update", "D:\\nim\\lib\\pure\\md5.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(227, "D:\\nim\\lib\\pure\\md5.nim");
	nimln_(120);
	nimln_(227);
	if (nimSubInt(len_p2, ((NI)1), &TM__evv4Z8qaB9aehA3eX73W1Cw_12)) { raiseOverflow(); goto BeforeRet_;
	};
	T1_.Field0 = (NU8*)(input_p1)+(((NI)0)); T1_.Field1 = ((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_12))-(((NI)0))+1;
	md5Update__pureZmd53_u189(c_p0, T1_.Field0, T1_.Field1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, decode__pureZmd53_u116)(NU8* dest_p0, NI dest_p0Len_0, NU32* src_p1, NI src_p1Len_0) {
	NI i;
	nimfr_("decode", "D:\\nim\\lib\\pure\\md5.nim");
{	nimlf_(93, "D:\\nim\\lib\\pure\\md5.nim");
	i = ((NI)0);
	{
		NI j;
		NI colontmp_;
		NI res;
		j = (NI)0;
		colontmp_ = (NI)0;
		nimlf_(75, "D:\\nim\\lib\\system\\iterators_1.nim");
		nimlf_(94, "D:\\nim\\lib\\pure\\md5.nim");
		colontmp_ = (src_p1Len_0-1);
		nimlf_(90, "D:\\nim\\lib\\system\\iterators_1.nim");
		res = ((NI)0);
		{
			nimln_(91);
			while (1) {
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_13;
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_14;
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_15;
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_16;
				NI TM__evv4Z8qaB9aehA3eX73W1Cw_17;
				if (!(res <= colontmp_)) goto LA3;
				nimlf_(94, "D:\\nim\\lib\\pure\\md5.nim");
				j = res;
				nimln_(95);
				if (i < 0 || i >= dest_p0Len_0){ raiseIndexError2(i,dest_p0Len_0-1); goto BeforeRet_;
				}
				if (j < 0 || j >= src_p1Len_0){ raiseIndexError2(j,src_p1Len_0-1); goto BeforeRet_;
				}
				dest_p0[i] = ((NU8) ((NU32)(src_p1[j] & ((NU32)255))));
				nimln_(96);
				if (nimAddInt(i, ((NI)1), &TM__evv4Z8qaB9aehA3eX73W1Cw_13)) { raiseOverflow(); goto BeforeRet_;
				};
				if ((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_13) < 0 || (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_13) >= dest_p0Len_0){ raiseIndexError2((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_13),dest_p0Len_0-1); goto BeforeRet_;
				}
				if (j < 0 || j >= src_p1Len_0){ raiseIndexError2(j,src_p1Len_0-1); goto BeforeRet_;
				}
				dest_p0[(NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_13)] = ((NU8) ((NU32)((NU32)((NU32)(src_p1[j]) >> (NU32)(((NI)8))) & ((NU32)255))));
				nimln_(97);
				if (nimAddInt(i, ((NI)2), &TM__evv4Z8qaB9aehA3eX73W1Cw_14)) { raiseOverflow(); goto BeforeRet_;
				};
				if ((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_14) < 0 || (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_14) >= dest_p0Len_0){ raiseIndexError2((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_14),dest_p0Len_0-1); goto BeforeRet_;
				}
				if (j < 0 || j >= src_p1Len_0){ raiseIndexError2(j,src_p1Len_0-1); goto BeforeRet_;
				}
				dest_p0[(NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_14)] = ((NU8) ((NU32)((NU32)((NU32)(src_p1[j]) >> (NU32)(((NI)16))) & ((NU32)255))));
				nimln_(98);
				if (nimAddInt(i, ((NI)3), &TM__evv4Z8qaB9aehA3eX73W1Cw_15)) { raiseOverflow(); goto BeforeRet_;
				};
				if ((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_15) < 0 || (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_15) >= dest_p0Len_0){ raiseIndexError2((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_15),dest_p0Len_0-1); goto BeforeRet_;
				}
				if (j < 0 || j >= src_p1Len_0){ raiseIndexError2(j,src_p1Len_0-1); goto BeforeRet_;
				}
				dest_p0[(NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_15)] = ((NU8) ((NU32)((NU32)((NU32)(src_p1[j]) >> (NU32)(((NI)24))) & ((NU32)255))));
				nimln_(94);
				if (nimAddInt(i, ((NI)4), &TM__evv4Z8qaB9aehA3eX73W1Cw_16)) { raiseOverflow(); goto BeforeRet_;
				};
				i = (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_16);
				nimlf_(93, "D:\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(res, ((NI)1), &TM__evv4Z8qaB9aehA3eX73W1Cw_17)) { raiseOverflow(); goto BeforeRet_;
				};
				res = (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_17);
			} LA3: ;
		}
	}
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, md5Final__pureZmd53_u192)(tyObject_MD5Context__YpunvoXPYpj7K4r5Ge7q6A* c_p0, NU8* digest_p1) {
	tyArray__cdsir9aPB24hAk6k77P9b9bCA Bits;
	NI PadLen;
	NI Index;
	NI TM__evv4Z8qaB9aehA3eX73W1Cw_20;
	tyOpenArray__UMVJID9bgFAzHOc9bt5jE4PA T6_;
NIM_BOOL* nimErr_;
	nimfr_("md5Final", "D:\\nim\\lib\\pure\\md5.nim");
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)Bits, sizeof(tyArray__cdsir9aPB24hAk6k77P9b9bCA));
	PadLen = (NI)0;
	nimlf_(335, "D:\\nim\\lib\\pure\\md5.nim");
	decode__pureZmd53_u116(Bits, 8, (*c_p0).count, 2);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(336);
	if ((NI64)((NU32)((NU32)((NU32)((*c_p0).count[(((NI)0))- 0]) >> (NU32)(((NI)3))) & ((NU32)63))) < ((NI)(-2147483647 -1)) || (NI64)((NU32)((NU32)((NU32)((*c_p0).count[(((NI)0))- 0]) >> (NU32)(((NI)3))) & ((NU32)63))) > ((NI)2147483647)){ raiseRangeErrorI((NU32)((NU32)((NU32)((*c_p0).count[(((NI)0))- 0]) >> (NU32)(((NI)3))) & ((NU32)63)), ((NI)(-2147483647 -1)), ((NI)2147483647)); goto BeforeRet_;
	}
	Index = ((NI) ((NU32)((NU32)((NU32)((*c_p0).count[(((NI)0))- 0]) >> (NU32)(((NI)3))) & ((NU32)63))));
	nimln_(337);
	{
		NI TM__evv4Z8qaB9aehA3eX73W1Cw_18;
		if (!(Index < ((NI)56))) goto LA3_;
		if (nimSubInt(((NI)56), Index, &TM__evv4Z8qaB9aehA3eX73W1Cw_18)) { raiseOverflow(); goto BeforeRet_;
		};
		PadLen = (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_18);
	}
	goto LA1_;
LA3_: ;
	{
		NI TM__evv4Z8qaB9aehA3eX73W1Cw_19;
		nimln_(338);
		if (nimSubInt(((NI)120), Index, &TM__evv4Z8qaB9aehA3eX73W1Cw_19)) { raiseOverflow(); goto BeforeRet_;
		};
		PadLen = (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_19);
	}
LA1_: ;
	nimln_(339);
	nimln_(126);
	nimln_(339);
	if (nimSubInt(PadLen, ((NI)1), &TM__evv4Z8qaB9aehA3eX73W1Cw_20)) { raiseOverflow(); goto BeforeRet_;
	};
	if ((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_20)-((NI)0) != -1 && ((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_20)-((NI)0) < -1 || ((NI)0) < 0 || ((NI)0) > 63 || (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_20) < 0 || (NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_20) > 63)){ raiseIndexError(); goto BeforeRet_;
	}
	T6_.Field0 = (NU8*)((padding__pureZmd53_u10)+(((NI)0))); T6_.Field1 = ((NI)(TM__evv4Z8qaB9aehA3eX73W1Cw_20))-(((NI)0))+1;
	md5Update__pureZmd53_u189(c_p0, T6_.Field0, T6_.Field1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(340);
	md5Update__pureZmd53_u189(c_p0, Bits, 8);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(341);
	decode__pureZmd53_u116(digest_p1, 16, (*c_p0).state, 4);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimln_(342);
	clearBuffer__pureZmd53_u321(c_p0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
