#ifndef UE4SS_SDK_ITEM_DoubleLength_HPP
#define UE4SS_SDK_ITEM_DoubleLength_HPP

class UITEM_DoubleLength_C : public UITEM_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_SmallWindowWithHeader_C* BasicWindow_MenuWithHeader;
    class UBasic_ArrowButton02_C* BTN_NextItem;
    class UITEM_UpgradesSmall_Bar_C* ITEM_UpgradesSmall;
    class UImage* ItemIcon_BG;
    class UImage* ItemIcon_Lines;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEventFEventReply CallFunc_Handled_ReturnValue);
    void SetSelected(bool IsSelected);
    void OnClear();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BndEvt__BasicWindow_MenuWithHeader_K2Node_ComponentBoundEvent_1_On Clicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BTN_NextItem_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnItemUpdated();
    void ExecuteUbergraph_ITEM_DoubleLength(int32 EntryPoint, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool Temp_bool_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent_1, const FPointerEvent K2Node_Event_MouseEvent, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, class UTexture2D* CallFunc_GetIconLine_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UTexture2D* CallFunc_GetIconBG_ReturnValue, FText CallFunc_GetGearName_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, class UItemID* CallFunc_GetItemID_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, int32 CallFunc_GetNumberOfItems_ItemCount, FText CallFunc_GetItemCountString_Result, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, ESlateVisibility K2Node_Select_Default, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, class UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, class UItemID* CallFunc_GetNextItem_ReturnValue, TSubclassOf<class AActor> CallFunc_GetActorClass_ReturnValue);
};

#endif
