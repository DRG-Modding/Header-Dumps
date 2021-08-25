// BlueprintGeneratedClass ENE_LootBug.ENE_LootBug_C
// Size: 0x480 (Inherited: 0x398)
struct AENE_LootBug_C : ACaveWorm {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct USphereComponent* Sphere; // 0x3a0(0x08)
	struct UInstantUsable* InstantUsable; // 0x3a8(0x08)
	struct UStaticMeshComponent* DropShadow; // 0x3b0(0x08)
	struct UAudioComponent* Lootbug_idle; // 0x3b8(0x08)
	struct UEnemyComponent* enemy; // 0x3c0(0x08)
	struct UOutlineComponent* outline; // 0x3c8(0x08)
	float Timeline_0_NewTrack_0_3777A85D4507AA016A87A299C2D01021; // 0x3d0(0x04)
	char Timeline_0__Direction_3777A85D4507AA016A87A299C2D01021; // 0x3d4(0x01)
	char UnknownData_3D5[0x3]; // 0x3d5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x3d8(0x08)
	struct TArray<struct UResourceData*> Loot; // 0x3e0(0x10)
	struct FVector2D ChunkCountRange; // 0x3f0(0x08)
	struct FVector2D ChunkValueRange; // 0x3f8(0x08)
	float DamageLootDropChance; // 0x400(0x04)
	float DamageLootDropCooldown; // 0x404(0x04)
	struct TArray<struct UResourceData*> ResourceTypes; // 0x408(0x10)
	float LastLootDrop; // 0x418(0x04)
	char UnknownData_41C[0x4]; // 0x41c(0x04)
	struct UParticleSystem* DeathParticle; // 0x420(0x08)
	struct USoundBase* deathSound; // 0x428(0x08)
	struct USoundBase* DeathDropLoot; // 0x430(0x08)
	struct AActor* DeathDestroyParticle; // 0x438(0x08)
	struct UFSDAchievement* LootbugsKilledStat; // 0x440(0x08)
	bool HasPetDropped; // 0x448(0x01)
	char UnknownData_449[0x7]; // 0x449(0x07)
	struct TArray<struct UResourceData*> ResourcesEaten; // 0x450(0x10)
	struct TArray<float> ValueEaten; // 0x460(0x10)
	float EatValueMultiplier; // 0x470(0x04)
	char UnknownData_474[0x4]; // 0x474(0x04)
	struct UMaterialInterface* Decal; // 0x478(0x08)

	void DropEatenLott(struct FVector DropOffset); // Function ENE_LootBug.ENE_LootBug_C.DropEatenLott
	void EatChunk(struct AResourceChunk* chunk); // Function ENE_LootBug.ENE_LootBug_C.EatChunk
	bool OnTriggerAI(struct FName TriggerName); // Function ENE_LootBug.ENE_LootBug_C.OnTriggerAI
	void Has Loot(bool Has Loot); // Function ENE_LootBug.ENE_LootBug_C.Has Loot
	void Drop Loot(struct FVector Impulse, struct FVector DropOffset, bool success); // Function ENE_LootBug.ENE_LootBug_C.Drop Loot
	void Timeline_0__FinishedFunc(); // Function ENE_LootBug.ENE_LootBug_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function ENE_LootBug.ENE_LootBug_C.Timeline_0__UpdateFunc
	void ReceiveBeginPlay(); // Function ENE_LootBug.ENE_LootBug_C.ReceiveBeginPlay
	void OnFrozen(struct AActor* Source); // Function ENE_LootBug.ENE_LootBug_C.OnFrozen
	void OnUnFrozen(); // Function ENE_LootBug.ENE_LootBug_C.OnUnFrozen
	void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_LootBug.ENE_LootBug_C.BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature
	void BndEvt__Health_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float amount); // Function ENE_LootBug.ENE_LootBug_C.BndEvt__Health_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function ENE_LootBug.ENE_LootBug_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void All_Pettet(bool LootDropped); // Function ENE_LootBug.ENE_LootBug_C.All_Pettet
	void OnMessageAI(struct FName TriggerName); // Function ENE_LootBug.ENE_LootBug_C.OnMessageAI
	void OnLootBugDeath(); // Function ENE_LootBug.ENE_LootBug_C.OnLootBugDeath
	void ExecuteUbergraph_ENE_LootBug(int32_t EntryPoint); // Function ENE_LootBug.ENE_LootBug_C.ExecuteUbergraph_ENE_LootBug
};

