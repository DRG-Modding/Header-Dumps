#ifndef UE4SS_SDK_HUD_Refinery_Objective_HPP
#define UE4SS_SDK_HUD_Refinery_Objective_HPP

class UHUD_Refinery_Objective_C : public UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UImage* Image_Separator;
    class UImage* Line_MainPercent;
    class UITM_Refinery_Pipeline_C* Pipeline_Center;
    class UITM_Refinery_Pipeline_C* Pipeline_Left;
    class UITM_Refinery_Pipeline_C* Pipeline_Right;
    class UProgressBar* Refinery_Progressbar;
    class UTextBlock* Text_MainPercent;
    class UTextBlock* TextBlock_Title;
    class URefineryObjective* Objective;
    class AFSDRefinery* Refinery;

    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void OnProgressChanged(float InProgress01, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void OnSetupPipeline(class APipelineStart* InPipelineStart, int32 Temp_int_Variable, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UITM_Refinery_Pipeline_C* K2Node_Select_Default);
    void SetRefinery(class AFSDRefinery* InRefinery, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetRefiningProgress_ReturnValue, FSetRefineryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FSetRefineryK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FSetRefineryK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class APipelineStart* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetObjective(class UObjective* obj);
    void Construct();
    void ExecuteUbergraph_HUD_Refinery_Objective(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UObjective* K2Node_Event_obj, class URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class AFSDRefinery* CallFunc_GetActorOfClass_ReturnValue, FExecuteUbergraph_HUD_Refinery_ObjectiveK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
};

#endif
