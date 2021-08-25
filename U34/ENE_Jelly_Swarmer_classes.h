// BlueprintGeneratedClass ENE_Jelly_Swarmer.ENE_Jelly_Swarmer_C
// Size: 0x3e0 (Inherited: 0x398)
struct AENE_Jelly_Swarmer_C : AEnemyDeepPathfinderCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UPawnAlertComponent* PawnAlert; // 0x3a0(0x08)
	struct UParticleSystemComponent* Trail; // 0x3a8(0x08)
	struct UAudioComponent* JellySwarmerIdle; // 0x3b0(0x08)
	struct UOutlineComponent* outline; // 0x3b8(0x08)
	struct UEnemyComponent* enemy; // 0x3c0(0x08)
	struct UPawnSensingComponent* PawnSensing; // 0x3c8(0x08)
	struct USphereComponent* Sphere; // 0x3d0(0x08)
	struct UParticleSystem* Deathpaticles; // 0x3d8(0x08)

	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Jelly_Swarmer.ENE_Jelly_Swarmer_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void OnFrozen(struct AActor* Source); // Function ENE_Jelly_Swarmer.ENE_Jelly_Swarmer_C.OnFrozen
	void ExecuteUbergraph_ENE_Jelly_Swarmer(int32_t EntryPoint); // Function ENE_Jelly_Swarmer.ENE_Jelly_Swarmer_C.ExecuteUbergraph_ENE_Jelly_Swarmer
};

