// BlueprintGeneratedClass BP_Guntower_Module_Homing.BP_Guntower_Module_Homing_C
// Size: 0x470 (Inherited: 0x440)
struct ABP_Guntower_Module_Homing_C : AHomingFireModule {
	FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	UCapsuleComponent* Capsule; // 0x448(0x08)
	UOutlineComponent* outline; // 0x450(0x08)
	UChildActorComponent* WeakPointActor; // 0x458(0x08)
	UChildActorComponent* WeakPointActor2; // 0x460(0x08)
	UChildActorComponent* WeakPointActor1; // 0x468(0x08)

	void OnTearArmor();
	void ExecuteUbergraph_BP_Guntower_Module_Homing(int32_t EntryPoint);
};

