// BlueprintGeneratedClass BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C
// Size: 0x2d8 (Inherited: 0x260)
struct ABP_Salvage_Point_Uplink_C : ABP_Salvage_Point_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTerrainScannerStaticMesh* TerrainScannerStaticMesh; // 0x268(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x270(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x278(0x08)
	struct UOxygenSourceComponent* OxygenSource; // 0x280(0x08)
	struct UPointLightComponent* PointLight1; // 0x288(0x08)
	struct UPointLightComponent* PointLight; // 0x290(0x08)
	struct UPointLightComponent* PointLight2; // 0x298(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x2a0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2a8(0x08)
	struct UBoxComponent* UplinkCollision; // 0x2b0(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2b8(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x2c0(0x08)
	struct UAudioComponent* UplinkTriangulation_Cue; // 0x2c8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2d0(0x08)

	void HandlePhotosensitivity(); // Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.HandlePhotosensitivity
	void ReceiveBeginPlay(); // Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ReceiveBeginPlay
	void OnDefenseStart(); // Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseStart
	void OnDefenseComplete(); // Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseComplete
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress); // Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature
	void OnDefenseFail(); // Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.OnDefenseFail
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature
	void UpdateTerrainScannerMesh(); // Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.UpdateTerrainScannerMesh
	void ExecuteUbergraph_BP_Salvage_Point_Uplink(int32_t EntryPoint); // Function BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C.ExecuteUbergraph_BP_Salvage_Point_Uplink
};

