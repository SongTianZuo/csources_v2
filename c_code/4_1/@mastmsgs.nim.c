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
typedef struct tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw;
typedef struct tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw;
typedef struct tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg;
typedef struct tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA;
typedef struct tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ;
typedef struct tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg;
typedef struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA;
typedef struct tyObject_TLoc__uPq8MyfraByuDcxcywjdTg tyObject_TLoc__uPq8MyfraByuDcxcywjdTg;
typedef struct tyObject_TLib__D3tgh5eiXMEtvqp1Qgv3cQ tyObject_TLib__D3tgh5eiXMEtvqp1Qgv3cQ;
typedef struct tyObject_Target__hsKrm4QXgGbK1Pq5KPccJQ tyObject_Target__hsKrm4QXgGbK1Pq5KPccJQ;
typedef struct tyObject_StringTableObj__eQlzBfCID7uSzbD7mP9cuYw tyObject_StringTableObj__eQlzBfCID7uSzbD7mP9cuYw;
typedef struct tyObject_MsgConfig__8adZvkrggpoMFXAYi0CeGg tyObject_MsgConfig__8adZvkrggpoMFXAYi0CeGg;
typedef struct tySequence__iivkFheiaN1lMy9aP9cChhQg tySequence__iivkFheiaN1lMy9aP9cChhQg;
typedef struct tySequence__iivkFheiaN1lMy9aP9cChhQg_Content tySequence__iivkFheiaN1lMy9aP9cChhQg_Content;
typedef struct tyObject_Table__4ZNca7r7IcU0Erc4ExAxtA tyObject_Table__4ZNca7r7IcU0Erc4ExAxtA;
typedef struct tySequence__7lEisrXlQEzwtUKW5pzRCw tySequence__7lEisrXlQEzwtUKW5pzRCw;
typedef struct tySequence__7lEisrXlQEzwtUKW5pzRCw_Content tySequence__7lEisrXlQEzwtUKW5pzRCw_Content;
typedef struct tySequence__Ec8z80lhwlXDEEuzxp8sbA tySequence__Ec8z80lhwlXDEEuzxp8sbA;
typedef struct tySequence__Ec8z80lhwlXDEEuzxp8sbA_Content tySequence__Ec8z80lhwlXDEEuzxp8sbA_Content;
typedef struct tyObject_HashSet__ETH9aHzKNAaU5daP7mekjgw tyObject_HashSet__ETH9aHzKNAaU5daP7mekjgw;
typedef struct tySequence__4eRCaZmrYLLw2k30GPTiMw tySequence__4eRCaZmrYLLw2k30GPTiMw;
typedef struct tySequence__4eRCaZmrYLLw2k30GPTiMw_Content tySequence__4eRCaZmrYLLw2k30GPTiMw_Content;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
typedef struct tyTuple__47w2DboNEPf69aPgubZdd7Q tyTuple__47w2DboNEPf69aPgubZdd7Q;
typedef struct tySequence__0hikNa9bKRVrWuae0sr9cIBQ tySequence__0hikNa9bKRVrWuae0sr9cIBQ;
typedef struct tySequence__0hikNa9bKRVrWuae0sr9cIBQ_Content tySequence__0hikNa9bKRVrWuae0sr9cIBQ_Content;
typedef struct tyObject_SuggestcolonObjectType___Isv9bWmKRnkSbNs9bLmS29aZg tyObject_SuggestcolonObjectType___Isv9bWmKRnkSbNs9bLmS29aZg;
typedef struct tyObject_ProfileDatacolonObjectType___5DKg4geAFa0PsZ8q9bZG2gw tyObject_ProfileDatacolonObjectType___5DKg4geAFa0PsZ8q9bZG2gw;
typedef struct tySequence__FxQD8iZ8Ixxg89bDGa61Sog tySequence__FxQD8iZ8Ixxg89bDGa61Sog;
typedef struct tySequence__FxQD8iZ8Ixxg89bDGa61Sog_Content tySequence__FxQD8iZ8Ixxg89bDGa61Sog_Content;
typedef struct tyTuple__9byTBcumoD0uDfVmY4l4ExA tyTuple__9byTBcumoD0uDfVmY4l4ExA;
typedef struct tyTuple__xYhUhS7X82rKTqbT9bRfCnw tyTuple__xYhUhS7X82rKTqbT9bRfCnw;
typedef struct tyObject_TFileInfo__4QKBDx9cP0L2u152C4kcxXQ tyObject_TFileInfo__4QKBDx9cP0L2u152C4kcxXQ;
typedef struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw tyTuple__QeWl6B6ffS4pU6WWrtcrDw;
typedef struct tyObject_Cfile__RJduG25jRMB9cnzw5y9a0SqA tyObject_Cfile__RJduG25jRMB9cnzw5y9a0SqA;
struct NimStrPayload {
	NI cap;
	NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
	NI len;
	NimStrPayload* p;
};
typedef NimStringV2 tyArray__Re75IspeoxXy2oCZHwcRrA[2];
typedef NU8 tyEnum_TSymKind__WEw9cZhlaQ0BBcFYZb9b9cOYg;
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
struct RootObj {
TNimTypeV2* m_type;
};
struct tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg {
	NI32 module;
	NI32 item;
};
struct tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA {
  RootObj Sup;
	tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg itemId;
};
typedef NU16 tyEnum_TMagic__kSp6H9c8v2GSNPgE9bRnqBSw;
struct tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA {
	NU16 line;
	NI16 col;
	NI32 fileIndex;
};
typedef NU64 tySet_tyEnum_TSymFlag__KpFDhwzyzhjZdX3UjhPXbQ;
typedef NU32 tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA;
typedef NU8 tyEnum_TLocKind__JpsvRtP32n2RJH3bpHPz8Q;
typedef NU8 tyEnum_TStorageLoc__waio82fFJ4cV9atPhu27DWA;
typedef NU16 tySet_tyEnum_TLocFlag__xD65uqIe72bODUQQ6QCppQ;
struct tyObject_TLoc__uPq8MyfraByuDcxcywjdTg {
	tyEnum_TLocKind__JpsvRtP32n2RJH3bpHPz8Q k;
	tyEnum_TStorageLoc__waio82fFJ4cV9atPhu27DWA storage;
	tySet_tyEnum_TLocFlag__xD65uqIe72bODUQQ6QCppQ flags;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* lode;
	NimStringV2 r;
};
struct tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw {
  tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA Sup;
	tyEnum_TSymKind__WEw9cZhlaQ0BBcFYZb9b9cOYg kind;
union{
struct {	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* gcUnsafetyReason;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* transformedBody;
} _kind_1;
struct {	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* guard;
	NI bitsize;
	NI alignment;
} _kind_2;
};
	tyEnum_TMagic__kSp6H9c8v2GSNPgE9bRnqBSw magic;
	tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* typ;
	tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg* name;
	tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA info;
	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* owner;
	tySet_tyEnum_TSymFlag__KpFDhwzyzhjZdX3UjhPXbQ flags;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* ast;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA options;
	NI position;
	NI32 offset;
	NI32 disamb;
	tyObject_TLoc__uPq8MyfraByuDcxcywjdTg loc;
	tyObject_TLib__D3tgh5eiXMEtvqp1Qgv3cQ* annex;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* constraint;
};
struct tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg {
	NI id;
	NimStringV2 s;
	tyObject_TIdent__9bEjFg0XR5NuJrs6PYmIpkg* next;
	NI h;
};
typedef NU8 tyEnum_TBackend__aWOiLuqu2mHiPrkukrmCtw;
typedef NU8 tyEnum_TSystemCPU__j3jEs0kSUxKqSeQaP9bfTfQ;
typedef NU8 tyEnum_TSystemOS__uMRwLSr9clqwYxQCSPBCldQ;
struct tyObject_Target__hsKrm4QXgGbK1Pq5KPccJQ {
	tyEnum_TSystemCPU__j3jEs0kSUxKqSeQaP9bfTfQ targetCPU;
	tyEnum_TSystemCPU__j3jEs0kSUxKqSeQaP9bfTfQ hostCPU;
	tyEnum_TSystemOS__uMRwLSr9clqwYxQCSPBCldQ targetOS;
	tyEnum_TSystemOS__uMRwLSr9clqwYxQCSPBCldQ hostOS;
	NI intSize;
	NI floatSize;
	NI ptrSize;
	NimStringV2 tnl;
};
typedef NU64 tySet_tyEnum_TGlobalOption__NzfAzt4HjiitM28h8LDW2Q;
typedef NU8 tySet_tyEnum_TErrorOutput__b3NrdhN5GjGoUSneoFERvg;
struct tySequence__iivkFheiaN1lMy9aP9cChhQg {
  NI len; tySequence__iivkFheiaN1lMy9aP9cChhQg_Content* p;
};
struct tySequence__7lEisrXlQEzwtUKW5pzRCw {
  NI len; tySequence__7lEisrXlQEzwtUKW5pzRCw_Content* p;
};
struct tyObject_Table__4ZNca7r7IcU0Erc4ExAxtA {
	tySequence__7lEisrXlQEzwtUKW5pzRCw data;
	NI counter;
};
struct tySequence__Ec8z80lhwlXDEEuzxp8sbA {
  NI len; tySequence__Ec8z80lhwlXDEEuzxp8sbA_Content* p;
};
struct tyObject_MsgConfig__8adZvkrggpoMFXAYi0CeGg {
	tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA trackPos;
	NIM_BOOL trackPosAttached;
	tySet_tyEnum_TErrorOutput__b3NrdhN5GjGoUSneoFERvg errorOutputs;
	tySequence__iivkFheiaN1lMy9aP9cChhQg msgContext;
	tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA lastError;
	tyObject_Table__4ZNca7r7IcU0Erc4ExAxtA filenameToIndexTbl;
	tySequence__Ec8z80lhwlXDEEuzxp8sbA fileInfos;
	NI32 systemFileIdx;
};
typedef NU8 tyEnum_FilenameOption__QBykq5MJiZ6Q2zXn3OgALQ;
typedef NU8 tyEnum_Command__F9a4jE0eLQRsgBf9bPqODqRQ;
typedef NU8 tyEnum_TGCMode__hJMK13HuLpuWZTKCwRFU3Q;
typedef NU8 tyEnum_ExceptionSystem__EOrKVFs1wsQc0nEJYZHRwg;
typedef NU8 tyEnum_SymbolFilesOption__VCCXrb49a3Si9agqIt3cf14w;
struct tySequence__4eRCaZmrYLLw2k30GPTiMw {
  NI len; tySequence__4eRCaZmrYLLw2k30GPTiMw_Content* p;
};
struct tyObject_HashSet__ETH9aHzKNAaU5daP7mekjgw {
	tySequence__4eRCaZmrYLLw2k30GPTiMw data;
	NI counter;
};
typedef NU32 tySet_tyEnum_Feature__M3s7Uywm9c5BlzNIKwZFu3g;
typedef NU8 tySet_tyEnum_LegacyFeature__8EYX9bPgkyVe7BWtCVWXrwQ;
typedef NU8 tyEnum_IdeCmd__9abJolTVrNRUBtm1FQIhxJA;
typedef NU8 tyEnum_TSystemCC__QMG4oDa5CZwoPP3sQejolw;
typedef NU8 tySet_tyEnum_TMsgKind__tsG2CMS5iKcIy9bVp9bugpew[13];
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
};
struct tyTuple__47w2DboNEPf69aPgubZdd7Q {
NI Field0;
NI Field1;
NI Field2;
};
typedef NU8 tySet_tyEnum_StdOrrKind__BTSMCWVnjIgdVCzwOcHR5A;
struct tySequence__0hikNa9bKRVrWuae0sr9cIBQ {
  NI len; tySequence__0hikNa9bKRVrWuae0sr9cIBQ_Content* p;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_SuggestcolonObjectType___Isv9bWmKRnkSbNs9bLmS29aZg* result_p0, void* ClE_0);
