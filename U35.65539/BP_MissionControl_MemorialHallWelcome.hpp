#ifndef UE4SS_SDK_BP_MissionControl_MemorialHallWelcome_HPP
#define UE4SS_SDK_BP_MissionControl_MemorialHallWelcome_HPP

class ABP_MissionControl_MemorialHallWelcome_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* TriggerBox;
    USceneComponent* DefaultSceneRoot;

    void ReceiveActorBeginOverlap(AActor* OtherActor);
    void ExecuteUbergraph_BP_MissionControl_MemorialHallWelcome(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, AActor* K2Node_Event_OtherActor, bool Temp_bool_IsClosed_Variable);
}

#endif
