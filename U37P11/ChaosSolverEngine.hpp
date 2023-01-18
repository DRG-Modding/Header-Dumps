#ifndef UE4SS_SDK_ChaosSolverEngine_HPP
#define UE4SS_SDK_ChaosSolverEngine_HPP

#include "ChaosSolverEngine_enums.hpp"

struct FBreakEventCallbackWrapper
{
};

struct FChaosBreakEvent
{
    class UPrimitiveComponent* Component;
    FVector Location;
    FVector Velocity;
    FVector AngularVelocity;
    float Mass;

};

struct FChaosDebugSubstepControl
{
    bool bPause;
    bool bSubstep;
    bool bStep;

};

struct FChaosHandlerSet
{
    TSet<UObject*> ChaosHandlers;

};

struct FChaosPhysicsCollisionInfo
{
    class UPrimitiveComponent* Component;
    class UPrimitiveComponent* OtherComponent;
    FVector Location;
    FVector Normal;
    FVector AccumulatedImpulse;
    FVector Velocity;
    FVector OtherVelocity;
    FVector AngularVelocity;
    FVector OtherAngularVelocity;
    float Mass;
    float OtherMass;

};

class AChaosSolverActor : public AActor
{
    FChaosSolverConfiguration Properties;
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
    float MassScale;
    bool bGenerateContactGraph;
    bool bHasFloor;
    float FloorHeight;
    FChaosDebugSubstepControl ChaosDebugSubstepControl;
    class UBillboardComponent* SpriteComponent;
    class UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;

    void SetSolverActive(bool bActive);
    void SetAsCurrentWorldSolver();
};

class IChaosNotifyHandlerInterface : public IInterface
{
};

class UChaosDebugDrawComponent : public UActorComponent
{
};

class UChaosEventListenerComponent : public UActorComponent
{
};

class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{
    TMap<class UPrimitiveComponent*, class FChaosHandlerSet> CollisionEventRegistrations;
    TMap<class UPrimitiveComponent*, class FBreakEventCallbackWrapper> BreakEventRegistrations;

};

class UChaosSolver : public UObject
{
};

class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FHitResult ConvertPhysicsCollisionToHitResult(const FChaosPhysicsCollisionInfo& PhysicsCollision);
};

class UChaosSolverSettings : public UDeveloperSettings
{
    FSoftClassPath DefaultChaosSolverActorClass;

};

#endif
