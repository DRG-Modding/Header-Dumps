// BlueprintGeneratedClass PRJ_HomingDrone.PRJ_HomingDrone_C
// Size: 0x3a9 (Inherited: 0x340)
struct APRJ_HomingDrone_C : AHomingDroneBomb {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Homing_Drone_Jets2; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Homing_Drone_Jets1; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Particle_Trail; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* P_Homing_Drone_Jets; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* HomingDroneIdle_Cue; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Scene; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* Light_Exhaust; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* MeshRocket; 
	UPROPERTY(BlueprintReadWrite) UProjectileExplosion* ProjectileExplosion; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) bool Explode; 

	UFUNCTION(BlueprintCallable) bool GetIsTargetable();
	UFUNCTION(BlueprintCallable) FVector GetTargetCenterMass();
	UFUNCTION(BlueprintCallable) UHealthComponentBase* GetTargetHealthComponent();
	UFUNCTION(BlueprintCallable) void ShowDamageEffects(UParticleSystem* Particles, FVector Location, FRotator Orientation);
	UFUNCTION(BlueprintCallable) void OnRep_Explode();
	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_HomingDrone(int32_t EntryPoint);
};

