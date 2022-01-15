#ifndef UE4SS_SDK_UI_Bar_BackgroundMenu_HPP
#define UE4SS_SDK_UI_Bar_BackgroundMenu_HPP

class UUI_Bar_BackgroundMenu_C : UBarMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_1;
    UVerticalBox* DrinksBox;
    UTextBlock* MenuHeader;
    UTextBlock* TextBlock_2;
    UUI_Bar_BackgroundMenu_ItemSpecialBig_C* UI_Bar_BackgroundMenu_ItemSpecialBig;
    FUI_Bar_BackgroundMenu_COnRoundSelected OnRoundSelected;
    void OnRoundSelected(ASpaceRigBar* Bar, UDrinkableDataAsset* RequestedDrink);
    ABP_SpaceRig_Bartender_C* Bartender;

    void PreConstruct(bool IsDesignTime);
    void Set Bartender(UBP_SpaceRig_Bartender_C* InBartender);
    void OnNewDrinkableSpecial(UDrinkableDataAsset* Drinkable);
    void ExecuteUbergraph_UI_Bar_BackgroundMenu(int32 EntryPoint, TArray<UDrinkableDataAsset*>& CallFunc_GetBarDrinkables_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, DrinkableSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, UDrinkableDataAsset* CallFunc_Array_Get_Item, bool CallFunc_MustBeUnlocked_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, UUI_Bar_BackgroundMenu_Item_C* CallFunc_Create_ReturnValue, UBP_SpaceRig_Bartender_C* K2Node_CustomEvent_InBartender, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UDrinkableDataAsset* K2Node_CustomEvent_Drinkable);
    void OnRoundSelected__DelegateSignature(ASpaceRigBar* Bar, UDrinkableDataAsset* RequestedDrink);
}

#endif
