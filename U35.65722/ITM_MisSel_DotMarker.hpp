#ifndef UE4SS_SDK_ITM_MisSel_DotMarker_HPP
#define UE4SS_SDK_ITM_MisSel_DotMarker_HPP

class UITM_MisSel_DotMarker_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon1;
    class UImage* Icon2;
    class UImage* Icon3;
    class USizeBox* SizeBox_1;
    class USizeBox* SizeBox_2;
    class USizeBox* SizeBox_3;
    float Size;

    void PreConstruct(bool IsDesignTime);
    void SetData(int32 Level);
    void ExecuteUbergraph_ITM_MisSel_DotMarker(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, int32 K2Node_CustomEvent_Level, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, FLinearColor CallFunc_MenuColors_OutputColor_4, FLinearColor K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_5, FLinearColor K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor_6, FLinearColor CallFunc_MenuColors_OutputColor_7, FLinearColor K2Node_Select_Default_2);
};

#endif
