#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSelector_ToolTip_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSelector_ToolTip_HPP

class UITM_Wardrobe_ItemSelector_ToolTip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Label_C* DescriptionLabel;
    class UBasic_Label_C* TextLabel;
    class UBorder* ToolTipBorder;

    void SetText(FText Text, FText Description, FText Title, bool Temp_bool_Variable, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Split_LeftS, FString CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, FText K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FText CallFunc_TextToUpper_ReturnValue);
    void ExecuteUbergraph_ITM_Wardrobe_ItemSelector_ToolTip(int32 EntryPoint);
};

#endif
