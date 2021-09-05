// BlueprintGeneratedClass BP_Refinery_ProgressBar.BP_Refinery_ProgressBar_C
// Size: 0x259 (Inherited: 0x220)
struct ABP_Refinery_ProgressBar_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UCapsuleComponent* Capsule; // 0x228(0x08)
	UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	UMaterialInstanceDynamic* ProgressMaterial; // 0x240(0x08)
	float Progress; // 0x248(0x04)
	AFSDRefinery* Refinery; // 0x250(0x08)
	enum class ERefineryState State; // 0x258(0x01)

	void SetColors(FLinearColor InStartColor, FLinearColor InEndColor, FLinearColor InBackgroundColor);
	void SetProgress(float InProgress01);
	void UserConstructionScript();
	void OnTick_321D738B4128D90EE5392DBACA2273B4(float DeltaTime, float NormalizedTime);
	void Completed_321D738B4128D90EE5392DBACA2273B4(float DeltaTime, float NormalizedTime);
	void ReceiveBeginPlay();
	void OnRefineryStateChanged(enum class ERefineryState InRefineryState);
	void ExecuteUbergraph_BP_Refinery_ProgressBar(int32_t EntryPoint);
};

