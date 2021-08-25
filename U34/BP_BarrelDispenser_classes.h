// BlueprintGeneratedClass BP_BarrelDispenser.BP_BarrelDispenser_C
// Size: 0x271 (Inherited: 0x258)
struct ABP_BarrelDispenser_C : ABarrelDispenser {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UOutlineComponent* outline; // 0x260(0x08)
	struct USphereComponent* Sphere; // 0x268(0x08)
	bool StartReady; // 0x270(0x01)

	void ManageOutline(float ActiveTime); // Function BP_BarrelDispenser.BP_BarrelDispenser_C.ManageOutline
	void ReceiveBeginPlay(); // Function BP_BarrelDispenser.BP_BarrelDispenser_C.ReceiveBeginPlay
	void SetOutline(float ActiveTime); // Function BP_BarrelDispenser.BP_BarrelDispenser_C.SetOutline
	void ExecuteUbergraph_BP_BarrelDispenser(int32_t EntryPoint); // Function BP_BarrelDispenser.BP_BarrelDispenser_C.ExecuteUbergraph_BP_BarrelDispenser
};

