// BlueprintGeneratedClass BP_AnimatedFoliage_Base.BP_AnimatedFoliage_Base_C
// Size: 0x27c (Inherited: 0x220)
struct ABP_AnimatedFoliage_Base_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x230(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x238(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x240(0x08)
	struct UCapsuleComponent* CapsuleCollision; // 0x248(0x08)
	struct USkeletalMeshComponent* SK_AnimatedMesh; // 0x250(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x258(0x08)
	struct USoundCue* deathSound; // 0x260(0x08)
	struct UParticleSystem* deathParticles; // 0x268(0x08)
	struct UNiagaraSystem* NiagaraDeathParticles; // 0x270(0x08)
	float PlayAnimationDistance; // 0x278(0x04)

	void UserConstructionScript(); // Function BP_AnimatedFoliage_Base.BP_AnimatedFoliage_Base_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_AnimatedFoliage_Base.BP_AnimatedFoliage_Base_C.ReceiveBeginPlay
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_AnimatedFoliage_Base.BP_AnimatedFoliage_Base_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(); // Function BP_AnimatedFoliage_Base.BP_AnimatedFoliage_Base_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature
	void ProximityChanged(struct APlayerCharacter* Player, bool enteredTrigger); // Function BP_AnimatedFoliage_Base.BP_AnimatedFoliage_Base_C.ProximityChanged
	void OnTerrainPointRemoved(); // Function BP_AnimatedFoliage_Base.BP_AnimatedFoliage_Base_C.OnTerrainPointRemoved
	void ExecuteUbergraph_BP_AnimatedFoliage_Base(int32_t EntryPoint); // Function BP_AnimatedFoliage_Base.BP_AnimatedFoliage_Base_C.ExecuteUbergraph_BP_AnimatedFoliage_Base
};

