// BlueprintGeneratedClass BP_Refinery_ProgressBar.BP_Refinery_ProgressBar_C
// Size: 0x259 (Inherited: 0x220)
struct ABP_Refinery_ProgressBar_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UCapsuleComponent* Capsule; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UMaterialInstanceDynamic* ProgressMaterial; // 0x240(0x08)
	float Progress; // 0x248(0x04)
	char UnknownData_24C[0x4]; // 0x24c(0x04)
	struct AFSDRefinery* Refinery; // 0x250(0x08)
	enum class ERefineryState State; // 0x258(0x01)

	void SetColors(struct FLinearColor InStartColor, struct FLinearColor InEndColor, struct FLinearColor InBackgroundColor); // Function BP_Refinery_ProgressBar.BP_Refinery_ProgressBar_C.SetColors
	void SetProgress(float InProgress01); // Function BP_Refinery_ProgressBar.BP_Refinery_ProgressBar_C.SetProgress
	void UserConstructionScript(); // Function BP_Refinery_ProgressBar.BP_Refinery_ProgressBar_C.UserConstructionScript
	void OnTick_321D738B4128D90EE5392DBACA2273B4(float DeltaTime, float NormalizedTime); // Function BP_Refinery_ProgressBar.BP_Refinery_ProgressBar_C.OnTick_321D738B4128D90EE5392DBACA2273B4
	void Completed_321D738B4128D90EE5392DBACA2273B4(float DeltaTime, float NormalizedTime); // Function BP_Refinery_ProgressBar.BP_Refinery_ProgressBar_C.Completed_321D738B4128D90EE5392DBACA2273B4
	void ReceiveBeginPlay(); // Function BP_Refinery_ProgressBar.BP_Refinery_ProgressBar_C.ReceiveBeginPlay
	void OnRefineryStateChanged(enum class ERefineryState InRefineryState); // Function BP_Refinery_ProgressBar.BP_Refinery_ProgressBar_C.OnRefineryStateChanged
	void ExecuteUbergraph_BP_Refinery_ProgressBar(int32_t EntryPoint); // Function BP_Refinery_ProgressBar.BP_Refinery_ProgressBar_C.ExecuteUbergraph_BP_Refinery_ProgressBar
};

