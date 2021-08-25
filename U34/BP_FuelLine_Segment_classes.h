// BlueprintGeneratedClass BP_FuelLine_Segment.BP_FuelLine_Segment_C
// Size: 0x304 (Inherited: 0x2c8)
struct ABP_FuelLine_Segment_C : AFuelLineSegment {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2d0(0x08)
	struct UAudioComponent* Audio_Placeing; // 0x2d8(0x08)
	struct USphereComponent* UsableSphere; // 0x2e0(0x08)
	struct TArray<struct UMaterialInterface*> MaterialsDefaultEndPost; // 0x2e8(0x10)
	struct FVector EndLocation; // 0x2f8(0x0c)

	void OverrideMaterialByIndex(struct UPrimitiveComponent* InMesh, struct TArray<struct UMaterialInterface*> InDefaultMaterials, int32_t InIndex, struct UMaterialInterface* InMaterial); // Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.OverrideMaterialByIndex
	void OverrideMaterialByName(struct UMeshComponent* InMesh, struct TArray<struct UMaterialInterface*> InDefaultMaterials, struct FName InMaterialSlotName, struct UMaterialInterface* InMaterial); // Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.OverrideMaterialByName
	void UpdateVisualState(); // Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.UpdateVisualState
	bool ReceiveCanPlaceAt(struct FTransform InCandidateTransform, struct UTrackBuilderConnectPoint* InConnectPoint); // Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceiveCanPlaceAt
	void UserConstructionScript(); // Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.UserConstructionScript
	void ReceivePlacementStateChanged(enum class ETrackBuildPlacementState NewState); // Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceivePlacementStateChanged
	void BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceiveBeginPlay
	void ReceivPlacementValidChanged(bool InIsValid); // Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ReceivPlacementValidChanged
	void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health); // Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature
	void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature
	void ExecuteUbergraph_BP_FuelLine_Segment(int32_t EntryPoint); // Function BP_FuelLine_Segment.BP_FuelLine_Segment_C.ExecuteUbergraph_BP_FuelLine_Segment
};

