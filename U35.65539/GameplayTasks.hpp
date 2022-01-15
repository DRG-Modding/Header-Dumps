#ifndef UE4SS_SDK_GameplayTasks_HPP
#define UE4SS_SDK_GameplayTasks_HPP

#include "GameplayTasks_enums.hpp"

class UGameplayTask : UObject
{
    FName InstanceName;
    ETaskResourceOverlapPolicy ResourceOverlapPolicy;
    UGameplayTask* ChildTask;

    void ReadyForActivation();
    void GenericGameplayTaskDelegate__DelegateSignature();
    void EndTask();
}

class UGameplayTask_ClaimResource : UGameplayTask
{

    UGameplayTask_ClaimResource* ClaimResources(InterfaceProperty InTaskOwner, TArray<TSubclassOf<UGameplayTaskResource>> ResourceClasses, const uint8 Priority, const FName TaskInstanceName);
    UGameplayTask_ClaimResource* ClaimResource(InterfaceProperty InTaskOwner, TSubclassOf<UGameplayTaskResource> ResourceClass, const uint8 Priority, const FName TaskInstanceName);
}

class UGameplayTask_SpawnActor : UGameplayTask
{
    FGameplayTask_SpawnActorSuccess success;
    void GameplayTaskSpawnActorDelegate(AActor* SpawnedActor);
    FGameplayTask_SpawnActorDidNotSpawn DidNotSpawn;
    void GameplayTaskSpawnActorDelegate(AActor* SpawnedActor);
    TSubclassOf<AActor> ClassToSpawn;

    UGameplayTask_SpawnActor* SpawnActor(InterfaceProperty TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, TSubclassOf<AActor> Class, bool bSpawnOnlyOnAuthority);
    void FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor);
    bool BeginSpawningActor(UObject* WorldContextObject, AActor*& SpawnedActor);
}

class UGameplayTask_TimeLimitedExecution : UGameplayTask
{
    FGameplayTask_TimeLimitedExecutionOnFinished OnFinished;
    void TaskFinishDelegate();
    FGameplayTask_TimeLimitedExecutionOnTimeExpired OnTimeExpired;
    void TaskFinishDelegate();
}

class UGameplayTask_WaitDelay : UGameplayTask
{
    FGameplayTask_WaitDelayOnFinish OnFinish;
    void TaskDelayDelegate();

    UGameplayTask_WaitDelay* TaskWaitDelay(InterfaceProperty TaskOwner, float Time, const uint8 Priority);
    void TaskDelayDelegate__DelegateSignature();
}

class UGameplayTaskOwnerInterface : UInterface
{
}

class UGameplayTaskResource : UObject
{
    int32 ManualResourceID;
    int8 AutoResourceID;
    uint8 bManuallySetID;
}

class UGameplayTasksComponent : UActorComponent
{
    uint8 bIsNetDirty;
    TArray<UGameplayTask*> SimulatedTasks;
    TArray<UGameplayTask*> TaskPriorityQueue;
    TArray<UGameplayTask*> TickingTasks;
    TArray<UGameplayTask*> KnownTasks;
    FGameplayTasksComponentOnClaimedResourcesChange OnClaimedResourcesChange;
    void OnClaimedResourcesChangeSignature(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);

    void OnRep_SimulatedTasks();
    EGameplayTaskRunResult K2_RunGameplayTask(InterfaceProperty TaskOwner, UGameplayTask* Task, uint8 Priority, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalRequiredResources, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalClaimedResources);
}

struct UGameplayResourceSet
{
}

#endif
