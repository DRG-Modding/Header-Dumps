// BlueprintGeneratedClass PRJ_FlyingSmartRock.PRJ_FlyingSmartRock_C
// Size: 0x350 (Inherited: 0x2f0)
struct APRJ_FlyingSmartRock_C : AProjectile {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) USpikeSkeletalMesh_C* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Core; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) USimpleHealthComponent* SimpleHealth; 
	UPROPERTY(BlueprintReadWrite) URotatingMovementComponent* RotatingMovement; 
	UPROPERTY(BlueprintReadWrite) UProjectileExplosion* ProjectileExplosion; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleComponent; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Audio; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial_Core; 

	UFUNCTION(BlueprintCallable) void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	UFUNCTION(BlueprintCallable) void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
	UFUNCTION(BlueprintCallable) void GoBoom();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_PRJ_FlyingSmartRock(int32_t EntryPoint);
};

