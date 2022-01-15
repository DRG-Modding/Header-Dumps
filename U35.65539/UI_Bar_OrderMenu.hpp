#ifndef UE4SS_SDK_UI_Bar_OrderMenu_HPP
#define UE4SS_SDK_UI_Bar_OrderMenu_HPP

class UUI_Bar_OrderMenu_C : UBarMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_0;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_3;
    UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    UBasic_ButtonScalable2_C* CloseButton;
    UVerticalBox* DrinksBox;
    UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate;
    UUI_Bar_OrderMenu_Preview_C* Preview;
    UUI_Bar_Inventory_C* UI_Bar_Inventory;
    UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item;
    UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item_C_1;
    UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item_C_2;
    UUI_Bar_OrderMenu_ItemSpecial_C* UI_Bar_OrderMenu_ItemSpecial;
    ASpaceRigBar* BarActor;
    FUI_Bar_OrderMenu_COnRoundSelected OnRoundSelected;
    void OnRoundSelected(ASpaceRigBar* Bar, UDrinkableDataAsset* RequestedDrink);
    UDrinkableDataAsset* SelectedDrink;

    TArray<UDrinkableDataAsset*> GetDrinkables(TArray<UDrinkableDataAsset*> NewLocalVar_0, const UDrinkableDataAsset* Temp_object_Variable, const UDrinkableDataAsset* Temp_object_Variable_1, const UDrinkableDataAsset* Temp_object_Variable_2, TArray<UDrinkableDataAsset*>& CallFunc_GetBarDrinkables_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2);
    void SetMenu(UDrinkableDataAsset* Special, TArray<UDrinkableDataAsset*>& Drinks, UUI_Bar_OrderMenu_Item_C* Widget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UUI_Bar_OrderMenu_Item_C* CallFunc_Create_ReturnValue, FMargin K2Node_MakeStruct_Margin, UDrinkableDataAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void OnDrinkAdded(UUI_Bar_OrderMenu_Item_C* DrinkWidget);
    void OnDrinksPurchased_Event(UDrinkableDataAsset* Drink);
    void Cancel Order();
    void OnShown();
    void OnHover_Event(USpaceRigBarMenuItem* OrderItem);
    void BndEvt__Preview_K2Node_ComponentBoundEvent_2_OnPreviewItemChanged__DelegateSignature(USpaceRigBarMenuItem* Previous Item, USpaceRigBarMenuItem* New Item);
    void OnPurchaseDenied_Event();
    void BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_43_OnHover__DelegateSignature(USpaceRigBarMenuItem* OrderItem);
    void BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_0_OnPurchaseDenied__DelegateSignature();
    void OnClosed();
    void BndEvt__Basic_ButtonScalable2_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void BndEvt__UI_Bar_OrderMenu_ItemSpecial_K2Node_ComponentBoundEvent_1_OnDrinksPurchased__DelegateSignature(UDrinkableDataAsset* Drink);
    void SetBartender(ASpaceRigBar* BarActor);
    void OnNewDrinkableSpecial(UDrinkableDataAsset* Drinkable);
    void ReceiveCloseCommand();
    void BndEvt__MENU_SpaceRigTemplate_K2Node_ComponentBoundEvent_11_OnClosedClicked__DelegateSignature();
    void OnDrinkUnlocked(UDrinkableDataAsset* Drink);
    void Construct();
    void ExecuteUbergraph_UI_Bar_OrderMenu(int32 EntryPoint, UDrinkableDataAsset* K2Node_CustomEvent_Drink_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UUI_Bar_OrderMenu_Item_C* K2Node_CustomEvent_DrinkWidget, USpaceRigBarMenuItem* K2Node_CustomEvent_OrderItem, USpaceRigBarMenuItem* K2Node_ComponentBoundEvent_Previous_Item, USpaceRigBarMenuItem* K2Node_ComponentBoundEvent_New_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, OnDrinkUnlocked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, DrinkableSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnPurchaseDenied__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UBP_SpaceRig_Bartender_C* K2Node_DynamicCast_AsBP_Space_Rig_Bartender, bool K2Node_DynamicCast_bSuccess, OnDrinksPurchased__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_PlayNegative_Duration, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, USpaceRigBarMenuItem* K2Node_ComponentBoundEvent_OrderItem, UDrinkableDataAsset* K2Node_ComponentBoundEvent_Drink, ASpaceRigBar* K2Node_CustomEvent_BarActor, UDrinkableDataAsset* K2Node_CustomEvent_Drinkable, OnHover__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, TArray<UDrinkableDataAsset*>& CallFunc_GetDrinkables_ReturnValue, UDrinkableDataAsset* K2Node_CustomEvent_Drink, UDrinkableDataAsset* CallFunc_GetBarDailySpecial_ReturnValue, UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget);
    void OnRoundSelected__DelegateSignature(ASpaceRigBar* Bar, UDrinkableDataAsset* RequestedDrink);
}

#endif
