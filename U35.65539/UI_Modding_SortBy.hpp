#ifndef UE4SS_SDK_UI_Modding_SortBy_HPP
#define UE4SS_SDK_UI_Modding_SortBy_HPP

class UUI_Modding_SortBy_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Arrow_Active;
    UImage* Arrow_Author;
    UImage* Arrow_Category;
    UImage* Arrow_Name;
    UBorder* Border_BG;
    UButton* Button_Active;
    UButton* Button_Author;
    UButton* Button_Category;
    UButton* Button_Name;
    UHorizontalBox* ButtonsBox;
    UBasic_CheckBox_C* EnableAllCheckbox;
    USizeBox* RowSizeBox;
    USizeBox* Size_Active;
    USizeBox* Size_Author;
    USizeBox* Size_Category;
    USizeBox* Size_Name;
    UTextBlock* TXT_Active;
    UTextBlock* TXT_Author;
    UTextBlock* TXT_Category;
    UTextBlock* TXT_Name;
    EPackageSortField Field;
    bool Ascending;
    FUI_Modding_SortBy_COnSortByChanged OnSortByChanged;
    void OnSortByChanged(EPackageSortField InField, bool InAscending);
    bool IsDesignTime;
    FSizeBoxSettings SizeSettings;
    FUI_Modding_SortBy_COnEnableDisableAll OnEnableDisableAll;
    void OnEnableDisableAll(bool InEnableAll);
    bool Toggle;

    void Refresh(bool AnyDisabled, bool AnyEnabled, ECheckBoxState Temp_byte_Variable, ECheckBoxState Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, ECheckBoxState K2Node_Select_Default, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue, UUGCPackage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void UpdateHovered(int32 Index, TArray<UImage*> Arrows, TArray<UTextBlock*> Labels, TArray<UButton*> buttons, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, UImage* CallFunc_Array_Get_Item, TArray<UImage*>& K2Node_MakeArray_Array, UTextBlock* CallFunc_Array_Get_Item_1, UButton* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FLinearColor K2Node_Select_Default, FSlateColor K2Node_MakeStruct_SlateColor, TArray<UTextBlock*>& K2Node_MakeArray_Array_1, TArray<UButton*>& K2Node_MakeArray_Array_2);
    void Click(EPackageSortField InField, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void GetSortBy(EPackageSortField& Field, bool& Ascending);
    void SetSortBy(EPackageSortField InField, bool InAscending, UImage* CurrentArrow, UImage* ActiveArrow, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, EPackageSortField Temp_byte_Variable, UImage* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Select_Default, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, TArray<UImage*>& K2Node_MakeArray_Array, UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UImage* K2Node_Select_Default_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Category_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Name_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Author_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Name_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Name_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Author_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Author_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Active_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Active_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Active_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_12_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_UI_Modding_SortBy(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_ComponentBoundEvent_IsChecked, ECheckBoxState CallFunc_GetState_State, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue);
    void OnEnableDisableAll__DelegateSignature(bool InEnableAll);
    void OnSortByChanged__DelegateSignature(EPackageSortField InField, bool InAscending);
}

#endif
