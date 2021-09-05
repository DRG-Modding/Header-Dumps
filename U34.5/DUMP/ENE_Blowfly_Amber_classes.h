// BlueprintGeneratedClass ENE_Blowfly_Amber.ENE_Blowfly_Amber_C
// Size: 0x4e0 (Inherited: 0x4b0)
struct AENE_Blowfly_Amber_C : AENE_Mactera_Shooter_Normal_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	UStaticMeshComponent* Mesh_Infestation02; // 0x4b8(0x08)
	UPointLightComponent* PointLight2; // 0x4c0(0x08)
	UStaticMeshComponent* Mesh_Infestation01; // 0x4c8(0x08)
	UPointLightComponent* PointLight1; // 0x4d0(0x08)
	AGameEvent* GameEvent; // 0x4d8(0x08)

	bool AddEventProgress(float Progress);
	bool AdvanceOneObjective();
	bool SetupEvent(AGameEvent* GameEvent);
	void OnEventOpened();
	void OnEventProgress(float Progress);
	void OnEventTriggered();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnEventFinished(bool eventSuccess);
	void StartFizzle();
	void BP_FreezeImpact();
	void ExecuteUbergraph_ENE_Blowfly_Amber(int32_t EntryPoint);
};

