// BlueprintGeneratedClass BP_Drop_CamShake.BP_Drop_CamShake_C
// Size: 0x230 (Inherited: 0x220)
struct ABP_Drop_CamShake_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)

	void SetStandingDown(bool IsStandingDown);
	void TriggerShakeSequence();
	void ExecuteUbergraph_BP_Drop_CamShake(int32_t EntryPoint);
};

