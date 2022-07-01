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

    void Refresh();
    void UpdateHovered();
    void Click(EPackageSortField InField);
    void GetSortBy(EPackageSortField& Field, bool& Ascending);
    void SetSortBy(EPackageSortField InField, bool InAscending);
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
    void ExecuteUbergraph_UI_Modding_SortBy(int32 EntryPoint);
    void OnEnableDisableAll__DelegateSignature(bool InEnableAll);
    void OnSortByChanged__DelegateSignature(EPackageSortField InField, bool InAscending);
};

#endif
