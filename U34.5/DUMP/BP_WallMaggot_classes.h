// BlueprintGeneratedClass BP_WallMaggot.BP_WallMaggot_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_WallMaggot_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UAudioComponent* WallMaggotExtrude_Cue; // 0x228(0x08)
	UAudioComponent* WallMaggotRetract_Cue; // 0x230(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x238(0x08)
	UAudioComponent* WallMaggot_idle_Cue; // 0x240(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x248(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x250(0x08)
	UCapsuleComponent* Capsule; // 0x258(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x260(0x08)
	USkeletalMeshComponent* SK_HollowBoughMaggot_01; // 0x268(0x08)
	UStaticMeshComponent* SM_Carver_Rock14; // 0x270(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x278(0x08)
	USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	bool Hide; // 0x288(0x01)
	TArray<FSingleAnimationPlayData> Animations; // 0x290(0x10)
	USoundCue* deathSound; // 0x2a0(0x08)
	UParticleSystem* deathParticles; // 0x2a8(0x08)

	void OnRep_Hide();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void TriggerHide(APlayerCharacter* Player, bool enteredTrigger);
	void Retract();
	void Extend();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_BP_WallMaggot(int32_t EntryPoint);
};

