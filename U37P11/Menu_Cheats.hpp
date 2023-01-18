#ifndef UE4SS_SDK_Menu_Cheats_HPP
#define UE4SS_SDK_Menu_Cheats_HPP

class UMenu_Cheats_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* ActivateCommonCheatsButton;
    class UMenuAnchor* AdvEnemySpawn;
    class USpinBox* AnselDistanceSpinBox;
    class USpinBox* AnselSpeedSpinBox;
    class UScrollBox* BoscoUpgradePanel;
    class UButton* Button_AdvancedEnemyspawn;
    class UButton* Button_Bosco;
    class UButton* Button_Character;
    class UButton* Button_Close;
    class UButton* Button_Driller;
    class UButton* Button_Engineer;
    class UButton* Button_General;
    class UButton* Button_Gunner;
    class UButton* Button_Info;
    class UButton* Button_Mission;
    class UButton* Button_ReloadChar;
    class UButton* Button_Scout;
    class UButton* Button_SpawnMinimule;
    class UButton* Button_Vanity;
    class UCheat_AddGold_C* Cheat_AddGold;
    class UCheat_AddMorkite_C* Cheat_AddMorkite;
    class UCheat_AddNitra_C* Cheat_AddNitra;
    class UCheat_CharacterPointLight_C* Cheat_CharacterPointLight;
    class UCheat_CompleteMission_C* Cheat_CompleteMission;
    class UCheat_ConsoleCmd_C* Cheat_ConsoleCmd;
    class UCheat_ConsoleCmd_C* Cheat_ConsoleCmd_C_0;
    class UCheat_FlyMode_C* Cheat_DebugCam;
    class UCheat_DestroyAllFlares_C* Cheat_DestroyAllFlares;
    class UCheat_DestroyMolly_C* Cheat_DestroyMolly;
    class UCheat_FastMovement_C* Cheat_FastMovement;
    class UCheat_MiscUpgradesItem_C* Cheat_FifthItem;
    class UCheat_MiscUpgradesItem_C* Cheat_FirstItem;
    class UCheat_MiscUpgradesItem_C* Cheat_FourthItem;
    class UCheat_GiveBeerBuff_C* Cheat_GiveBeerBuff;
    class UCheat_God_C* Cheat_God;
    class UCheat_JumpToNextRoom_C* Cheat_JumpToNextRoom;
    class UCheat_KillAll_C* Cheat_KillAll_20;
    class UCheat_LevelScale_C* Cheat_LevelScale;
    class UCheat_MaterialInfo_C* Cheat_MaterialInfo_C_2;
    class UCheat_MaterialInfo_C* Cheat_MaterialInfo_C_3;
    class UCheat_MaterialInfo_C* Cheat_MaterialInfo_C_4;
    class UCheat_QuadPickAxe_C* Cheat_QuadPickAxe;
    class UCheat_QuickLight_C* Cheat_QuickLight;
    class UButton* Cheat_ResetAchievement;
    class UCheat_Resupply_C* Cheat_Resupply;
    class UCheat_RoomList_C* Cheat_RoomList;
    class UCheat_MiscUpgradesItem_C* Cheat_SecondItem;
    class UCheat_SetDifficulty_C* Cheat_SetDifficulty;
    class UCheat_SetFastFlares_C* Cheat_SetFastFlares;
    class UCheat_SetPerk_C* Cheat_SetPerk;
    class UCheat_ShowHUD_C* Cheat_ShowHUD;
    class UCheat_ShowPathfinder_C* Cheat_ShowPathfinder;
    class UCheat_SimulateLateJoin_C* Cheat_SimulateLateJoin;
    class UCheat_SimulatePlayerCount_C* Cheat_SimulatePlayerCount;
    class UCheat_MiscUpgradesItem_C* Cheat_SixthItem;
    class UCheat_SpawnBeers_C* Cheat_SpawnBeers_239;
    class UCheat_SpawnBosco_C* Cheat_SpawnBosco;
    class UCheat_SpawnCritter_C* Cheat_SpawnCritter;
    class UCheat_SpawnEarthQuake_C* Cheat_SpawnEarthQuake;
    class UCheat_SpawnEnemy_C* Cheat_SpawnEnemy_C;
    class UCheat_SpawnEnemy_C* Cheat_SpawnEnemy_C_0;
    class UCheat_SpawnEnemy_C* Cheat_SpawnEnemy_C_1;
    class UCheat_SpawnEnemy_C* Cheat_SpawnEnemy_C_2;
    class UCheat_SpawnGems_C* Cheat_SpawnGems;
    class UCheat_SpawnMeteor_C* Cheat_SpawnMeteor;
    class UCheat_SpawnEnemies_C* Cheat_SpawnOnOff;
    class UCheat_SpawnSandStorm_C* Cheat_SpawnSnowStorm;
    class UCheat_SpawnSnowStorm_C* Cheat_SpawnSnowStorm_456;
    class UCheat_ScriptedWave_C* Cheat_SpawnWave;
    class UCheat_StandingDown_C* Cheat_StandingDown;
    class UCheat_StopAIMovement_C* Cheat_StopAIMovement;
    class UCheat_MiscUpgradesItem_C* Cheat_ThirdItem;
    class UButton* Cheat_ToggleInstantUsables;
    class UCheat_VanityTab_C* Cheat_VanityTab;
    class UButton* CleanSpawnPos;
    class UHorizontalBox* Content_Mission;
    class UWidgetSwitcher* ContentSwitcher;
    class UTextBlock* CritterPoolList;
    class UTextBlock* EnemyPool;
    class UCheckBox* FastPowerAttack;
    class USlider* HealthSlider;
    class UComboBoxString* mainWeaponselector;
    class USpinBox* MinimuleAmountselect;
    class UButton* PlaceSpawnpos;
    class UButton* RespawnboscoBTN;
    class UTextBlock* SavedCheatsActiveText;
    class UScrollBox* SB_ColorSkinMain;
    class UScrollBox* SB_ColorSkinSecondary;
    class UScrollBox* SB_MeshSkinMain;
    class UScrollBox* SB_MeshSkinSecondary;
    class UScrollBox* SB_SecWepPerks;
    class UScrollBox* SB_WeaponPerkList;
    class UComboBoxString* SecondaryWeaponSelector;
    class UTextBlock* StationaryPool;
    class UCanvasPanel* TopCanvasPanel;
    class UButton* UseSavedCheatsButton;
    class UVerticalBox* VerticalBox_Materials;
    class UButton* ActiveTab;
    class UButton* ActiveCharacterTab;
    int32 Current Tab Index;
    int32 Amount of main tabs;
    bool Power User Mode Active;
    class UCheat_SpawnEnemyAdvanced_C* advancedSpawnMenu;
    class UPlayerCharacterID* ActiveCharacter;
    bool InstantUsablesToggled;

    void CountResources();
    class UWidget* On_AdvEnemySpawn_GetMenuContent();
    class UUpgradableBoscoComponent* GetBoscoUpgradeComponent(class ABosco*& Drone);
    void InitiateAnselSpinBox();
    class UWidget* OnGetMenuContent_0();
    ESlateVisibility Get_ActivateCommonCheatsButton_Visibility_0();
    float Get_HealthSlider_Value_0();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Get Character to change(FText Character, class UPlayerCharacterID*& character out);
    void DeselectTab(class UButton* Tab);
    void SelectTab(int32 Index, class UButton* TabButton);
    void OnLoaded_A7093BF7410CE2BD47E9B6A07D503818(UClass* Loaded);
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_General_K2Node_ComponentBoundEvent_323_OnButtonClickedEvent__DelegateSignature();
    void SelectFirstTab();
    void Init Tabs();
    void BndEvt__Button_Controls_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_UI_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature();
    void OnShown();
    void OnClosed();
    void BndEvt__Button_539_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature();
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
    void BndEvt__ActivateCommonCheatsButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void Power user key pressed();
    void BndEvt__AnselSpeedSpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__AnselDistanceSpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Button_SpawnMinimule_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void Fill Weapon skin SB(class UScrollBox* SkinScrollBox, EItemCategory Item Slot, EItemSkinType skinType);
    void Reload skin list(EItemCategory Category);
    void BndEvt__Button_AdvancedEnemyspawn_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void Close Advanced spawning();
    void BndEvt__PlaceSpawnpos_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CleanSpawnPos_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UseSavedCheatsButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Mission_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Menu_Cheats_AdvEnemySpawn_K2Node_ComponentBoundEvent_14_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
    void BndEvt__Menu_Cheats_Cheat_ToggleInstantUsables_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Menu_Cheats(int32 EntryPoint);
};

#endif