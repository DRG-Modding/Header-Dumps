#ifndef UE4SS_SDK_ITM_BaseFlare_HPP
#define UE4SS_SDK_ITM_BaseFlare_HPP

class AITM_BaseFlare_C : UFlare
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* Light_AfterGlow;
    UPointLightComponent* Light_NoShadow;
    USpotLightComponent* SpotLight_Shadow_3;
    USpotLightComponent* SpotLight_Shadow_2;
    USpotLightComponent* SpotLight_Shadow_1;
    UUpgradableGearComponent* UpgradableGear;
    UParticleSystemComponent* ParticleSystem;
    UStaticMeshComponent* StaticMesh;
    UBoxComponent* Box;
    float Timeline_0_BrightnessShadows_14DB2CD947ED9EE06017768CF842D625;
    float Timeline_0_Brightness_14DB2CD947ED9EE06017768CF842D625;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_14DB2CD947ED9EE06017768CF842D625;
    UTimelineComponent* Timeline_0;
    float BaseIntensity;

    void GetGearStatEntry(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<UITM_BaseFlare_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Flare_Base_GearStatEntry, FGearStatEntry CallFunc_UPGDESC_Flare_Base_GearStatEntry_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Flare_Base_GearStatEntry_2, int32 CallFunc_Array_Add_ReturnValue_2);
    void UpdateShadowRadius(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 CallFunc_GetShadowQuality_ReturnValue, float K2Node_Select_Default);
    void StartFadeOut(float& Time, float CallFunc_GetPlaybackPosition_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnFlareExtinguish();
    void OnFlareIgnite();
    void OnUpdateShadowRadius();
    void ActivateFlare();
    void ExecuteUbergraph_ITM_BaseFlare(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_StartFadeOut_time, AActor* CallFunc_GetOwner_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2);
}

#endif
