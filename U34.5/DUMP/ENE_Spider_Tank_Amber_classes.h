// BlueprintGeneratedClass ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C
// Size: 0x590 (Inherited: 0x53c)
struct AENE_Spider_Tank_Amber_C : AENE_Spider_Tank_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	UMeleeAttackComponent* BiteAttack; // 0x548(0x08)
	UMeleeAttackComponent* StabAttack; // 0x550(0x08)
	UStaticMeshComponent* Mesh_Infestation03; // 0x558(0x08)
	UPointLightComponent* PointLight4; // 0x560(0x08)
	UStaticMeshComponent* Mesh_Infestation02; // 0x568(0x08)
	UPointLightComponent* PointLight2; // 0x570(0x08)
	UStaticMeshComponent* Mesh_Infestation01; // 0x578(0x08)
	UPointLightComponent* PointLight1; // 0x580(0x08)
	AGameEvent* Event; // 0x588(0x08)

	bool AddEventProgress(float Progress);
	bool AdvanceOneObjective();
	bool SetupEvent(AGameEvent* GameEvent);
	void UserConstructionScript();
	void OnEventOpened();
	void OnEventProgress(float Progress);
	void OnEventTriggered();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnEventFinished(bool eventSuccess);
	void ExecuteUbergraph_ENE_Spider_Tank_Amber(int32_t EntryPoint);
};

