// BlueprintGeneratedClass ENE_LootBug_Gold.ENE_LootBug_Gold_C
// Size: 0x498 (Inherited: 0x480)
struct AENE_LootBug_Gold_C : AENE_LootBug_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 

	UFUNCTION(BlueprintCallable) void OnLootBugDeath();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_LootBug_Gold(int32_t EntryPoint);
};

