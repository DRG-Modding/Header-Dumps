// BlueprintGeneratedClass BP_RepairTreasureboxItem.BP_RepairTreasureboxItem_C
// Size: 0x358 (Inherited: 0x321)
struct ABP_RepairTreasureboxItem_C : ABP_Gem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	UStaticMeshComponent* StaticMesh; // 0x330(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x338(0x08)
	UAudioComponent* Chest_BatteryPacks_Distress_Cue; // 0x340(0x08)
	UStaticMeshComponent* Distress_Sphere; // 0x348(0x08)
	UPointLightComponent* PointLight; // 0x350(0x08)

	void ReceiveBeginPlay();
	void OnDropped Leg();
	void OnPickedUpLeg();
	void CustomEvent_1();
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_3_CarriableEvent__DelegateSignature();
	void ExecuteUbergraph_BP_RepairTreasureboxItem(int32_t EntryPoint);
};

