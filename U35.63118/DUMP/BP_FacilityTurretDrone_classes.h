// BlueprintGeneratedClass BP_FacilityTurretDrone.BP_FacilityTurretDrone_C
// Size: 0x448 (Inherited: 0x3a0)
struct ABP_FacilityTurretDrone_C : AEnemyDeepPathfinderCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	UBoxComponent* Box; // 0x3a8(0x08)
	UNiagaraComponent* JetParticles3; // 0x3b0(0x08)
	UNiagaraComponent* JetParticles2; // 0x3b8(0x08)
	UNiagaraComponent* JetParticles1; // 0x3c0(0x08)
	UNiagaraComponent* JetParticles; // 0x3c8(0x08)
	UArrowComponent* ArrowLeft; // 0x3d0(0x08)
	UArrowComponent* ArrowRight; // 0x3d8(0x08)
	UPointLightComponent* PointLight; // 0x3e0(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x3e8(0x08)
	FTransform SpawnTransform; // 0x3f0(0x30)
	APawn* TurretClass; // 0x420(0x08)
	FMulticastInlineDelegate OnTurretSpawned; // 0x428(0x10)
	bool UnSpawn; // 0x438(0x01)
	bool Deploy; // 0x439(0x01)
	AAIController* TempTurretController; // 0x440(0x08)

	FRotator GetSpawnRotation();
	FVector GetSpawnLocation();
	void SpawnPhysMeshes(TArray<UStaticMeshComponent*> Meshes);
	void OnRep_Deploy();
	void OnRep_UnSpawn();
	void SetSpawnTransform(FTransform NewParam);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMessageAI(FName TriggerName);
	void OnDeploy();
	void TurretDied(UHealthComponentBase* HealthComponent);
	void SpawnDust(FVector DustLocation);
	void ExecuteUbergraph_BP_FacilityTurretDrone(int32_t EntryPoint);
	void OnTurretSpawned__DelegateSignature(AFacilityTurret* spawnedTurret);
};

