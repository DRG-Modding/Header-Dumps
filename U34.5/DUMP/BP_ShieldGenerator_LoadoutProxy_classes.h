// BlueprintGeneratedClass BP_ShieldGenerator_LoadoutProxy.BP_ShieldGenerator_LoadoutProxy_C
// Size: 0x350 (Inherited: 0x338)
struct ABP_ShieldGenerator_LoadoutProxy_C : ALoadoutItemProxy {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UStaticMeshComponent* StaticMesh; // 0x340(0x08)
	USceneComponent* DefaultSceneRoot; // 0x348(0x08)

	void RecieveEquipped();
	void RecieveUnequipped();
	void ExecuteUbergraph_BP_ShieldGenerator_LoadoutProxy(int32_t EntryPoint);
};

