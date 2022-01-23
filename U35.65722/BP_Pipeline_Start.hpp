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

    void UpdatePipelineNumber(class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Clamp_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue, FText CallFunc_Format_ReturnValue_1, int32 Temp_int_Variable, class UMaterialInterface* K2Node_Select_Default);
    void UpdateState(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, FName Temp_name_Variable, FName Temp_name_Variable_1, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1, FName K2Node_Select_Default_2);
    void UserConstructionScript(int32 CallFunc_GetMaterialIndex_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue);
    void BndEvt__PipelineStartUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ReceiveBeginPlay();
    void ReceiveBuildStateChanged(EPipelineBuildState InBuildState);
    void ExecuteUbergraph_BP_Pipeline_Start(int32 EntryPoint, bool K2Node_ComponentBoundEvent_canUse, EPipelineBuildState K2Node_Event_InBuildState);
};

#endif
