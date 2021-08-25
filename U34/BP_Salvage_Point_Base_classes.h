// BlueprintGeneratedClass BP_Salvage_Point_Base.BP_Salvage_Point_Base_C
// Size: 0x260 (Inherited: 0x231)
struct ABP_Salvage_Point_Base_C : ABP_Salvage_Point_C {
	char UnknownData_231[0x7]; // 0x231(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	struct UBoxComponent* Box; // 0x240(0x08)
	struct UStaticMeshComponent* DistressSphere; // 0x248(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x250(0x08)
	struct USingleUsableComponent* SingleUsable; // 0x258(0x08)

	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
	void EnableRepair(); // Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.EnableRepair
	void ExecuteUbergraph_BP_Salvage_Point_Base(int32_t EntryPoint); // Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.ExecuteUbergraph_BP_Salvage_Point_Base
};

