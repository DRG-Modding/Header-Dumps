// BlueprintGeneratedClass ENE_Jelly_Swarmer.ENE_Jelly_Swarmer_C
// Size: 0x3e0 (Inherited: 0x398)
struct AENE_Jelly_Swarmer_C : AEnemyDeepPathfinderCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	UPawnAlertComponent* PawnAlert; // 0x3a0(0x08)
	UParticleSystemComponent* Trail; // 0x3a8(0x08)
	UAudioComponent* JellySwarmerIdle; // 0x3b0(0x08)
	UOutlineComponent* outline; // 0x3b8(0x08)
	UEnemyComponent* enemy; // 0x3c0(0x08)
	UPawnSensingComponent* PawnSensing; // 0x3c8(0x08)
	USphereComponent* Sphere; // 0x3d0(0x08)
	UParticleSystem* Deathpaticles; // 0x3d8(0x08)

	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnFrozen(AActor* Source);
	void ExecuteUbergraph_ENE_Jelly_Swarmer(int32_t EntryPoint);
};