void* ClE_0;
} tyProc__m4lZ53Za6LbxtTzrqLsrxA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NimStringV2 output_p0, void* ClE_0);
void* ClE_0;
} tyProc__k2HFjxisIgDALbEUFojxaQ;
typedef NU8 tyEnum_Severity__4FxfpqqIYHhrYtr0gjWl9cw;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* config_p0, tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA info_p1, NimStringV2 msg_p2, tyEnum_Severity__4FxfpqqIYHhrYtr0gjWl9cw severity_p3, void* ClE_0);
void* ClE_0;
} tyProc__qBlOAeWQQBfyw9aQDNrLzdw;
struct tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw {
	tyEnum_TBackend__aWOiLuqu2mHiPrkukrmCtw backend;
	tyObject_Target__hsKrm4QXgGbK1Pq5KPccJQ target;
	NI linesCompiled;
	tySet_tyEnum_TOption__CLLiALVaa7s1J9a3MO8USnA options;
	tySet_tyEnum_TGlobalOption__NzfAzt4HjiitM28h8LDW2Q globalOptions;
	tyObject_StringTableObj__eQlzBfCID7uSzbD7mP9cuYw* macrosToExpand;
	tyObject_StringTableObj__eQlzBfCID7uSzbD7mP9cuYw* arcToExpand;
	tyObject_MsgConfig__8adZvkrggpoMFXAYi0CeGg m;
	tyEnum_FilenameOption__QBykq5MJiZ6Q2zXn3OgALQ filenameOption;
	NimStringV2 unitSep;
	NI evalTemplateCounter;
	NI evalMacroCounter;
	NI8 exitcode;
	tyEnum_Command__F9a4jE0eLQRsgBf9bPqODqRQ cmd;
	NimStringV2 cmdInput;
	NIM_BOOL projectIsCmd;
	NIM_BOOL implicitCmd;
	tyEnum_TGCMode__hJMK13HuLpuWZTKCwRFU3Q selectedGC;
	tyEnum_ExceptionSystem__EOrKVFs1wsQc0nEJYZHRwg exc;
	NIM_BOOL hintProcessingDots;
	NI verbosity;
	NI numberOfProcessors;
	NF lastCmdTime;
	tyEnum_SymbolFilesOption__VCCXrb49a3Si9agqIt3cf14w symbolFiles;
	NI spellSuggestMax;
	tyObject_HashSet__ETH9aHzKNAaU5daP7mekjgw cppDefines;
	NimStringV2 headerFile;
	tySet_tyEnum_Feature__M3s7Uywm9c5BlzNIKwZFu3g features;
	tySet_tyEnum_LegacyFeature__8EYX9bPgkyVe7BWtCVWXrwQ legacyFeatures;
	NimStringV2 arguments;
	tyEnum_IdeCmd__9abJolTVrNRUBtm1FQIhxJA ideCmd;
	NIM_BOOL oldNewlines;
	tyEnum_TSystemCC__QMG4oDa5CZwoPP3sQejolw cCompiler;
	tySet_tyEnum_TMsgKind__tsG2CMS5iKcIy9bVp9bugpew modifiedyNotes;
	tySet_tyEnum_TMsgKind__tsG2CMS5iKcIy9bVp9bugpew cmdlineNotes;
	tySet_tyEnum_TMsgKind__tsG2CMS5iKcIy9bVp9bugpew foreignPackageNotes;
	tySet_tyEnum_TMsgKind__tsG2CMS5iKcIy9bVp9bugpew notes;
	tySet_tyEnum_TMsgKind__tsG2CMS5iKcIy9bVp9bugpew warningAsErrors;
	tySet_tyEnum_TMsgKind__tsG2CMS5iKcIy9bVp9bugpew mainPackageNotes;
	NI mainPackageId;
	NI errorCounter;
	NI hintCounter;
	NI warnCounter;
	NI errorMax;
	NI maxLoopIterationsVM;
	NIM_BOOL isVmTrace;
	tyObject_StringTableObj__eQlzBfCID7uSzbD7mP9cuYw* configVars;
	tyObject_StringTableObj__eQlzBfCID7uSzbD7mP9cuYw* symbols;
	tyObject_StringTableObj__eQlzBfCID7uSzbD7mP9cuYw* packageCache;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ nimblePaths;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ searchPaths;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ lazyPaths;
	NimStringV2 outFile;
	NimStringV2 outDir;
	NimStringV2 jsonBuildFile;
	NimStringV2 prefixDir;
	NimStringV2 libpath;
	NimStringV2 nimcacheDir;
	tyTuple__47w2DboNEPf69aPgubZdd7Q nimStdlibVersion;
	tyObject_StringTableObj__eQlzBfCID7uSzbD7mP9cuYw* dllOverrides;
	tyObject_StringTableObj__eQlzBfCID7uSzbD7mP9cuYw* moduleOverrides;
	tyObject_StringTableObj__eQlzBfCID7uSzbD7mP9cuYw* cfileSpecificOptions;
	NimStringV2 projectName;
	NimStringV2 projectPath;
	NimStringV2 projectFull;
	NIM_BOOL projectIsStdin;
	tySet_tyEnum_StdOrrKind__BTSMCWVnjIgdVCzwOcHR5A lastMsgWasDot;
	NI32 projectMainIdx;
	NI32 projectMainIdx2;
	NimStringV2 command;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ commandArgs;
	NimStringV2 commandLine;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ extraCmds;
	NIM_BOOL keepComments;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ implicitImports;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ implicitIncludes;
	NimStringV2 docSeeSrcUrl;
	NimStringV2 docRoot;
	NimStringV2 docCmd;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ configFiles;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ cIncludes;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ cLibs;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ cLinkedLibs;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ externalToLink;
	NimStringV2 linkOptionsCmd;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ compileOptionsCmd;
	NimStringV2 linkOptions;
	NimStringV2 compileOptions;
	NimStringV2 cCompilerPath;
	tySequence__0hikNa9bKRVrWuae0sr9cIBQ toCompile;
	tyProc__m4lZ53Za6LbxtTzrqLsrxA suggestionResultHook;
	NI suggestVersion;
	NI suggestMaxResults;
	tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA lastLineInfo;
	tyProc__k2HFjxisIgDALbEUFojxaQ writelnHook;
	tyProc__qBlOAeWQQBfyw9aQDNrLzdw structuredErrorHook;
	NimStringV2 cppCustomNamespace;
	NimStringV2 nimMainPrefix;
	tyObject_ProfileDatacolonObjectType___5DKg4geAFa0PsZ8q9bZG2gw* vmProfileData;
	NIM_BOOL expandProgress;
	NI expandLevels;
	NimStringV2 expandNodeResult;
	tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA expandPosition;
};
typedef NU8 tyEnum_TGlobalOption__NzfAzt4HjiitM28h8LDW2Q;
typedef NU8 tyEnum_TTypeKind__ONzdjesiM9beeNBA9aZG5Ghw;
typedef NU8 tyEnum_TCallingConvention__YGBqcuVZk02VOexpHqw79aA;
typedef NU64 tySet_tyEnum_TTypeFlag__ewjLDo034tp3GwWXYLjETg;
struct tySequence__FxQD8iZ8Ixxg89bDGa61Sog {
  NI len; tySequence__FxQD8iZ8Ixxg89bDGa61Sog_Content* p;
};
struct tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ {
  tyObject_TIdObj__Z3xijFQbIKNPn3VtM4umIA Sup;
	tyEnum_TTypeKind__ONzdjesiM9beeNBA9aZG5Ghw kind;
	tyEnum_TCallingConvention__YGBqcuVZk02VOexpHqw79aA callConv;
	tySet_tyEnum_TTypeFlag__ewjLDo034tp3GwWXYLjETg flags;
	tySequence__FxQD8iZ8Ixxg89bDGa61Sog sons;
	tyObject_TNode__eh56PiHZ9a6UcXDEbEav5pA* n;
	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* owner;
	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* sym;
	NI64 size;
	NI16 align;
	NI16 paddingAtEnd;
	tyObject_TLoc__uPq8MyfraByuDcxcywjdTg loc;
	tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* typeInst;
	tyObject_ItemId__abVBMQpfEj0emlzyjx5rDg uniqueId;
};
typedef NU8 tySet_tyEnum_TTypeKind__ONzdjesiM9beeNBA9aZG5Ghw[9];
struct tyTuple__9byTBcumoD0uDfVmY4l4ExA {
tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA Field0;
NimStringV2 Field1;
};


