#ifndef UE4SS_SDK_BP_SupplyPod_Beacon_HPP
#define UE4SS_SDK_BP_SupplyPod_Beacon_HPP

class ABP_SupplyPod_Beacon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* Hologram;
    class UStaticMeshComponent* Mesh_Hologram1;
    class UStaticMeshComponent* Mesh_Hologram3;
    class UStaticMeshComponent* Mesh_Hologram2;
    class UPointLightComponent* PointLight;
    class USkeletalMeshComponent* Mesh_Beacon;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* SM_Light032;
    class UStaticMeshComponent* SM_Light031;
    class UStaticMeshComponent* SM_Light02;
    class UStaticMeshComponent* SM_Light03;
    class UWidgetComponent* Widget;
    class UWidgetComponent* Widget1;
    class UStaticMeshComponent* StaticMeshComponent0;
    class UStaticMeshComponent* StaticMeshComponent03;
    class UStaticMeshComponent* StaticMeshComponent02;
    class USceneComponent* GFX;
    class USceneComponent* Scene;
    float Timeline_0_0_1_Anim_6845F4954F0E7A1C2FD46AAFD8023896;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6845F4954F0E7A1C2FD46AAFD8023896;
    class UTimelineComponent* Timeline_0;
    float LightIntensity;
    FLinearColor LightColor;
    float TimeToLive;

    void SetBlinkIntensity(float BlinkIntensity, bool Temp_bool_Variable, const float Temp_float_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_1, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const float K2Node_Select_Default, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_GetPhotosensitiveMode_ReturnValue_1, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
    void UserConstructionScript(FLinearColor CallFunc_GetLightColor_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_SupplyPod_Beacon(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Multiply_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult);
};

#endif
