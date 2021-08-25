// BlueprintGeneratedClass ENE_Spider_Charger.ENE_Spider_Charger_C
// Size: 0x508 (Inherited: 0x4b4)
struct AENE_Spider_Charger_C : AENE_SpiderBase_Large_C {
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UCapsuleComponent* Capsule1; // 0x4c0(0x08)
	struct UCapsuleComponent* Capsule; // 0x4c8(0x08)
	struct UPointLightComponent* Light_BackBody; // 0x4d0(0x08)
	float Timeline_1_0_NewTrack_3_58C49B7C4DBC0550846DEABB8A2FF230; // 0x4d8(0x04)
	char Timeline_1_0__Direction_58C49B7C4DBC0550846DEABB8A2FF230; // 0x4dc(0x01)
	char UnknownData_4DD[0x3]; // 0x4dd(0x03)
	struct UTimelineComponent* Timeline_1_1; // 0x4e0(0x08)
	struct AActor* AcidCloudClass; // 0x4e8(0x08)
	float LightIntensityCache; // 0x4f0(0x04)
	char UnknownData_4F4[0x4]; // 0x4f4(0x04)
	struct UStatusEffectsComponent* NewLocalVar_1; // 0x4f8(0x08)
	struct UAnimMontage* SpecialAttackMontage; // 0x500(0x08)

	void BeginSpecialAttack(int32_t SpecialAttackIndex, struct UAnimMontage* Montage); // Function ENE_Spider_Charger.ENE_Spider_Charger_C.BeginSpecialAttack
	void UserConstructionScript(); // Function ENE_Spider_Charger.ENE_Spider_Charger_C.UserConstructionScript
	void Timeline_1_0__FinishedFunc(); // Function ENE_Spider_Charger.ENE_Spider_Charger_C.Timeline_1_0__FinishedFunc
	void Timeline_1_0__UpdateFunc(); // Function ENE_Spider_Charger.ENE_Spider_Charger_C.Timeline_1_0__UpdateFunc
	void ReceiveBeginPlay(); // Function ENE_Spider_Charger.ENE_Spider_Charger_C.ReceiveBeginPlay
	void OnRagdoll(); // Function ENE_Spider_Charger.ENE_Spider_Charger_C.OnRagdoll
	void OnDeathBase(); // Function ENE_Spider_Charger.ENE_Spider_Charger_C.OnDeathBase
	void StartFadeBody(); // Function ENE_Spider_Charger.ENE_Spider_Charger_C.StartFadeBody
	void SpecialAttackFlow(); // Function ENE_Spider_Charger.ENE_Spider_Charger_C.SpecialAttackFlow
	void CancelSpecialAttack(); // Function ENE_Spider_Charger.ENE_Spider_Charger_C.CancelSpecialAttack
	void charge(); // Function ENE_Spider_Charger.ENE_Spider_Charger_C.charge
	void ExecuteUbergraph_ENE_Spider_Charger(int32_t EntryPoint); // Function ENE_Spider_Charger.ENE_Spider_Charger_C.ExecuteUbergraph_ENE_Spider_Charger
};

