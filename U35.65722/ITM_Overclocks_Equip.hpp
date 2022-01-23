#ifndef UE4SS_SDK_ITM_Overclocks_Equip_HPP
#define UE4SS_SDK_ITM_Overclocks_Equip_HPP

class UITM_Overclocks_Equip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimPopUpSelection;
    class UWidgetAnimation* AnimHoverButton;
    class UWidgetAnimation* AnimFadeIn;
    class UButton* BlockCursorInput;
    class UImage* ButtonFrame;
    class UTextBlock* DATA_Overclock_CategoryName;
    class UTextBlock* DATA_Overclock_Title;
    class UWidgetSwitcher* DetailsSwitcher;
    class UBorder* EquipBorder;
    class UButton* EquipButton;
    class UBorder* HeaderBorder;
    class UOverlay* HeaderOverlay;
    class USizeBox* HeaderSize;
    class UImage* ImgLocked;
    class UITM_Overclock_Details_C* ITM_Overclock_Details;
    class UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    class UTextBlock* LabelLocked;
    class UVerticalBox* LockedNoOverclocks;
    class UVerticalBox* LockedRequirementBox;
    class UITM_ItemUnlockedIcon_C* Notification_NewOverclock;
    class USizeBox* OverclockSlotISizer;
    class UWrapBox* SelectionBox;
    class UBackgroundBlur* SelectorBlur;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_361;
    FLinearColor TintClean;
    FLinearColor TintBalanced;
    FLinearColor TintUnstable;
    TSubclassOf<class APlayerCharacter> CharacterClass;
    TSubclassOf<class AActor> itemClass;
    class UUpgradableItemComponent* UpgradableComponent;
    bool SelectionOpen;
    bool MenuActive;
    bool Hovering;
    bool MenuLocked;
    TArray<class UItemUpgrade*> Overclocks;
    class UItemUpgrade* DisplayedOverclock;
    bool OverclockUnlocked;

    void TryToggleSelection(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void OnRefreshItem(bool WasCreated, class UUserWidget* Widget, int32 ActiveIndex, EItemUpgradeStatus State, class UItemUpgrade* Overclock, class UITM_Overclocks_Equip_Item_C* OverclockItem, EItemUpgradeStatus Temp_byte_Variable, class UITM_Overclocks_Equip_Item_C* K2Node_DynamicCast_AsITM_Overclocks_Equip_Item, bool K2Node_DynamicCast_bSuccess, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, bool Temp_bool_Variable, class UItemUpgrade* CallFunc_Array_Get_Item, EItemUpgradeStatus K2Node_Select_Default, FOnRefreshItemK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FOnRefreshItemK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FOnRefreshItemK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2);
    void SetMenuLocked(bool InLocked, bool InRequirementMet, bool OverclockEquipped, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FLinearColor K2Node_MakeStruct_LinearColor, FSlateColor K2Node_MakeStruct_SlateColor, FSlateBrush K2Node_MakeStruct_SlateBrush, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, FLinearColor CallFunc_SelectMenuColor_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor_1, class UWidget* K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_1, class UWidget* K2Node_Select_Default_2);
    void SetMenuActive(bool Inactive, bool& ActiveChanged, bool Temp_bool_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void ShowOverclock(class UItemUpgrade* Overclock, class USchematicCategory* Category, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FText CallFunc_TextToUpper_ReturnValue_1, class USchematicCategory* CallFunc_FromUpgrade_OutSchematicCategory);
    void SetSelectionVisible(bool InVisible, bool Temp_bool_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnItemUnhovered(class UITM_Overclocks_Equip_Item_C* Widget, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue);
    void OnItemHovered(class UITM_Overclocks_Equip_Item_C* Widget, class UItemUpgrade* CallFunc_GetOverClock_Overclock, bool CallFunc_Not_PreBool_ReturnValue, class UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UItemUpgrade* CallFunc_GetOverClock_Overclock_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue);
    void OnItemClicked(class UITM_Overclocks_Equip_Item_C* Widget, bool Unequipping, class UItemUpgrade* Overclock, class UItemUpgrade* Temp_object_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemUpgrade* K2Node_Select_Default, class UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue, class UItemUpgrade* CallFunc_GetOverClock_Overclock, class UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue_1, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UITM_Overclocks_Equip_Item_C* K2Node_DynamicCast_AsITM_Overclocks_Equip_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, class UItemUpgrade* CallFunc_GetOverClock_Overclock_1, bool CallFunc_LessEqual_IntInt_ReturnValue, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue);
    void Refresh(class UItemUpgrade* EquippedOverclock, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, TArray<class UItemUpgrade*>& CallFunc_GetEquippableOverclocks_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, bool CallFunc_IsOverclockingEnabled_ReturnValue, bool CallFunc_CanItemOverclock_ReturnValue, FRefreshK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UITM_Overclocks_Equip_Item_C*>& CallFunc_CreateOrReuseChildrenWithCallback_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetData(TSubclassOf<class APlayerCharacter> InCharacterClass, TSubclassOf<class AActor> InItemClass, class UUpgradableItemComponent* CallFunc_GetComponentFromClass_ReturnValue);
    void SetBackgroundTint(FLinearColor Tint);
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void OnPopUpFinished();
    void OnPopupStarted();
    void OnItemUpgradeCrafted_Event(class UItemUpgrade* Upgrade);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void CloseMenuNicely();
    void ExecuteUbergraph_ITM_Overclocks_Equip(int32 EntryPoint, FExecuteUbergraph_ITM_Overclocks_EquipK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_Overclocks_EquipK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_ITM_Overclocks_EquipK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetVisibilityIf_IsVisible, bool CallFunc_SetVisibilityIf_IsVisible_1, class UItemUpgrade* K2Node_CustomEvent_Upgrade, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_SetMenuActive_ActiveChanged, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_SetMenuActive_ActiveChanged_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const FPointerEvent K2Node_Event_MouseEvent_1, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_SetMenuActive_ActiveChanged_2);
};

#endif
