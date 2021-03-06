#ifndef UE4SS_SDK_ENE_Spider_Drone_HPP
#define UE4SS_SDK_ENE_Spider_Drone_HPP

class AENE_Spider_Drone_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UGroundToAirComponent* GroundToAir;
    class UStaticMeshComponent* LeftWing;
    class UStaticMeshComponent* RightWing;
    class USceneComponent* WingCenter;

    void BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature();
    void OnMessageAI(FName TriggerName);
    void ExecuteUbergraph_ENE_Spider_Drone(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_GetIsFlying_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult_1, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess);
};

#endif
