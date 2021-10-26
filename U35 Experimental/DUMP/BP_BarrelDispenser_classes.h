// BlueprintGeneratedClass BP_BarrelDispenser.BP_BarrelDispenser_C
// Size: 0x289 (Inherited: 0x268)
struct ABP_BarrelDispenser_C : ABP_ItemDispenserBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x270(0x08)
	UOutlineComponent* outline; // 0x278(0x08)
	USphereComponent* Sphere; // 0x280(0x08)
	bool StartReady; // 0x288(0x01)

	void ManageOutline(float ActiveTime);
	void ReceiveBeginPlay();
	void SetOutline(float ActiveTime);
	void ExecuteUbergraph_BP_BarrelDispenser(int32_t EntryPoint);
};

