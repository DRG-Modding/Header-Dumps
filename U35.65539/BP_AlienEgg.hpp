#ifndef UE4SS_SDK_BP_AlienEgg_HPP
#define UE4SS_SDK_BP_AlienEgg_HPP

class ABP_AlienEgg_C : UBP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SurroundingTerrainCarver;
    UOutlineComponent* outline;
    UPointLightComponent* PointLight6;
    UPointLightComponent* PointLight5;
    UPointLightComponent* PointLight4;
    UPointLightComponent* PointLight3;
    UPointLightComponent* PointLight2;
    UPointLightComponent* PointLight1;
    UPointLightComponent* light_center;
    float Timeline_0_NewTrack_0_824C546F43F8F98270303087668A3695;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_824C546F43F8F98270303087668A3695;
    UTimelineComponent* Timeline_0;
    float LightIntensity;
    FLinearColor LightColor;
    bool IsSpecialEgg;

    void ModulateLights(float NewIntensity);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void All_PlayDugFree();
    void SetSpecialEgg();
    void ExecuteUbergraph_BP_AlienEgg(int32 EntryPoint, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, bool Temp_bool_Variable, TSubclassOf<UEnemyWaveController> Temp_class_Variable, TSubclassOf<UEnemyWaveController> Temp_class_Variable_1, bool CallFunc_HasAuthority_ReturnValue, FLinearColor CallFunc_GetLightColor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, TSubclassOf<UEnemyWaveController> K2Node_Select_Default, UEnemyWaveController* CallFunc_TriggerWave_ReturnValue);
}

#endif
