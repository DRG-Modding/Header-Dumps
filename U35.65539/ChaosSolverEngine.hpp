#ifndef UE4SS_SDK_ChaosSolverEngine_HPP
#define UE4SS_SDK_ChaosSolverEngine_HPP

#include "ChaosSolverEngine_enums.hpp"

class UChaosDebugDrawComponent : UActorComponent
{
}

class UChaosEventListenerComponent : UActorComponent
{
}

class UChaosGameplayEventDispatcher : UChaosEventListenerComponent
{
    TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations;
    TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;
}

class UChaosNotifyHandlerInterface : UInterface
{
}

class UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary
{

    FHitResult ConvertPhysicsCollisionToHitResult(const FChaosPhysicsCollisionInfo& PhysicsCollision);
}

class UChaosSolver : UObject
{
}

class AChaosSolverActor : AActor
{
    float TimeStepMultiplier;
    int32 CollisionIterations;
    int32 PushOutIterations;
    int32 PushOutPairIterations;
    float ClusterConnectionFactor;
    EClusterConnectionTypeEnum ClusterUnionConnectionType;
    bool DoGenerateCollisionData;
    FSolverCollisionFilterSettings CollisionFilterSettings;
    bool DoGenerateBreakingData;
    FSolverBreakingFilterSettings BreakingFilterSettings;
    bool DoGenerateTrailingData;
    FSolverTrailingFilterSettings TrailingFilterSettings;
    bool bHasFloor;
    float FloorHeight;
    float MassScale;
    bool bGenerateContactGraph;
    FChaosDebugSubstepControl ChaosDebugSubstepControl;
    UBillboardComponent* SpriteComponent;
    UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;

    void SetSolverActive(bool bActive);
    void SetAsCurrentWorldSolver();
}

class UChaosSolverSettings : UDeveloperSettings
{
    FSoftClassPath DefaultChaosSolverActorClass;
}

struct UChaosPhysicsCollisionInfo
{
    UPrimitiveComponent* Component;
    UPrimitiveComponent* OtherComponent;
    FVector Location;
    FVector Normal;
    FVector AccumulatedImpulse;
    FVector Velocity;
    FVector OtherVelocity;
    FVector AngularVelocity;
    FVector OtherAngularVelocity;
    float Mass;
    float OtherMass;
}

struct UChaosBreakEvent
{
    UPrimitiveComponent* Component;
    FVector Location;
    FVector Velocity;
    FVector AngularVelocity;
    float Mass;
}

struct UChaosHandlerSet
{
    TSet<UObject*> ChaosHandlers;
}

struct UBreakEventCallbackWrapper
{
}

struct UChaosDebugSubstepControl
{
    bool bPause;
    bool bSubstep;
    bool bStep;
}

#endif
