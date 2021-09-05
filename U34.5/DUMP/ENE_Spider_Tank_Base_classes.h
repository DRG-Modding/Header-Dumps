// BlueprintGeneratedClass ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C
// Size: 0x53c (Inherited: 0x4b4)
struct AENE_Spider_Tank_Base_C : AENE_SpiderBase_Large_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	UCapsuleComponent* Capsule; // 0x4c0(0x08)
	UArmorHealthDamageComponent* ArmorHealthDamage; // 0x4c8(0x08)
	UPointLightComponent* Light_BackBody; // 0x4d0(0x08)
	float ButtTurnOff_TurnOffTime_F69DC0FD4B3F86895DBCE39304B9A3BA; // 0x4d8(0x04)
	enum class ETimelineDirection ButtTurnOff__Direction_F69DC0FD4B3F86895DBCE39304B9A3BA; // 0x4dc(0x01)
	UTimelineComponent* ButtTurnOff; // 0x4e0(0x08)
	float Timeline_1_0_NewTrack_3_C3225DE44328F7BE16F0ECBA016F10DD; // 0x4e8(0x04)
	enum class ETimelineDirection Timeline_1_0__Direction_C3225DE44328F7BE16F0ECBA016F10DD; // 0x4ec(0x01)
	UTimelineComponent* Timeline_1_1; // 0x4f0(0x08)
	AActor* AcidCloudClass; // 0x4f8(0x08)
	float LightIntensityCache; // 0x500(0x04)
	UStatusEffectsComponent* NewLocalVar_1; // 0x508(0x08)
	UMaterialInstanceDynamic* Dynamic Material; // 0x510(0x08)
	FLinearColor ButtInitialColor; // 0x518(0x10)
	FLinearColor ButtFinalColor; // 0x528(0x10)
	int32_t SelectedSpecialAttack; // 0x538(0x04)

	void IsWeakPointDeath(UFSDPhysicalMaterial* Material, bool IsWeakPoint);
	void GetEnemySpawnedCount(int32_t SpawnCount);
	void Timeline_1_0__FinishedFunc();
	void Timeline_1_0__UpdateFunc();
	void ButtTurnOff__FinishedFunc();
	void ButtTurnOff__UpdateFunc();
	void ReceiveBeginPlay();
	void OnRagdoll();
	void OnDeathBase();
	void StartFadeBody();
	void DeathDetailedBase(float amount, UDamageClass* DamageClass, AActor* Causer, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	void ExecuteUbergraph_ENE_Spider_Tank_Base(int32_t EntryPoint);
};

