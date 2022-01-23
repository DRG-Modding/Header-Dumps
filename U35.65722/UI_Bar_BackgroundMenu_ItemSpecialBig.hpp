#ifndef UE4SS_SDK_UI_Bar_BackgroundMenu_ItemSpecialBig_HPP
#define UE4SS_SDK_UI_Bar_BackgroundMenu_ItemSpecialBig_HPP

class UUI_Bar_BackgroundMenu_ItemSpecialBig_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DrinkIconIdle;
    class UImage* DrinkIcon;
    class UTextBlock* DrinkNameLabel;
    class UImage* Image_223;
    class UImage* Image_225;
    class UScaleBox* Name;
    class UTextBlock* TextBlock_0;
    class UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;
    class UDrinkableDataAsset* Drinkable;

    void Set Drinkable shown price();
    void SetDrinkable(class UDrinkableDataAsset* InDrinkable);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor, class UDrinkableDataAsset* K2Node_CustomEvent_InDrinkable, FSlateColor K2Node_MakeStruct_SlateColor, FText CallFunc_TextToUpper_ReturnValue, class UTexture2D* CallFunc_GetDrinkableIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
