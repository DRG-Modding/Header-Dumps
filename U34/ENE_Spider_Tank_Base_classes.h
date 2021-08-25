// BlueprintGeneratedClass ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C
// Size: 0x53c (Inherited: 0x4b4)
struct AENE_Spider_Tank_Base_C : AENE_SpiderBase_Large_C {
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UCapsuleComponent* Capsule; // 0x4c0(0x08)
	struct UArmorHealthDamageComponent* ArmorHealthDamage; // 0x4c8(0x08)
	struct UPointLightComponent* Light_BackBody; // 0x4d0(0x08)
	float ButtTurnOff_TurnOffTime_F69DC0FD4B3F86895DBCE39304B9A3BA; // 0x4d8(0x04)
	char ButtTurnOff__Direction_F69DC0FD4B3F86895DBCE39304B9A3BA; // 0x4dc(0x01)
	char UnknownData_4DD[0x3]; // 0x4dd(0x03)
	struct UTimelineComponent* ButtTurnOff; // 0x4e0(0x08)
	float Timeline_1_0_NewTrack_3_C3225DE44328F7BE16F0ECBA016F10DD; // 0x4e8(0x04)
	char Timeline_1_0__Direction_C3225DE44328F7BE16F0ECBA016F10DD; // 0x4ec(0x01)
	char UnknownData_4ED[0x3]; // 0x4ed(0x03)
	struct UTimelineComponent* Timeline_1_1; // 0x4f0(0x08)
	struct AActor* AcidCloudClass; // 0x4f8(0x08)
	float LightIntensityCache; // 0x500(0x04)
	char UnknownData_504[0x4]; // 0x504(0x04)
	struct UStatusEffectsComponent* NewLocalVar_1; // 0x508(0x08)
	struct UMaterialInstanceDynamic* Dynamic Material; // 0x510(0x08)
	struct FLinearColor ButtInitialColor; // 0x518(0x10)
	struct FLinearColor ButtFinalColor; // 0x528(0x10)
	int32_t SelectedSpecialAttack; // 0x538(0x04)

	void IsWeakPointDeath(struct UFSDPhysicalMaterial* Material, bool IsWeakPoint); // Function ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C.IsWeakPointDeath
	void GetEnemySpawnedCount(int32_t SpawnCount); // Function ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C.GetEnemySpawnedCount
	void Timeline_1_0__FinishedFunc(); // Function ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C.Timeline_1_0__FinishedFunc
	void Timeline_1_0__UpdateFunc(); // Function ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C.Timeline_1_0__UpdateFunc
	void ButtTurnOff__FinishedFunc(); // Function ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C.ButtTurnOff__FinishedFunc
	void ButtTurnOff__UpdateFunc(); // Function ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C.ButtTurnOff__UpdateFunc
	void ReceiveBeginPlay(); // Function ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C.ReceiveBeginPlay
	void OnRagdoll(); // Function ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C.OnRagdoll
	void OnDeathBase(); // Function ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C.OnDeathBase
	void StartFadeBody(); // Function ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C.StartFadeBody
	void DeathDetailedBase(float amount, struct UDamageClass* DamageClass, struct AActor* Causer, struct AController* Instigator, struct UFSDPhysicalMaterial* PhysicalMaterial); // Function ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C.DeathDetailedBase
	void ExecuteUbergraph_ENE_Spider_Tank_Base(int32_t EntryPoint); // Function ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C.ExecuteUbergraph_ENE_Spider_Tank_Base
};

