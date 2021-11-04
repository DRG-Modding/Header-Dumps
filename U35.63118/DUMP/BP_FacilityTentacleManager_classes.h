// BlueprintGeneratedClass BP_FacilityTentacleManager.BP_FacilityTentacleManager_C
// Size: 0x251 (Inherited: 0x220)
struct ABP_FacilityTentacleManager_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	AENE_FacilityTentacle_C* spawned; // 0x238(0x08)
	float TentacleRespawnTime; // 0x240(0x04)
	FTimerHandle TentacleRespawnTimer; // 0x248(0x08)
	bool HasTentacle; // 0x250(0x01)

	void OnRep_HasTentacle();
	void CanSpawnTentacle(bool IsBossfightActive);
	void HasActiveTentacle(bool HasSpawned);
	void SpawnTentacle();
	void KillTentacle();
	void OnTentacleDeath(UHealthComponentBase* HealthComponent);
	void RespawnTentacle();
	void OpenHatch();
	void CloseHatch();
	void PauseAction(float Duration);
	void ExecuteUbergraph_BP_FacilityTentacleManager(int32_t EntryPoint);
};

