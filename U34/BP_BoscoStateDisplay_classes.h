// BlueprintGeneratedClass BP_BoscoStateDisplay.BP_BoscoStateDisplay_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_BoscoStateDisplay_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* BackPlane; // 0x228(0x08)
	struct UStaticMeshComponent* FrontPlane; // 0x230(0x08)
	struct UStaticMeshComponent* Plane; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	struct UMaterialInstance* MiningMaterial; // 0x248(0x08)
	struct UMaterialInstance* FightingMaterial; // 0x250(0x08)
	struct UMaterialInstance* LightingMaterial; // 0x258(0x08)
	struct UMaterialInstance* RepairingMaterial; // 0x260(0x08)
	struct UMaterialInstance* FollowTargetMaterial; // 0x268(0x08)
	struct UMaterialInstance* RevivingMaterial; // 0x270(0x08)

	void SetMaterial(struct UMaterialInstance* NewParam); // Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetMaterial
	void SetState(enum class EDroneAIState State); // Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetState
	void ReceiveBeginPlay(); // Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ReceiveBeginPlay
	void FollowTargetChanged(struct AActor* FollowTarget); // Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.FollowTargetChanged
	void SetupFollowtargetDelegate(struct ABoscoController* NewParam); // Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.SetupFollowtargetDelegate
	void ExecuteUbergraph_BP_BoscoStateDisplay(int32_t EntryPoint); // Function BP_BoscoStateDisplay.BP_BoscoStateDisplay_C.ExecuteUbergraph_BP_BoscoStateDisplay
};

