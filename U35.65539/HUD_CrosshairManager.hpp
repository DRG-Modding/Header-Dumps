#ifndef UE4SS_SDK_HUD_CrosshairManager_HPP
#define UE4SS_SDK_HUD_CrosshairManager_HPP

class UHUD_CrosshairManager_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimIntro;
    UWidgetSwitcher* CrosshairSwitcher;
    UHUD_HitIndicator_C* HUD_HitIndicator;
    UCanvasPanel* MainCanvas;
    UImage* NoCrosshair;
    UOnScreen_Indicator_UsableZipLine_C* OnScreen_Indicator_UsableZipLine;
    UUserWidget* CurrentCrosshair;
    bool PlayIntroAnim;
    APlayerCharacter* Character;
    TMap<AItem*, UUserWidget*> CrosshairCache;

    void UnregisterEvents(InventoryItemsLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, CameraModeChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnCharacterStateChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, ToggleMapToolSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, DepositingEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, DepositingEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
    void UpdateVisibility(bool CallFunc_IsTerrainScannerEquipped_ReturnValue, bool CallFunc_GetIsDepositing_ReturnValue, bool CallFunc_IsParalyzed_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsDown_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetCrosshair(AItem* InEquippedItem, UUserWidget* NewCrosshair, UCrosshairAggregator* Aggregator, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UUserWidget* CallFunc_GetOrCreateCrosshair_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, UWidgetSwitcherSlot* K2Node_DynamicCast_AsWidget_Switcher_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasChild_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, UCrosshairAggregator* CallFunc_GetComponentByClass_ReturnValue, UUserWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void OnToggleMapTool(bool Visible);
    void OnDepositingEnd_Event(UResourceBank* ResourceBank);
    void OnDepositingBegin_Event(UResourceBank* ResourceBank);
    void OnCameraModeChanged_Event(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    void OnCharacterStateChanged(ECharacterState NewState);
    void Destruct();
    void Construct();
    void On Inventory Ready();
    void OnItemsLoaded();
    void ExecuteUbergraph_HUD_CrosshairManager(int32 EntryPoint, ToggleMapToolSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, DepositingEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, DepositingEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, CameraModeChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, OnCharacterStateChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, InventoryItemsLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_CustomEvent_Visible, UResourceBank* K2Node_CustomEvent_ResourceBank_1, UResourceBank* K2Node_CustomEvent_ResourceBank, ECharacterCameraMode K2Node_CustomEvent_NewCameraMode, ECharacterCameraMode K2Node_CustomEvent_OldCameraMode, ECharacterState K2Node_CustomEvent_newState, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, InventoryItemsLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7);
}

#endif
