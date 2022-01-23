#ifndef UE4SS_SDK_ITM_BaseFlare_HPP
#define UE4SS_SDK_ITM_BaseFlare_HPP

class AITM_BaseFlare_C : public AFlare
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* Light_AfterGlow;
    class UPointLightComponent* Light_NoShadow;
    class USpotLightComponent* SpotLight_Shadow_3;
    class USpotLightComponent* SpotLight_Shadow_2;
    class USpotLightComponent* SpotLight_Shadow_1;
    class UUpgradableGearComponent* UpgradableGear;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* Box;
    float Timeline_0_BrightnessShadows_14DB2CD947ED9EE06017768CF842D625;
    float Timeline_0_Brightness_14DB2CD947ED9EE06017768CF842D625;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_14DB2CD947ED9EE06017768CF842D625;
    class UTimelineComponent* Timeline_0;
    float BaseIntensity;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<class AITM_BaseFlare_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Flare_Base_GearStatEntry, FGearStatEntry CallFunc_UPGDESC_Flare_Base_GearStatEntry_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Flare_Base_GearStatEntry_2, int32 CallFunc_Array_Add_ReturnValue_2);
    void UpdateShadowRadius(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 CallFunc_GetShadowQuality_ReturnValue, float K2Node_Select_Default);
    void StartFadeOut(float& Time, float CallFunc_GetPlaybackPosition_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnFlareExtinguish();
    void OnFlareIgnite();
    void OnUpdateShadowRadius();
    void ActivateFlare();
    void ExecuteUbergraph_ITM_BaseFlare(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_StartFadeOut_time, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2);
};

#endif
