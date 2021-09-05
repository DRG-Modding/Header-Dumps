// BlueprintGeneratedClass BP_Guntower_Module_RandomFire.BP_Guntower_Module_RandomFire_C
// Size: 0x5a0 (Inherited: 0x568)
struct ABP_Guntower_Module_RandomFire_C : ARandomFiringGuntowerModule {
	FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	UCapsuleComponent* Capsule; // 0x570(0x08)
	UPointLightComponent* PointLight1; // 0x578(0x08)
	UPointLightComponent* PointLight; // 0x580(0x08)
	UOutlineComponent* outline; // 0x588(0x08)
	UChildActorComponent* Weakpoint1; // 0x590(0x08)
	UChildActorComponent* Weakpoint; // 0x598(0x08)

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnTearArmor();
	void ExecuteUbergraph_BP_Guntower_Module_RandomFire(int32_t EntryPoint);
};

