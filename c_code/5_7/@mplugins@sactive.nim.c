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

typedef struct tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA;
typedef struct tyObject_TContext__WbDKsGY08NBKRG5kiWUVLw tyObject_TContext__WbDKsGY08NBKRG5kiWUVLw;
typedef struct tyObject_IdentCachecolonObjectType___LYhYfW7zHVa6k72gTbQGLw tyObject_IdentCachecolonObjectType___LYhYfW7zHVa6k72gTbQGLw;
typedef struct tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw;
typedef struct tyTuple__PJjtAPjw9cXungyri9aChLLA tyTuple__PJjtAPjw9cXungyri9aChLLA;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef N_NIMCALL_PTR(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA*, tyProc__8fBHwTGS1kcLGw7rauOooQ) (tyObject_TContext__WbDKsGY08NBKRG5kiWUVLw* c_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1);
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tyTuple__PJjtAPjw9cXungyri9aChLLA {
NimStringV2 Field0;
NimStringV2 Field1;
NimStringV2 Field2;
tyProc__8fBHwTGS1kcLGw7rauOooQ Field3;
};
typedef tyTuple__PJjtAPjw9cXungyri9aChLLA tyArray__3e9cSg3jx9axcXuVn9c7R2rzg[2];
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA*, iterToProcImpl__pluginsZitersgen_u7)(tyObject_TContext__WbDKsGY08NBKRG5kiWUVLw* c_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA*, semLocals__pluginsZlocals_u7)(tyObject_TContext__WbDKsGY08NBKRG5kiWUVLw* c_p0, tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n_p1);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, pluginMatches__pluginsupport_u18)(tyObject_IdentCachecolonObjectType___LYhYfW7zHVa6k72gTbQGLw* ic_p0, tyTuple__PJjtAPjw9cXungyri9aChLLA* p_p1, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* s_p2);
static N_INLINE(NIM_BOOL, nimAddInt)(NI a_p0, NI b_p1, NI* res_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4312)(void);
static N_INLINE(void, popFrame)(void);
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__HRYz2qtwWw9bfj4ZuGqghLw_2 = { 6 | NIM_STRLIT_FLAG, "stdlib" };
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__HRYz2qtwWw9bfj4ZuGqghLw_3 = { 6 | NIM_STRLIT_FLAG, "system" };
static const struct {
  NI cap; NIM_CHAR data[10+1];
} TM__HRYz2qtwWw9bfj4ZuGqghLw_4 = { 10 | NIM_STRLIT_FLAG, "iterToProc" };
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__HRYz2qtwWw9bfj4ZuGqghLw_5 = { 6 | NIM_STRLIT_FLAG, "locals" };
N_LIB_PRIVATE NIM_CONST tyArray__3e9cSg3jx9axcXuVn9c7R2rzg plugins__pluginsZactive_u6 = {{{6, (NimStrPayload*)&TM__HRYz2qtwWw9bfj4ZuGqghLw_2},
{6, (NimStrPayload*)&TM__HRYz2qtwWw9bfj4ZuGqghLw_3},
{10, (NimStrPayload*)&TM__HRYz2qtwWw9bfj4ZuGqghLw_4},
iterToProcImpl__pluginsZitersgen_u7}
,
{{6, (NimStrPayload*)&TM__HRYz2qtwWw9bfj4ZuGqghLw_2},
{6, (NimStrPayload*)&TM__HRYz2qtwWw9bfj4ZuGqghLw_3},
{6, (NimStrPayload*)&TM__HRYz2qtwWw9bfj4ZuGqghLw_5},
semLocals__pluginsZlocals_u7}
}
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
N_LIB_PRIVATE N_NIMCALL(tyProc__8fBHwTGS1kcLGw7rauOooQ, getPlugin__pluginsZactive_u7)(tyObject_IdentCachecolonObjectType___LYhYfW7zHVa6k72gTbQGLw* ic_p0, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* fn_p1) {
	tyProc__8fBHwTGS1kcLGw7rauOooQ result;
NIM_BOOL* nimErr_;
	nimfr_("getPlugin", "D:\\nim\\compiler\\plugins\\active.nim");
{nimErr_ = nimErrorFlag();
	result = (tyProc__8fBHwTGS1kcLGw7rauOooQ)0;
	{
		tyTuple__PJjtAPjw9cXungyri9aChLLA p;
		NI i;
		nimZeroMem((void*)(&p), sizeof(tyTuple__PJjtAPjw9cXungyri9aChLLA));
		nimlf_(38, "D:\\nim\\lib\\system\\iterators.nim");
		i = ((NI)0);
		{
			nimln_(39);
			while (1) {
				NI TM__HRYz2qtwWw9bfj4ZuGqghLw_6;
				nimlf_(22, "D:\\nim\\compiler\\plugins\\active.nim");
				p = plugins__pluginsZactive_u6[(i)- 0];
				{
					NIM_BOOL T6_;
					nimln_(23);
					T6_ = (NIM_BOOL)0;
					T6_ = pluginMatches__pluginsupport_u18(ic_p0, (&p), fn_p1);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					if (!T6_) goto LA7_;
					nimln_(21);
					nimln_(23);
					result = p.Field3;
					goto BeforeRet_;
				}
LA7_: ;
				nimlf_(41, "D:\\nim\\lib\\system\\iterators.nim");
				{
					if (!(((NI)1) <= ((NI) (i)))) goto LA11_;
					goto LA2;
				}
LA11_: ;
				nimln_(42);
				if (nimAddInt(i, ((NI)1), &TM__HRYz2qtwWw9bfj4ZuGqghLw_6)) { raiseOverflow(); goto BeforeRet_;
				};
				if (TM__HRYz2qtwWw9bfj4ZuGqghLw_6 < 0 || TM__HRYz2qtwWw9bfj4ZuGqghLw_6 > 1){ raiseOverflow(); goto BeforeRet_;
				}
				i = (NI)(TM__HRYz2qtwWw9bfj4ZuGqghLw_6);
			}
		} LA2: ;
	}
	nimlf_(24, "D:\\nim\\compiler\\plugins\\active.nim");
	nimln_(21);
	nimln_(24);
	result = NIM_NIL;
	goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}