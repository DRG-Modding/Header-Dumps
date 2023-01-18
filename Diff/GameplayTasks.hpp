#ifndef UE4SS_SDK_GameplayTasks_HPP
#define UE4SS_SDK_GameplayTasks_HPP

#include "GameplayTasks_enums.hpp"

struct FGameplayResourceSet
{
};

class IGameplayTaskOwnerInterface : public IInterface
{
};

class UGameplayTask : public UObject
{
    FName InstanceName;
    ETaskResourceOverlapPolicy ResourceOverlapPolicy;
    class UGameplayTask* ChildTask;

    void ReadyForActivation();
    void GenericGameplayTaskDelegate__DelegateSignature();
    void EndTask();
};

class UGameplayTaskResource : public UObject
{
    int32 ManualResourceID;
    int8 AutoResourceID;
    uint8 bManuallySetID;

};

class UGameplayTask_ClaimResource : public UGameplayTask
{

    class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, TArray<class TSubclassOf<UGameplayTaskResource>> ResourceClasses, const uint8 Priority, const FName TaskInstanceName);
    class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, TSubclassOf<class UGameplayTaskResource> ResourceClass, const uint8 Priority, const FName TaskInstanceName);
};

class UGameplayTask_SpawnActor : public UGameplayTask
{
    FGameplayTask_SpawnActorSuccess success;
    void GameplayTaskSpawnActorDelegate(class AActor* SpawnedActor);
    FGameplayTask_SpawnActorDidNotSpawn DidNotSpawn;
    void GameplayTaskSpawnActorDelegate(class AActor* SpawnedActor);
    TSubclassOf<class AActor> ClassToSpawn;

    class UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, TSubclassOf<class AActor> Class, bool bSpawnOnlyOnAuthority);
    void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
    bool BeginSpawningActor(class UObject* WorldContextObject, class AActor*& SpawnedActor);
};

class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
    FGameplayTask_TimeLimitedExecutionOnFinished OnFinished;
    void TaskFinishDelegate();
    FGameplayTask_TimeLimitedExecutionOnTimeExpired OnTimeExpired;
    void TaskFinishDelegate();

};

class UGameplayTask_WaitDelay : public UGameplayTask
{
    FGameplayTask_WaitDelayOnFinish OnFinish;
    void TaskDelayDelegate();

    class UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, float Time, const uint8 Priority);
    void TaskDelayDelegate__DelegateSignature();
};

class UGameplayTasksComponent : public UActorComponent
{
    uint8 bIsNetDirty;
    TArray<class UGameplayTask*> SimulatedTasks;
    TArray<class UGameplayTask*> TaskPriorityQueue;
    TArray<class UGameplayTask*> TickingTasks;
    TArray<class UGameplayTask*> KnownTasks;
    FGameplayTasksComponentOnClaimedResourcesChange OnClaimedResourcesChange;
    void OnClaimedResourcesChangeSignature(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);

    void OnRep_SimulatedTasks();
    EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, class UGameplayTask* Task, uint8 Priority, TArray<class TSubclassOf<UGameplayTaskResource>> AdditionalRequiredResources, TArray<class TSubclassOf<UGameplayTaskResource>> AdditionalClaimedResources);
};

#endif
