// BlueprintGeneratedClass BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C
// Size: 0x350 (Inherited: 0x338)
struct ABP_SentryLoadoutProxy_C : ALoadoutItemProxy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x340(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x348(0x08)

	void RecieveEquipped(); // Function BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C.RecieveEquipped
	void RecieveUnequipped(); // Function BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C.RecieveUnequipped
	void ExecuteUbergraph_BP_SentryLoadoutProxy(int32_t EntryPoint); // Function BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C.ExecuteUbergraph_BP_SentryLoadoutProxy
};

