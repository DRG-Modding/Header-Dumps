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
    class UUI_Bar_OrderMenu_Preview_C* Preview;
    class UUI_Bar_Inventory_C* UI_Bar_Inventory;
    class UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item;
    class UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item_C_1;
    class UUI_Bar_OrderMenu_Item_C* UI_Bar_OrderMenu_Item_C_2;
    class UUI_Bar_OrderMenu_ItemSpecial_C* UI_Bar_OrderMenu_ItemSpecial;
    class ASpaceRigBar* BarActor;
    FUI_Bar_OrderMenu_COnRoundSelected OnRoundSelected;
    void OnRoundSelected(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);
    class UDrinkableDataAsset* SelectedDrink;

    TArray<class UDrinkableDataAsset*> GetDrinkables(TArray<class UDrinkableDataAsset*> NewLocalVar_0, const class UDrinkableDataAsset* Temp_object_Variable, const class UDrinkableDataAsset* Temp_object_Variable_1, const class UDrinkableDataAsset* Temp_object_Variable_2, TArray<class UDrinkableDataAsset*>& CallFunc_GetBarDrinkables_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2);
    void SetMenu(class UDrinkableDataAsset* Special, TArray<class UDrinkableDataAsset*>& Drinks, class UUI_Bar_OrderMenu_Item_C* Widget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UUI_Bar_OrderMenu_Item_C* CallFunc_Create_ReturnValue, FMargin K2Node_MakeStruct_Margin, class UDrinkableDataAsset* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
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
    void ExecuteUbergraph_UI_Bar_OrderMenu(int32 EntryPoint, class UDrinkableDataAsset* K2Node_CustomEvent_Drink_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UUI_Bar_OrderMenu_Item_C* K2Node_CustomEvent_DrinkWidget, class USpaceRigBarMenuItem* K2Node_CustomEvent_OrderItem, class USpaceRigBarMenuItem* K2Node_ComponentBoundEvent_Previous_Item, class USpaceRigBarMenuItem* K2Node_ComponentBoundEvent_New_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FExecuteUbergraph_UI_Bar_OrderMenuK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_Bar_OrderMenuK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_UI_Bar_OrderMenuK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class ABP_SpaceRig_Bartender_C* K2Node_DynamicCast_AsBP_Space_Rig_Bartender, bool K2Node_DynamicCast_bSuccess, FExecuteUbergraph_UI_Bar_OrderMenuK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_PlayNegative_Duration, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, class USpaceRigBarMenuItem* K2Node_ComponentBoundEvent_OrderItem, class UDrinkableDataAsset* K2Node_ComponentBoundEvent_Drink, class ASpaceRigBar* K2Node_CustomEvent_BarActor, class UDrinkableDataAsset* K2Node_CustomEvent_Drinkable, FExecuteUbergraph_UI_Bar_OrderMenuK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, TArray<class UDrinkableDataAsset*>& CallFunc_GetDrinkables_ReturnValue, class UDrinkableDataAsset* K2Node_CustomEvent_Drink, class UDrinkableDataAsset* CallFunc_GetBarDailySpecial_ReturnValue, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget);
    void OnRoundSelected__DelegateSignature(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);
};

#endif
