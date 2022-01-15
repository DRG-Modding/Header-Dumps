#ifndef UE4SS_SDK_Cheat_EquipList_Category_HPP
#define UE4SS_SDK_Cheat_EquipList_Category_HPP

class UCheat_EquipList_Category_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Image_C* Arrow_Image;
    UBasic_Image_C* Background;
    UVerticalBox* Entries_VerticalBox;
    UBasic_Label_C* Name_Text;
    UButton* OpenButton;
    UVerticalBox* Owned_VerticalBox;
    FText Name;
    bool Open;

    void Refresh(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default_1);
    void AddEntry(FText Name, FText Description, bool Owned, bool Equipped, UObject* Data, UCheat_EquipList_Entry_C*& OutWidget, UCheat_EquipList_Entry_C* Widget, bool Temp_bool_Variable, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UVerticalBox* K2Node_Select_Default, UCheat_EquipList_Entry_C* CallFunc_Create_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, UCheat_EquipList_Entry_C* CallFunc_AddChildToVerticalBoxEx_ReturnValue);
    void Clear();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__OpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__OpenButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__OpenButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_EquipList_Category(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsHovered_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_Event_IsDesignTime, float K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue);
}

#endif
