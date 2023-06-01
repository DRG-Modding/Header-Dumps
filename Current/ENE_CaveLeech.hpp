#ifndef UE4SS_SDK_ENE_CaveLeech_HPP
#define UE4SS_SDK_ENE_CaveLeech_HPP

class AENE_CaveLeech_C : public ACaveLeech
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* HeadAudio;
    class UStaticMeshComponent* StaticMesh;
    class UParticleSystemComponent* ParticleSystem;
    class USceneComponent* RetractSpot;
    class UPointLightComponent* PointLight;
    class UOutlineComponent* outline;
    class USphereComponent* HitCollider;
    class UTerrainPlacementComponent* terrainPlacement;
    class USphereComponent* HeadCollision;
    class USkeletalMeshComponent* TopMesh;
    class USceneComponent* Mouth;
    float Light_on_Light_value_5D62893F4543BADC6EB650BB2288E402;
    TEnumAsByte<ETimelineDirection::Type> Light_on__Direction_5D62893F4543BADC6EB650BB2288E402;
    class UTimelineComponent* Light_on;
    float Light_off_Light_value_FB1F6FB448F184C53818E18AA6CA6E7E;
    TEnumAsByte<ETimelineDirection::Type> Light_off__Direction_FB1F6FB448F184C53818E18AA6CA6E7E;
    class UTimelineComponent* Light_off;
    float Emissive_on_Glow_value_8FD7DFD6484E2EAF8A2D1D97C4E37F6E;
    TEnumAsByte<ETimelineDirection::Type> Emissive_on__Direction_8FD7DFD6484E2EAF8A2D1D97C4E37F6E;
    class UTimelineComponent* Emissive_on;
    float Emissive_off_Glow_value_E8DBA0094826FB48DB3D0A9B7129C074;
    TEnumAsByte<ETimelineDirection::Type> Emissive_off__Direction_E8DBA0094826FB48DB3D0A9B7129C074;
    class UTimelineComponent* Emissive_off;
    class UMaterialInstance* Emission ;
    TArray<class UMaterialInterface*> LeechMats;

    void CreateDynamicMaterials();
    void PlayAudioHead(class USoundBase* NewSound);
    FVector GetMouthLocation();
    void UserConstructionScript();
    void Emissive_on__FinishedFunc();
    void Emissive_on__UpdateFunc();
    void Emissive_off__FinishedFunc();
    void Emissive_off__UpdateFunc();
    void Light_off__FinishedFunc();
    void Light_off__UpdateFunc();
    void Light_on__FinishedFunc();
    void Light_on__UpdateFunc();
    void BP_OnBite(class UHealthComponent* TargetHealth);
    void ReceiveBeginPlay();
    void BP_OnStateChanged(ECaveLeechState NewState);
    void ShowHead(bool bNewVisibility);
    void OnDeath();
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void StopEmissiveOn();
    void StopEmissiveOff();
    void ExecuteUbergraph_ENE_CaveLeech(int32 EntryPoint);
};

#endif
