#ifndef UE4SS_SDK_UI_Bar_BackgroundMenu_Item_HPP
#define UE4SS_SDK_UI_Bar_BackgroundMenu_Item_HPP

class UUI_Bar_BackgroundMenu_Item_C : UBarMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* ImgIcon;
    UTextBlock* LabelName;
    UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;
    UDrinkableDataAsset* Drinkable;

    void Set Drinkable shown price();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_Bar_BackgroundMenu_Item(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UTexture2D* CallFunc_GetDrinkableIcon_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FText CallFunc_TextToUpper_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor);
}

#endif
