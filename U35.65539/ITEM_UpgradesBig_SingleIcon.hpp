#ifndef UE4SS_SDK_ITEM_UpgradesBig_SingleIcon_HPP
#define UE4SS_SDK_ITEM_UpgradesBig_SingleIcon_HPP

class UITEM_UpgradesBig_SingleIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Unhover;
    UWidgetAnimation* Hover;
    UImage* BG;
    UButton* Button_0;
    UOverlay* GFXholder;
    UImage* Icon_Lock;
    UImage* IconLeft;
    UImage* IconRight;
    UImage* outline;
    FITEM_UpgradesBig_SingleIcon_COnClicked OnClicked;
    void OnClicked(UItemUpgrade* Upgrade);
    UItemUpgrade* Upgrade;
    FITEM_UpgradesBig_SingleIcon_COnHoverStart OnHoverStart;
    void OnHoverStart(UItemUpgrade* Upgrade);
    FITEM_UpgradesBig_SingleIcon_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(UItemUpgrade* Upgrade);

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Show(UItemUpgrade* Upgrade, TSubclassOf<AActor> Item);
    void ExecuteUbergraph_ITEM_UpgradesBig_SingleIcon(int32 EntryPoint, FLinearColor Temp_struct_Variable, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, EItemUpgradeStatus Temp_byte_Variable, FLinearColor Temp_struct_Variable_5, FLinearColor Temp_struct_Variable_6, FLinearColor Temp_struct_Variable_7, FLinearColor Temp_struct_Variable_8, FLinearColor Temp_struct_Variable_9, EItemUpgradeStatus Temp_byte_Variable_1, FLinearColor Temp_struct_Variable_10, FLinearColor Temp_struct_Variable_11, FLinearColor Temp_struct_Variable_12, FLinearColor Temp_struct_Variable_13, FLinearColor Temp_struct_Variable_14, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, EItemUpgradeStatus Temp_byte_Variable_2, UItemUpgrade* K2Node_CustomEvent_Upgrade, TSubclassOf<AActor> K2Node_CustomEvent_Item, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, FLinearColor K2Node_Select_Default, FLinearColor K2Node_Select_Default_1, FLinearColor K2Node_Select_Default_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
    void OnHoverEnd__DelegateSignature(UItemUpgrade* Upgrade);
    void OnHoverStart__DelegateSignature(UItemUpgrade* Upgrade);
    void OnClicked__DelegateSignature(UItemUpgrade* Upgrade);
}

#endif
