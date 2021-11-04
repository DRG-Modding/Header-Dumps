// BlueprintGeneratedClass ENE_FacilityTurret_Spinning.ENE_FacilityTurret_Spinning_C
// Size: 0x4f0 (Inherited: 0x488)
struct AENE_FacilityTurret_Spinning_C : ASpinningFacilityturret {
	FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x490(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x498(0x08)
	UStaticMeshComponent* ShieldMesh; // 0x4a0(0x08)
	UCapsuleComponent* Capsule; // 0x4a8(0x08)
	UWeakpointGlowComponent* WeakpointGlow; // 0x4b0(0x08)
	UPathfinderCollisionComponent* PathfinderCollision; // 0x4b8(0x08)
	UOutlineComponent* outline; // 0x4c0(0x08)
	float Timeline_0_NewTrack_0_AC7B3F7C4EBC4266A6222DB9EEEB9907; // 0x4c8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_AC7B3F7C4EBC4266A6222DB9EEEB9907; // 0x4cc(0x01)
	UTimelineComponent* Timeline_1; // 0x4d0(0x08)
	int32_t Attacks; // 0x4d8(0x04)
	int32_t AttackCounter; // 0x4dc(0x04)
	UNiagaraSystem* Niagra; // 0x4e0(0x08)
	FTimerHandle StaticAnimationTimer; // 0x4e8(0x08)

	FVector GetTargetCenterMass();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnAttack();
	void BndEvt__Health_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ReceiveBeginPlay();
	void OnEngagedChanged(bool engaged);
	void DisableAnimations();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
	void ExecuteUbergraph_ENE_FacilityTurret_Spinning(int32_t EntryPoint);
};

