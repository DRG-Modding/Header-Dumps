// BlueprintGeneratedClass ENE_Spider_Amber_Shooter.ENE_Spider_Amber_Shooter_C
// Size: 0x518 (Inherited: 0x4d8)
struct AENE_Spider_Amber_Shooter_C : AENE_Spider_Shooter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d8(0x08)
	struct UStaticMeshComponent* Mesh_Infestation03; // 0x4e0(0x08)
	struct UPointLightComponent* PointLight3; // 0x4e8(0x08)
	struct UStaticMeshComponent* Mesh_Infestation02; // 0x4f0(0x08)
	struct UPointLightComponent* PointLight2; // 0x4f8(0x08)
	struct UPointLightComponent* PointLight1; // 0x500(0x08)
	struct UStaticMeshComponent* Mesh_Infestation01; // 0x508(0x08)
	struct AGameEvent* Event; // 0x510(0x08)

	bool AddEventProgress(float Progress); // Function ENE_Spider_Amber_Shooter.ENE_Spider_Amber_Shooter_C.AddEventProgress
	bool AdvanceOneObjective(); // Function ENE_Spider_Amber_Shooter.ENE_Spider_Amber_Shooter_C.AdvanceOneObjective
	bool SetupEvent(struct AGameEvent* GameEvent); // Function ENE_Spider_Amber_Shooter.ENE_Spider_Amber_Shooter_C.SetupEvent
	void OnEventOpened(); // Function ENE_Spider_Amber_Shooter.ENE_Spider_Amber_Shooter_C.OnEventOpened
	void OnEventProgress(float Progress); // Function ENE_Spider_Amber_Shooter.ENE_Spider_Amber_Shooter_C.OnEventProgress
	void OnEventTriggered(); // Function ENE_Spider_Amber_Shooter.ENE_Spider_Amber_Shooter_C.OnEventTriggered
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Spider_Amber_Shooter.ENE_Spider_Amber_Shooter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void OnEventFinished(bool eventSuccess); // Function ENE_Spider_Amber_Shooter.ENE_Spider_Amber_Shooter_C.OnEventFinished
	void ExecuteUbergraph_ENE_Spider_Amber_Shooter(int32_t EntryPoint); // Function ENE_Spider_Amber_Shooter.ENE_Spider_Amber_Shooter_C.ExecuteUbergraph_ENE_Spider_Amber_Shooter
};

