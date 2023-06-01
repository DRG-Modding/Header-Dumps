#ifndef UE4SS_SDK_RigVM_HPP
#define UE4SS_SDK_RigVM_HPP

#include "RigVM_enums.hpp"

struct FRigVMBaseOp
{
};

struct FRigVMBinaryOp : public FRigVMBaseOp
{
};

struct FRigVMByteCode
{
    TArray<uint8> ByteCode;
    int32 NumInstructions;
    TArray<FRigVMByteCodeEntry> Entries;

};

struct FRigVMByteCodeEntry
{
    FName Name;
    int32 InstructionIndex;

};

struct FRigVMByteCodeStatistics
{
    uint32 InstructionCount;
    uint32 DataBytes;

};

struct FRigVMChangeTypeOp : public FRigVMUnaryOp
{
};

struct FRigVMComparisonOp : public FRigVMBaseOp
{
};

struct FRigVMCopyOp : public FRigVMBaseOp
{
};

struct FRigVMExecuteContext
{
};

struct FRigVMExecuteOp : public FRigVMBaseOp
{
};

struct FRigVMInstruction
{
    uint64 ByteCodeIndex;
    ERigVMOpCode OpCode;
    uint8 OperandAlignment;

};

struct FRigVMInstructionArray
{
    TArray<FRigVMInstruction> Instructions;

};

struct FRigVMJumpIfOp : public FRigVMUnaryOp
{
};

struct FRigVMJumpOp : public FRigVMBaseOp
{
};

struct FRigVMMemoryContainer
{
    bool bUseNameMap;
    ERigVMMemoryType MemoryType;
    TArray<FRigVMRegister> Registers;
    TArray<FRigVMRegisterOffset> RegisterOffsets;
    TArray<uint8> Data;
    TArray<class UScriptStruct*> ScriptStructs;
    TMap<FName, int32> NameMap;
    bool bEncounteredErrorDuringLoad;

};

struct FRigVMMemoryStatistics
{
    uint32 RegisterCount;
    uint32 DataBytes;
    uint32 TotalBytes;

};

struct FRigVMOperand
{
    ERigVMMemoryType MemoryType;
    uint16 RegisterIndex;
    uint16 RegisterOffset;

};

struct FRigVMParameter
{
    ERigVMParameterType Type;
    FName Name;
    int32 RegisterIndex;
    FString CPPType;
    class UScriptStruct* ScriptStruct;
    FName ScriptStructPath;

};

struct FRigVMRegister
{
    ERigVMRegisterType Type;
    uint32 ByteIndex;
    uint16 ElementSize;
    uint16 ElementCount;
    uint16 SliceCount;
    uint8 AlignmentBytes;
    uint16 TrailingBytes;
    FName Name;
    int32 ScriptStructIndex;
    bool bIsArray;
    bool bIsDynamic;

};

struct FRigVMRegisterOffset
{
    TArray<int32> Segments;
    ERigVMRegisterType Type;
    FName CPPType;
    class UScriptStruct* ScriptStruct;
    class UScriptStruct* ParentScriptStruct;
    int32 ArrayIndex;
    uint16 ElementSize;
    FString CachedSegmentPath;

};

struct FRigVMSlice
{
};

struct FRigVMStatistics
{
    uint32 BytesForCDO;
    uint32 BytesPerInstance;
    FRigVMMemoryStatistics LiteralMemory;
    FRigVMMemoryStatistics WorkMemory;
    uint32 BytesForCaching;
    FRigVMByteCodeStatistics ByteCode;

};

struct FRigVMStruct
{
};

struct FRigVMUnaryOp : public FRigVMBaseOp
{
};

class URigVM : public UObject
{
    FRigVMMemoryContainer WorkMemoryStorage;
    FRigVMMemoryContainer LiteralMemoryStorage;
    FRigVMByteCode ByteCodeStorage;
    FRigVMInstructionArray Instructions;
    FRigVMExecuteContext Context;
    TArray<FName> FunctionNamesStorage;
    TArray<FRigVMParameter> Parameters;
    TMap<FName, int32> ParametersNameMap;
    class URigVM* DeferredVMToCopy;

    void SetParameterValueVector2D(const FName& InParameterName, const FVector2D& InValue, int32 InArrayIndex);
    void SetParameterValueVector(const FName& InParameterName, const FVector& InValue, int32 InArrayIndex);
    void SetParameterValueTransform(const FName& InParameterName, const FTransform& InValue, int32 InArrayIndex);
    void SetParameterValueString(const FName& InParameterName, FString InValue, int32 InArrayIndex);
    void SetParameterValueQuat(const FName& InParameterName, const FQuat& InValue, int32 InArrayIndex);
    void SetParameterValueName(const FName& InParameterName, const FName& InValue, int32 InArrayIndex);
    void SetParameterValueInt(const FName& InParameterName, int32 InValue, int32 InArrayIndex);
    void SetParameterValueFloat(const FName& InParameterName, float InValue, int32 InArrayIndex);
    void SetParameterValueBool(const FName& InParameterName, bool InValue, int32 InArrayIndex);
    FString GetRigVMFunctionName(int32 InFunctionIndex);
    FVector2D GetParameterValueVector2D(const FName& InParameterName, int32 InArrayIndex);
    FVector GetParameterValueVector(const FName& InParameterName, int32 InArrayIndex);
    FTransform GetParameterValueTransform(const FName& InParameterName, int32 InArrayIndex);
    FString GetParameterValueString(const FName& InParameterName, int32 InArrayIndex);
    FQuat GetParameterValueQuat(const FName& InParameterName, int32 InArrayIndex);
    FName GetParameterValueName(const FName& InParameterName, int32 InArrayIndex);
    int32 GetParameterValueInt(const FName& InParameterName, int32 InArrayIndex);
    float GetParameterValueFloat(const FName& InParameterName, int32 InArrayIndex);
    bool GetParameterValueBool(const FName& InParameterName, int32 InArrayIndex);
    int32 GetParameterArraySize(const FName& InParameterName);
    bool Execute(const FName& InEntryName);
    int32 AddRigVMFunction(class UScriptStruct* InRigVMStruct, const FName& InMethodName);
};

#endif
