// BlueprintGeneratedClass BP_WallMaggot.BP_WallMaggot_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_WallMaggot_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioComponent* WallMaggotExtrude_Cue; // 0x228(0x08)
	struct UAudioComponent* WallMaggotRetract_Cue; // 0x230(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x238(0x08)
	struct UAudioComponent* WallMaggot_idle_Cue; // 0x240(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x248(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x250(0x08)
	struct UCapsuleComponent* Capsule; // 0x258(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x260(0x08)
	struct USkeletalMeshComponent* SK_HollowBoughMaggot_01; // 0x268(0x08)
	struct UStaticMeshComponent* SM_Carver_Rock14; // 0x270(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	bool Hide; // 0x288(0x01)
	char UnknownData_289[0x7]; // 0x289(0x07)
	struct TArray<struct FSingleAnimationPlayData> Animations; // 0x290(0x10)
	struct USoundCue* deathSound; // 0x2a0(0x08)
	struct UParticleSystem* deathParticles; // 0x2a8(0x08)

	void OnRep_Hide(); // Function BP_WallMaggot.BP_WallMaggot_C.OnRep_Hide
	void UserConstructionScript(); // Function BP_WallMaggot.BP_WallMaggot_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_WallMaggot.BP_WallMaggot_C.ReceiveBeginPlay
	void TriggerHide(struct APlayerCharacter* Player, bool enteredTrigger); // Function BP_WallMaggot.BP_WallMaggot_C.TriggerHide
	void Retract(); // Function BP_WallMaggot.BP_WallMaggot_C.Retract
	void Extend(); // Function BP_WallMaggot.BP_WallMaggot_C.Extend
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_WallMaggot.BP_WallMaggot_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void ExecuteUbergraph_BP_WallMaggot(int32_t EntryPoint); // Function BP_WallMaggot.BP_WallMaggot_C.ExecuteUbergraph_BP_WallMaggot
};

