#ifndef UE4SS_SDK_HUD_Refinery_Objective_HPP
#define UE4SS_SDK_HUD_Refinery_Objective_HPP

class UHUD_Refinery_Objective_C : UOptionalObjectiveWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    UImage* Image_Separator;
    UImage* Line_MainPercent;
    UITM_Refinery_Pipeline_C* Pipeline_Center;
    UITM_Refinery_Pipeline_C* Pipeline_Left;
    UITM_Refinery_Pipeline_C* Pipeline_Right;
    UProgressBar* Refinery_Progressbar;
    UTextBlock* Text_MainPercent;
    UTextBlock* TextBlock_Title;
    URefineryObjective* Objective;
    AFSDRefinery* Refinery;

    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void OnProgressChanged(float InProgress01, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void OnSetupPipeline(APipelineStart* InPipelineStart, int32 Temp_int_Variable, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UITM_Refinery_Pipeline_C* K2Node_Select_Default);
    void SetRefinery(UFSDRefinery* InRefinery, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetRefiningProgress_ReturnValue, RefineryProgressDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, RefineryStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, RefineryPipelineDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, APipelineStart* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetObjective(UObjective* obj);
    void Construct();
    void ExecuteUbergraph_HUD_Refinery_Objective(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, UObjective* K2Node_Event_obj, URefineryObjective* K2Node_DynamicCast_AsRefinery_Objective, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, UFSDRefinery* CallFunc_GetActorOfClass_ReturnValue, RefineryDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
}

#endif
