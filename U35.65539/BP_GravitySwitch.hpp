#ifndef UE4SS_SDK_BP_GravitySwitch_HPP
#define UE4SS_SDK_BP_GravitySwitch_HPP

class ABP_GravitySwitch_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponent* Widget;
    UAudioComponent* Alarm;
    UStaticMeshComponent* ButtonSphere;
    UBoxComponent* Box;
    UInstantUsable* InstantUsable;
    USceneComponent* DefaultSceneRoot;
    float Timeline_0_LightIntensity_2CB0110A43F837100C1A68A2642737BF;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2CB0110A43F837100C1A68A2642737BF;
    UTimelineComponent* Timeline_0;
    int32 Normal Gravity;
    bool Can Use;
    ASkyLight* SkyLight;
    FLinearColor OriginalSkylightClour;
    float OriginalSkyLightIntensity;
    APlayerCharacter* User;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ChangeSkyLight();
    void ResetSkyLight();
    void ExecuteUbergraph_BP_GravitySwitch(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_EqualEqual_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FLinearColor CallFunc_GetLightColor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2);
}

#endif
