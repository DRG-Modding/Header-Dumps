#ifndef UE4SS_SDK_BP_LostPackStart_HPP
#define UE4SS_SDK_BP_LostPackStart_HPP

class ABP_LostPackStart_C : public ATreasureBeacon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UParticleSystemComponent* P_LostPack_Scanning1;
    class UParticleSystemComponent* P_LostPack_Scanning;
    class UAudioComponent* audio;
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

    void OnRep_Activated();
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
    void ExecuteUbergraph_BP_LostPackStart(int32 EntryPoint);
};

#endif
