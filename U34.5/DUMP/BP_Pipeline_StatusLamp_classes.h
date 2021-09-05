// BlueprintGeneratedClass BP_Pipeline_StatusLamp.BP_Pipeline_StatusLamp_C
// Size: 0x241 (Inherited: 0x220)
struct ABP_Pipeline_StatusLamp_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* ST_Connector_StatusLamp; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	APipelineStart* PipelineStart; // 0x238(0x08)
	enum class EPipelineBuildState PreviewState; // 0x240(0x01)

	void UpdateState();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ListenToPipelineStart(APipelineStart* InPipelineStart);
	void OnBuildStateChanged_Event(APipelineStart* InPipelineStart, enum class EPipelineBuildState InPipelineState);
	void ExecuteUbergraph_BP_Pipeline_StatusLamp(int32_t EntryPoint);
};

