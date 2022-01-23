#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSelector_Entry_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSelector_Entry_HPP

class UITM_Wardrobe_ItemSelector_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BlankImage;
    class UBorder* Border_Inner;
    class UBorder* Border_Selection;
    class UOverlay* ChildOverlay;
    class UWidgetSwitcher* ContentSwitcher;
    class UUI_DLC_Indicator_C* DLC_Indicator;
    class UButton* EntryButton;
    class UITM_ItemUnlockedIcon_C* Notification_NewItem;
    int32 Index;
    FITM_Wardrobe_ItemSelector_Entry_COnEntryHovered OnEntryHovered;
    void OnEntryHovered(int32 Index, class UWidget* Widget);
    FITM_Wardrobe_ItemSelector_Entry_COnEntryUnhovered OnEntryUnhovered;
    void OnEntryUnhovered(int32 Index, class UWidget* Widget);
    FITM_Wardrobe_ItemSelector_Entry_COnEntryClicked OnEntryClicked;
    void OnEntryClicked(int32 Index, class UWidget* Widget);
    class UWidget* Widget;
    bool Hovered;
    TEnumAsByte<ENUM_MenuColors::Type> BorderColor;
    bool Selected;
    bool IsNewItem;
    class UDLCBase* FromDLC;

    void SetFromDLC(class UDLCBase* InDLC);
    void SetHovered(bool InHovered);
    void SetSelected(bool inSelected);
    void SetIsNewItem(bool IsNew);
    void UpdateBorder(bool ShowHovered, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool Temp_bool_Variable_2, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_2, float K2Node_Select_Default, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_2, FLinearColor CallFunc_MenuColors_OutputColor);
    void CreateChild(TSoftClassPtr<UUserWidget> InChildClass, class UWidget*& OutChild, class UWidget* Child, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TSubclassOf<class UUserWidget> CallFunc_LoadWidgetClass_ReturnValue, class UUserWidget* CallFunc_Create_ReturnValue);
    void SetChild(class UWidget* InWidget, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, int32 K2Node_Select_Default);
    void BndEvt__EntryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__EntryButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__EntryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Wardrobe_ItemSelector_Entry(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_1);
    void OnEntryClicked__DelegateSignature(int32 Index, class UWidget* Widget);
    void OnEntryUnhovered__DelegateSignature(int32 Index, class UWidget* Widget);
    void OnEntryHovered__DelegateSignature(int32 Index, class UWidget* Widget);
};

#endif
