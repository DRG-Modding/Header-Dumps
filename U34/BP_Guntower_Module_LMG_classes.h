// BlueprintGeneratedClass BP_Guntower_Module_LMG.BP_Guntower_Module_LMG_C
// Size: 0x500 (Inherited: 0x4b0)
struct ABP_Guntower_Module_LMG_C : ALMGGuntoweModule {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UCapsuleComponent* Capsule; // 0x4b8(0x08)
	struct UStaticMeshComponent* LightCone; // 0x4c0(0x08)
	struct USpotLightComponent* SpotLight; // 0x4c8(0x08)
	struct UAIPerceptionComponent* AIPerception; // 0x4d0(0x08)
	struct UOutlineComponent* outline; // 0x4d8(0x08)
	struct UChildActorComponent* ChildActor2; // 0x4e0(0x08)
	struct UChildActorComponent* ChildActor1; // 0x4e8(0x08)
	struct UChildActorComponent* ChildActor; // 0x4f0(0x08)
	struct UMaterialInstanceDynamic* LightMaterial; // 0x4f8(0x08)

	void UserConstructionScript(); // Function BP_Guntower_Module_LMG.BP_Guntower_Module_LMG_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_Guntower_Module_LMG.BP_Guntower_Module_LMG_C.ReceiveBeginPlay
	void OnActivationChanged(bool IsActivated); // Function BP_Guntower_Module_LMG.BP_Guntower_Module_LMG_C.OnActivationChanged
	void OnTearArmor(); // Function BP_Guntower_Module_LMG.BP_Guntower_Module_LMG_C.OnTearArmor
	void ExecuteUbergraph_BP_Guntower_Module_LMG(int32_t EntryPoint); // Function BP_Guntower_Module_LMG.BP_Guntower_Module_LMG_C.ExecuteUbergraph_BP_Guntower_Module_LMG
};

