// BlueprintGeneratedClass BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C
// Size: 0x350 (Inherited: 0x338)
struct ABP_Detpack_LoadoutProxy_C : ALoadoutItemProxy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x340(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x348(0x08)

	void RecieveEquipped(); // Function BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C.RecieveEquipped
	void RecieveUnequipped(); // Function BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C.RecieveUnequipped
	void ExecuteUbergraph_BP_Detpack_LoadoutProxy(int32_t EntryPoint); // Function BP_Detpack_LoadoutProxy.BP_Detpack_LoadoutProxy_C.ExecuteUbergraph_BP_Detpack_LoadoutProxy
};

