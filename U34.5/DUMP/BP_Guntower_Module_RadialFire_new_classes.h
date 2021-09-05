// BlueprintGeneratedClass BP_Guntower_Module_RadialFire_new.BP_Guntower_Module_RadialFire_new_C
// Size: 0x460 (Inherited: 0x430)
struct ABP_Guntower_Module_RadialFire_new_C : ARadialFireModule {
	FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	UCapsuleComponent* Capsule; // 0x438(0x08)
	UOutlineComponent* outline; // 0x440(0x08)
	UChildActorComponent* Weakpoint2; // 0x448(0x08)
	UChildActorComponent* Weakpoint1; // 0x450(0x08)
	UChildActorComponent* Weakpoint; // 0x458(0x08)

	void OnFire();
	void OnTearArmor();
	void ExecuteUbergraph_BP_Guntower_Module_RadialFire_new(int32_t EntryPoint);
};

