// BlueprintGeneratedClass ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C
// Size: 0x3d0 (Inherited: 0x340)
struct AENE_SmallShootingPlant_RegenPod_C : AHydraWeedHealer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UParticleSystemComponent* P_Hydra_Healing_Seed; // 0x348(0x08)
	struct UPointLightComponent* PointLight; // 0x350(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x358(0x08)
	struct UOutlineComponent* outline; // 0x360(0x08)
	struct UWeakpointGlowComponent* WeakpointGlow; // 0x368(0x08)
	struct USphereComponent* Sphere; // 0x370(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x378(0x08)
	struct UEnemyBufferComponent* EnemyBuffer; // 0x380(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x388(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x390(0x08)
	float Timeline_1_NewTrack_0_E713C7134F9737E0824F80801E2D3B4E; // 0x398(0x04)
	char Timeline_1__Direction_E713C7134F9737E0824F80801E2D3B4E; // 0x39c(0x01)
	char UnknownData_39D[0x3]; // 0x39d(0x03)
	struct UTimelineComponent* Timeline_2; // 0x3a0(0x08)
	float Timeline_0_Size_74F2544C4A1361E2EE80E89D85FD7033; // 0x3a8(0x04)
	char Timeline_0__Direction_74F2544C4A1361E2EE80E89D85FD7033; // 0x3ac(0x01)
	char UnknownData_3AD[0x3]; // 0x3ad(0x03)
	struct UTimelineComponent* Timeline_1; // 0x3b0(0x08)
	bool IsPupating; // 0x3b8(0x01)
	char UnknownData_3B9[0x3]; // 0x3b9(0x03)
	float RegenPodLifetime; // 0x3bc(0x04)
	float MaxLightIntensity; // 0x3c0(0x04)
	char UnknownData_3C4[0x4]; // 0x3c4(0x04)
	struct UAudioComponent* BuffingSound; // 0x3c8(0x08)

	struct FVector GetTargetCenterMass(); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.GetTargetCenterMass
	struct USkeletalMeshComponent* GetMesh(); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.GetMesh
	struct UMeshComponent* Receive_GetMeshComponent(); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.Receive_GetMeshComponent
	void Timeline_0__FinishedFunc(); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.Timeline_1__UpdateFunc
	void ReceiveBeginPlay(); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.ReceiveBeginPlay
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void ToggleHealing(bool CanHeal); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.ToggleHealing
	void OnFrozen(struct AActor* Source); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.OnFrozen
	void OnUnFrozen(); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.OnUnFrozen
	void ContinuePupating(); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.ContinuePupating
	void PausePupating(); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.PausePupating
	void ExecuteUbergraph_ENE_SmallShootingPlant_RegenPod(int32_t EntryPoint); // Function ENE_SmallShootingPlant_RegenPod.ENE_SmallShootingPlant_RegenPod_C.ExecuteUbergraph_ENE_SmallShootingPlant_RegenPod
};

