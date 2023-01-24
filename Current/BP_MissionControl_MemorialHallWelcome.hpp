#ifndef UE4SS_SDK_BP_MissionControl_MemorialHallWelcome_HPP
#define UE4SS_SDK_BP_MissionControl_MemorialHallWelcome_HPP

class ABP_MissionControl_MemorialHallWelcome_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* TriggerBox;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome(int32 EntryPoint);
};

#endif
