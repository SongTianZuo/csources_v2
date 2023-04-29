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

typedef struct tyObject_SystemInfo__szF9cGFb29cTzVFH0hVJiNrw tyObject_SystemInfo__szF9cGFb29cTzVFH0hVJiNrw;
struct tyObject_SystemInfo__szF9cGFb29cTzVFH0hVJiNrw {
	NU32 u1;
	NU32 dwPageSize;
	void* lpMinimumApplicationAddress;
	void* lpMaximumApplicationAddress;
	NU32* dwActiveProcessorMask;
	NU32 dwNumberOfProcessors;
	NU32 dwProcessorType;
	NU32 dwAllocationGranularity;
	NU16 wProcessorLevel;
	NU16 wProcessorRevision;
};
typedef N_STDCALL_PTR(void, tyProc__hsFVEnw9cfo1g9a7Q75AnMSQ) (tyObject_SystemInfo__szF9cGFb29cTzVFH0hVJiNrw* lpSystemInfo_p0);
static N_INLINE(void, nimZeroMem)(void* p_p0, NI size_p1);
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
extern NIM_BOOL nimInErrorMode__system_u4097;
extern tyProc__hsFVEnw9cfo1g9a7Q75AnMSQ Dl_2348810252_;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
static N_INLINE(void, nimSetMem__systemZmemory_u7)(void* a_p0, int v_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a_p0, v_p1, ((size_t) (size_p2)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4097);
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
N_LIB_PRIVATE N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result;
	tyObject_SystemInfo__szF9cGFb29cTzVFH0hVJiNrw si;
	nimfr_("countProcessors", "D:\\nim\\lib\\pure\\concurrency\\cpuinfo.nim");
	result = (NI)0;
	nimZeroMem((void*)(&si), sizeof(tyObject_SystemInfo__szF9cGFb29cTzVFH0hVJiNrw));
	nimlf_(62, "D:\\nim\\lib\\pure\\concurrency\\cpuinfo.nim");
	Dl_2348810252_((&si));
	nimln_(63);
	result = ((NI) (si.dwNumberOfProcessors));
	nimln_(89);
	{
		if (!(result <= ((NI)0))) goto LA3_;
		result = ((NI)0);
	}
LA3_: ;
	popFrame();
	return result;
}
