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

typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_RangeDefect__WyH4kDTTwxjzV9brTg3MIsg tyObject_RangeDefect__WyH4kDTTwxjzV9brTg3MIsg;
typedef struct tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw;
typedef struct tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ tySequence__OC4OxQhfzCBuUQxMi5llBQ;
typedef struct tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content;
typedef struct tyObject_GcEnv__QjGykddUfJIPRbAOaJI9bUQ tyObject_GcEnv__QjGykddUfJIPRbAOaJI9bUQ;
typedef struct tyObject_CellSeq__HiBrB07fIRJZr7JYh5xuKg tyObject_CellSeq__HiBrB07fIRJZr7JYh5xuKg;
typedef struct tyTuple__N4J9cV4JZGem3ljqqj5rT0Q tyTuple__N4J9cV4JZGem3ljqqj5rT0Q;
typedef struct tyObject_CellSeq__BOk7ic6L7NfTl6S6mZpEtw tyObject_CellSeq__BOk7ic6L7NfTl6S6mZpEtw;
typedef struct tyTuple__3pGbhq1v4f9ajRLJHtTEuYg tyTuple__3pGbhq1v4f9ajRLJHtTEuYg;
typedef struct tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ;
typedef struct tyObject_OverflowDefect__PwxB1gj2RB604hR0Dczyzg tyObject_OverflowDefect__PwxB1gj2RB604hR0Dczyzg;
typedef struct tyObject_ArithmeticDefect__z0TlOFLs0DgTdP9a5ciPm5Q tyObject_ArithmeticDefect__z0TlOFLs0DgTdP9a5ciPm5Q;
typedef struct tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A;
typedef struct tyObject_KeyError__ROhpOfY5yunP0RdSDY4C9cg tyObject_KeyError__ROhpOfY5yunP0RdSDY4C9cg;
typedef struct tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg;
typedef struct tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA;
typedef struct tyObject_FieldDefect__e6AN4WVr2NKlqdq8x5qlFQ tyObject_FieldDefect__e6AN4WVr2NKlqdq8x5qlFQ;
typedef struct tyObject_DivByZeroDefect__59bEA3GZnnoahAU0veRzG6A tyObject_DivByZeroDefect__59bEA3GZnnoahAU0veRzG6A;
typedef struct tyObject_OSError__364R2OEHwjKXXXZy8WY36g tyObject_OSError__364R2OEHwjKXXXZy8WY36g;
typedef struct tyObject_IOError__Vy6h1gTZNMhIMVGxEYGYlg tyObject_IOError__Vy6h1gTZNMhIMVGxEYGYlg;
typedef struct tyObject_EOFError__FAA9ashm5tcoAUjV9adjIF0Q tyObject_EOFError__FAA9ashm5tcoAUjV9adjIF0Q;
typedef struct tyObject_ObjectConversionDefect__4qtxOmDc9byiuSxzwS6BAmw tyObject_ObjectConversionDefect__4qtxOmDc9byiuSxzwS6BAmw;
typedef struct tyObject_ReraiseDefect__64k6GXy1HJpPQ8jVz2xjTw tyObject_ReraiseDefect__64k6GXy1HJpPQ8jVz2xjTw;
typedef struct tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw;
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
struct tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw {
	NI rc;
	NI rootIdx;
};
struct RootObj {
TNimTypeV2* m_type;
};
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
struct tySequence__OC4OxQhfzCBuUQxMi5llBQ {
  NI len; tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content* p;
};
struct Exception {
  RootObj Sup;
	Exception* parent;
	NCSTRING name;
	NimStringV2 message;
	tySequence__OC4OxQhfzCBuUQxMi5llBQ trace;
	Exception* up;
};
struct tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg {
  Exception Sup;
};
struct tyObject_RangeDefect__WyH4kDTTwxjzV9brTg3MIsg {
  tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg Sup;
};
struct tyObject_CellSeq__HiBrB07fIRJZr7JYh5xuKg {
	NI len;
	NI cap;
	tyTuple__N4J9cV4JZGem3ljqqj5rT0Q* d;
};
struct tyObject_CellSeq__BOk7ic6L7NfTl6S6mZpEtw {
	NI len;
	NI cap;
	tyTuple__3pGbhq1v4f9ajRLJHtTEuYg* d;
};
struct tyObject_GcEnv__QjGykddUfJIPRbAOaJI9bUQ {
	tyObject_CellSeq__HiBrB07fIRJZr7JYh5xuKg traceStack;
	tyObject_CellSeq__BOk7ic6L7NfTl6S6mZpEtw toFree;
	NI freed;
	NI touched;
	NI edges;
	NI rcSum;
	NIM_BOOL keepThreshold;
};
struct tyTuple__N4J9cV4JZGem3ljqqj5rT0Q {
void** Field0;
TNimTypeV2* Field1;
};
typedef tyTuple__N4J9cV4JZGem3ljqqj5rT0Q tyUncheckedArray__72XmdLy0QAaMtx66AmNKfA[1];
struct tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ {
  tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg Sup;
};
struct tyObject_ArithmeticDefect__z0TlOFLs0DgTdP9a5ciPm5Q {
  tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg Sup;
};
struct tyObject_OverflowDefect__PwxB1gj2RB604hR0Dczyzg {
  tyObject_ArithmeticDefect__z0TlOFLs0DgTdP9a5ciPm5Q Sup;
};
struct tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A {
  tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg Sup;
};
struct tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA {
  Exception Sup;
};
struct tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg {
  tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA Sup;
};
struct tyObject_KeyError__ROhpOfY5yunP0RdSDY4C9cg {
  tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg Sup;
};
struct tyObject_FieldDefect__e6AN4WVr2NKlqdq8x5qlFQ {
  tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg Sup;
};
struct tyObject_DivByZeroDefect__59bEA3GZnnoahAU0veRzG6A {
  tyObject_ArithmeticDefect__z0TlOFLs0DgTdP9a5ciPm5Q Sup;
};
struct tyObject_OSError__364R2OEHwjKXXXZy8WY36g {
  tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA Sup;
	NI32 errorCode;
};
struct tyObject_IOError__Vy6h1gTZNMhIMVGxEYGYlg {
  tyObject_CatchableError__gR37KDrjbfwtwdSWyHspqA Sup;
};
struct tyObject_EOFError__FAA9ashm5tcoAUjV9adjIF0Q {
  tyObject_IOError__Vy6h1gTZNMhIMVGxEYGYlg Sup;
};
struct tyObject_ObjectConversionDefect__4qtxOmDc9byiuSxzwS6BAmw {
  tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg Sup;
};
struct tyObject_ReraiseDefect__64k6GXy1HJpPQ8jVz2xjTw {
  tyObject_Defect__nFH7wdXggNSfzUfuWpvQKg Sup;
};
struct tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw {
	NCSTRING procname;
	NI line;
	NCSTRING filename;
};


