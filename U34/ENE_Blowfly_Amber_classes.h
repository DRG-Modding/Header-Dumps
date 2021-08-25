// BlueprintGeneratedClass ENE_Blowfly_Amber.ENE_Blowfly_Amber_C
// Size: 0x4e0 (Inherited: 0x4b0)
struct AENE_Blowfly_Amber_C : AENE_Mactera_Shooter_Normal_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UStaticMeshComponent* Mesh_Infestation02; // 0x4b8(0x08)
	struct UPointLightComponent* PointLight2; // 0x4c0(0x08)
	struct UStaticMeshComponent* Mesh_Infestation01; // 0x4c8(0x08)
	struct UPointLightComponent* PointLight1; // 0x4d0(0x08)
	struct AGameEvent* GameEvent; // 0x4d8(0x08)

	bool AddEventProgress(float Progress); // Function ENE_Blowfly_Amber.ENE_Blowfly_Amber_C.AddEventProgress
	bool AdvanceOneObjective(); // Function ENE_Blowfly_Amber.ENE_Blowfly_Amber_C.AdvanceOneObjective
	bool SetupEvent(struct AGameEvent* GameEvent); // Function ENE_Blowfly_Amber.ENE_Blowfly_Amber_C.SetupEvent
	void OnEventOpened(); // Function ENE_Blowfly_Amber.ENE_Blowfly_Amber_C.OnEventOpened
	void OnEventProgress(float Progress); // Function ENE_Blowfly_Amber.ENE_Blowfly_Amber_C.OnEventProgress
	void OnEventTriggered(); // Function ENE_Blowfly_Amber.ENE_Blowfly_Amber_C.OnEventTriggered
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Blowfly_Amber.ENE_Blowfly_Amber_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void OnEventFinished(bool eventSuccess); // Function ENE_Blowfly_Amber.ENE_Blowfly_Amber_C.OnEventFinished
	void StartFizzle(); // Function ENE_Blowfly_Amber.ENE_Blowfly_Amber_C.StartFizzle
	void BP_FreezeImpact(); // Function ENE_Blowfly_Amber.ENE_Blowfly_Amber_C.BP_FreezeImpact
	void ExecuteUbergraph_ENE_Blowfly_Amber(int32_t EntryPoint); // Function ENE_Blowfly_Amber.ENE_Blowfly_Amber_C.ExecuteUbergraph_ENE_Blowfly_Amber
};

