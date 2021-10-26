// BlueprintGeneratedClass BP_BoscoStateDisplay.BP_BoscoStateDisplay_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_BoscoStateDisplay_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* BackPlane; // 0x228(0x08)
	UStaticMeshComponent* FrontPlane; // 0x230(0x08)
	UStaticMeshComponent* Plane; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	UMaterialInstance* MiningMaterial; // 0x248(0x08)
	UMaterialInstance* FightingMaterial; // 0x250(0x08)
	UMaterialInstance* LightingMaterial; // 0x258(0x08)
	UMaterialInstance* RepairingMaterial; // 0x260(0x08)
	UMaterialInstance* FollowTargetMaterial; // 0x268(0x08)
	UMaterialInstance* RevivingMaterial; // 0x270(0x08)

	void SetMaterial(UMaterialInstance* NewParam);
	void SetState(enum class EDroneAIState State);
	void ReceiveBeginPlay();
	void FollowTargetChanged(AActor* FollowTarget);
	void SetupFollowtargetDelegate(ABoscoController* NewParam);
	void ExecuteUbergraph_BP_BoscoStateDisplay(int32_t EntryPoint);
};