#ifndef tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content_PP
#define tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content_PP
struct tySequence__OC4OxQhfzCBuUQxMi5llBQ_Content { NI cap; tyObject_StackTraceEntry__cwz3X1atIa8ET8VanDA2pw data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4376)(tyObject_RangeDefect__WyH4kDTTwxjzV9brTg3MIsg* dest_p0);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p_p0);
static N_INLINE(NI, minuspercent___system_u790)(NI x_p0, NI y_p1);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4312)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__system_u3269)(NIM_BOOL isDestroyAction_p0, tyObject_RefHeader__b9cZ5ThQEAqSv7VLAQu0wEw* s_p1, TNimTypeV2* desc_p2);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u71)(tySequence__OC4OxQhfzCBuUQxMi5llBQ* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4385)(tyObject_RangeDefect__WyH4kDTTwxjzV9brTg3MIsg* dest_p0, void* env_p1);
static N_INLINE(void, nimTraceRefDyn)(void* q_p0, void* env_p1);
static N_INLINE(void, add__system_u2766)(tyObject_CellSeq__HiBrB07fIRJZr7JYh5xuKg* s_p0, void** c_p1, TNimTypeV2* t_p2);
N_LIB_PRIVATE N_NOCONV(void*, allocImpl__system_u1736)(NI size_p0);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NOCONV(void, dealloc)(void* p_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZassertions_u80)(tySequence__OC4OxQhfzCBuUQxMi5llBQ* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4433)(tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4442)(tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4787)(tyObject_OverflowDefect__PwxB1gj2RB604hR0Dczyzg* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4796)(tyObject_OverflowDefect__PwxB1gj2RB604hR0Dczyzg* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u228)(tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZassertions_u237)(tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstrtabs_u336)(tyObject_KeyError__ROhpOfY5yunP0RdSDY4C9cg* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZstrtabs_u345)(tyObject_KeyError__ROhpOfY5yunP0RdSDY4C9cg* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4511)(tyObject_FieldDefect__e6AN4WVr2NKlqdq8x5qlFQ* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4520)(tyObject_FieldDefect__e6AN4WVr2NKlqdq8x5qlFQ* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4841)(tyObject_DivByZeroDefect__59bEA3GZnnoahAU0veRzG6A* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4850)(tyObject_DivByZeroDefect__59bEA3GZnnoahAU0veRzG6A* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZparseutils_u330)(tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZparseutils_u339)(tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZoserrors_u51)(tyObject_OSError__364R2OEHwjKXXXZy8WY36g* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZoserrors_u60)(tyObject_OSError__364R2OEHwjKXXXZy8WY36g* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u7950)(tyObject_IOError__Vy6h1gTZNMhIMVGxEYGYlg* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u7959)(tyObject_IOError__Vy6h1gTZNMhIMVGxEYGYlg* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZsyncio_u102)(tyObject_EOFError__FAA9ashm5tcoAUjV9adjIF0Q* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZsyncio_u111)(tyObject_EOFError__FAA9ashm5tcoAUjV9adjIF0Q* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4630)(tyObject_ObjectConversionDefect__4qtxOmDc9byiuSxzwS6BAmw* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4639)(tyObject_ObjectConversionDefect__4qtxOmDc9byiuSxzwS6BAmw* dest_p0, void* env_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4206)(tyObject_ReraiseDefect__64k6GXy1HJpPQ8jVz2xjTw* dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4215)(tyObject_ReraiseDefect__64k6GXy1HJpPQ8jVz2xjTw* dest_p0, void* env_p1);
N_LIB_PRIVATE TNimTypeV2 NTIv2__WyH4kDTTwxjzV9brTg3MIsg_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__NJdlNxUmKiqDB6nnzMNJbQ_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__PwxB1gj2RB604hR0Dczyzg_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__3Nf0agRDkt9a349bK2N7oP7A_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__ROhpOfY5yunP0RdSDY4C9cg_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__e6AN4WVr2NKlqdq8x5qlFQ_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__59bEA3GZnnoahAU0veRzG6A_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__2gYx9cExnvfgU7mT8iWh7Mg_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__364R2OEHwjKXXXZy8WY36g_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__Vy6h1gTZNMhIMVGxEYGYlg_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__FAA9ashm5tcoAUjV9adjIF0Q_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__4qtxOmDc9byiuSxzwS6BAmw_;
N_LIB_PRIVATE TNimTypeV2 NTIv2__64k6GXy1HJpPQ8jVz2xjTw_;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern TFrame* framePtr__system_u3761;
extern NIM_BOOL nimInErrorMode__system_u4115;
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_3[4] = {3701606400, 1285336064, 1375453440, 569937920};
N_LIB_PRIVATE TNimTypeV2 NTIv2__WyH4kDTTwxjzV9brTg3MIsg_ = {.destructor = (void*)eqdestroy___system_u4376, .size = sizeof(tyObject_RangeDefect__WyH4kDTTwxjzV9brTg3MIsg), .align = (NI16) NIM_ALIGNOF(tyObject_RangeDefect__WyH4kDTTwxjzV9brTg3MIsg), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_3, .traceImpl = (void*)eqtrace___system_u4385, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_8[4] = {3701606400, 1285336064, 1375453440, 2539992832};
N_LIB_PRIVATE TNimTypeV2 NTIv2__NJdlNxUmKiqDB6nnzMNJbQ_ = {.destructor = (void*)eqdestroy___system_u4433, .size = sizeof(tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ), .align = (NI16) NIM_ALIGNOF(tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_8, .traceImpl = (void*)eqtrace___system_u4442, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_9[5] = {3701606400, 1285336064, 1375453440, 1155872768, 205641216};
N_LIB_PRIVATE TNimTypeV2 NTIv2__PwxB1gj2RB604hR0Dczyzg_ = {.destructor = (void*)eqdestroy___system_u4787, .size = sizeof(tyObject_OverflowDefect__PwxB1gj2RB604hR0Dczyzg), .align = (NI16) NIM_ALIGNOF(tyObject_OverflowDefect__PwxB1gj2RB604hR0Dczyzg), .depth = 4, .display = TM__TzI3paKQY09cLjc9cmCvur3A_9, .traceImpl = (void*)eqtrace___system_u4796, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_10[4] = {3701606400, 1285336064, 1375453440, 3623119360};
N_LIB_PRIVATE TNimTypeV2 NTIv2__3Nf0agRDkt9a349bK2N7oP7A_ = {.destructor = (void*)eqdestroy___stdZassertions_u228, .size = sizeof(tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A), .align = (NI16) NIM_ALIGNOF(tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_10, .traceImpl = (void*)eqtrace___stdZassertions_u237, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_11[5] = {3701606400, 1285336064, 502999040, 103939072, 3899209984};
N_LIB_PRIVATE TNimTypeV2 NTIv2__ROhpOfY5yunP0RdSDY4C9cg_ = {.destructor = (void*)eqdestroy___pureZstrtabs_u336, .size = sizeof(tyObject_KeyError__ROhpOfY5yunP0RdSDY4C9cg), .align = (NI16) NIM_ALIGNOF(tyObject_KeyError__ROhpOfY5yunP0RdSDY4C9cg), .depth = 4, .display = TM__TzI3paKQY09cLjc9cmCvur3A_11, .traceImpl = (void*)eqtrace___pureZstrtabs_u345, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_12[4] = {3701606400, 1285336064, 1375453440, 2685264128};
N_LIB_PRIVATE TNimTypeV2 NTIv2__e6AN4WVr2NKlqdq8x5qlFQ_ = {.destructor = (void*)eqdestroy___system_u4511, .size = sizeof(tyObject_FieldDefect__e6AN4WVr2NKlqdq8x5qlFQ), .align = (NI16) NIM_ALIGNOF(tyObject_FieldDefect__e6AN4WVr2NKlqdq8x5qlFQ), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_12, .traceImpl = (void*)eqtrace___system_u4520, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_13[5] = {3701606400, 1285336064, 1375453440, 1155872768, 3774929920};
N_LIB_PRIVATE TNimTypeV2 NTIv2__59bEA3GZnnoahAU0veRzG6A_ = {.destructor = (void*)eqdestroy___system_u4841, .size = sizeof(tyObject_DivByZeroDefect__59bEA3GZnnoahAU0veRzG6A), .align = (NI16) NIM_ALIGNOF(tyObject_DivByZeroDefect__59bEA3GZnnoahAU0veRzG6A), .depth = 4, .display = TM__TzI3paKQY09cLjc9cmCvur3A_13, .traceImpl = (void*)eqtrace___system_u4850, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_14[4] = {3701606400, 1285336064, 502999040, 103939072};
N_LIB_PRIVATE TNimTypeV2 NTIv2__2gYx9cExnvfgU7mT8iWh7Mg_ = {.destructor = (void*)eqdestroy___pureZparseutils_u330, .size = sizeof(tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg), .align = (NI16) NIM_ALIGNOF(tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_14, .traceImpl = (void*)eqtrace___pureZparseutils_u339, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_15[4] = {3701606400, 1285336064, 502999040, 2920404992};
N_LIB_PRIVATE TNimTypeV2 NTIv2__364R2OEHwjKXXXZy8WY36g_ = {.destructor = (void*)eqdestroy___stdZoserrors_u51, .size = sizeof(tyObject_OSError__364R2OEHwjKXXXZy8WY36g), .align = (NI16) NIM_ALIGNOF(tyObject_OSError__364R2OEHwjKXXXZy8WY36g), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_15, .traceImpl = (void*)eqtrace___stdZoserrors_u60, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_16[4] = {3701606400, 1285336064, 502999040, 782358016};
N_LIB_PRIVATE TNimTypeV2 NTIv2__Vy6h1gTZNMhIMVGxEYGYlg_ = {.destructor = (void*)eqdestroy___system_u7950, .size = sizeof(tyObject_IOError__Vy6h1gTZNMhIMVGxEYGYlg), .align = (NI16) NIM_ALIGNOF(tyObject_IOError__Vy6h1gTZNMhIMVGxEYGYlg), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_16, .traceImpl = (void*)eqtrace___system_u7959, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_17[5] = {3701606400, 1285336064, 502999040, 782358016, 4043264};
N_LIB_PRIVATE TNimTypeV2 NTIv2__FAA9ashm5tcoAUjV9adjIF0Q_ = {.destructor = (void*)eqdestroy___stdZsyncio_u102, .size = sizeof(tyObject_EOFError__FAA9ashm5tcoAUjV9adjIF0Q), .align = (NI16) NIM_ALIGNOF(tyObject_EOFError__FAA9ashm5tcoAUjV9adjIF0Q), .depth = 4, .display = TM__TzI3paKQY09cLjc9cmCvur3A_17, .traceImpl = (void*)eqtrace___stdZsyncio_u111, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_18[4] = {3701606400, 1285336064, 1375453440, 2876324352};
N_LIB_PRIVATE TNimTypeV2 NTIv2__4qtxOmDc9byiuSxzwS6BAmw_ = {.destructor = (void*)eqdestroy___system_u4630, .size = sizeof(tyObject_ObjectConversionDefect__4qtxOmDc9byiuSxzwS6BAmw), .align = (NI16) NIM_ALIGNOF(tyObject_ObjectConversionDefect__4qtxOmDc9byiuSxzwS6BAmw), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_18, .traceImpl = (void*)eqtrace___system_u4639, .flags = 0};
static NIM_CONST NU32 TM__TzI3paKQY09cLjc9cmCvur3A_19[4] = {3701606400, 1285336064, 1375453440, 2302286080};
N_LIB_PRIVATE TNimTypeV2 NTIv2__64k6GXy1HJpPQ8jVz2xjTw_ = {.destructor = (void*)eqdestroy___system_u4206, .size = sizeof(tyObject_ReraiseDefect__64k6GXy1HJpPQ8jVz2xjTw), .align = (NI16) NIM_ALIGNOF(tyObject_ReraiseDefect__64k6GXy1HJpPQ8jVz2xjTw), .depth = 3, .display = TM__TzI3paKQY09cLjc9cmCvur3A_19, .traceImpl = (void*)eqtrace___system_u4215, .flags = 0};
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
static N_INLINE(NI, minuspercent___system_u790)(NI x_p0, NI y_p1) {
	NI result;
	nimfr_("-%", "D:\\nim\\lib\\system\\arithmetics.nim");
	result = (NI)0;
	nimlf_(363, "D:\\nim\\lib\\system\\arithmetics.nim");
	nimln_(364);
	nimln_(368);
	result = ((NI) ((NU)((NU32)(((NU) (x_p0))) - (NU32)(((NU) (y_p1))))));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4115);
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
		T5_ = minuspercent___system_u790(((NI) (ptrdiff_t) (p_p0)), ((NI)8));
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
			NI TM__TzI3paKQY09cLjc9cmCvur3A_2;
			nimln_(484);
			if (nimSubInt((*cell).rc, ((NI)16), &TM__TzI3paKQY09cLjc9cmCvur3A_2)) { raiseOverflow(); goto BeforeRet_;
			};
			(*cell).rc = (NI)(TM__TzI3paKQY09cLjc9cmCvur3A_2);
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
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4376)(tyObject_RangeDefect__WyH4kDTTwxjzV9brTg3MIsg* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest_p0, source_p1, ((size_t) (size_p2)));
}
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2) {
	nimCopyMem(dest_p0, source_p1, size_p2);
}
static N_INLINE(void, add__system_u2766)(tyObject_CellSeq__HiBrB07fIRJZr7JYh5xuKg* s_p0, void** c_p1, TNimTypeV2* t_p2) {
	void** colontmp_;
	TNimTypeV2* colontmp__2;
	NI TM__TzI3paKQY09cLjc9cmCvur3A_7;
	nimfr_("add", "D:\\nim\\lib\\system\\cellseqs_v2.nim");
{	nimlf_(20, "D:\\nim\\lib\\system\\cellseqs_v2.nim");
	{
		NI TM__TzI3paKQY09cLjc9cmCvur3A_4;
		tyTuple__N4J9cV4JZGem3ljqqj5rT0Q* d;
		NI TM__TzI3paKQY09cLjc9cmCvur3A_5;
		void* T5_;
		NI TM__TzI3paKQY09cLjc9cmCvur3A_6;
		if (!((*s_p0).cap <= (*s_p0).len)) goto LA3_;
		nimln_(21);
		if (nimMulInt((*s_p0).cap, ((NI)3), &TM__TzI3paKQY09cLjc9cmCvur3A_4)) { raiseOverflow(); goto BeforeRet_;
		};
		(*s_p0).cap = (NI)((NI)(TM__TzI3paKQY09cLjc9cmCvur3A_4) / ((NI)2));
		nimln_(25);
		if (nimMulInt((*s_p0).cap, ((NI)8), &TM__TzI3paKQY09cLjc9cmCvur3A_5)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__TzI3paKQY09cLjc9cmCvur3A_5)) < ((NI)0) || ((NI)(TM__TzI3paKQY09cLjc9cmCvur3A_5)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__TzI3paKQY09cLjc9cmCvur3A_5), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		T5_ = (void*)0;
		T5_ = allocImpl__system_u1736(((NI) ((NI)(TM__TzI3paKQY09cLjc9cmCvur3A_5))));
		d = ((tyTuple__N4J9cV4JZGem3ljqqj5rT0Q*) (T5_));
		nimln_(26);
		if (nimMulInt((*s_p0).len, ((NI)8), &TM__TzI3paKQY09cLjc9cmCvur3A_6)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__TzI3paKQY09cLjc9cmCvur3A_6)) < ((NI)0) || ((NI)(TM__TzI3paKQY09cLjc9cmCvur3A_6)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__TzI3paKQY09cLjc9cmCvur3A_6), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) (d)), ((void*) ((*s_p0).d)), ((NI) ((NI)(TM__TzI3paKQY09cLjc9cmCvur3A_6))));
		nimln_(30);
		dealloc(((void*) ((*s_p0).d)));
		nimln_(31);
		(*s_p0).d = d;
	}
LA3_: ;
	nimln_(33);
	colontmp_ = c_p1;
	colontmp__2 = t_p2;
	(*s_p0).d[(*s_p0).len].Field0 = colontmp_;
	(*s_p0).d[(*s_p0).len].Field1 = colontmp__2;
	nimln_(34);
	if (nimAddInt((*s_p0).len, ((NI)1), &TM__TzI3paKQY09cLjc9cmCvur3A_7)) { raiseOverflow(); goto BeforeRet_;
	};
	(*s_p0).len = (NI)(TM__TzI3paKQY09cLjc9cmCvur3A_7);
	}
BeforeRet_: ;
	popFrame();
}
static N_INLINE(void, nimTraceRefDyn)(void* q_p0, void* env_p1) {
	void** p;
	nimfr_("nimTraceRefDyn", "D:\\nim\\lib\\system\\orc.nim");
	nimlf_(132, "D:\\nim\\lib\\system\\orc.nim");
	p = ((void**) (q_p0));
	nimln_(133);
	{
		tyObject_GcEnv__QjGykddUfJIPRbAOaJI9bUQ* j;
		if (!!(((*p) == NIM_NIL))) goto LA3_;
		nimln_(134);
		j = ((tyObject_GcEnv__QjGykddUfJIPRbAOaJI9bUQ*) (env_p1));
		nimln_(135);
		add__system_u2766((&(*j).traceStack), p, (*((TNimTypeV2**) ((*p)))));
	}
LA3_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4385)(tyObject_RangeDefect__WyH4kDTTwxjzV9brTg3MIsg* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4433)(tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4442)(tyObject_IndexDefect__NJdlNxUmKiqDB6nnzMNJbQ* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4787)(tyObject_OverflowDefect__PwxB1gj2RB604hR0Dczyzg* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4796)(tyObject_OverflowDefect__PwxB1gj2RB604hR0Dczyzg* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u228)(tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZassertions_u237)(tyObject_AssertionDefect__3Nf0agRDkt9a349bK2N7oP7A* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZstrtabs_u336)(tyObject_KeyError__ROhpOfY5yunP0RdSDY4C9cg* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZstrtabs_u345)(tyObject_KeyError__ROhpOfY5yunP0RdSDY4C9cg* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4511)(tyObject_FieldDefect__e6AN4WVr2NKlqdq8x5qlFQ* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4520)(tyObject_FieldDefect__e6AN4WVr2NKlqdq8x5qlFQ* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4841)(tyObject_DivByZeroDefect__59bEA3GZnnoahAU0veRzG6A* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4850)(tyObject_DivByZeroDefect__59bEA3GZnnoahAU0veRzG6A* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___pureZparseutils_u330)(tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___pureZparseutils_u339)(tyObject_ValueError__2gYx9cExnvfgU7mT8iWh7Mg* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZoserrors_u51)(tyObject_OSError__364R2OEHwjKXXXZy8WY36g* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZoserrors_u60)(tyObject_OSError__364R2OEHwjKXXXZy8WY36g* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u7950)(tyObject_IOError__Vy6h1gTZNMhIMVGxEYGYlg* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u7959)(tyObject_IOError__Vy6h1gTZNMhIMVGxEYGYlg* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZsyncio_u102)(tyObject_EOFError__FAA9ashm5tcoAUjV9adjIF0Q* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___stdZsyncio_u111)(tyObject_EOFError__FAA9ashm5tcoAUjV9adjIF0Q* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4630)(tyObject_ObjectConversionDefect__4qtxOmDc9byiuSxzwS6BAmw* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4639)(tyObject_ObjectConversionDefect__4qtxOmDc9byiuSxzwS6BAmw* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___system_u4206)(tyObject_ReraiseDefect__64k6GXy1HJpPQ8jVz2xjTw* dest_p0) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.parent);
	}
LA4_: ;
	eqdestroy___stdZassertions_u16((&(*dest_p0).Sup.Sup.message));
	eqdestroy___stdZassertions_u71((&(*dest_p0).Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLastCyclicDyn((*dest_p0).Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest_p0).Sup.Sup.up);
	}
LA9_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___system_u4215)(tyObject_ReraiseDefect__64k6GXy1HJpPQ8jVz2xjTw* dest_p0, void* env_p1) {
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.parent, env_p1);
	eqtrace___stdZassertions_u80((&(*dest_p0).Sup.Sup.trace), env_p1);
	nimTraceRefDyn(&(*dest_p0).Sup.Sup.up, env_p1);
}
