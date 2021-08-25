// BlueprintGeneratedClass ENE_Harvester.ENE_Harvester_C
// Size: 0x3d8 (Inherited: 0x378)
struct AENE_Harvester_C : ADeepPathfinderCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x378(0x08)
	struct UEnemyComponent* enemy; // 0x380(0x08)
	struct UBoxComponent* PlayerRideCollision; // 0x388(0x08)
	struct UBoxComponent* Box; // 0x390(0x08)
	struct UParticleSystemComponent* P_Harvesting_A; // 0x398(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x3a0(0x08)
	struct UAudioComponent* Audio; // 0x3a8(0x08)
	struct UOutlineComponent* outline; // 0x3b0(0x08)
	struct UParticleSystem* DeathParticle; // 0x3b8(0x08)
	float PlayerBeginRideTime; // 0x3c0(0x04)
	int32_t EnemiesKilled; // 0x3c4(0x04)
	struct UFSDAchievement* FarmerAchievement; // 0x3c8(0x08)
	struct UFSDAchievement* CarPoolAchievement; // 0x3d0(0x08)

	void OnRep_Moving(); // Function ENE_Harvester.ENE_Harvester_C.OnRep_Moving
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_Harvester.ENE_Harvester_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__PlayerRideCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function ENE_Harvester.ENE_Harvester_C.BndEvt__PlayerRideCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__PlayerRideCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function ENE_Harvester.ENE_Harvester_C.BndEvt__PlayerRideCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void OnDamagedEnemy(struct TScriptInterface<None> EnemyHealth, float Damage, float DamageModifier, float HealthRemaining, bool IsWeakPoint, bool IsRadial); // Function ENE_Harvester.ENE_Harvester_C.OnDamagedEnemy
	void ExecuteUbergraph_ENE_Harvester(int32_t EntryPoint); // Function ENE_Harvester.ENE_Harvester_C.ExecuteUbergraph_ENE_Harvester
};

