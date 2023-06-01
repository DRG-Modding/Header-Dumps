#ifndef UE4SS_SDK_ITM_SkinItem_HPP
#define UE4SS_SDK_ITM_SkinItem_HPP

class UITM_SkinItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UWidgetAnimation* AnimPing;
    class UWidgetAnimation* AnimUnlocked;
    class UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon;
    class UITM_SkinIcon_C* ITM_SkinIcon;
    class UButton* SkinButton;
    class UItemSkin* Skin;
    FITM_SkinItem_COnSkinClicked OnSkinClicked;
    void OnSkinClicked(class UITM_SkinItem_C* Item);
    class AFSDPlayerState* PlayerState;
    class UItemID* Item;
    float Size;
    FITM_SkinItem_COnHovering OnHovering;
    void OnHovering(class UITM_SkinItem_C* SkinItem);
    FITM_SkinItem_COnUnhovering OnUnhovering;
    void OnUnhovering(class UITM_SkinItem_C* SkinItem);
    int32 Index;
    bool Hovered;
    bool PreviewLocked;
    bool PreviewHovered;
    bool PreviewEquipped;
    FITM_SkinItem_COnNotificationRemoved OnNotificationRemoved;
    void OnNotificationRemoved(class UITM_SkinItem_C* Skin);
    bool IsShowingNotification;
    bool ShowBucket;
    bool IsDefaultItem;

    void SetIsDefaultItem(bool InDefault);
    void ClearEventHandlers();
    void SetState(class UItemSkin* InSkin, bool InLocked, bool InHovered, bool InEquipped);
    bool IsUnlocked();
    void Refresh();
    void BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void Play Intro(float Duration, int32 Max Columns);
    void BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void Ping Skin();
    void PreConstruct(bool IsDesignTime);
    void OnAnimUnlockedFinished();
    void RefreshNotificationIcon(float DelayBeforeRefresh);
    void ExecuteUbergraph_ITM_SkinItem(int32 EntryPoint);
    void OnNotificationRemoved__DelegateSignature(class UITM_SkinItem_C* Skin);
    void OnUnhovering__DelegateSignature(class UITM_SkinItem_C* SkinItem);
    void OnHovering__DelegateSignature(class UITM_SkinItem_C* SkinItem);
    void OnSkinClicked__DelegateSignature(class UITM_SkinItem_C* Item);
};

#endif
