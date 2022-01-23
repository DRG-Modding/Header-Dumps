#ifndef UE4SS_SDK_ENE_JellyBreeder_HPP
#define UE4SS_SDK_ENE_JellyBreeder_HPP

class AENE_JellyBreeder_C : public AJellyBreeder
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UAudioComponent* JellyBreederDeath_Cue;
    class UAudioComponent* JellyBreederIdle_Cue;
    class UImpactComponent* Impact;
    class UPhysicalAnimationComponent* PhysicalAnimation;
    TArray<FName> BoneNames;
    FName Profile;
    FVector Location;
    float Emission Multiplier;
    float EmissionFlash;
    int32 EmissionID;

    void ToggleBonePhysics(bool BonePhysics, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void ReceiveBeginPlay();
    void StartFizzle();
    void OnMessageAI(FName TriggerName);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__Impact_K2Node_ComponentBoundEvent_5_ImpactedSignature__DelegateSignature();
    void BreedModeFlipped(bool aIsLayingEggs);
    void ExecuteUbergraph_ENE_JellyBreeder(int32 EntryPoint, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_1, float CallFunc_GetMidZpointFromCielingAndFloor_distanceFromCieling, float CallFunc_GetMidZpointFromCielingAndFloor_distanceFromFloor, float CallFunc_GetMidZpointFromCielingAndFloor_ReturnValue, FVector CallFunc_GetValueAsVector_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_FMax_ReturnValue, FVector CallFunc_GetRandomReachablePointAtApproximateDistance_outPos, bool CallFunc_GetRandomReachablePointAtApproximateDistance_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool K2Node_Event_aIsLayingEggs, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, FName K2Node_Event_triggerName, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_StopLoopingGlow_ReturnValue, bool CallFunc_StopLoopingGlow_ReturnValue_1, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommunityGoal* CallFunc_GetGoal_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
};

#endif
