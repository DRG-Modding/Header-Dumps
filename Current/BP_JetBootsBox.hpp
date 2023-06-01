#ifndef UE4SS_SDK_BP_JetBootsBox_HPP
#define UE4SS_SDK_BP_JetBootsBox_HPP

class ABP_JetBootsBox_C : public AJetBootsBox
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_GunTower_Carver01;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UPointLightComponent* HologramLight;
    class UAudioComponent* JetpackCall_Cue;
    class UTerrainDetectComponent* TerrainDetect5;
    class UTerrainDetectComponent* TerrainDetect4;
    class UStaticMeshComponent* FrontPlane;
    class UStaticMeshComponent* BackPlane;
    class UStaticMeshComponent* StaticMesh;
    class UNiagaraComponent* Niagara;
    class UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    class USkeletalMeshComponent* SkeletalMesh;
    class UPointLightComponent* PointLight;
    class UHackingUsableComponent* HackingUsable;
    class USingleUsableComponent* EquipUsable;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UBoxComponent* UseBox;
    class UBoxComponent* Box;
    class UDropToTerrainComponent* DropToTerrain;
    class UAudioComponent* ChestIdle_Cue;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    float Timeline_0_Intensity_356A073F4538622C1D3198B6E43B1175;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_356A073F4538622C1D3198B6E43B1175;
    class UTimelineComponent* Timeline_0;
    class UAudioComponent* IdleSound;
    bool Open;
    float LightsDelay;
    int32 LightsSwitched;
    TArray<int32> LightsOrder;
    float DistressLightIntensity ;
    class UMaterialInstanceDynamic* SphereMaterial;
    class UTimelineComponent* Sphere Timeline;
    TArray<class APlayerCharacter*> HasEquipped;
    bool BeingHacked;
    class UMaterialInstanceDynamic* LightMaterial;

    void OnRep_BeingHacked();
    void SetUpLights();
    void OnRep_HasEquipped();
    void OnRep_Open();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void DoOpeningSequence();
    void SwitchNextMaterial();
    void BndEvt__BP_JetBootsBox_HackingUsable_K2Node_ComponentBoundEvent_0_HackedDelegate__DelegateSignature(class APlayerCharacter* InHackedBy);
    void ReceiveBeginPlay();
    void BndEvt__BP_JetBootsBox_EquipUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void AnimateLights();
    void PlayDistressCall();
    void ReceiveOnRepEquipped();
    void BndEvt__BP_JetBootsBox_HackingUsable_K2Node_ComponentBoundEvent_2_ItemDelegate__DelegateSignature(class AItem* Item);
    void ReceiveTick(float DeltaSeconds);
    void ReverseLights();
    void ExecuteUbergraph_BP_JetBootsBox(int32 EntryPoint);
};

#endif
