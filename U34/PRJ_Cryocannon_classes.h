// BlueprintGeneratedClass PRJ_Cryocannon.PRJ_Cryocannon_C
// Size: 0x328 (Inherited: 0x2f0)
struct APRJ_Cryocannon_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UDamageComponent* DamageImpact; // 0x2f8(0x08)
	struct USphereComponent* Sphere; // 0x300(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x308(0x08)
	struct UDamageComponent* DamageGraze; // 0x310(0x08)
	struct UProjectileExplosion* ProjectileExplosion; // 0x318(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x320(0x08)

	void UserConstructionScript(); // Function PRJ_Cryocannon.PRJ_Cryocannon_C.UserConstructionScript
	void ReceiveTick(float DeltaSeconds); // Function PRJ_Cryocannon.PRJ_Cryocannon_C.ReceiveTick
	void ReceiveBeginPlay(); // Function PRJ_Cryocannon.PRJ_Cryocannon_C.ReceiveBeginPlay
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function PRJ_Cryocannon.PRJ_Cryocannon_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void Die(); // Function PRJ_Cryocannon.PRJ_Cryocannon_C.Die
	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_Cryocannon.PRJ_Cryocannon_C.OnImpacted
	void ExecuteUbergraph_PRJ_Cryocannon(int32_t EntryPoint); // Function PRJ_Cryocannon.PRJ_Cryocannon_C.ExecuteUbergraph_PRJ_Cryocannon
};

