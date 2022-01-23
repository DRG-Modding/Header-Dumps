#ifndef UE4SS_SDK_ITEM_UpgradesBig_SingleIcon_HPP
#define UE4SS_SDK_ITEM_UpgradesBig_SingleIcon_HPP

class UITEM_UpgradesBig_SingleIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Unhover;
    class UWidgetAnimation* Hover;
    class UImage* BG;
    class UButton* Button_0;
    class UOverlay* GFXholder;
    class UImage* Icon_Lock;
    class UImage* IconLeft;
    class UImage* IconRight;
    class UImage* outline;
    FITEM_UpgradesBig_SingleIcon_COnClicked OnClicked;
    void OnClicked(class UItemUpgrade* Upgrade);
    class UItemUpgrade* Upgrade;
    FITEM_UpgradesBig_SingleIcon_COnHoverStart OnHoverStart;
    void OnHoverStart(class UItemUpgrade* Upgrade);
    FITEM_UpgradesBig_SingleIcon_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(class UItemUpgrade* Upgrade);

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Show(class UItemUpgrade* Upgrade, TSubclassOf<class AActor> Item);
    void ExecuteUbergraph_ITEM_UpgradesBig_SingleIcon(int32 EntryPoint, FLinearColor Temp_struct_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, EItemUpgradeStatus Temp_byte_Variable, FLinearColor Temp_struct_Variable_5, FLinearColor Temp_struct_Variable_6, FLinearColor Temp_struct_Variable_7, FLinearColor Temp_struct_Variable_8, FLinearColor Temp_struct_Variable_9, EItemUpgradeStatus Temp_byte_Variable_1, FLinearColor Temp_struct_Variable_10, FLinearColor Temp_struct_Variable_11, FLinearColor Temp_struct_Variable_12, FLinearColor Temp_struct_Variable_13, FLinearColor Temp_struct_Variable_14, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, EItemUpgradeStatus Temp_byte_Variable_2, class UItemUpgrade* K2Node_CustomEvent_Upgrade, TSubclassOf<class AActor> K2Node_CustomEvent_Item, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, FLinearColor K2Node_Select_Default, FLinearColor K2Node_Select_Default_1, FLinearColor K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void OnHoverEnd__DelegateSignature(class UItemUpgrade* Upgrade);
    void OnHoverStart__DelegateSignature(class UItemUpgrade* Upgrade);
    void OnClicked__DelegateSignature(class UItemUpgrade* Upgrade);
};

#endif
