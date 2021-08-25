// BlueprintGeneratedClass BP_Guntower_Module_RandomFire.BP_Guntower_Module_RandomFire_C
// Size: 0x5a0 (Inherited: 0x568)
struct ABP_Guntower_Module_RandomFire_C : ARandomFiringGuntowerModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)
	struct UCapsuleComponent* Capsule; // 0x570(0x08)
	struct UPointLightComponent* PointLight1; // 0x578(0x08)
	struct UPointLightComponent* PointLight; // 0x580(0x08)
	struct UOutlineComponent* outline; // 0x588(0x08)
	struct UChildActorComponent* Weakpoint1; // 0x590(0x08)
	struct UChildActorComponent* Weakpoint; // 0x598(0x08)

	void UserConstructionScript(); // Function BP_Guntower_Module_RandomFire.BP_Guntower_Module_RandomFire_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_Guntower_Module_RandomFire.BP_Guntower_Module_RandomFire_C.ReceiveBeginPlay
	void OnTearArmor(); // Function BP_Guntower_Module_RandomFire.BP_Guntower_Module_RandomFire_C.OnTearArmor
	void ExecuteUbergraph_BP_Guntower_Module_RandomFire(int32_t EntryPoint); // Function BP_Guntower_Module_RandomFire.BP_Guntower_Module_RandomFire_C.ExecuteUbergraph_BP_Guntower_Module_RandomFire
};

