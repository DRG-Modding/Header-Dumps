// BlueprintGeneratedClass ENE_Harvester.ENE_Harvester_C
// Size: 0x3d8 (Inherited: 0x378)
struct AENE_Harvester_C : ADeepPathfinderCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	UEnemyComponent* enemy; // 0x380(0x08)
	UBoxComponent* PlayerRideCollision; // 0x388(0x08)
	UBoxComponent* Box; // 0x390(0x08)
	UParticleSystemComponent* P_Harvesting_A; // 0x398(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x3a0(0x08)
	UAudioComponent* Audio; // 0x3a8(0x08)
	UOutlineComponent* outline; // 0x3b0(0x08)
	UParticleSystem* DeathParticle; // 0x3b8(0x08)
	float PlayerBeginRideTime; // 0x3c0(0x04)
	int32_t EnemiesKilled; // 0x3c4(0x04)
	UFSDAchievement* FarmerAchievement; // 0x3c8(0x08)
	UFSDAchievement* CarPoolAchievement; // 0x3d0(0x08)

	void OnRep_Moving();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__PlayerRideCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__PlayerRideCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void OnDamagedEnemy(TScriptInterface<IHealth> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial);
	void ExecuteUbergraph_ENE_Harvester(int32_t EntryPoint);
};

