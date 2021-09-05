// BlueprintGeneratedClass Grenade_Incendiary.Grenade_Incendiary_C
// Size: 0x350 (Inherited: 0x314)
struct AGrenade_Incendiary_C : AITM_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	UDamageComponent* Damage; // 0x320(0x08)
	USphereComponent* Sphere; // 0x328(0x08)
	UAreaSpawnerComponent* AreaSpawner; // 0x330(0x08)
	float Radius; // 0x338(0x04)
	UParticleSystem* TriggerEffect; // 0x340(0x08)
	USoundCue* TriggerSound; // 0x348(0x08)

	void SpawnFireOnGround();
	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void OnExploded();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void DoCustomExplosion();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ExecuteUbergraph_Grenade_Incendiary(int32_t EntryPoint);
};

