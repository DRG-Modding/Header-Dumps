#ifndef UE4SS_SDK_ITM_ValidSeedRequirement_HPP
#define UE4SS_SDK_ITM_ValidSeedRequirement_HPP

class UITM_ValidSeedRequirement_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_0;
    UImage* Image_73;
    UTextBlock* TextBlock_438;
    bool RequirementMet;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_ValidSeedRequirement(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, ESlateVisibility K2Node_Select_Default);
}

#endif
