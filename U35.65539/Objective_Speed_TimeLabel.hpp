#ifndef UE4SS_SDK_Objective_Speed_TimeLabel_HPP
#define UE4SS_SDK_Objective_Speed_TimeLabel_HPP

class UObjective_Speed_TimeLabel_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TimeLabel;
    AMiningPod* MiningPod;
    float UpdateDelay;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_Objective_Speed_TimeLabel(int32 EntryPoint, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<AMiningPod*>& CallFunc_GetAllActorsOfClass_OutActors, float CallFunc_Subtract_FloatFloat_ReturnValue, AMiningPod* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetTimeToDeparture_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
}

#endif
