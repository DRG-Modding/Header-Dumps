// BlueprintGeneratedClass BP_Pipeline_Start.BP_Pipeline_Start_C
// Size: 0x2b8 (Inherited: 0x270)
struct ABP_Pipeline_Start_C : APipelineStart {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UStaticMeshComponent* NumberPlane; // 0x278(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x280(0x08)
	struct UOutlineComponent* outline; // 0x288(0x08)
	struct UChildActorComponent* BP_StatusLamp; // 0x290(0x08)
	struct USceneComponent* PipelineStartTransform; // 0x298(0x08)
	struct UBoxComponent* ColliderPipelineStart; // 0x2a0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2a8(0x08)
	struct UMaterialInterface* MarkerRingMaterial; // 0x2b0(0x08)

	void UpdatePipelineNumber(); // Function BP_Pipeline_Start.BP_Pipeline_Start_C.UpdatePipelineNumber
	void UpdateState(); // Function BP_Pipeline_Start.BP_Pipeline_Start_C.UpdateState
	void UserConstructionScript(); // Function BP_Pipeline_Start.BP_Pipeline_Start_C.UserConstructionScript
	void BndEvt__PipelineStartUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse); // Function BP_Pipeline_Start.BP_Pipeline_Start_C.BndEvt__PipelineStartUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_Pipeline_Start.BP_Pipeline_Start_C.ReceiveBeginPlay
	void ReceiveBuildStateChanged(enum class EPipelineBuildState InBuildState); // Function BP_Pipeline_Start.BP_Pipeline_Start_C.ReceiveBuildStateChanged
	void ExecuteUbergraph_BP_Pipeline_Start(int32_t EntryPoint); // Function BP_Pipeline_Start.BP_Pipeline_Start_C.ExecuteUbergraph_BP_Pipeline_Start
};

