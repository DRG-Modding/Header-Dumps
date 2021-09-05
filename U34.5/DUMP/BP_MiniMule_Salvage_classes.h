// BlueprintGeneratedClass BP_MiniMule_Salvage.BP_MiniMule_Salvage_C
// Size: 0x538 (Inherited: 0x3a0)
struct ABP_MiniMule_Salvage_C : AMiniMule {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	UStaticMeshComponent* DistressSphere; // 0x3a8(0x08)
	UAudioComponent* DistressCall; // 0x3b0(0x08)
	UAudioComponent* AudioScanning; // 0x3b8(0x08)
	USphereComponent* TutorialTrigger; // 0x3c0(0x08)
	UBP_Tutorial_Hint_BrokenMiniMule_C* BP_Tutorial_Hint_BrokenMiniMule; // 0x3c8(0x08)
	UParticleSystemComponent* P_MiniMuleScanner_Activated; // 0x3d0(0x08)
	USingleUsableComponent* UsableScan; // 0x3d8(0x08)
	ULevelGenerationDebris* LevelGenerationDebris; // 0x3e0(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x3e8(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x3f0(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x3f8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x400(0x08)
	UWidgetComponent* BuildWidget; // 0x408(0x08)
	UOutlineComponent* outline; // 0x410(0x08)
	UPointLightComponent* Needs RepairPointLight; // 0x418(0x08)
	URepairableUsable* UsableAttachLegs; // 0x420(0x08)
	UBoxComponent* ImpactBox; // 0x428(0x08)
	USpotLightComponent* SpotLight; // 0x430(0x08)
	UStaticMeshComponent* StaticMesh; // 0x438(0x08)
	USceneComponent* FrontLight; // 0x440(0x08)
	USingleUsableComponent* UsableRepair; // 0x448(0x08)
	USphereComponent* EnemyTrigger; // 0x450(0x08)
	UPointLightComponent* PointLight; // 0x458(0x08)
	UActorTrackingComponent* ActorTracking; // 0x460(0x08)
	UBoxComponent* Box; // 0x468(0x08)
	URepairableComponent* repairable; // 0x470(0x08)
	float Sphere_Timeline_Alpha_F8822EE14FEEA3F10146E8A0CB21A6AE; // 0x478(0x04)
	float Sphere_Timeline_Scale_F8822EE14FEEA3F10146E8A0CB21A6AE; // 0x47c(0x04)
	enum class ETimelineDirection Sphere_Timeline__Direction_F8822EE14FEEA3F10146E8A0CB21A6AE; // 0x480(0x01)
	UTimelineComponent* Sphere Timeline; // 0x488(0x08)
	float Intensity_Intensity_5AC148CB47D091780A7015BD47B62D4E; // 0x490(0x04)
	enum class ETimelineDirection Intensity__Direction_5AC148CB47D091780A7015BD47B62D4E; // 0x494(0x01)
	UTimelineComponent* Intensity; // 0x498(0x08)
	UMaterialInstanceDynamic* Sphere Material; // 0x4a0(0x08)
	float DistressLightIntensity ; // 0x4a8(0x04)
	TArray<FName> Legs; // 0x4b0(0x10)
	TMap<UResourceData*, int32_t> ResourcesToGive; // 0x4c0(0x50)
	FRandRange CraftingMaterialAmount; // 0x510(0x08)
	UFSDAchievement* MiniMuleFixerAchievement; // 0x518(0x08)
	bool DetectingLostLegs; // 0x520(0x01)
	FName ControlledKeyName; // 0x524(0x08)
	ABP_DropPod_Base_C* TargetDropPod; // 0x530(0x08)

	void GetNeedsLegs(bool OutNeedsLegs);
	void Set Detect Lost Legs(bool InDetect);
	void PlayDistressAudio();
	void TryDestroyComponent(UActorComponent* Component);
	void GetState(enum class MiniMule_State NewParam);
	void SetState(enum class MiniMule_State EnumValue);
	void UserConstructionScript();
	void Sphere Timeline__FinishedFunc();
	void Sphere Timeline__UpdateFunc();
	void Intensity__FinishedFunc();
	void Intensity__UpdateFunc();
	void GotoDropPod(ABP_DropPod_Base_C* DropPod);
	void Cheat_TeleportPlayer();
	void ReceiveBeginPlay();
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void Stop Beacon();
	void Cheat_Repair();
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature(URepairableComponent* Component);
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature(URepairableComponent* Component);
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature(URepairableComponent* Component);
	void BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnMessageAI(FName TriggerName);
	void OnFallToTerrainStateChanged(bool IsFalling);
	void OnLegsSetVisible();
	void BndEvt__UsableScan_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void BndEvt__UsableRepair_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool canUse);
	void PingFX();
	void BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__UsableScan_K2Node_ComponentBoundEvent_5_ProgressSignature__DelegateSignature(float Progress);
	void SetControlledByDropShip(bool Control);
	void OnRep_IsDown();
	void ExecuteUbergraph_BP_MiniMule_Salvage(int32_t EntryPoint);
};

