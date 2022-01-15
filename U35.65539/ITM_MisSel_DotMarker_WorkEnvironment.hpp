#ifndef UE4SS_SDK_ITM_MisSel_DotMarker_WorkEnvironment_HPP
#define UE4SS_SDK_ITM_MisSel_DotMarker_WorkEnvironment_HPP

class UITM_MisSel_DotMarker_WorkEnvironment_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* HorizontalBox_0;
    UImage* Icon1;
    UImage* Icon2;
    UImage* Icon3;
    UImage* Icon4;
    UImage* Icon5;
    USizeBox* SizeBox_1;
    USizeBox* SizeBox_2;
    USizeBox* SizeBox_3;
    USizeBox* SizeBox_4;
    USizeBox* SizeBox_5;
    float Size;
    float RenderAngle;

    void PreConstruct(bool IsDesignTime);
    void SetData(UDifficultySetting* Difficulty);
    void ExecuteUbergraph_ITM_MisSel_DotMarker_WorkEnvironment(int32 EntryPoint, FLinearColor Temp_struct_Variable, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable_1, bool Temp_bool_Variable_1, FLinearColor Temp_struct_Variable_2, bool Temp_bool_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, UDifficultySetting* K2Node_CustomEvent_Difficulty, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor Temp_struct_Variable_3, UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_GetDifficultyIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, FLinearColor K2Node_Select_Default, FLinearColor K2Node_Select_Default_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, FLinearColor K2Node_Select_Default_2, bool Temp_bool_Variable_3, FLinearColor Temp_struct_Variable_4, FLinearColor K2Node_Select_Default_3, bool Temp_bool_Variable_4, FLinearColor K2Node_Select_Default_4);
}

#endif
