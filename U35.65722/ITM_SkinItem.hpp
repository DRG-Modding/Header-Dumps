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
    void ClearEventHandlers(bool CallFunc_IsValid_ReturnValue);
    void SetState(class UItemSkin* InSkin, bool InLocked, bool InHovered, bool InEquipped, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool Temp_bool_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, FLinearColor CallFunc_SelectMenuColor_OutputColor);
    bool IsUnlocked(bool CallFunc_GetIsLocked_IsLocked, bool CallFunc_Not_PreBool_ReturnValue);
    void Refresh(bool Locked, bool Equipped, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, bool CallFunc_IsLocked_ReturnValue, bool CallFunc_IsEquippedOnItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void Play Intro(float Duration, int32 Max Columns);
    void BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
    void Ping Skin();
    void PreConstruct(bool IsDesignTime);
    void OnAnimUnlockedFinished();
    void RefreshNotificationIcon(float DelayBeforeRefresh);
    void ExecuteUbergraph_ITM_SkinItem(int32 EntryPoint, bool CallFunc_IsUnLocked_ReturnValue, bool CallFunc_IsUnLocked_ReturnValue_1, float K2Node_CustomEvent_Duration, int32 K2Node_CustomEvent_Max_Columns, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, FExecuteUbergraph_ITM_SkinItemK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float K2Node_CustomEvent_DelayBeforeRefresh);
    void OnNotificationRemoved__DelegateSignature(class UITM_SkinItem_C* Skin);
    void OnUnhovering__DelegateSignature(class UITM_SkinItem_C* SkinItem);
    void OnHovering__DelegateSignature(class UITM_SkinItem_C* SkinItem);
    void OnSkinClicked__DelegateSignature(class UITM_SkinItem_C* Item);
};

#endif
