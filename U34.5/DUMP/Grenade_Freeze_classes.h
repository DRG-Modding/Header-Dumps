// BlueprintGeneratedClass Grenade_Freeze.Grenade_Freeze_C
// Size: 0x340 (Inherited: 0x314)
struct AGrenade_Freeze_C : AITM_Grenade_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	USphereComponent* Sphere; // 0x320(0x08)
	UDamageComponent* Damage; // 0x328(0x08)
	UParticleSystem* TriggerEffect; // 0x330(0x08)
	USoundCue* TriggerSound; // 0x338(0x08)

	void AddGearStateEntries(AFSDPlayerState* PlayerState, TArray<FGearStatEntry> Stats);
	void OnExploded();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ExecuteUbergraph_Grenade_Freeze(int32_t EntryPoint);
};

