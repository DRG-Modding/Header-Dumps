#ifndef UE4SS_SDK_UI_Bar_BackgroundMenu_HPP
#define UE4SS_SDK_UI_Bar_BackgroundMenu_HPP

class UUI_Bar_BackgroundMenu_C : public UBarMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    class UVerticalBox* DrinksBox;
    class UTextBlock* MenuHeader;
    class UTextBlock* TextBlock_2;
    class UUI_Bar_BackgroundMenu_ItemSpecialBig_C* UI_Bar_BackgroundMenu_ItemSpecialBig;
    FUI_Bar_BackgroundMenu_COnRoundSelected OnRoundSelected;
    void OnRoundSelected(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);
    class ABP_SpaceRig_Bartender_C* Bartender;

    void PreConstruct(bool IsDesignTime);
    void Set Bartender(class ABP_SpaceRig_Bartender_C* InBartender);
    void OnNewDrinkableSpecial(class UDrinkableDataAsset* Drinkable);
    void ExecuteUbergraph_UI_Bar_BackgroundMenu(int32 EntryPoint);
    void OnRoundSelected__DelegateSignature(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);
};

#endif
