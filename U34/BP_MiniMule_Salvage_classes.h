// BlueprintGeneratedClass BP_MiniMule_Salvage.BP_MiniMule_Salvage_C
// Size: 0x538 (Inherited: 0x3a0)
struct ABP_MiniMule_Salvage_C : AMiniMule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UStaticMeshComponent* DistressSphere; // 0x3a8(0x08)
	struct UAudioComponent* DistressCall; // 0x3b0(0x08)
	struct UAudioComponent* AudioScanning; // 0x3b8(0x08)
	struct USphereComponent* TutorialTrigger; // 0x3c0(0x08)
	struct UBP_Tutorial_Hint_BrokenMiniMule_C* BP_Tutorial_Hint_BrokenMiniMule; // 0x3c8(0x08)
	struct UParticleSystemComponent* P_MiniMuleScanner_Activated; // 0x3d0(0x08)
	struct USingleUsableComponent* UsableScan; // 0x3d8(0x08)
	struct ULevelGenerationDebris* LevelGenerationDebris; // 0x3e0(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x3e8(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x3f0(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x3f8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x400(0x08)
	struct UWidgetComponent* BuildWidget; // 0x408(0x08)
	struct UOutlineComponent* outline; // 0x410(0x08)
	struct UPointLightComponent* Needs RepairPointLight; // 0x418(0x08)
	struct URepairableUsable* UsableAttachLegs; // 0x420(0x08)
	struct UBoxComponent* ImpactBox; // 0x428(0x08)
	struct USpotLightComponent* SpotLight; // 0x430(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x438(0x08)
	struct USceneComponent* FrontLight; // 0x440(0x08)
	struct USingleUsableComponent* UsableRepair; // 0x448(0x08)
	struct USphereComponent* EnemyTrigger; // 0x450(0x08)
	struct UPointLightComponent* PointLight; // 0x458(0x08)
	struct UActorTrackingComponent* ActorTracking; // 0x460(0x08)
	struct UBoxComponent* Box; // 0x468(0x08)
	struct URepairableComponent* repairable; // 0x470(0x08)
	float Sphere_Timeline_Alpha_F8822EE14FEEA3F10146E8A0CB21A6AE; // 0x478(0x04)
	float Sphere_Timeline_Scale_F8822EE14FEEA3F10146E8A0CB21A6AE; // 0x47c(0x04)
	char Sphere_Timeline__Direction_F8822EE14FEEA3F10146E8A0CB21A6AE; // 0x480(0x01)
	char UnknownData_481[0x7]; // 0x481(0x07)
	struct UTimelineComponent* Sphere Timeline; // 0x488(0x08)
	float Intensity_Intensity_5AC148CB47D091780A7015BD47B62D4E; // 0x490(0x04)
	char Intensity__Direction_5AC148CB47D091780A7015BD47B62D4E; // 0x494(0x01)
	char UnknownData_495[0x3]; // 0x495(0x03)
	struct UTimelineComponent* Intensity; // 0x498(0x08)
	struct UMaterialInstanceDynamic* Sphere Material; // 0x4a0(0x08)
	float DistressLightIntensity ; // 0x4a8(0x04)
	char UnknownData_4AC[0x4]; // 0x4ac(0x04)
	struct TArray<struct FName> Legs; // 0x4b0(0x10)
	struct TMap<struct UResourceData*, int32_t> ResourcesToGive; // 0x4c0(0x50)
	struct FRandRange CraftingMaterialAmount; // 0x510(0x08)
	struct UFSDAchievement* MiniMuleFixerAchievement; // 0x518(0x08)
	bool DetectingLostLegs; // 0x520(0x01)
	char UnknownData_521[0x3]; // 0x521(0x03)
	struct FName ControlledKeyName; // 0x524(0x08)
	char UnknownData_52C[0x4]; // 0x52c(0x04)
	struct ABP_DropPod_Base_C* TargetDropPod; // 0x530(0x08)

	void Set Detect Lost Legs(bool InDetect); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Set Detect Lost Legs
	void PlayDistressAudio(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.PlayDistressAudio
	void TryDestroyComponent(struct UActorComponent* Component); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.TryDestroyComponent
	void GetState(char NewParam); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GetState
	void SetState(char EnumValue); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.SetState
	void UserConstructionScript(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.UserConstructionScript
	void Sphere Timeline__FinishedFunc(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__FinishedFunc
	void Sphere Timeline__UpdateFunc(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Sphere Timeline__UpdateFunc
	void Intensity__FinishedFunc(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__FinishedFunc
	void Intensity__UpdateFunc(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Intensity__UpdateFunc
	void GotoDropPod(struct ABP_DropPod_Base_C* DropPod); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.GotoDropPod
	void Cheat_TeleportPlayer(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_TeleportPlayer
	void ReceiveBeginPlay(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ReceiveBeginPlay
	void BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void Stop Beacon(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Stop Beacon
	void Cheat_Repair(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.Cheat_Repair
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature(struct URepairableComponent* Component); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_0_RepairedDelegate__DelegateSignature
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature(struct URepairableComponent* Component); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_1_RepairedDelegate__DelegateSignature
	void BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature(struct URepairableComponent* Component); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__Repairable_K2Node_ComponentBoundEvent_2_RepairedDelegate__DelegateSignature
	void BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__RepairableUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void OnMessageAI(struct FName TriggerName); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnMessageAI
	void OnFallToTerrainStateChanged(bool IsFalling); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnFallToTerrainStateChanged
	void OnLegsSetVisible(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnLegsSetVisible
	void BndEvt__UsableScan_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__UsableScan_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void BndEvt__UsableRepair_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__UsableRepair_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature
	void PingFX(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.PingFX
	void BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__UsableScan_K2Node_ComponentBoundEvent_5_ProgressSignature__DelegateSignature(float Progress); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.BndEvt__UsableScan_K2Node_ComponentBoundEvent_5_ProgressSignature__DelegateSignature
	void SetControlledByDropShip(bool Control); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.SetControlledByDropShip
	void OnRep_IsDown(); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.OnRep_IsDown
	void ExecuteUbergraph_BP_MiniMule_Salvage(int32_t EntryPoint); // Function BP_MiniMule_Salvage.BP_MiniMule_Salvage_C.ExecuteUbergraph_BP_MiniMule_Salvage
};

