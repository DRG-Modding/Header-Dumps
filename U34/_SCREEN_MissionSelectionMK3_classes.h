// WidgetBlueprintGeneratedClass _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C
// Size: 0x430 (Inherited: 0x270)
struct U_SCREEN_MissionSelectionMK3_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines; // 0x278(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Close; // 0x280(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Join; // 0x288(0x08)
	struct UBasic_ButtonScalable2_C* BTN_ServerList; // 0x290(0x08)
	struct UCanvasPanel* CanvasPanel_PannerOuter; // 0x298(0x08)
	struct UImage* ControllerButton; // 0x2a0(0x08)
	struct UImage* ImageAsteroids01; // 0x2a8(0x08)
	struct UImage* ImageAsteroids02; // 0x2b0(0x08)
	struct UImage* ImageClouds01; // 0x2b8(0x08)
	struct UImage* ImageClouds02; // 0x2c0(0x08)
	struct UITM_MisSel_Biome_C* ITEM_Biome_AzureWeald; // 0x2c8(0x08)
	struct UITM_MisSel_Biome_C* ITEM_Biome_Crystal; // 0x2d0(0x08)
	struct UITM_MisSel_Biome_C* ITEM_Biome_Dense; // 0x2d8(0x08)
	struct UITM_MisSel_Biome_C* ITEM_Biome_Fungus; // 0x2e0(0x08)
	struct UITM_MisSel_Biome_C* ITEM_Biome_Glacial; // 0x2e8(0x08)
	struct UITM_MisSel_Biome_C* ITEM_Biome_HollowBough; // 0x2f0(0x08)
	struct UITM_MisSel_Biome_C* ITEM_Biome_Magma; // 0x2f8(0x08)
	struct UITM_MisSel_Biome_C* ITEM_Biome_Radioactive; // 0x300(0x08)
	struct UITM_MisSel_Biome_C* ITEM_Biome_Salt; // 0x308(0x08)
	struct UITM_MisSel_Biome_C* ITEM_Biome_Sandblasted; // 0x310(0x08)
	struct UITM_MisSel_BG_Planet_C* ITEM_MissionSelection_BG; // 0x318(0x08)
	struct UITM_MisSel_FullBiome_C* ITEM_MissionSelection_FullBiome; // 0x320(0x08)
	struct UITM_MisSel_Timer_C* ITEM_MissionSelection_Timer; // 0x328(0x08)
	struct UITM_CampaignProgress_C* ITM_CampaignProgressMain; // 0x330(0x08)
	struct UITM_MisSel_ZoneLock_C* ITM_LockZone_3; // 0x338(0x08)
	struct UITM_MisSel_ZoneLock_C* ITM_LockZone_4; // 0x340(0x08)
	struct UITM_MisSel_ZoneLock_C* ITM_LockZone_5; // 0x348(0x08)
	struct ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown; // 0x350(0x08)
	struct UITM_MisSel_ZoneImage_C* Region_AzureWeald; // 0x358(0x08)
	struct UITM_MisSel_ZoneImage_C* Region_CrystallineCaverns; // 0x360(0x08)
	struct UITM_MisSel_ZoneImage_C* Region_DenseBiozone; // 0x368(0x08)
	struct UITM_MisSel_ZoneImage_C* Region_FungusBogs; // 0x370(0x08)
	struct UITM_MisSel_ZoneImage_C* Region_GlacialStrata; // 0x378(0x08)
	struct UITM_MisSel_ZoneImage_C* Region_HollowBough; // 0x380(0x08)
	struct UITM_MisSel_ZoneImage_C* Region_MagmaCore; // 0x388(0x08)
	struct UITM_MisSel_ZoneImage_C* Region_Radioactive; // 0x390(0x08)
	struct UITM_MisSel_ZoneImage_C* Region_SaltPits; // 0x398(0x08)
	struct UITM_MisSel_ZoneImage_C* Region_Sandblasted; // 0x3a0(0x08)
	struct UHorizontalBox* SelectionBox_Active; // 0x3a8(0x08)
	struct UWND_MisSel_BiomeDescription_C* WINDOW_MissionSelection_BiomeDescription; // 0x3b0(0x08)
	struct UWND_MisSel_MissionDescription_C* WINDOW_MissionSelection_MissionDescription; // 0x3b8(0x08)
	struct UWND_MisSel_MissionOptions_C* WINDOW_MissionSelection_MissionOptions; // 0x3c0(0x08)
	struct UImage* Zone_Outlines; // 0x3c8(0x08)
	struct UImage* ZoneBorders; // 0x3d0(0x08)
	struct TArray<struct UITM_MisSel_Biome_C*> Biomes; // 0x3d8(0x10)
	struct UITM_MisSel_MissionMapIcon_C* SelectedMissionIcon; // 0x3e8(0x08)
	struct UITM_MisSel_Biome_C* SelectedBiome; // 0x3f0(0x08)
	struct TArray<struct UITM_MisSel_ZoneLock_C*> ZoneLocks; // 0x3f8(0x10)
	struct TArray<struct UBiome*> NewBiomes; // 0x408(0x10)
	struct FVector2D CurrPos; // 0x418(0x08)
	struct FVector2D TargetPos; // 0x420(0x08)
	bool IsBiomeHovered; // 0x428(0x01)
	bool CanParalaxCamera; // 0x429(0x01)
	char UnknownData_42A[0x2]; // 0x42a(0x02)
	float BiomeHoverStartTime; // 0x42c(0x04)

	void ClearServerListMissionRestrictions(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ClearServerListMissionRestrictions
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnMouseButtonUp
	void UpdateMapPan(bool SnapToMouse); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.UpdateMapPan
	void CheckForNewZones(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CheckForNewZones
	void GetAvailableBiomes(struct TArray<struct UITM_MisSel_Biome_C*> AvailableBiomes1); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableBiomes
	void GetMode(char Mode); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMode
	void ShouldEnableQuickJoin(bool Show); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShouldEnableQuickJoin
	void HandleButtonVisibility(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HandleButtonVisibility
	void GetMission_CheckBiome(struct UGeneratedMission* mission); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission_CheckBiome
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnKeyUp
	void GetMission(struct UGeneratedMission* mission); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission
	bool IsMissionLocked(struct UGeneratedMission* mission); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.IsMissionLocked
	void GetActiveSelectionMode(char NewParam); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetActiveSelectionMode
	void GetController(struct ABP_PlayerController_SpaceRig_C* AsBP Player Controller Space Rig); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetController
	void GetMissionBiome(struct UBiome* Biome, struct UITM_MisSel_Biome_C* Array Element); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMissionBiome
	void OnFailure_ED6FBDF64F71976389535788275C482E(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnFailure_ED6FBDF64F71976389535788275C482E
	void OnSuccess_ED6FBDF64F71976389535788275C482E(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnSuccess_ED6FBDF64F71976389535788275C482E
	void PreConstruct(bool IsDesignTime); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.PreConstruct
	void Construct(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Construct
	void BndEvt__CheckBox_Solo_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__CheckBox_Solo_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature
	void BiomeHovered(struct UITM_MisSel_Biome_C* Biome); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeHovered
	void BiomeSelected(struct UITM_MisSel_Biome_C* Biome); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeSelected
	void ShowMission(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMission
	void ShowPlanet(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowPlanet
	void MissionHover(struct UGeneratedMission* mission, bool IsHovering); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionHover
	void StartMission(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartMission
	void OnStartMission_Event_1(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartMission_Event_1
	void ShowMode(char Mode); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMode
	void Back(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Back
	void ShowServerBrowser(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowServerBrowser
	void BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void InputSourceChanged(enum class EFSDInputSource InputSource); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.InputSourceChanged
	void OnShown(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnShown
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Tick
	void MissionSelected(struct UITM_MisSel_MissionMapIcon_C* mission); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionSelected
	void StartSoloMission(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartSoloMission
	void OnClosed(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnClosed
	void DifficultyChanged(struct UDifficultySetting* NewDifficulty, struct UGeneratedMission* mission); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.DifficultyChanged
	void StartupCameraPan(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartupCameraPan
	void OnStartSoloMission(); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartSoloMission
	void ExecuteUbergraph__SCREEN_MissionSelectionMK3(int32_t EntryPoint); // Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ExecuteUbergraph__SCREEN_MissionSelectionMK3
};

