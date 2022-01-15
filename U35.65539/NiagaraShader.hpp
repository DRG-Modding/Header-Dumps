#ifndef UE4SS_SDK_NiagaraShader_HPP
#define UE4SS_SDK_NiagaraShader_HPP

#include "NiagaraShader_enums.hpp"

struct UNiagaraDataInterfaceGPUParamInfo
{
    FString DataInterfaceHLSLSymbol;
    FString DIClassName;
    TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;
}

struct UNiagaraDataInterfaceGeneratedFunction
{
}

struct UNiagaraCompileEvent
{
    FNiagaraCompileEventSeverity Severity;
    FString Message;
    FGuid NodeGuid;
    FGuid PinGuid;
    TArray<FGuid> StackGuids;
}

#endif
