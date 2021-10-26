// BlueprintGeneratedClass ENE_Grabber.ENE_Grabber_C
// Size: 0x571 (Inherited: 0x538)
struct AENE_Grabber_C : AFlyingLifter {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UWeakpointGlowComponent* WeakpointGlow; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) float Emission_Time_A4F8316045D572CD1C731997C3E8EC43; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Emission__Direction_A4F8316045D572CD1C731997C3E8EC43; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Emission; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial; 
	UPROPERTY(BlueprintReadWrite) float Emission Flash; 
	UPROPERTY(BlueprintReadWrite) float Emission Multiplier; 
	UPROPERTY(BlueprintReadWrite) bool DiedbyCritical; 

	UFUNCTION(BlueprintCallable) void OnRep_LightOn();
	UFUNCTION(BlueprintCallable) bool OnTriggerAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void OnRep_DiedbyCritical();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Emission__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Emission__UpdateFunc();
	UFUNCTION(BlueprintCallable) void OnMessageAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, FName BoneName);
	UFUNCTION(BlueprintCallable) void TriggerWeakpointGlow();
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSigDetailed__DelegateSignature(UHealthComponent* HealthComponent, float damageAmount, UDamageClass* DamageClass, AActor* damageCause, AController* Instigator, UFSDPhysicalMaterial* PhysicalMaterial);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void StartFizzle();
	UFUNCTION(BlueprintCallable) void BndEvt__GrabberComp_K2Node_ComponentBoundEvent_3_GrabbedActorSig__DelegateSignature(AActor* aGrabbedActor);
	UFUNCTION(BlueprintCallable) void BndEvt__GrabberComp_K2Node_ComponentBoundEvent_4_ReleasedActorSig__DelegateSignature(AActor* aGrabbedActor);
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void MakeElite();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Grabber(int32_t EntryPoint);
};

