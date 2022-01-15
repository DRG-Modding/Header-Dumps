#ifndef UE4SS_SDK_BP_DropPod_Escape_Damaged_HPP
#define UE4SS_SDK_BP_DropPod_Escape_Damaged_HPP

class ABP_DropPod_Escape_Damaged_C : UBP_DropPod_Escape_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* DistressLamp1;
    UStaticMeshComponent* DistressLamp3;
    UChildActorComponent* FuelLineConnector;
    ULevelGenerationDebris* LevelGenerationDebris;
    URoomCarverComponent* RoomCarver;
    UMeshCarverComponent* DrillCarver;
    UMeshCarverComponent* DropHoleCarver;
    ULevelGenerationCarverComponent* LevelGenerationCarver;
    UPointLightComponent* PointLight4_0;
    UStaticMeshComponent* DistressLamp2;
    UStaticMeshComponent* DistressLamp;
    float DistressLightIntensity_NewTrack_0_38EDB07D496907E74B940B9932C913EE;
    TEnumAsByte<ETimelineDirection::Type> DistressLightIntensity__Direction_38EDB07D496907E74B940B9932C913EE;
    UTimelineComponent* DistressLightIntensity;
    float DistressLightIntensity_;

    void Handle PhotosenitivityDamagedPod(UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue);
    void DistressLightIntensity__FinishedFunc();
    void DistressLightIntensity__UpdateFunc();
    void ReceiveBeginPlay();
    void OnMuleLoaded();
    void OnMatchStarted_Event_0();
    void OnPoweringUp();
    void OnPoweredUp();
    void ExecuteUbergraph_BP_DropPod_Escape_Damaged(int32 EntryPoint, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, bool Temp_bool_Variable, MatchStartedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, bool CallFunc_HasAuthority_ReturnValue, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, FVector CallFunc_K2_GetActorLocation_ReturnValue_6, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_GetPhotosensitiveMode_ReturnValue_1, UMaterialInterface* K2Node_Select_Default);
}

#endif
