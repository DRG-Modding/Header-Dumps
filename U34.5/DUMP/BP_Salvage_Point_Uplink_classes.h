// BlueprintGeneratedClass BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C
// Size: 0x2d8 (Inherited: 0x260)
struct ABP_Salvage_Point_Uplink_C : ABP_Salvage_Point_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x268(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x270(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x278(0x08)
	UOxygenSourceComponent* OxygenSource; // 0x280(0x08)
	UPointLightComponent* PointLight1; // 0x288(0x08)
	UPointLightComponent* PointLight; // 0x290(0x08)
	UPointLightComponent* PointLight2; // 0x298(0x08)
	UStaticMeshComponent* StaticMesh1; // 0x2a0(0x08)
	UStaticMeshComponent* StaticMesh; // 0x2a8(0x08)
	UBoxComponent* UplinkCollision; // 0x2b0(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x2b8(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x2c0(0x08)
	UAudioComponent* UplinkTriangulation_Cue; // 0x2c8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2d0(0x08)

	void HandlePhotosensitivity();
	void ReceiveBeginPlay();
	void OnDefenseStart();
	void OnDefenseComplete();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
	void OnDefenseFail();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool canUse);
	void UpdateTerrainScannerMesh();
	void ExecuteUbergraph_BP_Salvage_Point_Uplink(int32_t EntryPoint);
};

