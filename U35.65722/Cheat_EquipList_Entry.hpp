#ifndef UE4SS_SDK_Cheat_EquipList_Entry_HPP
#define UE4SS_SDK_Cheat_EquipList_Entry_HPP

class UCheat_EquipList_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Label_C* Description_Text;
    class UButton* EquipButton;
    class UBorder* Equipped_Border;
    class UBasic_Label_C* Name_Text;
    class UButton* OwnedButton;
    FText Name;
    FText Description;
    bool Owned;
    bool Equipped;
    bool Hovered;
    class UObject* Data;
    FCheat_EquipList_Entry_COnEquipClicked OnEquipClicked;
    void OnEquipClicked(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped);
    FCheat_EquipList_Entry_COnOwnedClicked OnOwnedClicked;
    void OnOwnedClicked(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned);
    int32 Index;

    void SetOwnedData(TArray<class UObject*>& InOwnedData, bool CallFunc_Array_Contains_ReturnValue);
    void SetOwned(bool Owned);
    void SetEquippedData(TArray<class UObject*>& InEquippedData, bool CallFunc_Array_Contains_ReturnValue);
    void SetEquipped(bool InEquipped);
    void GetValues(FText& Name, FText& Description, bool& Owned, bool& Equipped, class UObject*& Data);
    void SetValues(FText Name, FText Description, bool Owned, bool Equipped, class UObject* Data);
    void Refresh(bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_SelectMenuColor_OutputColor, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2);
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__OwnedButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Cheat_EquipList_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
    void OnOwnedClicked__DelegateSignature(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned);
    void OnEquipClicked__DelegateSignature(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped);
};

#endif
