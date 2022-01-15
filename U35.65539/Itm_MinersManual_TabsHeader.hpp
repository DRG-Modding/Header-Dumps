#ifndef UE4SS_SDK_Itm_MinersManual_TabsHeader_HPP
#define UE4SS_SDK_Itm_MinersManual_TabsHeader_HPP

class UItm_MinersManual_TabsHeader_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* HorizontalBox_Back;
    UImage* Image_BG;
    UItm_HeaderCategory_C* Itm_HeaderCategory0;
    UItm_HeaderCategory_C* Itm_HeaderCategory1;
    UUI_AdvancedLabel_C* UI_AdvancedLabel;
    TArray<UItm_HeaderCategory_C*> Tabs;
    U_MENU_MinersManual_C* _Menu_Lore;
    int32 CurrIndex;

    void SetSelected(int32 Index, FText HeaderText);
    void Construct();
    void BndEvt__Itm_HeaderCategory1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__Itm_HeaderCategory2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void SetData(U_MENU_MinersManual_C* _Menu_Lore);
    void ExecuteUbergraph_Itm_MinersManual_TabsHeader(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, ESlateVisibility K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_CustomEvent_Index, FText K2Node_CustomEvent_HeaderText, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<UItm_HeaderCategory_C*>& K2Node_MakeArray_Array, UItm_HeaderCategory_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable_2, U_MENU_MinersManual_C* K2Node_CustomEvent__Menu_Lore, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default_1);
}

#endif
