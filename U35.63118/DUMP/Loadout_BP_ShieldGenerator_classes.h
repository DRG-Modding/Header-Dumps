// BlueprintGeneratedClass Loadout_BP_ShieldGenerator.Loadout_BP_ShieldGenerator_C
// Size: 0x370 (Inherited: 0x358)
struct ALoadout_BP_ShieldGenerator_C : ALoadoutItemProxy {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	UStaticMeshComponent* StaticMesh; // 0x360(0x08)
	USceneComponent* DefaultSceneRoot; // 0x368(0x08)

	void RecieveEquipped();
	void RecieveUnequipped();
	void ExecuteUbergraph_Loadout_BP_ShieldGenerator(int32_t EntryPoint);
};

