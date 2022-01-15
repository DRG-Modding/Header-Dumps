#ifndef UE4SS_SDK_GeometryCollectionCore_HPP
#define UE4SS_SDK_GeometryCollectionCore_HPP

#include "GeometryCollectionCore_enums.hpp"

struct URecordedTransformTrack
{
    TArray<FRecordedFrame> Records;
}

struct URecordedFrame
{
    TArray<FTransform> Transforms;
    TArray<int32> TransformIndices;
    TArray<int32> PreviousTransformIndices;
    TArray<bool> DisabledFlags;
    TArray<FSolverCollisionData> Collisions;
    TArray<FSolverBreakingData> Breakings;
    TSet<FSolverTrailingData> Trailings;
    float Timestamp;
}

struct USolverTrailingData
{
    FVector Location;
    FVector Velocity;
    FVector AngularVelocity;
    float Mass;
    int32 ParticleIndex;
    int32 ParticleIndexMesh;
}

struct USolverBreakingData
{
    FVector Location;
    FVector Velocity;
    FVector AngularVelocity;
    float Mass;
    int32 ParticleIndex;
    int32 ParticleIndexMesh;
}

struct USolverCollisionData
{
    FVector Location;
    FVector AccumulatedImpulse;
    FVector Normal;
    FVector Velocity1;
    FVector Velocity2;
    FVector AngularVelocity1;
    FVector AngularVelocity2;
    float Mass1;
    float Mass2;
    int32 ParticleIndex;
    int32 LevelsetIndex;
    int32 ParticleIndexMesh;
    int32 LevelsetIndexMesh;
}

#endif
