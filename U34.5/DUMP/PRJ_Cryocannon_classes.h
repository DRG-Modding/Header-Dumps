// BlueprintGeneratedClass PRJ_Cryocannon.PRJ_Cryocannon_C
// Size: 0x328 (Inherited: 0x2f0)
struct APRJ_Cryocannon_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UDamageComponent* DamageImpact; // 0x2f8(0x08)
	USphereComponent* Sphere; // 0x300(0x08)
	UStaticMeshComponent* StaticMesh; // 0x308(0x08)
	UDamageComponent* DamageGraze; // 0x310(0x08)
	UProjectileExplosion* ProjectileExplosion; // 0x318(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x320(0x08)

	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void Die();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ExecuteUbergraph_PRJ_Cryocannon(int32_t EntryPoint);
};

