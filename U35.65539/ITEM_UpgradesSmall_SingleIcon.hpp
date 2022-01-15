#ifndef UE4SS_SDK_ITEM_UpgradesSmall_SingleIcon_HPP
#define UE4SS_SDK_ITEM_UpgradesSmall_SingleIcon_HPP

class UITEM_UpgradesSmall_SingleIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* IconBG;
    UImage* IconOutline;
    FITEM_UpgradesSmall_SingleIcon_COnClicked OnClicked;
    void OnClicked(UItemUpgrade* Upgrade);
    UItemUpgrade* Upgrade;
    FITEM_UpgradesSmall_SingleIcon_COnHoverStart OnHoverStart;
    void OnHoverStart(UItemUpgrade* Upgrade);
    FITEM_UpgradesSmall_SingleIcon_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(UItemUpgrade* Upgrade);

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Handled_ReturnValue);
    void Show(UItemUpgrade* Upgrade, TSubclassOf<AActor> Item);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_ITEM_UpgradesSmall_SingleIcon(int32 EntryPoint, const FPointerEvent K2Node_Event_MouseEvent, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FLinearColor Temp_struct_Variable_2, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, EItemUpgradeStatus Temp_byte_Variable, FLinearColor Temp_struct_Variable_5, FLinearColor Temp_struct_Variable_6, FLinearColor Temp_struct_Variable_7, FLinearColor Temp_struct_Variable_8, FLinearColor Temp_struct_Variable_9, UItemUpgrade* K2Node_CustomEvent_Upgrade, TSubclassOf<AActor> K2Node_CustomEvent_Item, EItemUpgradeStatus Temp_byte_Variable_1, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, FLinearColor K2Node_Select_Default, FLinearColor K2Node_Select_Default_1, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent_1);
    void OnHoverEnd__DelegateSignature(UItemUpgrade* Upgrade);
    void OnHoverStart__DelegateSignature(UItemUpgrade* Upgrade);
    void OnClicked__DelegateSignature(UItemUpgrade* Upgrade);
}

#endif
