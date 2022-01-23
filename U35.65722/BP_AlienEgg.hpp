#ifndef UE4SS_SDK_BP_AlienEgg_HPP
#define UE4SS_SDK_BP_AlienEgg_HPP

class ABP_AlienEgg_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SurroundingTerrainCarver;
    class UOutlineComponent* outline;
    class UPointLightComponent* PointLight6;
    class UPointLightComponent* PointLight5;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* light_center;
    float Timeline_0_NewTrack_0_824C546F43F8F98270303087668A3695;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_824C546F43F8F98270303087668A3695;
    class UTimelineComponent* Timeline_0;
    float LightIntensity;
    FLinearColor LightColor;
    bool IsSpecialEgg;

    void ModulateLights(float NewIntensity);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void All_PlayDugFree();
    void SetSpecialEgg();
    void ExecuteUbergraph_BP_AlienEgg(int32 EntryPoint, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, bool Temp_bool_Variable, TSubclassOf<class UEnemyWaveController> Temp_class_Variable, TSubclassOf<class UEnemyWaveController> Temp_class_Variable_1, bool CallFunc_HasAuthority_ReturnValue, FLinearColor CallFunc_GetLightColor_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, TSubclassOf<class UEnemyWaveController> K2Node_Select_Default, class UEnemyWaveController* CallFunc_TriggerWave_ReturnValue);
};

#endif
