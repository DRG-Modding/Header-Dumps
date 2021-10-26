// BlueprintGeneratedClass ENE_FacilityTurret_Base.ENE_FacilityTurret_Base_C
// Size: 0x568 (Inherited: 0x508)
struct AENE_FacilityTurret_Base_C : AAimingFacilityTurret {
	FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	UBoxComponent* Box; // 0x510(0x08)
	UStaticMeshComponent* StaticMesh; // 0x518(0x08)
	UWeakpointGlowComponent* WeakpointGlow; // 0x520(0x08)
	UAudioComponent* FacilityTurretGenericDormant_Cue; // 0x528(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x530(0x08)
	UStaticMeshComponent* Carver; // 0x538(0x08)
	UOutlineComponent* outline; // 0x540(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x548(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x550(0x08)
	UNiagaraSystem* Niagra; // 0x558(0x08)
	FTimerHandle StaticAnimationTimer; // 0x560(0x08)

	USkeletalMeshComponent* GetMesh();
	FVector GetTargetCenterMass();
	void ReceiveBeginPlay();
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void OnEngagedChanged(bool engaged);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
	void Kill();
	void Carve();
	void DisableAnimations();
	void RemoveAll();
	void ExecuteUbergraph_ENE_FacilityTurret_Base(int32_t EntryPoint);
};

