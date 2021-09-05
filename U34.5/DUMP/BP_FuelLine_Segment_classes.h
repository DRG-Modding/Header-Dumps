// BlueprintGeneratedClass BP_FuelLine_Segment.BP_FuelLine_Segment_C
// Size: 0x304 (Inherited: 0x2c8)
struct ABP_FuelLine_Segment_C : AFuelLineSegment {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2d0(0x08)
	UAudioComponent* Audio_Placeing; // 0x2d8(0x08)
	USphereComponent* UsableSphere; // 0x2e0(0x08)
	TArray<UMaterialInterface*> MaterialsDefaultEndPost; // 0x2e8(0x10)
	FVector EndLocation; // 0x2f8(0x0c)

	void OverrideMaterialByIndex(UPrimitiveComponent* InMesh, TArray<UMaterialInterface*> InDefaultMaterials, int32_t InIndex, UMaterialInterface* InMaterial);
	void OverrideMaterialByName(UMeshComponent* InMesh, TArray<UMaterialInterface*> InDefaultMaterials, FName InMaterialSlotName, UMaterialInterface* InMaterial);
	void UpdateVisualState();
	bool ReceiveCanPlaceAt(FTransform InCandidateTransform, UTrackBuilderConnectPoint* InConnectPoint);
	void UserConstructionScript();
	void ReceivePlacementStateChanged(enum class ETrackBuildPlacementState NewState);
	void BndEvt__NextSegmentUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	void ReceiveBeginPlay();
	void ReceivPlacementValidChanged(bool InIsValid);
	void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health);
	void BndEvt__DeconstructHealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_BP_FuelLine_Segment(int32_t EntryPoint);
};

