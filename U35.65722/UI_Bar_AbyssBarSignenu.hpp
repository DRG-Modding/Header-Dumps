#ifndef UE4SS_SDK_UI_Bar_AbyssBarSignenu_HPP
#define UE4SS_SDK_UI_Bar_AbyssBarSignenu_HPP

class UUI_Bar_AbyssBarSignenu_C : public UBarMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UBorder* MenuBorder;
    class UTextBlock* MenuHeader;
    class UTextBlock* TextBlock_2;
    class ASpaceRigBar* BarActor;
    FUI_Bar_AbyssBarSignenu_COnRoundSelected OnRoundSelected;
    void OnRoundSelected(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Bar_AbyssBarSignenu(int32 EntryPoint, TArray<class UDrinkableDataAsset*>& CallFunc_GetBarDrinkables_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UDrinkableDataAsset* CallFunc_Array_Get_Item, bool CallFunc_MustBeUnlocked_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, class UUI_Bar_BackgroundMenu_Item_C* CallFunc_Create_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_1);
    void OnRoundSelected__DelegateSignature(class ASpaceRigBar* Bar, class UDrinkableDataAsset* RequestedDrink);
};

#endif
