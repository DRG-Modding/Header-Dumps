// BlueprintGeneratedClass ENE_Spider_Swarmer_Radioactive.ENE_Spider_Swarmer_Radioactive_C
// Size: 0x4b8 (Inherited: 0x480)
struct AENE_Spider_Swarmer_Radioactive_C : AENE_Spider_Swarmer_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewTrack_0_74EBECE940422CB700C18C8C76913A5B; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_74EBECE940422CB700C18C8C76913A5B; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) float RadiationDistance; 
	UPROPERTY(BlueprintReadWrite) float RadiationCheckDelay; 
	UPROPERTY(BlueprintReadWrite) bool IsRadioactive; 
	UPROPERTY(BlueprintReadWrite) bool AnyPlayerInRange; 
	UPROPERTY(BlueprintReadWrite) float RadioactiveLightIntensity; 

	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnDeathBase();
	UFUNCTION(BlueprintCallable) void RadiationLoop();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Swarmer_Radioactive(int32_t EntryPoint);
};

