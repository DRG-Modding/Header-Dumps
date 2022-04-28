#ifndef UE4SS_SDK_BP_Pipeline_Start_HPP
#define UE4SS_SDK_BP_Pipeline_Start_HPP

class ABP_Pipeline_Start_C : public APipelineStart
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* NumberPlane;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class UChildActorComponent* BP_StatusLamp;
    class USceneComponent* PipelineStartTransform;
    class UBoxComponent* ColliderPipelineStart;
    class UStaticMeshComponent* StaticMesh;
    class UMaterialInterface* MarkerRingMaterial;

    void UpdatePipelineNumber();
    void UpdateState();
    void UserConstructionScript();
    void BndEvt__PipelineStartUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ReceiveBeginPlay();
    void ReceiveBuildStateChanged(EPipelineBuildState InBuildState);
    void ExecuteUbergraph_BP_Pipeline_Start(int32 EntryPoint);
};

#endif
