#ifndef UE4SS_SDK_NiagaraShader_HPP
#define UE4SS_SDK_NiagaraShader_HPP

#include "NiagaraShader_enums.hpp"

struct FNiagaraDataInterfaceGPUParamInfo
{
    FString DataInterfaceHLSLSymbol;
    FString DIClassName;
    TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;
}

struct FNiagaraDataInterfaceGeneratedFunction
{
}

struct FNiagaraCompileEvent
{
    FNiagaraCompileEventSeverity Severity;
    FString Message;
    FGuid NodeGuid;
    FGuid PinGuid;
    TArray<FGuid> StackGuids;
}

#endif
