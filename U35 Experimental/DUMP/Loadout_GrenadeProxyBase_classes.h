// BlueprintGeneratedClass Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C
// Size: 0x370 (Inherited: 0x358)
struct ALoadout_GrenadeProxyBase_C : ALoadoutItemProxy {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	UStaticMeshComponent* StaticMesh; // 0x360(0x08)
	USceneComponent* DefaultSceneRoot; // 0x368(0x08)

	void RecieveEquipped();
	void RecieveUnequipped();
	void ExecuteUbergraph_Loadout_GrenadeProxyBase(int32_t EntryPoint);
};

