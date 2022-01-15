#ifndef UE4SS_SDK_OBJ_1st_Salvage_HPP
#define UE4SS_SDK_OBJ_1st_Salvage_HPP

class UOBJ_1st_Salvage_C : USalvageObjective
{
    FPointerToUberGraphFrame UberGraphFrame;
    FOBJ_1st_Salvage_COnAllActorsSalvaged OnAllActorsSalvaged;
    void OnAllActorsSalvaged();

    UTexture2D* GetInMissionCounterIcon(bool Temp_bool_Variable, UTexture2D* Temp_object_Variable, UTexture2D* Temp_object_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, UTexture2D* K2Node_Select_Default);
    FText GetInMissionCounterText(bool Temp_bool_Variable, FText Temp_text_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FText K2Node_Select_Default);
    int32 GetObjectiveAmount(float missionLengthfloat CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue);
    FText GetInMissionText(bool Temp_bool_Variable, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable_1, FText CallFunc_Format_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Format_ReturnValue_2, FText K2Node_Select_Default, FText K2Node_Select_Default_1);
    FText GetObjectiveDescription(float missionLengthint32 CallFunc_GetObjectiveAmount_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    UTexture2D* GetObjectiveIcon();
    void AllActorsSalvaged();
    void ExecuteUbergraph_OBJ_1st_Salvage(int32 EntryPoint);
    void OnAllActorsSalvaged__DelegateSignature();
}

#endif
