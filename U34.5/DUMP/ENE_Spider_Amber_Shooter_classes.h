// BlueprintGeneratedClass ENE_Spider_Amber_Shooter.ENE_Spider_Amber_Shooter_C
// Size: 0x518 (Inherited: 0x4d8)
struct AENE_Spider_Amber_Shooter_C : AENE_Spider_Shooter_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4d8(0x08)
	UStaticMeshComponent* Mesh_Infestation03; // 0x4e0(0x08)
	UPointLightComponent* PointLight3; // 0x4e8(0x08)
	UStaticMeshComponent* Mesh_Infestation02; // 0x4f0(0x08)
	UPointLightComponent* PointLight2; // 0x4f8(0x08)
	UPointLightComponent* PointLight1; // 0x500(0x08)
	UStaticMeshComponent* Mesh_Infestation01; // 0x508(0x08)
	AGameEvent* Event; // 0x510(0x08)

	bool AddEventProgress(float Progress);
	bool AdvanceOneObjective();
	bool SetupEvent(AGameEvent* GameEvent);
	void OnEventOpened();
	void OnEventProgress(float Progress);
	void OnEventTriggered();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnEventFinished(bool eventSuccess);
	void ExecuteUbergraph_ENE_Spider_Amber_Shooter(int32_t EntryPoint);
};

