// BlueprintGeneratedClass ENE_Spider_Tank_Base.ENE_Spider_Tank_Base_C
// Size: 0x53c (Inherited: 0x4b4)
struct AENE_Spider_Tank_Base_C : AENE_SpiderBase_Large_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UArmorHealthDamageComponent* ArmorHealthDamage; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* Light_BackBody; 
	UPROPERTY(BlueprintReadWrite) float ButtTurnOff_TurnOffTime_F69DC0FD4B3F86895DBCE39304B9A3BA; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection ButtTurnOff__Direction_F69DC0FD4B3F86895DBCE39304B9A3BA; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* ButtTurnOff; 
	UPROPERTY(BlueprintReadWrite) float Timeline_1_0_NewTrack_3_C3225DE44328F7BE16F0ECBA016F10DD; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_1_0__Direction_C3225DE44328F7BE16F0ECBA016F10DD; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1_1; 
	UPROPERTY(BlueprintReadWrite) AActor* AcidCloudClass; 
	UPROPERTY(BlueprintReadWrite) float LightIntensityCache; 
	UPROPERTY(BlueprintReadWrite) UStatusEffectsComponent* NewLocalVar_1; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* Dynamic Material; 
	UPROPERTY(BlueprintReadWrite) FLinearColor ButtInitialColor; 
	UPROPERTY(BlueprintReadWrite) FLinearColor ButtFinalColor; 
	UPROPERTY(BlueprintReadWrite) int32_t SelectedSpecialAttack; 

	UFUNCTION(BlueprintCallable) void IsWeakPointDeath(UFSDPhysicalMaterial* Material, bool IsWeakPoint);
	UFUNCTION(BlueprintCallable) void GetEnemySpawnedCount(int32_t SpawnCount);
	UFUNCTION(BlueprintCallable) void Timeline_1_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_1_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ButtTurnOff__FinishedFunc();
	UFUNCTION(BlueprintCallable) void ButtTurnOff__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnRagdoll();
	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void StartFadeBody();
	UFUNCTION(BlueprintCallable) void DeathDetailedBase(float amount, UDamageClass* DamageClass, AActor* Causer, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Tank_Base(int32_t EntryPoint);
};

