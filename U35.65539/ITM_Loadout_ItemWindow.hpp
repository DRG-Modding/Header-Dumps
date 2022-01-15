#ifndef UE4SS_SDK_ITM_Loadout_ItemWindow_HPP
#define UE4SS_SDK_ITM_Loadout_ItemWindow_HPP

class UITM_Loadout_ItemWindow_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* IntroRight;
    UWidgetAnimation* IntroLeft;
    UWidgetAnimation* ClickAnim;
    UWidgetAnimation* HoverAnim;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBorder* Brackets;
    UButton* ButtonLeft;
    UButton* ButtonRight;
    UOverlay* ContentOverlay;
    UTextBlock* DATA_ItemCount;
    UTextBlock* DATA_ItemName2;
    UImage* GearIcon_BG;
    UImage* GearIcon_Outline;
    UImage* HeaderGradient;
    UITM_ItemUnlockedIcon_C* ItemNotification;
    UITM_Loadout_UpgradeBar_C* ITM_Loadout_UpgradeBar_C_0;
    UITM_MasteryBar_C* ITM_MasteryBar;
    UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    UBorder* Main_BG;
    UButton* MainButton;
    UCanvasPanel* NavigationPanel;
    UBorder* Upgrades_BG;
    FITM_Loadout_ItemWindow_COn Clicked On Clicked;
    void On Clicked(UITM_Loadout_ItemWindow_C* Item);
    UPlayerCharacterID* CharacterClass;
    EItemCategory Item Category;
    bool ItemHovered;
    TSubclassOf<AActor> itemClass;
    FITM_Loadout_ItemWindow_COn Hovered On Hovered;
    void On Hovered(UITM_Loadout_ItemWindow_C* Item);
    FITM_Loadout_ItemWindow_COn Unhovered On Unhovered;
    void On Unhovered(UITM_Loadout_ItemWindow_C* Item);
    TArray<TSubclassOf<AActor>> ItemsOwned;
    bool HideCounter;

    void SetHideCounter(bool HideCounter, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void GetNextItem(int32 Direction, TSubclassOf<AActor>& NextItem, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, TSubclassOf<AActor> CallFunc_Array_Get_Item);
    void GetOwnedItems(UPlayerCharacterID* InCharacterClass, EItemCategory InCategory, TArray<TSubclassOf<AActor>>& Owned Items, bool& NewWeaponNotification, bool HasNewWeaponNotification, TArray<TSubclassOf<AActor>> OwnedItems, TSubclassOf<AActor> current, UFSDPlayerState* PlayerState, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, UItemID* CallFunc_GetItemID_ReturnValue, TArray<UObject*>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckItemUINotification_HasNotification, int32 CallFunc_Array_Add_ReturnValue, UItemID* CallFunc_GetItemID_ReturnValue_1, bool CallFunc_IsItemOwned_ReturnValue, TArray<TSubclassOf<AActor>>& CallFunc_GetLoadedItemList_ReturnValue, TSubclassOf<AActor> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void GetSelectedItem(TSubclassOf<AActor>& itemClass, EItemCategory& Item Category);
    void SetCharacterClass(UPlayerCharacterID* InCharacterClass, bool HasNotification, UFSDPlayerState* PlayerState, UUpgradableGearComponent* Upgradable, int32 Temp_int_Array_Index_Variable, UGameData* CallFunc_GetFSDGameData_ReturnValue, TSubclassOf<AActor> CallFunc_Array_Get_Item, UItemID* CallFunc_GetItemID_ReturnValue, TArray<UObject*>& K2Node_MakeArray_Array, TArray<UObject*>& K2Node_MakeArray_Array_1, bool CallFunc_CheckItemUINotification_HasNotification, bool CallFunc_CheckItemUINotification_HasNotification_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UItemID* CallFunc_GetItemID_ReturnValue_1, bool CallFunc_SetMasteryData_HasMasteryLevels, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, int32 CallFunc_Array_Length_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, TArray<TSubclassOf<AActor>>& CallFunc_GetOwnedItems_Owned_Items, bool CallFunc_GetOwnedItems_NewWeaponNotification, int32 CallFunc_Add_IntInt_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Format_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, FText CallFunc_GetGearName_ReturnValue, UTexture2D* CallFunc_GetIconBG_ReturnValue, UTexture2D* CallFunc_GetIconLine_ReturnValue, UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue, USchematicCategory* CallFunc_FromUpgrade_OutSchematicCategory, UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<AActor> CallFunc_GetEquippedItem_ReturnValue);
    void SetHovered(bool InHovered, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, EItemCategory Temp_byte_Variable_2, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, uint8 Temp_byte_Variable_3, uint8 Temp_byte_Variable_4, bool Temp_bool_Variable_18, uint8 Temp_byte_Variable_5, uint8 Temp_byte_Variable_6, bool Temp_bool_Variable_19, uint8 Temp_byte_Variable_7, uint8 Temp_byte_Variable_8, bool Temp_bool_Variable_20, uint8 Temp_byte_Variable_9, uint8 Temp_byte_Variable_10, int32 CallFunc_Conv_ByteToInt_ReturnValue, TSubclassOf<AItem> CallFunc_GetLoadoutItemFromClass_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<TSubclassOf<AActor>>& CallFunc_GetOwnedItems_Owned_Items, bool CallFunc_GetOwnedItems_NewWeaponNotification, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, bool K2Node_Select_Default_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, EItemCategory Temp_byte_Variable_11, bool K2Node_Select_Default_2, uint8 K2Node_Select_Default_3, FLinearColor CallFunc_MenuColors_OutputColor, uint8 K2Node_Select_Default_4, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, uint8 K2Node_Select_Default_5, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_1, uint8 K2Node_Select_Default_6, FLinearColor CallFunc_MenuColors_OutputColor_3);
    bool IsHovering();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SelectNext();
    void SelectPrevious();
    void Select Item(TSubclassOf<AActor> InItemClass);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature();
    void OnClickAnimFinished();
    void PlayIntroAnim(bool IsLeftSide, float Duration);
    void ExecuteUbergraph_ITM_Loadout_ItemWindow(int32 EntryPoint, int32 CallFunc_Conv_ByteToInt_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<AActor> K2Node_CustomEvent_InItemClass, bool K2Node_Event_IsDesignTime, bool CallFunc_IsAnimationPlaying_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2, bool CallFunc_Not_PreBool_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_3, TSubclassOf<AActor> CallFunc_GetNextItem_NextItem, TSubclassOf<AActor> CallFunc_GetNextItem_NextItem_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<AItem> CallFunc_GetLoadoutItemFromClass_ReturnValue, bool K2Node_CustomEvent_IsLeftSide, float K2Node_CustomEvent_Duration, bool Temp_bool_Variable, UWidgetAnimation* K2Node_Select_Default, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_GetShowUIAnimations_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate);
    void On Unhovered__DelegateSignature(UITM_Loadout_ItemWindow_C* Item);
    void On Hovered__DelegateSignature(UITM_Loadout_ItemWindow_C* Item);
    void On Clicked__DelegateSignature(UITM_Loadout_ItemWindow_C* Item);
}

#endif
