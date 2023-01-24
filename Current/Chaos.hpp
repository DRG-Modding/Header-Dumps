#ifndef UE4SS_SDK_Chaos_HPP
#define UE4SS_SDK_Chaos_HPP

#include "Chaos_enums.hpp"

struct FChaosSolverConfiguration
{
    int32 Iterations;
    int32 CollisionPairIterations;
    int32 PushOutIterations;
    int32 CollisionPushOutPairIterations;
    float CollisionMarginFraction;
    float CollisionMarginMax;
    float CollisionCullDistance;
    int32 JointPairIterations;
    int32 JointPushOutPairIterations;
    float ClusterConnectionFactor;
    EClusterUnionMethod ClusterUnionConnectionType;
    bool bGenerateCollisionData;
    FSolverCollisionFilterSettings CollisionFilterSettings;
    bool bGenerateBreakData;
    FSolverBreakingFilterSettings BreakingFilterSettings;
    bool bGenerateTrailingData;
    FSolverTrailingFilterSettings TrailingFilterSettings;
    bool bGenerateContactGraph;

};

struct FRecordedFrame
{
    TArray<FTransform> Transforms;
    TArray<int32> TransformIndices;
    TArray<int32> PreviousTransformIndices;
    TArray<bool> DisabledFlags;
    TArray<FSolverCollisionData> Collisions;
    TArray<FSolverBreakingData> Breakings;
    TSet<FSolverTrailingData> Trailings;
    float Timestamp;

};

struct FRecordedTransformTrack
{
    TArray<FRecordedFrame> Records;

};

struct FSolverBreakingData
{
    FVector Location;
    FVector Velocity;
    FVector AngularVelocity;
    float Mass;
    int32 ParticleIndex;
    int32 ParticleIndexMesh;

};

struct FSolverBreakingFilterSettings
{
    bool FilterEnabled;
    float MinMass;
    float MinSpeed;
    float MinVolume;

};

struct FSolverCollisionData
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

};

struct FSolverCollisionFilterSettings
{
    bool FilterEnabled;
    float MinMass;
    float MinSpeed;
    float MinImpulse;

};

struct FSolverTrailingData
{
    FVector Location;
    FVector Velocity;
    FVector AngularVelocity;
    float Mass;
    int32 ParticleIndex;
    int32 ParticleIndexMesh;

};

struct FSolverTrailingFilterSettings
{
    bool FilterEnabled;
    float MinMass;
    float MinSpeed;
    float MinVolume;

};

#endif
