// BlueprintGeneratedClass Bp_Azure_Nenup.Bp_Azure_Nenup_C
// Size: 0x2c8 (Inherited: 0x284)
struct ABp_Azure_Nenup_C : ABP_Foliage_OpenOnProximity_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewTrack_0_CCE667474C695780AD163197E2E87F35; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_CCE667474C695780AD163197E2E87F35; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) int32_t LightIntensity; 
	UPROPERTY(BlueprintReadWrite) int32_t LightAttenuation; 

	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void PlayCloseSequence();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Bp_Azure_Nenup(int32_t EntryPoint);
};

