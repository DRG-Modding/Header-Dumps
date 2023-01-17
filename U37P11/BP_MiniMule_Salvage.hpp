#ifndef UE4SS_SDK_BP_MiniMule_Salvage_HPP
#define UE4SS_SDK_BP_MiniMule_Salvage_HPP

class ABP_MiniMule_Salvage_C : public AMiniMule
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UStaticMeshComponent* DistressSphere;
    class UAudioComponent* DistressCall;
    class UAudioComponent* AudioScanning;
    class USphereComponent* TutorialTrigger;
    class UBP_Tutorial_Hint_BrokenMiniMule_C* BP_Tutorial_Hint_BrokenMiniMule;
    class UParticleSystemComponent* P_MiniMuleScanner_Activated;
    class USingleUsableComponent* UsableScan;
    class ULevelGenerationDebris* LevelGenerationDebris;
    class UDropToTerrainComponent* DropToTerrain;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UWidgetComponent* BuildWidget;
    class UOutlineComponent* outline;
    class UPointLightComponent* Needs RepairPointLight;
    class URepairableUsable* UsableAttachLegs;
    class UBoxComponent* ImpactBox;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* FrontLight;
    class USingleUsableComponent* UsableRepair;
    class USphereComponent* EnemyTrigger;
    class UPointLightComponent* PointLight;
    class UActorTrackingComponent* ActorTracking;
    class UBoxComponent* Box;
    class URepairableComponent* repairable;
    float Sphere_Timeline_Alpha_F8822EE14FEEA3F10146E8A0CB21A6AE;
    float Sphere_Timeline_Scale_F8822EE14FEEA3F10146E8A0CB21A6AE;
    TEnumAsByte<ETimelineDirection::Type> Sphere_Timeline__Direction_F8822EE14FEEA3F10146E8A0CB21A6AE;
    class UTimelineComponent* Sphere Timeline;
    float Intensity_Intensity_5AC148CB47D091780A7015BD47B62D4E;
    TEnumAsByte<ETimelineDirection::Type> Intensity__Direction_5AC148CB47D091780A7015BD47B62D4E;
    class UTimelineComponent* Intensity;
    class UMaterialInstanceDynamic* Sphere Material;
    float DistressLightIntensity ;
    TArray<FName> Legs;
    TMap<UResourceData*, int32> ResourcesToGive;
    FRandRange CraftingMaterialAmount;
    class UFSDAchievement* MiniMuleFixerAchievement;
    bool DetectingLostLegs;
    FName ControlledKeyName;
    class ABP_DropPod_Base_C* TargetDropPod;

    void GetNeedsLegs(bool& OutNeedsLegs);
    void Set Detect Lost Legs(bool InDetect);
    void PlayDistressAudio();
    void TryDestroyComponent(class UActorComponent* Component);
    void GetState(TEnumAsByte<MiniMule_State::Type>& NewParam);
    void SetState(TEnumAsByte<MiniMule_State::Type> EnumValue);
    void UserConstructionScript();
    void Sphere Timeline__FinishedFunc();
    void Sphere Timeline__UpdateFunc();
    void Intensity__FinishedFunc();
    void Intensity__UpdateFunc();
    void GotoDropPod(class ABP_DropPod_Base_C* DropPod);
    void Cheat_TeleportPlayer();
    void ReceiveBeginPlay();
    void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void Stop Beacon();
    void Cheat_Repair(class APlayerCharacter* User);
    void BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature(class URepairableComponent* Component);
    void BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature(class URepairableComponent* Component);
    void BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature(class URepairableComponent* Component);
    void BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnMessageAI(FName TriggerName);
    void OnFallToTerrainStateChanged(bool IsFalling);
    void OnLegsSetVisible();
    void BndEvt__UsableScan_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__UsableRepair_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool CanUse);
    void PingFX();
    void BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__UsableScan_K2Node_ComponentBoundEvent_5_ProgressSignature__DelegateSignature(float Progress);
    void SetControlledByDropShip(bool Control);
    void OnRep_IsDown();
    void CheatRepair();
    void ExecuteUbergraph_BP_MiniMule_Salvage(int32 EntryPoint);
};

#endif
