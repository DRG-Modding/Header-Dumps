// BlueprintGeneratedClass ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C
// Size: 0x3d0 (Inherited: 0x340)
struct AENE_SmallShootingPlant_RegenPod_C : AHydraWeedHealer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	UParticleSystemComponent* P_Hydra_Healing_Seed; // 0x348(0x08)
	UPointLightComponent* PointLight; // 0x350(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x358(0x08)
	UOutlineComponent* outline; // 0x360(0x08)
	UWeakpointGlowComponent* WeakpointGlow; // 0x368(0x08)
	USphereComponent* Sphere; // 0x370(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x378(0x08)
	UEnemyBufferComponent* EnemyBuffer; // 0x380(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x388(0x08)
	USceneComponent* DefaultSceneRoot; // 0x390(0x08)
	float Timeline_1_NewTrack_0_E713C7134F9737E0824F80801E2D3B4E; // 0x398(0x04)
	enum class ETimelineDirection Timeline_1__Direction_E713C7134F9737E0824F80801E2D3B4E; // 0x39c(0x01)
	UTimelineComponent* Timeline_2; // 0x3a0(0x08)
	float Timeline_0_Size_74F2544C4A1361E2EE80E89D85FD7033; // 0x3a8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_74F2544C4A1361E2EE80E89D85FD7033; // 0x3ac(0x01)
	UTimelineComponent* Timeline_1; // 0x3b0(0x08)
	bool IsPupating; // 0x3b8(0x01)
	float RegenPodLifetime; // 0x3bc(0x04)
	float MaxLightIntensity; // 0x3c0(0x04)
	UAudioComponent* BuffingSound; // 0x3c8(0x08)

	FVector GetTargetCenterMass();
	USkeletalMeshComponent* GetMesh();
	UMeshComponent* Receive_GetMeshComponent();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ToggleHealing(bool CanHeal);
	void OnFrozen(AActor* Source);
	void OnUnFrozen();
	void ContinuePupating();
	void PausePupating();
	void ExecuteUbergraph_ENE_SmallShootingPlant_RegenPod(int32_t EntryPoint);
};

