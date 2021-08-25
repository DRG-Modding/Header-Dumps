// BlueprintGeneratedClass BP_SFX_Gold.BP_SFX_Gold_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_SFX_Gold_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct TArray<struct USoundCue*> Gold Sound Cues; // 0x230(0x10)

	void ReceiveBeginPlay(); // Function BP_SFX_Gold.BP_SFX_Gold_C.ReceiveBeginPlay
	void ReceiveEndPlay(char EndPlayReason); // Function BP_SFX_Gold.BP_SFX_Gold_C.ReceiveEndPlay
	void ExecuteUbergraph_BP_SFX_Gold(int32_t EntryPoint); // Function BP_SFX_Gold.BP_SFX_Gold_C.ExecuteUbergraph_BP_SFX_Gold
};

