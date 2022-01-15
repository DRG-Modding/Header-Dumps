#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSelector_Entry_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSelector_Entry_HPP

class UITM_Wardrobe_ItemSelector_Entry_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BlankImage;
    UBorder* Border_Inner;
    UBorder* Border_Selection;
    UOverlay* ChildOverlay;
    UWidgetSwitcher* ContentSwitcher;
    UUI_DLC_Indicator_C* DLC_Indicator;
    UButton* EntryButton;
    UITM_ItemUnlockedIcon_C* Notification_NewItem;
    int32 Index;
    FITM_Wardrobe_ItemSelector_Entry_COnEntryHovered OnEntryHovered;
    void OnEntryHovered(int32 Index, UWidget* Widget);
    FITM_Wardrobe_ItemSelector_Entry_COnEntryUnhovered OnEntryUnhovered;
    void OnEntryUnhovered(int32 Index, UWidget* Widget);
    FITM_Wardrobe_ItemSelector_Entry_COnEntryClicked OnEntryClicked;
    void OnEntryClicked(int32 Index, UWidget* Widget);
    UWidget* Widget;
    bool Hovered;
    TEnumAsByte<ENUM_MenuColors::Type> BorderColor;
    bool Selected;
    bool IsNewItem;
    UDLCBase* FromDLC;

    void SetFromDLC(UDLCBase* InDLC);
    void SetHovered(bool InHovered);
    void SetSelected(bool inSelected);
    void SetIsNewItem(bool IsNew);
    void UpdateBorder(bool ShowHovered, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_2, uint8 Temp_byte_Variable_2, float K2Node_Select_Default, uint8 K2Node_Select_Default_1, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, uint8 K2Node_Select_Default_2, FLinearColor CallFunc_MenuColors_OutputColor);
    void CreateChild(SoftClassProperty InChildClass, UWidget*& OutChild, UWidget* Child, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, TSubclassOf<UUserWidget> CallFunc_LoadWidgetClass_ReturnValue, UUserWidget* CallFunc_Create_ReturnValue);
    void SetChild(UWidget* InWidget, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, int32 K2Node_Select_Default);
    void BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Entry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_1);
    void OnEntryClicked__DelegateSignature(int32 Index, UWidget* Widget);
    void OnEntryUnhovered__DelegateSignature(int32 Index, UWidget* Widget);
    void OnEntryHovered__DelegateSignature(int32 Index, UWidget* Widget);
}

#endif
