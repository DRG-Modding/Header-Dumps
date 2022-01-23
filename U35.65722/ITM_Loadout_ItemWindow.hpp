#ifndef UE4SS_SDK_ITM_Loadout_ItemWindow_HPP
#define UE4SS_SDK_ITM_Loadout_ItemWindow_HPP

class UITM_Loadout_ItemWindow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* IntroRight;
    class UWidgetAnimation* IntroLeft;
    class UWidgetAnimation* ClickAnim;
    class UWidgetAnimation* HoverAnim;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBorder* Brackets;
    class UButton* ButtonLeft;
    class UButton* ButtonRight;
    class UOverlay* ContentOverlay;
    class UTextBlock* DATA_ItemCount;
    class UTextBlock* DATA_ItemName2;
    class UImage* GearIcon_BG;
    class UImage* GearIcon_Outline;
    class UImage* HeaderGradient;
    class UITM_ItemUnlockedIcon_C* ItemNotification;
    class UITM_Loadout_UpgradeBar_C* ITM_Loadout_UpgradeBar_C_0;
    class UITM_MasteryBar_C* ITM_MasteryBar;
    class UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    class UBorder* Main_BG;
    class UButton* MainButton;
    class UCanvasPanel* NavigationPanel;
    class UBorder* Upgrades_BG;
    FITM_Loadout_ItemWindow_COn Clicked On Clicked;
    void On Clicked(class UITM_Loadout_ItemWindow_C* Item);
    class UPlayerCharacterID* CharacterClass;
    EItemCategory Item Category;
    bool ItemHovered;
    TSubclassOf<class AActor> itemClass;
    FITM_Loadout_ItemWindow_COn Hovered On Hovered;
    void On Hovered(class UITM_Loadout_ItemWindow_C* Item);
    FITM_Loadout_ItemWindow_COn Unhovered On Unhovered;
    void On Unhovered(class UITM_Loadout_ItemWindow_C* Item);
    TArray<class TSubclassOf<AActor>> ItemsOwned;
    bool HideCounter;

    void SetHideCounter(bool HideCounter, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void GetNextItem(int32 Direction, TSubclassOf<class AActor>& NextItem, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, TSubclassOf<class AActor> CallFunc_Array_Get_Item);
    void GetOwnedItems(class UPlayerCharacterID* InCharacterClass, EItemCategory InCategory, TArray<class TSubclassOf<AActor>>& Owned Items, bool& NewWeaponNotification, bool HasNewWeaponNotification, TArray<class TSubclassOf<AActor>> OwnedItems, TSubclassOf<class AActor> current, class AFSDPlayerState* PlayerState, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class UItemID* CallFunc_GetItemID_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckItemUINotification_HasNotification, int32 CallFunc_Array_Add_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue_1, bool CallFunc_IsItemOwned_ReturnValue, TArray<class TSubclassOf<AActor>>& CallFunc_GetLoadedItemList_ReturnValue, TSubclassOf<class AActor> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void GetSelectedItem(TSubclassOf<class AActor>& itemClass, EItemCategory& Item Category);
    void SetCharacterClass(class UPlayerCharacterID* InCharacterClass, bool HasNotification, class AFSDPlayerState* PlayerState, class UUpgradableGearComponent* Upgradable, int32 Temp_int_Array_Index_Variable, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TSubclassOf<class AActor> CallFunc_Array_Get_Item, class UItemID* CallFunc_GetItemID_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array, TArray<class UObject*>& K2Node_MakeArray_Array_1, bool CallFunc_CheckItemUINotification_HasNotification, bool CallFunc_CheckItemUINotification_HasNotification_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue_1, bool CallFunc_SetMasteryData_HasMasteryLevels, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, int32 CallFunc_Array_Length_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, TArray<class TSubclassOf<AActor>>& CallFunc_GetOwnedItems_Owned_Items, bool CallFunc_GetOwnedItems_NewWeaponNotification, int32 CallFunc_Add_IntInt_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Format_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, FText CallFunc_GetGearName_ReturnValue, class UTexture2D* CallFunc_GetIconBG_ReturnValue, class UTexture2D* CallFunc_GetIconLine_ReturnValue, class UItemUpgrade* CallFunc_GetEquippedOverclock_ReturnValue, class USchematicCategory* CallFunc_FromUpgrade_OutSchematicCategory, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue);
    void SetHovered(bool InHovered, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, EItemCategory Temp_byte_Variable_2, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_3, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_4, bool Temp_bool_Variable_18, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_5, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_6, bool Temp_bool_Variable_19, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_7, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_8, bool Temp_bool_Variable_20, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_9, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_10, int32 CallFunc_Conv_ByteToInt_ReturnValue, TSubclassOf<class AItem> CallFunc_GetLoadoutItemFromClass_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<class TSubclassOf<AActor>>& CallFunc_GetOwnedItems_Owned_Items, bool CallFunc_GetOwnedItems_NewWeaponNotification, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default, bool K2Node_Select_Default_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, EItemCategory Temp_byte_Variable_11, bool K2Node_Select_Default_2, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_3, FLinearColor CallFunc_MenuColors_OutputColor, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_4, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_5, FLinearColor CallFunc_MenuColors_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_6, FLinearColor CallFunc_MenuColors_OutputColor_3);
    bool IsHovering();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SelectNext();
    void SelectPrevious();
    void Select Item(TSubclassOf<class AActor> InItemClass);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_511_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_528_OnButtonClickedEvent__DelegateSignature();
    void OnClickAnimFinished();
    void PlayIntroAnim(bool IsLeftSide, float Duration);
    void ExecuteUbergraph_ITM_Loadout_ItemWindow(int32 EntryPoint, int32 CallFunc_Conv_ByteToInt_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<class AActor> K2Node_CustomEvent_InItemClass, bool K2Node_Event_IsDesignTime, bool CallFunc_IsAnimationPlaying_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2, bool CallFunc_Not_PreBool_ReturnValue, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_3, TSubclassOf<class AActor> CallFunc_GetNextItem_NextItem, TSubclassOf<class AActor> CallFunc_GetNextItem_NextItem_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<class AItem> CallFunc_GetLoadoutItemFromClass_ReturnValue, bool K2Node_CustomEvent_IsLeftSide, float K2Node_CustomEvent_Duration, bool Temp_bool_Variable, class UWidgetAnimation* K2Node_Select_Default, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_GetShowUIAnimations_ReturnValue, FExecuteUbergraph_ITM_Loadout_ItemWindowK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate);
    void On Unhovered__DelegateSignature(class UITM_Loadout_ItemWindow_C* Item);
    void On Hovered__DelegateSignature(class UITM_Loadout_ItemWindow_C* Item);
    void On Clicked__DelegateSignature(class UITM_Loadout_ItemWindow_C* Item);
};

#endif
