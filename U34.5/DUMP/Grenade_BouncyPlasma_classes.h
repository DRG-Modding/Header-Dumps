// BlueprintGeneratedClass Grenade_BouncyPlasma.Grenade_BouncyPlasma_C
// Size: 0x33d (Inherited: 0x314)
struct AGrenade_BouncyPlasma_C : AITM_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	USphereComponent* Sphere; // 0x320(0x08)
	UDamageComponent* Damage; // 0x328(0x08)
	int32_t ExplosionCount; // 0x330(0x04)
	int32_t MaxExplosions; // 0x334(0x04)
	float ConcecutiveExplosionsDelay; // 0x338(0x04)
	bool Exploded; // 0x33c(0x01)

	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void OnRep_ExplosionCount();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void TriggerExplosion();
	void HideGrenade();
	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ExecuteUbergraph_Grenade_BouncyPlasma(int32_t EntryPoint);
};

