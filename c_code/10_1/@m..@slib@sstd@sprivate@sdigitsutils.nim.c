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
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
typedef NIM_CHAR tyArray__PbS9a6gkxCuxWEnFq4lOU9aw[24];
typedef NIM_CHAR tyArray__38Z69amCaoywES5tRmClBSw[200];
typedef NI8 tyArray__k7wgHIN8mKeRF236nmwvnQ[100];
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_u169)(NimStringV2* result_p0, NU64 x_p1);
static N_INLINE(void, addIntImpl__stdZprivateZdigitsutils_u55)(NimStringV2* result_p0, NU64 x_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorNoArgs)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
static N_INLINE(void, addChars__stdZprivateZdigitsutils_u98)(NimStringV2* result_p0, tyArray__PbS9a6gkxCuxWEnFq4lOU9aw x_p1, NI start_p2, NI n_p3);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s_p0, NI newLen_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4325)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE NIM_CONST tyArray__38Z69amCaoywES5tRmClBSw digits100__stdZprivateZdigitsutils_u2 = {48,
48,
48,
49,
48,
50,
48,
51,
48,
52,
48,
53,
48,
54,
48,
55,
48,
56,
48,
57,
49,
48,
49,
49,
49,
50,
49,
51,
49,
52,
49,
53,
49,
54,
49,
55,
49,
56,
49,
57,
50,
48,
50,
49,
50,
50,
50,
51,
50,
52,
50,
53,
50,
54,
50,
55,
50,
56,
50,
57,
51,
48,
51,
49,
51,
50,
51,
51,
51,
52,
51,
53,
51,
54,
51,
55,
51,
56,
51,
57,
52,
48,
52,
49,
52,
50,
52,
51,
52,
52,
52,
53,
52,
54,
52,
55,
52,
56,
52,
57,
53,
48,
53,
49,
53,
50,
53,
51,
53,
52,
53,
53,
53,
54,
53,
55,
53,
56,
53,
57,
54,
48,
54,
49,
54,
50,
54,
51,
54,
52,
54,
53,
54,
54,
54,
55,
54,
56,
54,
57,
55,
48,
55,
49,
55,
50,
55,
51,
55,
52,
55,
53,
55,
54,
55,
55,
55,
56,
55,
57,
56,
48,
56,
49,
56,
50,
56,
51,
56,
52,
56,
53,
56,
54,
56,
55,
56,
56,
56,
57,
57,
48,
57,
49,
57,
50,
57,
51,
57,
52,
57,
53,
57,
54,
57,
55,
57,
56,
57,
57}
;
N_LIB_PRIVATE NIM_CONST tyArray__k7wgHIN8mKeRF236nmwvnQ trailingZeros100__stdZprivateZdigitsutils_u1 = {((NI8)2),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)1),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0),
((NI8)0)}
;
extern TFrame* framePtr__system_u3774;
extern TFrame* framePtr__system_u3774;
extern TFrame* framePtr__system_u3774;
extern TFrame* framePtr__system_u3774;
extern TFrame* framePtr__system_u3774;
extern TFrame* framePtr__system_u3774;
extern NIM_BOOL nimInErrorMode__system_u4128;
static N_INLINE(void, nimAddCharV1)(NimStringV2* s_p0, NIM_CHAR c_p1) {
	NI TM__J7BLF9cgvwzEso7aEL9cCOKw_2;
	NI TM__J7BLF9cgvwzEso7aEL9cCOKw_3;
{	prepareAdd(s_p0, ((NI)1));
	(*(*s_p0).p).data[(*s_p0).len] = c_p1;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__J7BLF9cgvwzEso7aEL9cCOKw_2)) { raiseOverflow(); goto BeforeRet_;
	};
	(*(*s_p0).p).data[(NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_2)] = 0;
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__J7BLF9cgvwzEso7aEL9cCOKw_3)) { raiseOverflow(); goto BeforeRet_;
	};
	(*s_p0).len = (NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_3);
	}