#ifndef tySequence__iivkFheiaN1lMy9aP9cChhQg_Content_PP
#define tySequence__iivkFheiaN1lMy9aP9cChhQg_Content_PP
struct tySequence__iivkFheiaN1lMy9aP9cChhQg_Content { NI cap; tyTuple__9byTBcumoD0uDfVmY4l4ExA data[SEQ_DECL_SIZE];};
#endif

      struct tyTuple__xYhUhS7X82rKTqbT9bRfCnw {
NI Field0;
NimStringV2 Field1;
NI32 Field2;
};


#ifndef tySequence__7lEisrXlQEzwtUKW5pzRCw_Content_PP
#define tySequence__7lEisrXlQEzwtUKW5pzRCw_Content_PP
struct tySequence__7lEisrXlQEzwtUKW5pzRCw_Content { NI cap; tyTuple__xYhUhS7X82rKTqbT9bRfCnw data[SEQ_DECL_SIZE];};
#endif

      struct tyObject_TFileInfo__4QKBDx9cP0L2u152C4kcxXQ {
	NimStringV2 fullPath;
	NimStringV2 projPath;
	NimStringV2 shortName;
	NimStringV2 quotedName;
	NimStringV2 quotedFullName;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ lines;
	NimStringV2 dirtyFile;
	NimStringV2 hash;
	NIM_BOOL dirty;
};


