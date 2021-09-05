// BlueprintGeneratedClass BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C
// Size: 0x280 (Inherited: 0x258)
struct ABP_FuelLine_StartPoint_C : AFuelLineStart {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UWidgetComponent* WidgetStartFuelLine; // 0x260(0x08)
	UBoxComponent* UsableCollider; // 0x268(0x08)
	TArray<UMaterialInterface*> DefaultMaterials; // 0x270(0x10)

	void SetMaterial(FName InSlotName, UMaterialInterface* InMaterial);
	void UpdateState();
	void UserConstructionScript();
	void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	void ReceiveBeginPlay();
	void FuelPodLanded();
	void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature(UTrackBuilderUsable* InUsable, ATrackBuilderSegment* InSegment);
	void ExecuteUbergraph_BP_FuelLine_StartPoint(int32_t EntryPoint);
};

