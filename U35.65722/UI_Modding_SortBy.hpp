#ifndef UE4SS_SDK_UI_Modding_SortBy_HPP
#define UE4SS_SDK_UI_Modding_SortBy_HPP

class UUI_Modding_SortBy_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Arrow_Active;
    class UImage* Arrow_Author;
    class UImage* Arrow_Category;
    class UImage* Arrow_Name;
    class UBorder* Border_BG;
    class UButton* Button_Active;
    class UButton* Button_Author;
    class UButton* Button_Category;
    class UButton* Button_Name;
    class UHorizontalBox* ButtonsBox;
    class UBasic_CheckBox_C* EnableAllCheckbox;
    class USizeBox* RowSizeBox;
    class USizeBox* Size_Active;
    class USizeBox* Size_Author;
    class USizeBox* Size_Category;
    class USizeBox* Size_Name;
    class UTextBlock* TXT_Active;
    class UTextBlock* TXT_Author;
    class UTextBlock* TXT_Category;
    class UTextBlock* TXT_Name;
    EPackageSortField Field;
    bool Ascending;
    FUI_Modding_SortBy_COnSortByChanged OnSortByChanged;
    void OnSortByChanged(EPackageSortField InField, bool InAscending);
    bool IsDesignTime;
    FSizeBoxSettings SizeSettings;
    FUI_Modding_SortBy_COnEnableDisableAll OnEnableDisableAll;
    void OnEnableDisableAll(bool InEnableAll);
    bool Toggle;

    void Refresh(bool AnyDisabled, bool AnyEnabled, ECheckBoxState Temp_byte_Variable, ECheckBoxState Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, ECheckBoxState K2Node_Select_Default, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUGCPackage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void UpdateHovered(int32 Index, TArray<class UImage*> Arrows, TArray<class UTextBlock*> Labels, TArray<class UButton*> buttons, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class UImage* CallFunc_Array_Get_Item, TArray<class UImage*>& K2Node_MakeArray_Array, class UTextBlock* CallFunc_Array_Get_Item_1, class UButton* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FLinearColor K2Node_Select_Default, FSlateColor K2Node_MakeStruct_SlateColor, TArray<class UTextBlock*>& K2Node_MakeArray_Array_1, TArray<class UButton*>& K2Node_MakeArray_Array_2);
    void Click(EPackageSortField InField, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void GetSortBy(EPackageSortField& Field, bool& Ascending);
    void SetSortBy(EPackageSortField InField, bool InAscending, class UImage* CurrentArrow, class UImage* ActiveArrow, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, EPackageSortField Temp_byte_Variable, class UImage* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_Select_Default, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UImage* K2Node_Select_Default_1, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue);
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
    void ExecuteUbergraph_UI_Modding_SortBy(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_ComponentBoundEvent_IsChecked, ECheckBoxState CallFunc_GetState_State, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue);
    void OnEnableDisableAll__DelegateSignature(bool InEnableAll);
    void OnSortByChanged__DelegateSignature(EPackageSortField InField, bool InAscending);
};

#endif
