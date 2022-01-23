#ifndef UE4SS_SDK_ITEM_HalfLength_HPP
#define UE4SS_SDK_ITEM_HalfLength_HPP

class UITEM_HalfLength_C : public UITEM_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_SmallWindowWithHeader_C* BasicWindow_MenuWithHeader;
    class UBasic_ArrowButton02_C* BTN_NextItem;
    class UITEM_UpgradesSmall_Bar_C* ITEM_UpgradesSmall;
    class UImage* ItemIcon_BG;
    class UImage* ItemIcon_Lines;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Handled_ReturnValue);
    void SetSelected(bool IsSelected);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BndEvt__BasicWindow_MenuWithHeader_K2Node_ComponentBoundEvent_6_On Clicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BTN_NextItem_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnItemUpdated();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnClear();
    void ExecuteUbergraph_ITEM_HalfLength(int32 EntryPoint, const FPointerEvent K2Node_Event_MouseEvent_1, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, class UTexture2D* CallFunc_GetIconLine_ReturnValue, class UTexture2D* CallFunc_GetIconBG_ReturnValue, FText CallFunc_GetGearName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, class UItemID* CallFunc_GetItemID_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FText CallFunc_GetItemCountString_Result, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent, class UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, class UItemID* CallFunc_GetNextItem_ReturnValue, TSubclassOf<class AActor> CallFunc_GetActorClass_ReturnValue);
};

#endif
