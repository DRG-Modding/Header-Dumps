// BlueprintGeneratedClass ENE_BoughWasp_Nest_Medium.ENE_BoughWasp_Nest_Medium_C
// Size: 0x3c8 (Inherited: 0x3b8)
struct AENE_BoughWasp_Nest_Medium_C : AENE_BoughWasp_Nest_Small_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	UStaticMeshComponent* SM_HollowboughWaspNest_03; // 0x3c0(0x08)

	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void OnNestDeath();
	void ExecuteUbergraph_ENE_BoughWasp_Nest_Medium(int32_t EntryPoint);
};

