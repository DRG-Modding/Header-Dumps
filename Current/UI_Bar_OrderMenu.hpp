#ifndef UE4SS_SDK_UI_Bar_OrderMenu_HPP
#define UE4SS_SDK_UI_Bar_OrderMenu_HPP

class UUI_Bar_OrderMenu_C : public UBarMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_0;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UBasic_ButtonScalable2_C* CloseButton;
    class UVerticalBox* DrinksBox;
    class UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    class UOverlay* Overlay_HolidayBeer_Holder;
    class UUI_Bar_OrderMenu_Preview_C* Preview;
    class UUI_Bar_Inventory_C* UI_Bar_Inventory;
    class UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item;
    class UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item_1;
    class UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item_C_1;
    class UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item_C_2;
    class UUI_Bar_OrderMenu_ItemSpecial_C* UI_Bar_OrderMenu_ItemSpecial;
    class UVerticalBox* VerticalBox_HolidayBeer;
    class ASpaceRigBar* BarActor;
    FUI_Bar_OrderMenu_COnRoundSelected OnRoundSelected;
    void OnRoundSelected(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);
    class UDrinkableDataAsset* SelectedDrink;

    TArray<class UDrinkableDataAsset*> GetDrinkables(class UDrinkableDataAsset*& SpecialEventBeer);
    void SetMenu(class UDrinkableDataAsset* Special, TArray<class UDrinkableDataAsset*>& Drinks, class UDrinkableDataAsset* SpecialEventBeer);
    void OnDrinkAdded(class UUI_Bar_OrderMenu_Item_C* DrinkWidget);
    void OnDrinksPurchased_Event(class UDrinkableDataAsset* Drink);
    void Cancel Order();
    void OnShown();
    void OnHover_Event(class USpaceRigBarMenuItem* OrderItem);
    void BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature(class USpaceRigBarMenuItem* Previous Item, class USpaceRigBarMenuItem* New Item);
    void OnPurchaseDenied_Event();
    void BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem);
    void BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature();
    void OnClosed();
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset* Drink);
    void SetBartender(class ASpaceRigBar* BarActor);
    void OnNewDrinkableSpecial(class UDrinkableDataAsset* Drinkable);
    void ReceiveCloseCommand();
    void BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature();
    void OnDrinkUnlocked(class UDrinkableDataAsset* Drink);
    void Construct();
    void Hovered Drinkable type changed();
    void ExecuteUbergraph_UI_Bar_OrderMenu(int32 EntryPoint);
    void OnRoundSelected__DelegateSignature(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);
};

#endif
