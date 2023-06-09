/* Generated by Nim Compiler v1.9.3 */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <unistd.h>
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
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringV2 Field0;
NimStringV2 Field1;
};
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__stdZoserrors_u98)(NI32 errorCode_p0, NimStringV2 additionalInfo_p1);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__stdZoserrors_u101)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___stdZprivateZoscommon_u109)(tyTuple__UV3llMMYFckfui8YMBuUZA* x_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4294)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringV2, mnewString)(NI len_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___stdZassertions_u22)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s_p0, NI newLen_p1);
extern NIM_BOOL nimInErrorMode__system_u4097;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
extern TFrame* framePtr__system_u3743;
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4097);
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
N_LIB_PRIVATE N_NIMCALL(void, createSymlink__stdZprivateZossymlinks_u13)(NimStringV2 src_p0, NimStringV2 dest_p1) {
NIM_BOOL* nimErr_;
	nimfr_("createSymlink", "D:\\nim\\lib\\std\\private\\ossymlinks.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(56, "D:\\nim\\lib\\std\\private\\ossymlinks.nim");
	{
		int T3_;
		NimStringV2 colontmpD_;
		NI32 T7_;
		tyTuple__UV3llMMYFckfui8YMBuUZA T8_;
		T3_ = (int)0;
		T3_ = symlink(nimToCStringConv(src_p0), nimToCStringConv(dest_p1));
		if (!!((T3_ == ((NI32)0)))) goto LA4_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		nimln_(57);
		T7_ = (NI32)0;
		T7_ = osLastError__stdZoserrors_u101();
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		T8_.Field0 = src_p0;
		T8_.Field1 = dest_p1;
		colontmpD_ = dollar___stdZprivateZoscommon_u109((&T8_));
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		raiseOSError__stdZoserrors_u98(T7_, colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			LA6_:;
		}
		{
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA4_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, expandSymlink__stdZprivateZossymlinks_u19)(NimStringV2 symlinkPath_p0) {
	NimStringV2 result;
	NI len;
NIM_BOOL* nimErr_;
	nimfr_("expandSymlink", "D:\\nim\\lib\\std\\private\\ossymlinks.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	nimlf_(69, "D:\\nim\\lib\\std\\private\\ossymlinks.nim");
	result = mnewString(((NI)1024));
	nimln_(70);
	len = readlink(nimToCStringConv(symlinkPath_p0), nimToCStringConv(result), ((NI)1024));
	nimln_(71);
	{
		NI32 T5_;
		if (!(len < ((NI)0))) goto LA3_;
		nimln_(72);
		T5_ = (NI32)0;
		T5_ = osLastError__stdZoserrors_u101();
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		raiseOSError__stdZoserrors_u98(T5_, symlinkPath_p0);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	nimln_(73);
	{
		NI TM__t9biqTXYx29brpMWSIVql20w_2;
		NimStringV2 T10_;
		if (!(((NI)1024) < len)) goto LA8_;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		nimlf_(74, "D:\\nim\\lib\\std\\private\\ossymlinks.nim");
		if (nimAddInt(len, ((NI)1), &TM__t9biqTXYx29brpMWSIVql20w_2)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__t9biqTXYx29brpMWSIVql20w_2)) < ((NI)0) || ((NI)(TM__t9biqTXYx29brpMWSIVql20w_2)) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__t9biqTXYx29brpMWSIVql20w_2), ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
		}
		T10_.len = 0; T10_.p = NIM_NIL;
		T10_ = mnewString(((NI) ((NI)(TM__t9biqTXYx29brpMWSIVql20w_2))));
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqsink___stdZassertions_u22((&result), T10_);
		nimlf_(75, "D:\\nim\\lib\\std\\private\\ossymlinks.nim");
		len = readlink(nimToCStringConv(symlinkPath_p0), nimToCStringConv(result), len);
	}
LA8_: ;
	nimln_(76);
	if ((len) < ((NI)0) || (len) > ((NI)IL64(9223372036854775807))){ raiseRangeErrorI(len, ((NI)0), ((NI)IL64(9223372036854775807))); goto BeforeRet_;
	}
	setLengthStrV2((&result), ((NI) (len)));
	}
BeforeRet_: ;
	popFrame();
	return result;
}
