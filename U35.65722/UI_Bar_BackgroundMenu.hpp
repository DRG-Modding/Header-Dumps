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
    void ExecuteUbergraph_UI_Bar_BackgroundMenu(int32 EntryPoint, TArray<class UDrinkableDataAsset*>& CallFunc_GetBarDrinkables_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FExecuteUbergraph_UI_Bar_BackgroundMenuK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, class UDrinkableDataAsset* CallFunc_Array_Get_Item, bool CallFunc_MustBeUnlocked_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, class UUI_Bar_BackgroundMenu_Item_C* CallFunc_Create_ReturnValue, class ABP_SpaceRig_Bartender_C* K2Node_CustomEvent_InBartender, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UDrinkableDataAsset* K2Node_CustomEvent_Drinkable);
    void OnRoundSelected__DelegateSignature(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);
};

#endif
