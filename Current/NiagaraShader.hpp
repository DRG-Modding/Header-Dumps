#ifndef UE4SS_SDK_NiagaraShader_HPP
#define UE4SS_SDK_NiagaraShader_HPP

#include "NiagaraShader_enums.hpp"

struct FNiagaraCompileEvent
{
    FNiagaraCompileEventSeverity Severity;
    FString Message;
    FString ShortDescription;
    bool bDismissable;
    FGuid NodeGuid;
    FGuid PinGuid;
    TArray<FGuid> StackGuids;

};

struct FNiagaraDataInterfaceGPUParamInfo
{
    FString DataInterfaceHLSLSymbol;
    FString DIClassName;
    TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;

};

struct FNiagaraDataInterfaceGeneratedFunction
{
};

struct FSimulationStageMetaData
{
    FName SimulationStageName;
    FName IterationSource;
    uint8 bSpawnOnly;
    uint8 bWritesParticles;
    uint8 bPartialParticleUpdate;
    TArray<FName> OutputDestinations;
    int32 MinStage;
    int32 MaxStage;

};

class UNiagaraScriptBase : public UObject
{
};

#endif
