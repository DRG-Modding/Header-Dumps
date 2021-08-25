// BlueprintGeneratedClass BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C
// Size: 0x280 (Inherited: 0x258)
struct ABP_FuelLine_StartPoint_C : AFuelLineStart {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UWidgetComponent* WidgetStartFuelLine; // 0x260(0x08)
	struct UBoxComponent* UsableCollider; // 0x268(0x08)
	struct TArray<struct UMaterialInterface*> DefaultMaterials; // 0x270(0x10)

	void SetMaterial(struct FName InSlotName, struct UMaterialInterface* InMaterial); // Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.SetMaterial
	void UpdateState(); // Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.UpdateState
	void UserConstructionScript(); // Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.UserConstructionScript
	void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.ReceiveBeginPlay
	void FuelPodLanded(); // Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.FuelPodLanded
	void BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature(struct UTrackBuilderUsable* InUsable, struct ATrackBuilderSegment* InSegment); // Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.BndEvt__UsableStartFuelLine_K2Node_ComponentBoundEvent_1_SegmentDelegate__DelegateSignature
	void ExecuteUbergraph_BP_FuelLine_StartPoint(int32_t EntryPoint); // Function BP_FuelLine_StartPoint.BP_FuelLine_StartPoint_C.ExecuteUbergraph_BP_FuelLine_StartPoint
};

