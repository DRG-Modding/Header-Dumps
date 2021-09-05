// BlueprintGeneratedClass BP_Guntower_Module_LMG.BP_Guntower_Module_LMG_C
// Size: 0x500 (Inherited: 0x4b0)
struct ABP_Guntower_Module_LMG_C : ALMGGuntoweModule {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	UCapsuleComponent* Capsule; // 0x4b8(0x08)
	UStaticMeshComponent* LightCone; // 0x4c0(0x08)
	USpotLightComponent* SpotLight; // 0x4c8(0x08)
	UAIPerceptionComponent* AIPerception; // 0x4d0(0x08)
	UOutlineComponent* outline; // 0x4d8(0x08)
	UChildActorComponent* ChildActor2; // 0x4e0(0x08)
	UChildActorComponent* ChildActor1; // 0x4e8(0x08)
	UChildActorComponent* ChildActor; // 0x4f0(0x08)
	UMaterialInstanceDynamic* LightMaterial; // 0x4f8(0x08)

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnActivationChanged(bool IsActivated);
	void OnTearArmor();
	void ExecuteUbergraph_BP_Guntower_Module_LMG(int32_t EntryPoint);
};