BeforeRet_: ;
}
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest_p0, source_p1, ((size_t) (size_p2)));
}
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2) {
	nimCopyMem(dest_p0, source_p1, size_p2);
}
static N_INLINE(void, nimFrame)(TFrame* s_p0) {
	{
		if (!(framePtr__system_u3774 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s_p0).calldepth = ((NI16)0);
	}
	goto LA1_;
LA3_: ;
	{
		(*s_p0).calldepth = (NI16)((*framePtr__system_u3774).calldepth + ((NI16)1));
	}
LA1_: ;
	(*s_p0).prev = framePtr__system_u3774;
	framePtr__system_u3774 = s_p0;
	{
		if (!((*s_p0).calldepth == ((NI16)2000))) goto LA8_;
		callDepthLimitReached__system_u4325();
	}
LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__system_u3774 = (*framePtr__system_u3774).prev;
}
static N_INLINE(void, addChars__stdZprivateZdigitsutils_u98)(NimStringV2* result_p0, tyArray__PbS9a6gkxCuxWEnFq4lOU9aw x_p1, NI start_p2, NI n_p3) {
	NI old;
	NI TM__J7BLF9cgvwzEso7aEL9cCOKw_9;
	nimfr_("addChars", "D:\\nim\\lib\\std\\private\\digitsutils.nim");
{	nimlf_(43, "D:\\nim\\lib\\std\\private\\digitsutils.nim");
	old = (*result_p0).len;
	nimln_(44);
	if (nimAddInt(old, n_p3, &TM__J7BLF9cgvwzEso7aEL9cCOKw_9)) { raiseOverflow(); goto BeforeRet_;
	};
	if (((NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_9)) < ((NI)0) || ((NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_9)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_9), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	setLengthStrV2((&(*result_p0)), ((NI) ((NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_9))));
	nimln_(52);
	if (old < 0 || old >= (*result_p0).len){ raiseIndexError2(old,(*result_p0).len-1); goto BeforeRet_;
	}
	if ((NU)(start_p2) > (NU)(23)){ raiseIndexError2(start_p2, 23); goto BeforeRet_;
	}
	if ((n_p3) < ((NI)0) || (n_p3) > ((NI)2147483647)){ raiseRangeErrorI(n_p3, ((NI)0), ((NI)2147483647)); goto BeforeRet_;
	}
	copyMem__system_u1720(((void*) ((&(*result_p0).p->data[old]))), ((void*) ((&x_p1[(start_p2)- 0]))), ((NI) (n_p3)));
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4128);
	return result;
}
static N_INLINE(void, addIntImpl__stdZprivateZdigitsutils_u55)(NimStringV2* result_p0, NU64 x_p1) {
	tyArray__PbS9a6gkxCuxWEnFq4lOU9aw tmp;
	NU64 num;
	NI next;
	NI TM__J7BLF9cgvwzEso7aEL9cCOKw_10;
NIM_BOOL* nimErr_;
	nimfr_("addIntImpl", "D:\\nim\\lib\\std\\private\\digitsutils.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(59, "D:\\nim\\lib\\std\\private\\digitsutils.nim");
	num = x_p1;
	nimln_(60);
	next = ((NI)23);
	{
		nimln_(63);
		while (1) {
			NU64 originNum;
			NI16 index;
			NI TM__J7BLF9cgvwzEso7aEL9cCOKw_4;
			NI TM__J7BLF9cgvwzEso7aEL9cCOKw_5;
			NI TM__J7BLF9cgvwzEso7aEL9cCOKw_6;
			if (!((NU64)(100ULL) <= (NU64)(num))) goto LA2;
			nimln_(64);
			originNum = num;
			nimln_(65);
			num = (NU64)((NU64)(num) / (NU64)(100ULL));
			nimln_(66);
			if ((NU64)((NU64)((NU64)((NU64)(originNum) - (NU64)((NU64)((NU64)(num) * (NU64)(100ULL))))) << (NU64)(((NI)1))) > (NU64)(((NI16)32767))){ raiseRangeErrorNoArgs(); goto BeforeRet_;
			}
			index = ((NI16) ((NU64)((NU64)((NU64)((NU64)(originNum) - (NU64)((NU64)((NU64)(num) * (NU64)(100ULL))))) << (NU64)(((NI)1)))));
			nimln_(67);
			if ((NU)(next) > (NU)(23)){ raiseIndexError2(next, 23); goto BeforeRet_;
			}
			if (nimAddInt(index, ((NI16)1), &TM__J7BLF9cgvwzEso7aEL9cCOKw_4)) { raiseOverflow(); goto BeforeRet_;
			};
			if (TM__J7BLF9cgvwzEso7aEL9cCOKw_4 < -32768 || TM__J7BLF9cgvwzEso7aEL9cCOKw_4 > 32767){ raiseOverflow(); goto BeforeRet_;
			}
			if ((NU)((NI16)(TM__J7BLF9cgvwzEso7aEL9cCOKw_4)) > (NU)(199)){ raiseIndexError2((NI16)(TM__J7BLF9cgvwzEso7aEL9cCOKw_4), 199); goto BeforeRet_;
			}
			tmp[(next)- 0] = digits100__stdZprivateZdigitsutils_u2[((NI16)(TM__J7BLF9cgvwzEso7aEL9cCOKw_4))- 0];
			nimln_(68);
			if (nimSubInt(next, ((NI)1), &TM__J7BLF9cgvwzEso7aEL9cCOKw_5)) { raiseOverflow(); goto BeforeRet_;
			};
			if ((NU)((NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_5)) > (NU)(23)){ raiseIndexError2((NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_5), 23); goto BeforeRet_;
			}
			if ((NU)(index) > (NU)(199)){ raiseIndexError2(index, 199); goto BeforeRet_;
			}
			tmp[((NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_5))- 0] = digits100__stdZprivateZdigitsutils_u2[(index)- 0];
			nimln_(69);
			if (nimSubInt(next, ((NI)2), &TM__J7BLF9cgvwzEso7aEL9cCOKw_6)) { raiseOverflow(); goto BeforeRet_;
			};
			next = (NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_6);
		} LA2: ;
	}
	nimln_(72);
	{
		if (!((NU64)(num) < (NU64)(10ULL))) goto LA5_;
		nimln_(73);
		if ((NU)(next) > (NU)(23)){ raiseIndexError2(next, 23); goto BeforeRet_;
		}
		tmp[(next)- 0] = ((NIM_CHAR) (((NI) ((NU8)((NU8)(((NU8)48)) + (NU8)(((NU8) (num))))))));
	}
	goto LA3_;
LA5_: ;
	{
		NU64 index_2;
		NI TM__J7BLF9cgvwzEso7aEL9cCOKw_7;
		NI TM__J7BLF9cgvwzEso7aEL9cCOKw_8;
		nimln_(75);
		index_2 = (NU64)((NU64)(num) * (NU64)(2ULL));
		nimln_(76);
		if ((NU)(next) > (NU)(23)){ raiseIndexError2(next, 23); goto BeforeRet_;
		}
		if ((NU)((NU64)((NU64)(index_2) + (NU64)(1ULL))) > (NU)(199)){ raiseIndexError2((NU64)((NU64)(index_2) + (NU64)(1ULL)), 199); goto BeforeRet_;
		}
		tmp[(next)- 0] = digits100__stdZprivateZdigitsutils_u2[((NU64)((NU64)(index_2) + (NU64)(1ULL)))- 0];
		nimln_(77);
		if (nimSubInt(next, ((NI)1), &TM__J7BLF9cgvwzEso7aEL9cCOKw_7)) { raiseOverflow(); goto BeforeRet_;
		};
		if ((NU)((NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_7)) > (NU)(23)){ raiseIndexError2((NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_7), 23); goto BeforeRet_;
		}
		if ((NU)(index_2) > (NU)(199)){ raiseIndexError2(index_2, 199); goto BeforeRet_;
		}
		tmp[((NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_7))- 0] = digits100__stdZprivateZdigitsutils_u2[(index_2)- 0];
		nimln_(78);
		if (nimSubInt(next, ((NI)1), &TM__J7BLF9cgvwzEso7aEL9cCOKw_8)) { raiseOverflow(); goto BeforeRet_;
		};
		next = (NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_8);
	}
LA3_: ;
	nimln_(79);
	if (nimSubInt(((NI)24), next, &TM__J7BLF9cgvwzEso7aEL9cCOKw_10)) { raiseOverflow(); goto BeforeRet_;
	};
	addChars__stdZprivateZdigitsutils_u98(result_p0, tmp, next, (NI)(TM__J7BLF9cgvwzEso7aEL9cCOKw_10));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_u169)(NimStringV2* result_p0, NU64 x_p1) {
NIM_BOOL* nimErr_;
	nimfr_("addInt", "D:\\nim\\lib\\std\\private\\digitsutils.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(87, "D:\\nim\\lib\\std\\private\\digitsutils.nim");
	addIntImpl__stdZprivateZdigitsutils_u55(result_p0, x_p1);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_u172)(NimStringV2* result_p0, NI64 x_p1) {
	NU64 numX60gensym3_;
	nimfr_("addInt", "D:\\nim\\lib\\std\\private\\digitsutils.nim");
{	numX60gensym3_ = (NU64)0;
	nimlf_(99, "D:\\nim\\lib\\std\\private\\digitsutils.nim");
	{
		if (!(x_p1 < IL64(0))) goto LA3_;
		nimln_(100);
		{
			if (!(x_p1 == (IL64(-9223372036854775807) - IL64(1)))) goto LA7_;
			nimln_(101);
			numX60gensym3_ = ((NU64) (x_p1));
		}
		goto LA5_;
LA7_: ;
		{
			nimln_(103);
			if (x_p1 == (IL64(-9223372036854775807) - IL64(1))){ raiseOverflow(); goto BeforeRet_;
			}
			numX60gensym3_ = ((NU64) (-(x_p1)));
		}
LA5_: ;
		nimln_(104);
		nimAddCharV1((&(*result_p0)), 45);
	}
	goto LA1_;
LA3_: ;
	{
		nimln_(106);
		numX60gensym3_ = ((NU64) (x_p1));
	}
LA1_: ;
	nimln_(112);
	addInt__stdZprivateZdigitsutils_u169(result_p0, numX60gensym3_);
	}
BeforeRet_: ;
	popFrame();
}
