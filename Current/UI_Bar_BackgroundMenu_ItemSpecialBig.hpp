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
    void ExecuteUbergraph_UI_Bar_BackgroundMenu_ItemSpecialBig(int32 EntryPoint);
};

#endif
