// BlueprintGeneratedClass BP_BarrelDispenser.BP_BarrelDispenser_C
// Size: 0x271 (Inherited: 0x258)
struct ABP_BarrelDispenser_C : ABarrelDispenser {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UOutlineComponent* outline; // 0x260(0x08)
	USphereComponent* Sphere; // 0x268(0x08)
	bool StartReady; // 0x270(0x01)

	void ManageOutline(float ActiveTime);
	void ReceiveBeginPlay();
	void SetOutline(float ActiveTime);
	void ExecuteUbergraph_BP_BarrelDispenser(int32_t EntryPoint);
};

