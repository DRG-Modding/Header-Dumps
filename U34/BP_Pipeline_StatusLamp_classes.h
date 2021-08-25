// BlueprintGeneratedClass BP_Pipeline_StatusLamp.BP_Pipeline_StatusLamp_C
// Size: 0x241 (Inherited: 0x220)
struct ABP_Pipeline_StatusLamp_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* ST_Connector_StatusLamp; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct APipelineStart* PipelineStart; // 0x238(0x08)
	enum class EPipelineBuildState PreviewState; // 0x240(0x01)

	void UpdateState(); // Function BP_Pipeline_StatusLamp.BP_Pipeline_StatusLamp_C.UpdateState
	void UserConstructionScript(); // Function BP_Pipeline_StatusLamp.BP_Pipeline_StatusLamp_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_Pipeline_StatusLamp.BP_Pipeline_StatusLamp_C.ReceiveBeginPlay
	void ListenToPipelineStart(struct APipelineStart* InPipelineStart); // Function BP_Pipeline_StatusLamp.BP_Pipeline_StatusLamp_C.ListenToPipelineStart
	void OnBuildStateChanged_Event(struct APipelineStart* InPipelineStart, enum class EPipelineBuildState InPipelineState); // Function BP_Pipeline_StatusLamp.BP_Pipeline_StatusLamp_C.OnBuildStateChanged_Event
	void ExecuteUbergraph_BP_Pipeline_StatusLamp(int32_t EntryPoint); // Function BP_Pipeline_StatusLamp.BP_Pipeline_StatusLamp_C.ExecuteUbergraph_BP_Pipeline_StatusLamp
};

