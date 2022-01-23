#ifndef UE4SS_SDK_BP_LostPackStart_HPP
#define UE4SS_SDK_BP_LostPackStart_HPP

class ABP_LostPackStart_C : public ATreasureBeacon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_LostPack_Scanning1;
    class UParticleSystemComponent* P_LostPack_Scanning;
    class UAudioComponent* Audio;
    class USphereComponent* LaserPointerShpere;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* HelmetMesh;
    class UOutlineComponent* outline;
    class UTerrainDetectComponent* TerrainDetect;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UDropToTerrainComponent* DropToTerrain;
    class USphereComponent* Sphere;
    class USingleUsableComponent* SingleUsable;
    float LightTimeline_NewTrack_0_9C3586C54F34D331F1DA6DBB251F58D5;
    TEnumAsByte<ETimelineDirection::Type> LightTimeline__Direction_9C3586C54F34D331F1DA6DBB251F58D5;
    class UTimelineComponent* LightTimeLine;
    class UMaterialInstanceDynamic* DMI;
    class UDialogDataAsset* OnDataDownloadedShout;
    class USoundBase* MapUpdatedAllNotification;
    bool Activated;

    void OnRep_Activated(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable);
    void LightTimeline__FinishedFunc();
    void LightTimeline__UpdateFunc();
    void LightTimeline__NewTrack_1__EventFunc();
    void ReceiveBeginPlay();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_OnFailed__DelegateSignature();
    void StartLightWave();
    void All_playDownloadSound();
    void UpdateLight(float Strength);
    void Used();
    void UpdateScanningParticles(bool Active);
    void ExecuteUbergraph_BP_LostPackStart(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user_1, EInputKeys K2Node_ComponentBoundEvent_key_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_CustomEvent_Strength, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool K2Node_CustomEvent_Active);
};

#endif
