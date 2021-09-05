// BlueprintGeneratedClass BP_Salvage_Point_Base.BP_Salvage_Point_Base_C
// Size: 0x260 (Inherited: 0x231)
struct ABP_Salvage_Point_Base_C : ABP_Salvage_Point_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UBoxComponent* Box; // 0x240(0x08)
	UStaticMeshComponent* DistressSphere; // 0x248(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x250(0x08)
	USingleUsableComponent* SingleUsable; // 0x258(0x08)

	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void EnableRepair();
	void ExecuteUbergraph_BP_Salvage_Point_Base(int32_t EntryPoint);
};