#ifndef tySequence__Ec8z80lhwlXDEEuzxp8sbA_Content_PP
#define tySequence__Ec8z80lhwlXDEEuzxp8sbA_Content_PP
struct tySequence__Ec8z80lhwlXDEEuzxp8sbA_Content { NI cap; tyObject_TFileInfo__4QKBDx9cP0L2u152C4kcxXQ data[SEQ_DECL_SIZE];};
#endif

      struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringV2 Field1;
};


#ifndef tySequence__4eRCaZmrYLLw2k30GPTiMw_Content_PP
#define tySequence__4eRCaZmrYLLw2k30GPTiMw_Content_PP
struct tySequence__4eRCaZmrYLLw2k30GPTiMw_Content { NI cap; tyTuple__QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      typedef NU8 tySet_tyEnum_CfileFlag__b68gbqLCFrcZUavbEz3QRQ;
struct tyObject_Cfile__RJduG25jRMB9cnzw5y9a0SqA {
	NimStringV2 nimname;
	NimStringV2 cname;
	NimStringV2 obj;
	tySet_tyEnum_CfileFlag__b68gbqLCFrcZUavbEz3QRQ flags;
	NimStringV2 customArgs;
};


#ifndef tySequence__0hikNa9bKRVrWuae0sr9cIBQ_Content_PP
#define tySequence__0hikNa9bKRVrWuae0sr9cIBQ_Content_PP
struct tySequence__0hikNa9bKRVrWuae0sr9cIBQ_Content { NI cap; tyObject_Cfile__RJduG25jRMB9cnzw5y9a0SqA data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__FxQD8iZ8Ixxg89bDGa61Sog_Content_PP
#define tySequence__FxQD8iZ8Ixxg89bDGa61Sog_Content_PP
struct tySequence__FxQD8iZ8Ixxg89bDGa61Sog_Content { NI cap; tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatOpenArray)(NimStringV2 formatstr_p0, NimStringV2* a_p1, NI a_p1Len_0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toHumanStr__ast_u7553)(tyEnum_TSymKind__WEw9cZhlaQ0BBcFYZb9b9cOYg kind_p0);
static N_INLINE(NimStringV2, toFileLineCol__msgs_u710)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA info_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toMsgFilename__msgs_u693)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, NI32 fileIdx_p1);
static N_INLINE(void, appendString)(NimStringV2* dest_p0, NimStringV2 src_p1);
static N_INLINE(void, copyMem__system_u1720)(void* dest_p0, void* source_p1, NI size_p2);
static N_INLINE(void, nimCopyMem)(void* dest_p0, void* source_p1, NI size_p2);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i_p0, NI64 a_p1, NI64 b_p2);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s_p0, NI addlen_p1);
static N_INLINE(void, addInt__stdZprivateZdigitsutils_u189)(NimStringV2* result_p0, NI x_p1);
N_LIB_PRIVATE N_NIMCALL(void, addInt__stdZprivateZdigitsutils_u172)(NimStringV2* result_p0, NI64 x_p1);
static N_INLINE(void, nimFrame)(TFrame* s_p0);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__system_u4324)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___stdZassertions_u16)(NimStringV2* dest_p0);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___stdZassertions_u19)(NimStringV2* dest_p0, NimStringV2 src_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatSingleElem)(NimStringV2 formatstr_p0, NimStringV2 a_p1);
N_LIB_PRIVATE N_NIMCALL(void, eqwasMoved___stdZassertions_u13)(NimStringV2* dest_p0);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ*, skipTypes__ast_u5626)(tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* t_p0, tySet_tyEnum_TTypeKind__ONzdjesiM9beeNBA9aZG5Ghw kinds_p1);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toHumanStr__ast_u7583)(tyEnum_TTypeKind__ONzdjesiM9beeNBA9aZG5Ghw kind_p0);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___ast_u3815)(tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ** dest_p0);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___ast_u4793)(tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw** dest_p0, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* src_p1);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i_p0, NI n_p1);
N_LIB_PRIVATE N_NIMCALL(void, addDeclaredLoc__astmsgs_u17)(NimStringV2* result_p0, tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p1, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* sym_p2);
N_LIB_PRIVATE N_NIMCALL(void, addDeclaredLoc__astmsgs_u33)(NimStringV2* result_p0, tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p1, tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* typ_p2);
static const struct {
  NI cap; NIM_CHAR data[20+1];
} TM__XmvBE1RAE2EQK439c31duVQ_2 = { 20 | NIM_STRLIT_FLAG, " [$1 declared in $2]" };
static const NimStringV2 TM__XmvBE1RAE2EQK439c31duVQ_3 = {20, (NimStrPayload*)&TM__XmvBE1RAE2EQK439c31duVQ_2};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__XmvBE1RAE2EQK439c31duVQ_6 = { 1 | NIM_STRLIT_FLAG, "(" };
static const NimStringV2 TM__XmvBE1RAE2EQK439c31duVQ_7 = {1, (NimStrPayload*)&TM__XmvBE1RAE2EQK439c31duVQ_6};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__XmvBE1RAE2EQK439c31duVQ_9 = { 2 | NIM_STRLIT_FLAG, ", " };
static const NimStringV2 TM__XmvBE1RAE2EQK439c31duVQ_10 = {2, (NimStrPayload*)&TM__XmvBE1RAE2EQK439c31duVQ_9};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__XmvBE1RAE2EQK439c31duVQ_12 = { 1 | NIM_STRLIT_FLAG, ")" };
static const NimStringV2 TM__XmvBE1RAE2EQK439c31duVQ_13 = {1, (NimStrPayload*)&TM__XmvBE1RAE2EQK439c31duVQ_12};
static const struct {
  NI cap; NIM_CHAR data[42+1];
} TM__XmvBE1RAE2EQK439c31duVQ_14 = { 42 | NIM_STRLIT_FLAG, "field \'$#\' is not accessible for type \'$#\'" };
static const NimStringV2 TM__XmvBE1RAE2EQK439c31duVQ_15 = {42, (NimStrPayload*)&TM__XmvBE1RAE2EQK439c31duVQ_14};
static const struct {
  NI cap; NIM_CHAR data[30+1];
} TM__XmvBE1RAE2EQK439c31duVQ_16 = { 30 | NIM_STRLIT_FLAG, " [discriminant declared in $#]" };
static const NimStringV2 TM__XmvBE1RAE2EQK439c31duVQ_17 = {30, (NimStrPayload*)&TM__XmvBE1RAE2EQK439c31duVQ_16};
static const struct {
  NI cap; NIM_CHAR data[13+1];
} TM__XmvBE1RAE2EQK439c31duVQ_18 = { 13 | NIM_STRLIT_FLAG, " using \'$# = " };
static const NimStringV2 TM__XmvBE1RAE2EQK439c31duVQ_19 = {13, (NimStrPayload*)&TM__XmvBE1RAE2EQK439c31duVQ_18};
static NIM_CONST tySet_tyEnum_TTypeKind__ONzdjesiM9beeNBA9aZG5Ghw TM__XmvBE1RAE2EQK439c31duVQ_20 = {
0x10, 0xa9, 0xe9, 0x01, 0x00, 0x60, 0xa0, 0x10,
0x00}
;
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__XmvBE1RAE2EQK439c31duVQ_21 = { 4 | NIM_STRLIT_FLAG, " [$1" };
static const NimStringV2 TM__XmvBE1RAE2EQK439c31duVQ_22 = {4, (NimStrPayload*)&TM__XmvBE1RAE2EQK439c31duVQ_21};
static const struct {
  NI cap; NIM_CHAR data[13+1];
} TM__XmvBE1RAE2EQK439c31duVQ_23 = { 13 | NIM_STRLIT_FLAG, " declared in " };
static const NimStringV2 TM__XmvBE1RAE2EQK439c31duVQ_24 = {13, (NimStrPayload*)&TM__XmvBE1RAE2EQK439c31duVQ_23};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__XmvBE1RAE2EQK439c31duVQ_25 = { 1 | NIM_STRLIT_FLAG, "]" };
static const NimStringV2 TM__XmvBE1RAE2EQK439c31duVQ_26 = {1, (NimStrPayload*)&TM__XmvBE1RAE2EQK439c31duVQ_25};
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern TFrame* framePtr__system_u3773;
extern NIM_BOOL nimInErrorMode__system_u4127;
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
		NI TM__XmvBE1RAE2EQK439c31duVQ_4;
		NI TM__XmvBE1RAE2EQK439c31duVQ_5;
		if (!(((NI)0) < src_p1.len)) goto LA3_;
		if (nimAddInt(src_p1.len, ((NI)1), &TM__XmvBE1RAE2EQK439c31duVQ_4)) { raiseOverflow(); goto BeforeRet_;
		};
		if (((NI)(TM__XmvBE1RAE2EQK439c31duVQ_4)) < ((NI)0) || ((NI)(TM__XmvBE1RAE2EQK439c31duVQ_4)) > ((NI)2147483647)){ raiseRangeErrorI((NI)(TM__XmvBE1RAE2EQK439c31duVQ_4), ((NI)0), ((NI)2147483647)); goto BeforeRet_;
		}
		copyMem__system_u1720(((void*) ((&(*(*dest_p0).p).data[(*dest_p0).len]))), ((void*) ((&(*src_p1.p).data[((NI)0)]))), ((NI) ((NI)(TM__XmvBE1RAE2EQK439c31duVQ_4))));
		if (nimAddInt((*dest_p0).len, src_p1.len, &TM__XmvBE1RAE2EQK439c31duVQ_5)) { raiseOverflow(); goto BeforeRet_;
		};
		(*dest_p0).len = (NI)(TM__XmvBE1RAE2EQK439c31duVQ_5);
	}
