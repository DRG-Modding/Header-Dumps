#ifndef UE4SS_SDK_ITEM_HalfLength_HPP
#define UE4SS_SDK_ITEM_HalfLength_HPP

class UITEM_HalfLength_C : UITEM_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_SmallWindowWithHeader_C* BasicWindow_MenuWithHeader;
    UBasic_ArrowButton02_C* BTN_NextItem;
    UITEM_UpgradesSmall_Bar_C* ITEM_UpgradesSmall;
    UImage* ItemIcon_BG;
    UImage* ItemIcon_Lines;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Handled_ReturnValue);
    void SetSelected(bool IsSelected);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BndEvt__BasicWindow_MenuWithHeader_K2Node_ComponentBoundEvent_6_On Clicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BTN_NextItem_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnItemUpdated();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnClear();
    void ExecuteUbergraph_ITEM_HalfLength(int32 EntryPoint, const FPointerEvent K2Node_Event_MouseEvent_1, UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, UTexture2D* CallFunc_GetIconLine_ReturnValue, UTexture2D* CallFunc_GetIconBG_ReturnValue, FText CallFunc_GetGearName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, UItemID* CallFunc_GetItemID_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FText CallFunc_GetItemCountString_Result, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent, UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, UItemID* CallFunc_GetNextItem_ReturnValue, TSubclassOf<AActor> CallFunc_GetActorClass_ReturnValue);
}

#endif
