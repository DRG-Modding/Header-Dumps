// BlueprintGeneratedClass ENE_FacilityTentacle_Burrowing.ENE_FacilityTentacle_Burrowing_C
// Size: 0x688 (Inherited: 0x658)
struct AENE_FacilityTentacle_Burrowing_C : AENE_FacilityTentacle_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x658(0x08)
	USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos; // 0x660(0x08)
	AENE_FacilityTentacle_C* ChildTentacle; // 0x668(0x08)
	float BurrowDuration; // 0x670(0x04)
	FVector Target; // 0x674(0x0c)
	AActor* SpawnActor; // 0x680(0x08)

	void PlaceEndTentacles(FVector PlayerLocation, bool success, AActor* SpawnedTentacle);
	void GetTentacle(AENE_FacilityTentacle_C* Tentacle);
	void FindGroundLocation(bool success, FVector Location);
	void BurrowingAttack(AActor* AttackTarget, FVector BurrowLocation);
	void ChildTentacleDied(UHealthComponentBase* HealthComponent);
	void PlayPreBurrowSound();
	void HandleDeath();
	void Recieve_OnRep_Owner();
	void ExecuteUbergraph_ENE_FacilityTentacle_Burrowing(int32_t EntryPoint);
};

