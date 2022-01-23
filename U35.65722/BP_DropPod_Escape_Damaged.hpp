#ifndef UE4SS_SDK_BP_DropPod_Escape_Damaged_HPP
#define UE4SS_SDK_BP_DropPod_Escape_Damaged_HPP

class ABP_DropPod_Escape_Damaged_C : public ABP_DropPod_Escape_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* DistressLamp1;
    class UStaticMeshComponent* DistressLamp3;
    class UChildActorComponent* FuelLineConnector;
    class ULevelGenerationDebris* LevelGenerationDebris;
    class URoomCarverComponent* RoomCarver;
    class UMeshCarverComponent* DrillCarver;
    class UMeshCarverComponent* DropHoleCarver;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UPointLightComponent* PointLight4_0;
    class UStaticMeshComponent* DistressLamp2;
    class UStaticMeshComponent* DistressLamp;
    float DistressLightIntensity_NewTrack_0_38EDB07D496907E74B940B9932C913EE;
    TEnumAsByte<ETimelineDirection::Type> DistressLightIntensity__Direction_38EDB07D496907E74B940B9932C913EE;
    class UTimelineComponent* DistressLightIntensity;
    float DistressLightIntensity_;

    void Handle PhotosenitivityDamagedPod(class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue);
    void DistressLightIntensity__FinishedFunc();
    void DistressLightIntensity__UpdateFunc();
    void ReceiveBeginPlay();
    void OnMuleLoaded();
    void OnMatchStarted_Event_0();
    void OnPoweringUp();
    void OnPoweredUp();
    void ExecuteUbergraph_BP_DropPod_Escape_Damaged(int32 EntryPoint, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, bool Temp_bool_Variable, FExecuteUbergraph_BP_DropPod_Escape_DamagedK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_HasAuthority_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_GetPhotosensitiveMode_ReturnValue_1, class UMaterialInterface* K2Node_Select_Default);
};

#endif
