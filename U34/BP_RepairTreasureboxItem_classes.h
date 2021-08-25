// BlueprintGeneratedClass BP_RepairTreasureboxItem.BP_RepairTreasureboxItem_C
// Size: 0x358 (Inherited: 0x321)
struct ABP_RepairTreasureboxItem_C : ABP_Gem_C {
	char UnknownData_321[0x7]; // 0x321(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x330(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x338(0x08)
	struct UAudioComponent* Chest_BatteryPacks_Distress_Cue; // 0x340(0x08)
	struct UStaticMeshComponent* Distress_Sphere; // 0x348(0x08)
	struct UPointLightComponent* PointLight; // 0x350(0x08)

	void ReceiveBeginPlay(); // Function BP_RepairTreasureboxItem.BP_RepairTreasureboxItem_C.ReceiveBeginPlay
	void OnDropped Leg(); // Function BP_RepairTreasureboxItem.BP_RepairTreasureboxItem_C.OnDropped Leg
	void OnPickedUpLeg(); // Function BP_RepairTreasureboxItem.BP_RepairTreasureboxItem_C.OnPickedUpLeg
	void CustomEvent_1(); // Function BP_RepairTreasureboxItem.BP_RepairTreasureboxItem_C.CustomEvent_1
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature(); // Function BP_RepairTreasureboxItem.BP_RepairTreasureboxItem_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_3_CarriableEvent__DelegateSignature(); // Function BP_RepairTreasureboxItem.BP_RepairTreasureboxItem_C.BndEvt__Carriable_K2Node_ComponentBoundEvent_3_CarriableEvent__DelegateSignature
	void ExecuteUbergraph_BP_RepairTreasureboxItem(int32_t EntryPoint); // Function BP_RepairTreasureboxItem.BP_RepairTreasureboxItem_C.ExecuteUbergraph_BP_RepairTreasureboxItem
};

