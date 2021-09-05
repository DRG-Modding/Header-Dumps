// BlueprintGeneratedClass BP_Pipeline_Start.BP_Pipeline_Start_C
// Size: 0x2b8 (Inherited: 0x270)
struct ABP_Pipeline_Start_C : APipelineStart {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UStaticMeshComponent* NumberPlane; // 0x278(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x280(0x08)
	UOutlineComponent* outline; // 0x288(0x08)
	UChildActorComponent* BP_StatusLamp; // 0x290(0x08)
	USceneComponent* PipelineStartTransform; // 0x298(0x08)
	UBoxComponent* ColliderPipelineStart; // 0x2a0(0x08)
	UStaticMeshComponent* StaticMesh; // 0x2a8(0x08)
	UMaterialInterface* MarkerRingMaterial; // 0x2b0(0x08)

	void UpdatePipelineNumber();
	void UpdateState();
	void UserConstructionScript();
	void BndEvt__PipelineStartUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	void ReceiveBeginPlay();
	void ReceiveBuildStateChanged(enum class EPipelineBuildState InBuildState);
	void ExecuteUbergraph_BP_Pipeline_Start(int32_t EntryPoint);
};

