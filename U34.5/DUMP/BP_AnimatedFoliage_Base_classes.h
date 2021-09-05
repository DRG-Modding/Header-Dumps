// BlueprintGeneratedClass BP_AnimatedFoliage_Base.BP_AnimatedFoliage_Base_C
// Size: 0x27c (Inherited: 0x220)
struct ABP_AnimatedFoliage_Base_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x230(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x240(0x08)
	UCapsuleComponent* CapsuleCollision; // 0x248(0x08)
	USkeletalMeshComponent* SK_AnimatedMesh; // 0x250(0x08)
	USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	USoundCue* deathSound; // 0x260(0x08)
	UParticleSystem* deathParticles; // 0x268(0x08)
	UNiagaraSystem* NiagaraDeathParticles; // 0x270(0x08)
	float PlayAnimationDistance; // 0x278(0x04)

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
	void ProximityChanged(APlayerCharacter* Player, bool enteredTrigger);
	void OnTerrainPointRemoved();
	void ExecuteUbergraph_BP_AnimatedFoliage_Base(int32_t EntryPoint);
};

