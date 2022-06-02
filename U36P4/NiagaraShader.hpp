#ifndef UE4SS_SDK_NiagaraShader_HPP
#define UE4SS_SDK_NiagaraShader_HPP

#include "NiagaraShader_enums.hpp"

class UNiagaraScriptBase : public UObject
{
};

struct FNiagaraDataInterfaceGeneratedFunction
{
};

struct FNiagaraDataInterfaceGPUParamInfo
{
    FString DataInterfaceHLSLSymbol;
    FString DIClassName;
    TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;

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

#endif
