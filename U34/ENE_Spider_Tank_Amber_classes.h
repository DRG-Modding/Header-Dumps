// BlueprintGeneratedClass ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C
// Size: 0x590 (Inherited: 0x53c)
struct AENE_Spider_Tank_Amber_C : AENE_Spider_Tank_Base_C {
	char UnknownData_53C[0x4]; // 0x53c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UMeleeAttackComponent* BiteAttack; // 0x548(0x08)
	struct UMeleeAttackComponent* StabAttack; // 0x550(0x08)
	struct UStaticMeshComponent* Mesh_Infestation03; // 0x558(0x08)
	struct UPointLightComponent* PointLight4; // 0x560(0x08)
	struct UStaticMeshComponent* Mesh_Infestation02; // 0x568(0x08)
	struct UPointLightComponent* PointLight2; // 0x570(0x08)
	struct UStaticMeshComponent* Mesh_Infestation01; // 0x578(0x08)
	struct UPointLightComponent* PointLight1; // 0x580(0x08)
	struct AGameEvent* Event; // 0x588(0x08)

	bool AddEventProgress(float Progress); // Function ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C.AddEventProgress
	bool AdvanceOneObjective(); // Function ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C.AdvanceOneObjective
	bool SetupEvent(struct AGameEvent* GameEvent); // Function ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C.SetupEvent
	void UserConstructionScript(); // Function ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C.UserConstructionScript
	void OnEventOpened(); // Function ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C.OnEventOpened
	void OnEventProgress(float Progress); // Function ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C.OnEventProgress
	void OnEventTriggered(); // Function ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C.OnEventTriggered
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void OnEventFinished(bool eventSuccess); // Function ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C.OnEventFinished
	void ExecuteUbergraph_ENE_Spider_Tank_Amber(int32_t EntryPoint); // Function ENE_Spider_Tank_Amber.ENE_Spider_Tank_Amber_C.ExecuteUbergraph_ENE_Spider_Tank_Amber
};