LA3_: ;
	}
BeforeRet_: ;
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
static N_INLINE(void, addInt__stdZprivateZdigitsutils_u189)(NimStringV2* result_p0, NI x_p1) {
	nimfr_("addInt", "D:\\nim\\lib\\std\\private\\digitsutils.nim");
	nimlf_(115, "D:\\nim\\lib\\std\\private\\digitsutils.nim");
	addInt__stdZprivateZdigitsutils_u172(result_p0, ((NI64) (x_p1)));
	popFrame();
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__system_u4127);
	return result;
}
static N_INLINE(NimStringV2, toFileLineCol__msgs_u710)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, tyObject_TLineInfo__jkXFepOSR2bJfG4x3LVnQA info_p1) {
	NimStringV2 result;
	NimStringV2 colontmpD_;
NIM_BOOL* nimErr_;
	nimfr_("toFileLineCol", "D:\\nim\\compiler\\msgs.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	nimlf_(7, "D:\\nim\\lib\\std\\private\\miscdollars.nim");
	nimlf_(300, "D:\\nim\\compiler\\msgs.nim");
	colontmpD_ = toMsgFilename__msgs_u693(conf_p0, info_p1.fileIndex);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	prepareAdd((&result), colontmpD_.len + 0);
appendString((&result), colontmpD_);
	{
		nimlf_(8, "D:\\nim\\lib\\std\\private\\miscdollars.nim");
		if (!(((NI)0) < ((NI) (info_p1.line)))) goto LA4_;
		nimln_(9);
		prepareAdd((&result), 1);
appendString((&result), TM__XmvBE1RAE2EQK439c31duVQ_7);
		nimln_(10);
		addInt__stdZprivateZdigitsutils_u189((&result), ((NI) (info_p1.line)));
		nimln_(11);
		{
			NI TM__XmvBE1RAE2EQK439c31duVQ_8;
			NI TM__XmvBE1RAE2EQK439c31duVQ_11;
			nimlf_(300, "D:\\nim\\compiler\\msgs.nim");
			if (nimAddInt(((NI) (info_p1.col)), ((NI)1), &TM__XmvBE1RAE2EQK439c31duVQ_8)) { raiseOverflow(); goto LA1_;
			};
			if (!(((NI)0) < (NI)(TM__XmvBE1RAE2EQK439c31duVQ_8))) goto LA8_;
			nimlf_(12, "D:\\nim\\lib\\std\\private\\miscdollars.nim");
			prepareAdd((&result), 2);
appendString((&result), TM__XmvBE1RAE2EQK439c31duVQ_10);
			nimln_(13);
			nimlf_(300, "D:\\nim\\compiler\\msgs.nim");
			if (nimAddInt(((NI) (info_p1.col)), ((NI)1), &TM__XmvBE1RAE2EQK439c31duVQ_11)) { raiseOverflow(); goto LA1_;
			};
			nimlf_(13, "D:\\nim\\lib\\std\\private\\miscdollars.nim");
			addInt__stdZprivateZdigitsutils_u189((&result), (NI)(TM__XmvBE1RAE2EQK439c31duVQ_11));
		}
LA8_: ;
		nimln_(14);
		prepareAdd((&result), 1);
appendString((&result), TM__XmvBE1RAE2EQK439c31duVQ_13);
	}
LA4_: ;
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
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addDeclaredLoc__astmsgs_u17)(NimStringV2* result_p0, tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p1, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* sym_p2) {
	NimStringV2 colontmpD_;
	NimStringV2 colontmpD__2;
	NimStringV2 colontmpD__3;
	tyArray__Re75IspeoxXy2oCZHwcRrA T2_;
NIM_BOOL* nimErr_;
	nimfr_("addDeclaredLoc", "D:\\nim\\compiler\\astmsgs.nim");
{nimErr_ = nimErrorFlag();
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
	nimlf_(11, "D:\\nim\\compiler\\astmsgs.nim");
	colontmpD_ = toHumanStr__ast_u7553((*sym_p2).kind);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T2_[0] = colontmpD_;
	colontmpD__2 = toFileLineCol__msgs_u710(conf_p1, (*sym_p2).info);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	T2_[1] = colontmpD__2;
	colontmpD__3 = nsuFormatOpenArray(TM__XmvBE1RAE2EQK439c31duVQ_3, T2_, 2);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	prepareAdd((&(*result_p0)), colontmpD__3.len + 0);
appendString((&(*result_p0)), colontmpD__3);
	{
		LA1_:;
	}
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD__3));
		eqdestroy___stdZassertions_u16((&colontmpD__2));
		eqdestroy___stdZassertions_u16((&colontmpD_));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, genFieldDefect__astmsgs_u61)(tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p0, NimStringV2 field_p1, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* disc_p2) {
	NimStringV2 result;
	NimStringV2 obj;
	NimStringV2 colontmpD_;
	NimStringV2 colontmpD__2;
	tyArray__Re75IspeoxXy2oCZHwcRrA T2_;
NIM_BOOL* nimErr_;
	nimfr_("genFieldDefect", "D:\\nim\\compiler\\astmsgs.nim");
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	obj.len = 0; obj.p = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqcopy___stdZassertions_u19((&obj), (*(*(*disc_p2).owner).name).s);
	nimlf_(36, "D:\\nim\\compiler\\astmsgs.nim");
	T2_[0] = field_p1;
	T2_[1] = obj;
	result = nsuFormatOpenArray(TM__XmvBE1RAE2EQK439c31duVQ_15, T2_, 2);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(37);
	{
		NimStringV2 colontmpD__3;
		NimStringV2 T8_;
		if (!(((*conf_p0).globalOptions &((NU64)1<<((NU)((((tyEnum_TGlobalOption__NzfAzt4HjiitM28h8LDW2Q)39)))&63U)))!=0)) goto LA5_;
		colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
		nimln_(38);
		T8_.len = 0; T8_.p = NIM_NIL;
		T8_ = toFileLineCol__msgs_u710(conf_p0, (*disc_p2).info);
		if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		colontmpD__3 = nsuFormatSingleElem(TM__XmvBE1RAE2EQK439c31duVQ_17, T8_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		prepareAdd((&result), colontmpD__3.len + 0);
appendString((&result), colontmpD__3);
		{
			LA7_:;
		}
		{
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__3));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA5_: ;
	nimlf_(39, "D:\\nim\\compiler\\astmsgs.nim");
	nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
	eqwasMoved___stdZassertions_u13((&colontmpD_));
	eqcopy___stdZassertions_u19((&colontmpD_), (*(*disc_p2).name).s);
	nimlf_(39, "D:\\nim\\compiler\\astmsgs.nim");
	colontmpD__2 = nsuFormatSingleElem(TM__XmvBE1RAE2EQK439c31duVQ_19, colontmpD_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	prepareAdd((&result), colontmpD__2.len + 0);
appendString((&result), colontmpD__2);
	{
		LA1_:;
	}
	{
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD__2));
		eqdestroy___stdZassertions_u16((&obj));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addDeclaredLoc__astmsgs_u33)(NimStringV2* result_p0, tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p1, tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* typ_p2) {
	tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* typ_2;
	NimStringV2 colontmpD_;
	NimStringV2 T2_;
NIM_BOOL oldNimErrFin1_;
NIM_BOOL* nimErr_;
	nimfr_("addDeclaredLoc", "D:\\nim\\compiler\\astmsgs.nim");
{nimErr_ = nimErrorFlag();
	typ_2 = NIM_NIL;
	colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
	nimlf_(21, "D:\\nim\\compiler\\astmsgs.nim");
	typ_2 = skipTypes__ast_u5626(typ_p2, TM__XmvBE1RAE2EQK439c31duVQ_20);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	nimln_(22);
	T2_.len = 0; T2_.p = NIM_NIL;
	T2_ = toHumanStr__ast_u7583((*typ_2).kind);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	colontmpD_ = nsuFormatSingleElem(TM__XmvBE1RAE2EQK439c31duVQ_22, T2_);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	prepareAdd((&(*result_p0)), colontmpD_.len + 0);
appendString((&(*result_p0)), colontmpD_);
	nimln_(23);
	{
		NimStringV2 colontmpD__2;
		NimStringV2 colontmpD__3;
		NimStringV2 T8_;
		if (!!(((*typ_2).sym == ((tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw*) NIM_NIL)))) goto LA5_;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
		nimln_(24);
		T8_.len = 0; T8_.p = NIM_NIL;
		colontmpD__2 = toFileLineCol__msgs_u710(conf_p1, (*(*typ_2).sym).info);
		if (NIM_UNLIKELY(*nimErr_)) goto LA7_;
		T8_ = rawNewString(colontmpD__2.len + 13);
appendString((&T8_), TM__XmvBE1RAE2EQK439c31duVQ_24);
appendString((&T8_), colontmpD__2);
		colontmpD__3 = T8_;
		prepareAdd((&(*result_p0)), colontmpD__3.len + 0);
appendString((&(*result_p0)), colontmpD__3);
		{
			LA7_:;
		}
		{
			nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
			eqdestroy___stdZassertions_u16((&colontmpD__3));
			eqdestroy___stdZassertions_u16((&colontmpD__2));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
LA5_: ;
	nimlf_(25, "D:\\nim\\compiler\\astmsgs.nim");
	prepareAdd((&(*result_p0)), 1);
appendString((&(*result_p0)), TM__XmvBE1RAE2EQK439c31duVQ_26);
	{
		LA1_:;
	}
	{
		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
		nimlf_(25, "D:\\nim\\lib\\std\\assertions.nim");
		eqdestroy___stdZassertions_u16((&colontmpD_));
		nimlf_(903, "D:\\nim\\lib\\system.nim");
		eqdestroy___ast_u3815(&typ_2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		*nimErr_ = oldNimErrFin1_;
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw*, typSym__astmsgs_u5)(tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* t_p0) {
	tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* result;
NIM_BOOL* nimErr_;
	nimfr_("typSym", "D:\\nim\\compiler\\astmsgs.nim");
{nimErr_ = nimErrorFlag();
	result = NIM_NIL;
	nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
	eqcopy___ast_u4793(&result, (*t_p0).sym);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nimlf_(7, "D:\\nim\\compiler\\astmsgs.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (result == ((tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw*) NIM_NIL));
		if (!(T3_)) goto LA4_;
		T3_ = ((*t_p0).kind == ((tyEnum_TTypeKind__ONzdjesiM9beeNBA9aZG5Ghw)11));
LA4_: ;
		if (!T3_) goto LA5_;
		nimlf_(1355, "D:\\nim\\compiler\\ast.nim");
		if (((NI)0) < 0 || ((NI)0) >= (*t_p0).sons.len){ raiseIndexError2(((NI)0),(*t_p0).sons.len-1); goto BeforeRet_;
		}
		eqcopy___ast_u4793(&result, (*(*t_p0).sons.p->data[((NI)0)]).sym);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA5_: ;
	}
BeforeRet_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addDeclaredLocMaybe__astmsgs_u21)(NimStringV2* result_p0, tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p1, tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw* sym_p2) {
NIM_BOOL* nimErr_;
	nimfr_("addDeclaredLocMaybe", "D:\\nim\\compiler\\astmsgs.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(14, "D:\\nim\\compiler\\astmsgs.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((*conf_p1).globalOptions &((NU64)1<<((NU)((((tyEnum_TGlobalOption__NzfAzt4HjiitM28h8LDW2Q)39)))&63U)))!=0);
		if (!(T3_)) goto LA4_;
		T3_ = !((sym_p2 == ((tyObject_TSym__ZFLa1ljJflbjEpzKLkcDrw*) NIM_NIL)));
LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(15);
		addDeclaredLoc__astmsgs_u17(result_p0, conf_p1, sym_p2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA5_: ;
	}
BeforeRet_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, addDeclaredLocMaybe__astmsgs_u51)(NimStringV2* result_p0, tyObject_ConfigRefcolonObjectType___bmtyrreM9bjbWfPTnr9btEbw* conf_p1, tyObject_TType__pP3zLOJKNCx6pERZKTaOFQ* typ_p2) {
NIM_BOOL* nimErr_;
	nimfr_("addDeclaredLocMaybe", "D:\\nim\\compiler\\astmsgs.nim");
{nimErr_ = nimErrorFlag();
	nimlf_(28, "D:\\nim\\compiler\\astmsgs.nim");
	{
		if (!(((*conf_p1).globalOptions &((NU64)1<<((NU)((((tyEnum_TGlobalOption__NzfAzt4HjiitM28h8LDW2Q)39)))&63U)))!=0)) goto LA3_;
		addDeclaredLoc__astmsgs_u33(result_p0, conf_p1, typ_p2);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
LA3_: ;
	}
BeforeRet_: ;
	popFrame();
}
