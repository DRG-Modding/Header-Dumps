#ifndef UE4SS_SDK_ITM_DeepDive_StageIcon_HPP
#define UE4SS_SDK_ITM_DeepDive_StageIcon_HPP

class UITM_DeepDive_StageIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_75;
    class UTextBlock* TextBlock_87;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_ImageTinted_C* UI_ImageTinted_C_0;
    class UUI_ImageTinted_C* UI_ImageTinted_C_4;
    bool Active;
    FText Text;
    bool ShowClaimStatusText;

    void SetClaimStatusActive(bool Index, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetText(FText Text);
    void SetActive(bool Index, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDive_StageIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
