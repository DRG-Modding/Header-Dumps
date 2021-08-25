// BlueprintGeneratedClass BP_Guntower_Module_Homing.BP_Guntower_Module_Homing_C
// Size: 0x470 (Inherited: 0x440)
struct ABP_Guntower_Module_Homing_C : AHomingFireModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UCapsuleComponent* Capsule; // 0x448(0x08)
	struct UOutlineComponent* outline; // 0x450(0x08)
	struct UChildActorComponent* WeakPointActor; // 0x458(0x08)
	struct UChildActorComponent* WeakPointActor2; // 0x460(0x08)
	struct UChildActorComponent* WeakPointActor1; // 0x468(0x08)

	void OnTearArmor(); // Function BP_Guntower_Module_Homing.BP_Guntower_Module_Homing_C.OnTearArmor
	void ExecuteUbergraph_BP_Guntower_Module_Homing(int32_t EntryPoint); // Function BP_Guntower_Module_Homing.BP_Guntower_Module_Homing_C.ExecuteUbergraph_BP_Guntower_Module_Homing
};

