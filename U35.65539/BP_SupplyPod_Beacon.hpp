#ifndef UE4SS_SDK_BP_SupplyPod_Beacon_HPP
#define UE4SS_SDK_BP_SupplyPod_Beacon_HPP

class ABP_SupplyPod_Beacon_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* Hologram;
    UStaticMeshComponent* Mesh_Hologram1;
    UStaticMeshComponent* Mesh_Hologram3;
    UStaticMeshComponent* Mesh_Hologram2;
    UPointLightComponent* PointLight;
    USkeletalMeshComponent* Mesh_Beacon;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UStaticMeshComponent* SM_Light032;
    UStaticMeshComponent* SM_Light031;
    UStaticMeshComponent* SM_Light02;
    UStaticMeshComponent* SM_Light03;
    UWidgetComponent* Widget;
    UWidgetComponent* Widget1;
    UStaticMeshComponent* StaticMeshComponent0;
    UStaticMeshComponent* StaticMeshComponent03;
    UStaticMeshComponent* StaticMeshComponent02;
    USceneComponent* GFX;
    USceneComponent* Scene;
    float Timeline_0_0_1_Anim_6845F4954F0E7A1C2FD46AAFD8023896;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6845F4954F0E7A1C2FD46AAFD8023896;
    UTimelineComponent* Timeline_0;
    float LightIntensity;
    FLinearColor LightColor;
    float TimeToLive;

    void SetBlinkIntensity(float BlinkIntensity, bool Temp_bool_Variable, const float Temp_float_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const float K2Node_Select_Default, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_GetPhotosensitiveMode_ReturnValue_1, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
    void UserConstructionScript(FLinearColor CallFunc_GetLightColor_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SupplyPod_Beacon(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult);
}

#endif
