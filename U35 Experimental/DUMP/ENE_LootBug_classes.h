// BlueprintGeneratedClass ENE_LootBug.ENE_LootBug_C
// Size: 0x480 (Inherited: 0x398)
struct AENE_LootBug_C : ACaveWorm {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UInstantUsable* InstantUsable; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* DropShadow; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* Lootbug_idle; 
	UPROPERTY(BlueprintReadWrite) UEnemyComponent* enemy; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) float Timeline_0_NewTrack_0_3777A85D4507AA016A87A299C2D01021; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Timeline_0__Direction_3777A85D4507AA016A87A299C2D01021; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Timeline_1; 
	UPROPERTY(BlueprintReadWrite) TArray<UResourceData*> Loot; 
	UPROPERTY(BlueprintReadWrite) FVector2D ChunkCountRange; 
	UPROPERTY(BlueprintReadWrite) FVector2D ChunkValueRange; 
	UPROPERTY(BlueprintReadWrite) float DamageLootDropChance; 
	UPROPERTY(BlueprintReadWrite) float DamageLootDropCooldown; 
	UPROPERTY(BlueprintReadWrite) TArray<UResourceData*> ResourceTypes; 
	UPROPERTY(BlueprintReadWrite) float LastLootDrop; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* DeathParticle; 
	UPROPERTY(BlueprintReadWrite) USoundBase* deathSound; 
	UPROPERTY(BlueprintReadWrite) USoundBase* DeathDropLoot; 
	UPROPERTY(BlueprintReadWrite) AActor* DeathDestroyParticle; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* LootbugsKilledStat; 
	UPROPERTY(BlueprintReadWrite) bool HasPetDropped; 
	UPROPERTY(BlueprintReadWrite) TArray<UResourceData*> ResourcesEaten; 
	UPROPERTY(BlueprintReadWrite) TArray<float> ValueEaten; 
	UPROPERTY(BlueprintReadWrite) float EatValueMultiplier; 
	UPROPERTY(BlueprintReadWrite) UMaterialInterface* Decal; 

	UFUNCTION(BlueprintCallable) void DropEatenLott(FVector DropOffset);
	UFUNCTION(BlueprintCallable) void EatChunk(AResourceChunk* chunk);
	UFUNCTION(BlueprintCallable) bool OnTriggerAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void Has Loot(bool Has Loot);
	UFUNCTION(BlueprintCallable) void Drop Loot(FVector Impulse, FVector DropOffset, bool success);
	UFUNCTION(BlueprintCallable) void Timeline_0__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Timeline_0__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void BndEvt__Health_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float amount);
	UFUNCTION(BlueprintCallable) void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void All_Pettet(bool LootDropped);
	UFUNCTION(BlueprintCallable) void OnMessageAI(FName TriggerName);
	UFUNCTION(BlueprintCallable) void OnLootBugDeath();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_LootBug(int32_t EntryPoint);
};

