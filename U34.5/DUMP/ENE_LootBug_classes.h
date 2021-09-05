// BlueprintGeneratedClass ENE_LootBug.ENE_LootBug_C
// Size: 0x480 (Inherited: 0x398)
struct AENE_LootBug_C : ACaveWorm {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	USphereComponent* Sphere; // 0x3a0(0x08)
	UInstantUsable* InstantUsable; // 0x3a8(0x08)
	UStaticMeshComponent* DropShadow; // 0x3b0(0x08)
	UAudioComponent* Lootbug_idle; // 0x3b8(0x08)
	UEnemyComponent* enemy; // 0x3c0(0x08)
	UOutlineComponent* outline; // 0x3c8(0x08)
	float Timeline_0_NewTrack_0_3777A85D4507AA016A87A299C2D01021; // 0x3d0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_3777A85D4507AA016A87A299C2D01021; // 0x3d4(0x01)
	UTimelineComponent* Timeline_1; // 0x3d8(0x08)
	TArray<UResourceData*> Loot; // 0x3e0(0x10)
	FVector2D ChunkCountRange; // 0x3f0(0x08)
	FVector2D ChunkValueRange; // 0x3f8(0x08)
	float DamageLootDropChance; // 0x400(0x04)
	float DamageLootDropCooldown; // 0x404(0x04)
	TArray<UResourceData*> ResourceTypes; // 0x408(0x10)
	float LastLootDrop; // 0x418(0x04)
	UParticleSystem* DeathParticle; // 0x420(0x08)
	USoundBase* deathSound; // 0x428(0x08)
	USoundBase* DeathDropLoot; // 0x430(0x08)
	AActor* DeathDestroyParticle; // 0x438(0x08)
	UFSDAchievement* LootbugsKilledStat; // 0x440(0x08)
	bool HasPetDropped; // 0x448(0x01)
	TArray<UResourceData*> ResourcesEaten; // 0x450(0x10)
	TArray<float> ValueEaten; // 0x460(0x10)
	float EatValueMultiplier; // 0x470(0x04)
	UMaterialInterface* Decal; // 0x478(0x08)

	void DropEatenLott(FVector DropOffset);
	void EatChunk(AResourceChunk* chunk);
	bool OnTriggerAI(FName TriggerName);
	void Has Loot(bool Has Loot);
	void Drop Loot(FVector Impulse, FVector DropOffset, bool success);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__Health_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float amount);
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void All_Pettet(bool LootDropped);
	void OnMessageAI(FName TriggerName);
	void OnLootBugDeath();
	void ExecuteUbergraph_ENE_LootBug(int32_t EntryPoint);
};

