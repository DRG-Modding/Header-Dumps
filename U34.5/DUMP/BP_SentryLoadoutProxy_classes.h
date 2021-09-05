// BlueprintGeneratedClass BP_SentryLoadoutProxy.BP_SentryLoadoutProxy_C
// Size: 0x350 (Inherited: 0x338)
struct ABP_SentryLoadoutProxy_C : ALoadoutItemProxy {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x340(0x08)
	USceneComponent* DefaultSceneRoot; // 0x348(0x08)

	void RecieveEquipped();
	void RecieveUnequipped();
	void ExecuteUbergraph_BP_SentryLoadoutProxy(int32_t EntryPoint);
};

