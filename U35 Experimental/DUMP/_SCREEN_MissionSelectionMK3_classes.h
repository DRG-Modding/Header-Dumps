// WidgetBlueprintGeneratedClass _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C
// Size: 0x440 (Inherited: 0x270)
struct U_SCREEN_MissionSelectionMK3_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines; // 0x278(0x08)
	UBasic_ButtonScalable2_C* BTN_Close; // 0x280(0x08)
	UBasic_ButtonScalable2_C* BTN_Join; // 0x288(0x08)
	UBasic_ButtonScalable2_C* BTN_ServerList; // 0x290(0x08)
	UCanvasPanel* CanvasPanel_PannerOuter; // 0x298(0x08)
	UImage* ImageAsteroids01; // 0x2a0(0x08)
	UImage* ImageAsteroids02; // 0x2a8(0x08)
	UImage* ImageClouds01; // 0x2b0(0x08)
	UImage* ImageClouds02; // 0x2b8(0x08)
	UITM_MisSel_Biome_C* ITEM_Biome_AzureWeald; // 0x2c0(0x08)
	UITM_MisSel_Biome_C* ITEM_Biome_Crystal; // 0x2c8(0x08)
	UITM_MisSel_Biome_C* ITEM_Biome_Dense; // 0x2d0(0x08)
	UITM_MisSel_Biome_C* ITEM_Biome_Fungus; // 0x2d8(0x08)
	UITM_MisSel_Biome_C* ITEM_Biome_Glacial; // 0x2e0(0x08)
	UITM_MisSel_Biome_C* ITEM_Biome_HollowBough; // 0x2e8(0x08)
	UITM_MisSel_Biome_C* ITEM_Biome_Magma; // 0x2f0(0x08)
	UITM_MisSel_Biome_C* ITEM_Biome_Radioactive; // 0x2f8(0x08)
	UITM_MisSel_Biome_C* ITEM_Biome_Salt; // 0x300(0x08)
	UITM_MisSel_Biome_C* ITEM_Biome_Sandblasted; // 0x308(0x08)
	UITM_MisSel_BG_Planet_C* ITEM_MissionSelection_BG; // 0x310(0x08)
	UITM_MisSel_FullBiome_C* ITEM_MissionSelection_FullBiome; // 0x318(0x08)
	UITM_MisSel_Timer_C* ITEM_MissionSelection_Timer; // 0x320(0x08)
	UITM_CampaignProgress_C* ITM_CampaignProgressMain; // 0x328(0x08)
	UITM_Challenge_InfoBox_C* ITM_Challenge_InfoBox; // 0x330(0x08)
	UITM_MisSel_ZoneLock_C* ITM_LockZone_3; // 0x338(0x08)
	UITM_MisSel_ZoneLock_C* ITM_LockZone_4; // 0x340(0x08)
	UITM_MisSel_ZoneLock_C* ITM_LockZone_5; // 0x348(0x08)
	ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown; // 0x350(0x08)
	USafeZone* PlatformSafeZone; // 0x358(0x08)
	UITM_MisSel_ZoneImage_C* Region_AzureWeald; // 0x360(0x08)
	UITM_MisSel_ZoneImage_C* Region_CrystallineCaverns; // 0x368(0x08)
	UITM_MisSel_ZoneImage_C* Region_DenseBiozone; // 0x370(0x08)
	UITM_MisSel_ZoneImage_C* Region_FungusBogs; // 0x378(0x08)
	UITM_MisSel_ZoneImage_C* Region_GlacialStrata; // 0x380(0x08)
	UITM_MisSel_ZoneImage_C* Region_HollowBough; // 0x388(0x08)
	UITM_MisSel_ZoneImage_C* Region_MagmaCore; // 0x390(0x08)
	UITM_MisSel_ZoneImage_C* Region_Radioactive; // 0x398(0x08)
	UITM_MisSel_ZoneImage_C* Region_SaltPits; // 0x3a0(0x08)
	UITM_MisSel_ZoneImage_C* Region_Sandblasted; // 0x3a8(0x08)
	UHorizontalBox* SelectionBox_Active; // 0x3b0(0x08)
	UUI_AdvancedLabel_C* UI_AdvancedLabel; // 0x3b8(0x08)
	UWND_MisSel_BiomeDescription_C* WINDOW_MissionSelection_BiomeDescription; // 0x3c0(0x08)
	UWND_MisSel_MissionDescription_C* WINDOW_MissionSelection_MissionDescription; // 0x3c8(0x08)
	UWND_MisSel_MissionOptions_C* WINDOW_MissionSelection_MissionOptions; // 0x3d0(0x08)
	UImage* Zone_Outlines; // 0x3d8(0x08)
	UImage* ZoneBorders; // 0x3e0(0x08)
	TArray<UITM_MisSel_Biome_C*> Biomes; // 0x3e8(0x10)
	UITM_MisSel_MissionMapIcon_C* SelectedMissionIcon; // 0x3f8(0x08)
	UITM_MisSel_Biome_C* SelectedBiome; // 0x400(0x08)
	TArray<UITM_MisSel_ZoneLock_C*> ZoneLocks; // 0x408(0x10)
	TArray<UBiome*> NewBiomes; // 0x418(0x10)
	FVector2D CurrPos; // 0x428(0x08)
	FVector2D targetPos; // 0x430(0x08)
	bool IsBiomeHovered; // 0x438(0x01)
	bool CanParalaxCamera; // 0x439(0x01)
	float BiomeHoverStartTime; // 0x43c(0x04)

	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void ClearServerListMissionRestrictions();
	FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void UpdateMapPan(bool SnapToMouse);
	void CheckForNewZones();
	void GetAvailableBiomes(TArray<UITM_MisSel_Biome_C*> AvailableBiomes1);
	void GetMode(enum class EMissionSelection_Mode Mode);
	void ShouldEnableQuickJoin(bool Show);
	void HandleButtonVisibility();
	void GetMission_CheckBiome(UGeneratedMission* mission);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void GetMission(UGeneratedMission* mission);
	bool IsMissionLocked(UGeneratedMission* mission);
	void GetActiveSelectionMode(enum class EMissionSelection_Mode NewParam);
	void GetController(ABP_PlayerController_SpaceRig_C* AsBP Player Controller Space Rig);
	void GetMissionBiome(UBiome* Biome, UITM_MisSel_Biome_C* Array Element);
	void OnFailure_ED6FBDF64F71976389535788275C482E();
	void OnSuccess_ED6FBDF64F71976389535788275C482E();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__CheckBox_Solo_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BiomeHovered(UITM_MisSel_Biome_C* Biome);
	void BiomeSelected(UITM_MisSel_Biome_C* Biome);
	void ShowMission();
	void ShowPlanet();
	void MissionHover(UGeneratedMission* mission, bool IsHovering);
	void StartMission();
	void OnStartMission_Event_1();
	void ShowMode(enum class EMissionSelection_Mode Mode);
	void Back();
	void ShowServerBrowser();
	void BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void InputSourceChanged(enum class EFSDInputSource InputSource);
	void OnShown();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void MissionSelected(UITM_MisSel_MissionMapIcon_C* mission);
	void StartSoloMission();
	void OnClosed();
	void DifficultyChanged(UDifficultySetting* NewDifficulty, UGeneratedMission* mission);
	void StartupCameraPan();
	void OnStartSoloMission();
	void ExecuteUbergraph__SCREEN_MissionSelectionMK3(int32_t EntryPoint);
};

