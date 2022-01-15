#ifndef UE4SS_SDK_UI_Bar_BackgroundMenu_ItemSpecialBig_HPP
#define UE4SS_SDK_UI_Bar_BackgroundMenu_ItemSpecialBig_HPP

class UUI_Bar_BackgroundMenu_ItemSpecialBig_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DrinkIconIdle;
    UImage* DrinkIcon;
    UTextBlock* DrinkNameLabel;
    UImage* Image_223;
    UImage* Image_225;
    UScaleBox* Name;
    UTextBlock* TextBlock_0;
    UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;
    UDrinkableDataAsset* Drinkable;

    void Set Drinkable shown price();
    void SetDrinkable(UDrinkableDataAsset* InDrinkable);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, UDrinkableDataAsset* K2Node_CustomEvent_InDrinkable, FSlateColor K2Node_MakeStruct_SlateColor, FText CallFunc_TextToUpper_ReturnValue, UTexture2D* CallFunc_GetDrinkableIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
