#ifndef UE4SS_SDK_Menu_Cheats_SpaceRig_HPP
#define UE4SS_SDK_Menu_Cheats_SpaceRig_HPP

class UMenu_Cheats_SpaceRig_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UScrollBox* BoscoUpgradePanel;
    class UButton* Button_Close;
    class UButton* Button_Driller;
    class UButton* Button_Engineer;
    class UButton* Button_General;
    class UButton* Button_GenericHero;
    class UButton* Button_Gunner;
    class UButton* Button_Info;
    class UButton* Button_ReloadChar;
    class UButton* Button_Scout;
    class UButton* Button_Vanity;
    class UCheat_ConsoleCmd_C* Cheat_ConsoleCmd;
    class UCheat_ConsoleCmd_C* Cheat_ConsoleCmd_C_0;
    class UCheat_ConvertSave_C* Cheat_ConvertSave;
    class UCheat_MiscUpgradesItem_C* Cheat_FifthItem;
    class UCheat_MiscUpgradesItem_C* Cheat_FirstItem;
    class UCheat_MiscUpgradesItem_C* Cheat_FourthItem;
    class UCheat_LevelScale_C* Cheat_LevelScale;
    class UCheat_MakeMainSave_C* Cheat_MakeMainSave;
    class UCheat_MaterialInfo_C* Cheat_MaterialInfo_C_2;
    class UCheat_MaterialInfo_C* Cheat_MaterialInfo_C_3;
    class UCheat_MaterialInfo_C* Cheat_MaterialInfo_C_4;
    class UButton* Cheat_ResetAchievement;
    class UCheat_RoomList_C* Cheat_RoomList;
    class UCheat_MiscUpgradesItem_C* Cheat_SecondItem;
    class UCheat_SetPromotionRank_C* Cheat_SetPromotionRank;
    class UCheat_MiscUpgradesItem_C* Cheat_SixthItem;
    class UCheat_MiscUpgradesItem_C* Cheat_ThirdItem;
    class UCheat_VanityTab_C* Cheat_VanityTab;
    class UWidgetSwitcher* ContentSwitcher;
    class UTextBlock* CritterPoolList;
    class UTextBlock* EnemyPool;
    class UComboBoxString* mainWeaponselector;
    class UButton* RespawnboscoBTN;
    class UScrollBox* SB_ColorSkinMain;
    class UScrollBox* SB_ColorSkinSecondary;
    class UScrollBox* SB_MeshSkinMain;
    class UScrollBox* SB_MeshSkinSecondary;
    class UScrollBox* SB_SecWepPerks;
    class UScrollBox* SB_WeaponPerkList;
    class UComboBoxString* SecondaryWeaponSelector;
    class UTextBlock* StationaryPool;
    class UCanvasPanel* TopCanvasPanel;
    class UVerticalBox* VerticalBox_Materials;
    class UButton* ActiveTab;
    class UButton* ActiveCharacterTab;
    int32 Current Tab Index;
    int32 Amount of main tabs;
    bool Fast Select Enabled;
    bool Power User Mode Active;
    class UCheat_SpawnEnemyAdvanced_C* advancedSpawnMenu;

    class UWidget* On_AdvEnemySpawn_GetMenuContent(bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCheat_SpawnEnemyAdvanced_C* CallFunc_Create_ReturnValue);
    class UUpgradableBoscoComponent* GetBoscoUpgradeComponent(class ABosco*& Droneclass UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UUpgradableBoscoComponent* CallFunc_GetUpgradeComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void InitiateAnselSpinBox();
    class UWidget* OnGetMenuContent_0(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCheat_OverclockSelection_C* CallFunc_Create_ReturnValue);
    ESlateVisibility Get_ActivateCommonCheatsButton_Visibility_0(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, ESlateVisibility K2Node_Select_Default);
    float Get_HealthSlider_Value_0(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetHealth_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFKey CallFunc_GetKey_ReturnValue, FText CallFunc_Key_GetDisplayName_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void Get Character to change(FText Character, class UPlayerCharacterID*& character out, FString CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Array_Index_Variable, FString CallFunc_RightChop_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, TArray<class UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class UPlayerCharacterID* CallFunc_Array_Get_Item, TArray<class UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue_1, class UPlayerCharacterID* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const FText CallFunc_GetName_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void DeselectTab(class UButton* Tab, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SelectTab(int32 Index, class UButton* TabButton);
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_General_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature();
    void SelectFirstTab();
    void Init Tabs();
    void BndEvt__Button_Controls_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnShown();
    void OnClosed();
    void BndEvt__Button_Gunner_K2Node_ComponentBoundEvent_683_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Engineer_K2Node_ComponentBoundEvent_735_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Driller_K2Node_ComponentBoundEvent_758_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Scout_K2Node_ComponentBoundEvent_782_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
    void Update weapon info(EItemCategory categoryType, class UComboBoxString* ComboBoxToFill);
    void Set new weapon(FString Weapon name, EItemCategory Category);
    void Construct();
    void update selected upgrade();
    void Reload lists();
    void Fill Perk list(EItemCategory ItemSlotType, class UScrollBox* scrollbox to change);
    void BndEvt__mainWeaponselector_K2Node_ComponentBoundEvent_1369_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__SecondaryWeaponSelector_K2Node_ComponentBoundEvent_1395_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void Swap Weapon to next(EItemCategory Item Category);
    void HotKey Interaction change character();
    void Select Next Tab();
    void Select previous tab();
    void Select current tab();
    void BndEvt__CheckBox_QuickSelect_K2Node_ComponentBoundEvent_777_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__Button_GenericHero_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature();
    void Fill Misc Upgrades(EItemCategory Item Slot type, class UCheat_MiscUpgradesItem_C* CheatBoxToFill);
    void Set player misc upgrades();
    void Reload Character();
    void Build Bosco abilities();
    void BndEvt__RespawnboscoBTN_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature();
    void Initiate Pool lists();
    void BndEvt__Button_Vanity_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Cheat_ResetAchievement_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__HealthSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__FastPowerAttack_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__AnselSpeedSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__AnselDistanceSpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void Fill Weapon skin SB(class UScrollBox* SkinScrollBox, EItemCategory Item Slot, EItemSkinType SkinType);
    void Reload skin list(EItemCategory Category);
    void BndEvt__AdvEnemySpawn_K2Node_ComponentBoundEvent_9_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
    void BndEvt__PlaceSpawnpos_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CleanSpawnPos_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Menu_Cheats_SpaceRig(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, FExecuteUbergraph_Menu_Cheats_SpaceRigK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, FString CallFunc_Conv_IntToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_1, FText CallFunc_Conv_StringToText_ReturnValue_1, int32 Temp_int_Array_Index_Variable_6, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Array_Index_Variable_7, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 Temp_int_Array_Index_Variable_8, FExecuteUbergraph_Menu_Cheats_SpaceRigK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable_7, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 Temp_int_Array_Index_Variable_9, int32 Temp_int_Loop_Counter_Variable_8, TArray<class UButton*>& K2Node_MakeArray_Array, class UButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_10, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UTextBlock* K2Node_DynamicCast_AsText, bool K2Node_DynamicCast_bSuccess, FText CallFunc_GetText_ReturnValue, class UPlayerCharacterID* CallFunc_Get_Character_to_change_character_out, class UInventoryList* CallFunc_GetInventoryList_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, EItemCategory K2Node_CustomEvent_categoryType, class UComboBoxString* K2Node_CustomEvent_ComboBoxToFill, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, TSubclassOf<class APlayerCharacter> CallFunc_GetObjectClass_ReturnValue, class UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, class UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, TArray<class TSubclassOf<AActor>>& CallFunc_GetLoadedItemList_ReturnValue, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue, TSubclassOf<class AActor> CallFunc_Array_Get_Item_1, FString CallFunc_GetClassDisplayName_ReturnValue, FString CallFunc_GetClassDisplayName_ReturnValue_1, int32 CallFunc_FindOptionIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString K2Node_CustomEvent_Weapon_name, EItemCategory K2Node_CustomEvent_category_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess, TArray<class TSubclassOf<AActor>>& CallFunc_GetLoadedItemList_ReturnValue_1, TSubclassOf<class AActor> CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, FString CallFunc_GetClassDisplayName_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, FString CallFunc_GetSelectedOption_ReturnValue, FString CallFunc_GetSelectedOption_ReturnValue_1, EItemCategory K2Node_CustomEvent_ItemSlotType, class UScrollBox* K2Node_CustomEvent_scrollbox_to_change, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_4, FString K2Node_ComponentBoundEvent_SelectedItem_1, TEnumAsByte<ESelectInfo::Type> K2Node_ComponentBoundEvent_SelectionType_1, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue_1, FString K2Node_ComponentBoundEvent_SelectedItem, TEnumAsByte<ESelectInfo::Type> K2Node_ComponentBoundEvent_SelectionType, const TArray<FUpgradeTier>& CallFunc_GetItemUpgradeTiers_ReturnValue, FUpgradeTier CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_9, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_11, int32 Temp_int_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, EItemCategory K2Node_CustomEvent_item_category, class UCheat_PerkListTier_C* CallFunc_Create_ReturnValue, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue_2, class UItemID* CallFunc_GetItemID_ReturnValue, class UItemID* CallFunc_GetNextItem_ReturnValue, TSubclassOf<class AActor> CallFunc_GetActorClass_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_12, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool K2Node_ComponentBoundEvent_bIsChecked_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class AFSDPlayerControllerBase* K2Node_DynamicCast_AsFSDPlayer_Controller_Base, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class AFSDPlayerControllerBase* K2Node_DynamicCast_AsFSDPlayer_Controller_Base_1, bool K2Node_DynamicCast_bSuccess_2, EItemCategory K2Node_CustomEvent_Item_Slot_type, class UCheat_MiscUpgradesItem_C* K2Node_CustomEvent_CheatBoxToFill, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class UCheat_PerkListTier_C* CallFunc_Create_ReturnValue_1, class UCheat_SpawnBosco_C* CallFunc_Create_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue_1, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UEncounterManager* CallFunc_GetEncounterManager_ReturnValue, const TArray<class UCritterDescriptor*>& CallFunc_GetCritterPool_ReturnValue, FText CallFunc_GetText_ReturnValue_1, class UCritterDescriptor* CallFunc_Array_Get_Item_4, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_GetObjectName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_3, FText CallFunc_Conv_StringToText_ReturnValue_2, const TArray<class UEnemyDescriptor*>& CallFunc_GetEnemyPool_ReturnValue, class UEnemyDescriptor* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, FString CallFunc_GetObjectName_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_5, const TArray<class UEnemyDescriptor*>& CallFunc_GetEncounterPool_ReturnValue, class UEnemyDescriptor* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, FString CallFunc_GetObjectName_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_6, FText CallFunc_GetText_ReturnValue_2, FString CallFunc_Conv_TextToString_ReturnValue_1, FExecuteUbergraph_Menu_Cheats_SpaceRigK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FString CallFunc_Concat_StrStr_ReturnValue_4, FString CallFunc_Concat_StrStr_ReturnValue_5, FText CallFunc_Conv_StringToText_ReturnValue_3, FText CallFunc_GetText_ReturnValue_3, FString CallFunc_Conv_TextToString_ReturnValue_2, class UButton* K2Node_Select_Default, FString CallFunc_Concat_StrStr_ReturnValue_6, FString CallFunc_Concat_StrStr_ReturnValue_7, FText CallFunc_Conv_StringToText_ReturnValue_4, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue_2, float K2Node_ComponentBoundEvent_Value, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_SelectFloat_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess_4, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCheat_OverclockSelection_C* CallFunc_Create_ReturnValue_3, float K2Node_ComponentBoundEvent_InValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_4, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float K2Node_ComponentBoundEvent_InValue, class ABP_FSDCameraManager_C* K2Node_DynamicCast_AsBP_FSDCamera_Manager, bool K2Node_DynamicCast_bSuccess_5, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class ABP_FSDCameraManager_C* K2Node_DynamicCast_AsBP_FSDCamera_Manager_1, bool K2Node_DynamicCast_bSuccess_6, class UScrollBox* K2Node_CustomEvent_SkinScrollBox, EItemCategory K2Node_CustomEvent_Item_Slot, EItemSkinType K2Node_CustomEvent_skinType, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_5, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, int32 Temp_int_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_7, TSubclassOf<class APlayerCharacter> CallFunc_GetObjectClass_ReturnValue_1, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_2, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue_3, class UItemID* CallFunc_GetItemID_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, TArray<class UItemSkin*>& CallFunc_GetSkinsForItem_ReturnValue, class UCheat_SkinListItem_C* CallFunc_Create_ReturnValue_4, class UItemSkin* CallFunc_Array_Get_Item_7, class UPanelSlot* CallFunc_AddChild_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_7, EItemCategory K2Node_CustomEvent_category, bool CallFunc_Less_IntInt_ReturnValue_8, bool K2Node_SwitchEnum_CmpSuccess_1, class ABosco* CallFunc_GetBoscoUpgradeComponent_Drone, class UUpgradableBoscoComponent* CallFunc_GetBoscoUpgradeComponent_ReturnValue, bool K2Node_ComponentBoundEvent_bIsOpen, bool CallFunc_IsValid_ReturnValue_1, TSubclassOf<class ABosco> CallFunc_GetObjectClass_ReturnValue_2, FUpgradeTier CallFunc_Array_Get_Item_8, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_9, class UWidget* CallFunc_On_AdvEnemySpawn_GetMenuContent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const FTransform CallFunc_GetTransform_ReturnValue, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue_4, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ASpawnPosMarker_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class ASpawnPosMarker_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ASpawnPosMarker_C* CallFunc_Array_Get_Item_9, int32 CallFunc_Array_Length_ReturnValue_9, bool CallFunc_Less_IntInt_ReturnValue_10);
};

#endif
