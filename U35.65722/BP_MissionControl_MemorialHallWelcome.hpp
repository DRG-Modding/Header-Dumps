#ifndef UE4SS_SDK_BP_MissionControl_MemorialHallWelcome_HPP
#define UE4SS_SDK_BP_MissionControl_MemorialHallWelcome_HPP

class ABP_MissionControl_MemorialHallWelcome_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* TriggerBox;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, class AActor* K2Node_Event_OtherActor, bool Temp_bool_IsClosed_Variable);
};

#endif
