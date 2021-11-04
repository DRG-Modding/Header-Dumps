// BlueprintGeneratedClass PRJ_Cryocannon.PRJ_Cryocannon_C
// Size: 0x378 (Inherited: 0x338)
struct APRJ_Cryocannon_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	URotatingMovementComponent* RotatingMovement; // 0x340(0x08)
	UDamageComponent* DamageImpact; // 0x348(0x08)
	USphereComponent* Sphere; // 0x350(0x08)
	UStaticMeshComponent* StaticMesh; // 0x358(0x08)
	UDamageComponent* DamageGraze; // 0x360(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x368(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x370(0x08)

	void UserConstructionScript();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Die();
	void ExecuteUbergraph_PRJ_Cryocannon(int32_t EntryPoint);
};

