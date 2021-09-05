// BlueprintGeneratedClass Loadout_GrenadeProxyBase.Loadout_GrenadeProxyBase_C
// Size: 0x350 (Inherited: 0x338)
struct ALoadout_GrenadeProxyBase_C : ALoadoutItemProxy {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UStaticMeshComponent* StaticMesh; // 0x340(0x08)
	USceneComponent* DefaultSceneRoot; // 0x348(0x08)

	void RecieveEquipped();
	void RecieveUnequipped();
	void ExecuteUbergraph_Loadout_GrenadeProxyBase(int32_t EntryPoint);
};

