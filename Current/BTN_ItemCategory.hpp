#ifndef UE4SS_SDK_BTN_ItemCategory_HPP
#define UE4SS_SDK_BTN_ItemCategory_HPP

class UBTN_ItemCategory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Pressed;
    class UWidgetAnimation* Hover;
    class UBorder* BorderOuter;
    class UBorder* Bracket;
    class UButton* Button_0;
    class UTextBlock* DATA_CategoryTitle;
    class UTextBlock* DATA_UnlockedNumber;
    class UImage* Icon;
    class UITM_ItemUnlockedIcon_C* Notification_NewItem;
    class UOverlay* Overlay_0;
    class USizeBox* SizeBox_0;
    class UTextBlock* TEXT_Acquired;
    class UOverlay* ToolTip;
    class UImage* TooltipArrow;
    class UBorder* ToolTipBox;
    class UBorder* TooltipBracket;
    float IconSize;
    class UTexture2D* Texture;
    FText CategoryTitle;
    FBTN_ItemCategory_CButtonClicked ButtonClicked;
    void ButtonClicked();
    EVanitySlot VanitySlot;
    class UPlayerCharacterID* characterID;

    void CheckForNotification();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Toggle(bool On);
    void SetData(class UPlayerCharacterID* characterID);
    void OnClosed();
    void ExecuteUbergraph_BTN_ItemCategory(int32 EntryPoint);
    void ButtonClicked__DelegateSignature();
};

#endif
