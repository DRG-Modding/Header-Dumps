#ifndef UE4SS_SDK_ITM_DeepDiveStageBG_HPP
#define UE4SS_SDK_ITM_DeepDiveStageBG_HPP

class UITM_DeepDiveStageBG_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BG_Glow;
    UImage* Image_350;
    UImage* Image_567;
    UImage* Image_751;
    USizeBox* SizeBox_0;
    float EndSize;
    bool BGglowActive;

    void NewFunction_0(bool Index, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetEndSize(float EndSize, float CallFunc_Multiply_FloatFloat_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDiveStageBG(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
