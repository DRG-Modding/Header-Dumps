#ifndef UE4SS_SDK_ChaosNiagara_HPP
#define UE4SS_SDK_ChaosNiagara_HPP

#include "ChaosNiagara_enums.hpp"

struct FChaosDestructionEvent
{
    FVector Position;
    FVector Normal;
    FVector Velocity;
    FVector AngularVelocity;
    float ExtentMin;
    float ExtentMax;
    int32 ParticleID;
    float Time;
    int32 Type;

};

class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
    TSet<AChaosSolverActor*> ChaosSolverActorSet;
    EDataSourceTypeEnum DataSourceType;
    int32 DataProcessFrequency;
    int32 MaxNumberOfDataEntriesToSpawn;
    bool DoSpawn;
    FVector2D SpawnMultiplierMinMax;
    float SpawnChance;
    FVector2D ImpulseToSpawnMinMax;
    FVector2D SpeedToSpawnMinMax;
    FVector2D MassToSpawnMinMax;
    FVector2D ExtentMinToSpawnMinMax;
    FVector2D ExtentMaxToSpawnMinMax;
    FVector2D VolumeToSpawnMinMax;
    FVector2D SolverTimeToSpawnMinMax;
    int32 SurfaceTypeToSpawn;
    ELocationFilteringModeEnum LocationFilteringMode;
    ELocationXToSpawnEnum LocationXToSpawn;
    FVector2D LocationXToSpawnMinMax;
    ELocationYToSpawnEnum LocationYToSpawn;
    FVector2D LocationYToSpawnMinMax;
    ELocationZToSpawnEnum LocationZToSpawn;
    FVector2D LocationZToSpawnMinMax;
    EDataSortTypeEnum DataSortingType;
    bool bGetExternalCollisionData;
    bool DoSpatialHash;
    FVector SpatialHashVolumeMin;
    FVector SpatialHashVolumeMax;
    FVector SpatialHashVolumeCellSize;
    int32 MaxDataPerCell;
    bool bApplyMaterialsFilter;
    TSet<UPhysicalMaterial*> ChaosBreakingMaterialSet;
    bool bGetExternalBreakingData;
    bool bGetExternalTrailingData;
    FVector2D RandomPositionMagnitudeMinMax;
    float InheritedVelocityMultiplier;
    ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;
    FVector2D RandomVelocityMagnitudeMinMax;
    float SpreadAngleMax;
    FVector VelocityOffsetMin;
    FVector VelocityOffsetMax;
    FVector2D FinalVelocityMagnitudeMinMax;
    float MaxLatency;
    EDebugTypeEnum DebugType;
    int32 LastSpawnedPointID;
    float LastSpawnTime;
    float SolverTime;
    float TimeStampOfLastProcessedData;

};

class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{
};

#endif
