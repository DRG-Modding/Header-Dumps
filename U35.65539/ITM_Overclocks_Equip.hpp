#ifndef UE4SS_SDK_ITM_Overclocks_Equip_HPP
#define UE4SS_SDK_ITM_Overclocks_Equip_HPP

class UITM_Overclocks_Equip_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimPopUpSelection;
    UWidgetAnimation* AnimHoverButton;
    UWidgetAnimation* AnimFadeIn;
    UButton* BlockCursorInput;
    UImage* ButtonFrame;
    UTextBlock* DATA_Overclock_CategoryName;
    UTextBlock* DATA_Overclock_Title;
    UWidgetSwitcher* DetailsSwitcher;
    UBorder* EquipBorder;
    UButton* EquipButton;
    UBorder* HeaderBorder;
    UOverlay* HeaderOverlay;
    USizeBox* HeaderSize;
    UImage* ImgLocked;
    UITM_Overclock_Details_C* ITM_Overclock_Details;
    UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    UTextBlock* LabelLocked;
    UVerticalBox* LockedNoOverclocks;
    UVerticalBox* LockedRequirementBox;
    UITM_ItemUnlockedIcon_C* Notification_NewOverclock;
    USizeBox* OverclockSlotISizer;
    UWrapBox* SelectionBox;
    UBackgroundBlur* SelectorBlur;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_1;
    UTextBlock* TextBlock_361;
    FLinearColor TintClean;
    FLinearColor TintBalanced;
    FLinearColor TintUnstable;
    TSubclassOf<APlayerCharacter> CharacterClass;
    TSubclassOf<AActor> itemClass;
    UUpgradableItemComponent* UpgradableComponent;
    bool SelectionOpen;
    bool MenuActive;
    bool Hovering;
    bool MenuLocked;
    TArray<UItemUpgrade*> Overclocks;
    UItemUpgrade* DisplayedOverclock;
    bool OverclockUnlocked;

    void TryToggleSelection(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void OnRefreshItem(bool WasCreated, UUserWidget* Widget, int32 ActiveIndex, EItemUpgradeStatus State, UItemUpgrade* Overclock, UITM_Overclocks_Equip_Item_C* OverclockItem, EItemUpgradeStatus Temp_byte_Variable, UITM_Overclocks_Equip_Item_C* K2Node_DynamicCast_AsITM_Overclocks_Equip_Item, bool K2Node_DynamicCast_bSuccess, UGameData* CallFunc_GetFSDGameData_ReturnValue, UItemID* CallFunc_GetItemID_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, TArray<UObject*>& K2Node_MakeArray_Array, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, bool Temp_bool_Variable, UItemUpgrade* CallFunc_Array_Get_Item, EItemUpgradeStatus K2Node_Select_Default, OnUnhovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnHovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2);
    void SetMenuLocked(bool InLocked, bool InRequirementMet, bool OverclockEquipped, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FLinearColor K2Node_MakeStruct_LinearColor, FSlateColor K2Node_MakeStruct_SlateColor, FSlateBrush K2Node_MakeStruct_SlateBrush, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, FLinearColor CallFunc_SelectMenuColor_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor_1, UWidget* K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_1, UWidget* K2Node_Select_Default_2);
    void SetMenuActive(bool Inactive, bool& ActiveChanged, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, uint8 K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ShowOverclock(UItemUpgrade* Overclock, USchematicCategory* Category, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FText CallFunc_TextToUpper_ReturnValue_1, USchematicCategory* CallFunc_FromUpgrade_OutSchematicCategory);
    void SetSelectionVisible(bool InVisible, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, uint8 K2Node_Select_Default, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnItemUnhovered(UITM_Overclocks_Equip_Item_C* Widget, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue);
    void OnItemHovered(UITM_Overclocks_Equip_Item_C* Widget, UItemUpgrade* CallFunc_GetOverClock_Overclock, bool CallFunc_Not_PreBool_ReturnValue, UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UItemUpgrade* CallFunc_GetOverClock_Overclock_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue);
    void OnItemClicked(UITM_Overclocks_Equip_Item_C* Widget, bool Unequipping, UItemUpgrade* Overclock, UItemUpgrade* Temp_object_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UItemUpgrade* K2Node_Select_Default, UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue, UItemUpgrade* CallFunc_GetOverClock_Overclock, UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue_1, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UITM_Overclocks_Equip_Item_C* K2Node_DynamicCast_AsITM_Overclocks_Equip_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, UItemUpgrade* CallFunc_GetOverClock_Overclock_1, bool CallFunc_LessEqual_IntInt_ReturnValue, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue);
    void Refresh(UItemUpgrade* EquippedOverclock, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, TArray<UItemUpgrade*>& CallFunc_GetEquippableOverclocks_ReturnValue, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, bool CallFunc_IsOverclockingEnabled_ReturnValue, bool CallFunc_CanItemOverclock_ReturnValue, WidgetCreatedOrReusedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue_1, TArray<UITM_Overclocks_Equip_Item_C*>& CallFunc_CreateOrReuseChildrenWithCallback_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetData(TSubclassOf<UPlayerCharacter> InCharacterClass, TSubclassOf<AActor> InItemClass, UUpgradableItemComponent* CallFunc_GetComponentFromClass_ReturnValue);
    void SetBackgroundTint(FLinearColor Tint);
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void OnPopUpFinished();
    void OnPopupStarted();
    void OnItemUpgradeCrafted_Event(UItemUpgrade* Upgrade);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void CloseMenuNicely();
    void ExecuteUbergraph_ITM_Overclocks_Equip(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, ItemUpgradeCraftSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetVisibilityIf_IsVisible, bool CallFunc_SetVisibilityIf_IsVisible_1, UItemUpgrade* K2Node_CustomEvent_Upgrade, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_SetMenuActive_ActiveChanged, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_SetMenuActive_ActiveChanged_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const FPointerEvent K2Node_Event_MouseEvent_1, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_SetMenuActive_ActiveChanged_2);
}

#endif
