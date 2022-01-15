#ifndef UE4SS_SDK_ITM_DeepDive_StageIcon_HPP
#define UE4SS_SDK_ITM_DeepDive_StageIcon_HPP

class UITM_DeepDive_StageIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* TextBlock_75;
    UTextBlock* TextBlock_87;
    UUI_ImageTinted_C* UI_ImageTinted;
    UUI_ImageTinted_C* UI_ImageTinted_C_0;
    UUI_ImageTinted_C* UI_ImageTinted_C_4;
    bool Active;
    FText Text;
    bool ShowClaimStatusText;

    void SetClaimStatusActive(bool Index, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
    void SetText(FText Text);
    void SetActive(bool Index, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, uint8 K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDive_StageIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
