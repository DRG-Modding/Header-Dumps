// WidgetBlueprintGeneratedClass ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C
// Size: 0x300 (Inherited: 0x230)
struct UITM_MisSel_MissionMapIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Click; // 0x238(0x08)
	UWidgetAnimation* Hover; // 0x240(0x08)
	UBasic_ButtonScalable2_C* BTN_HostPrivate; // 0x248(0x08)
	UBasic_ButtonScalable2_C* BTN_HostPublic; // 0x250(0x08)
	UBasic_ButtonScalable2_C* BTN_Join; // 0x258(0x08)
	UBasic_ButtonScalable2_C* BTN_Solo; // 0x260(0x08)
	UButton* Button_Selection; // 0x268(0x08)
	UBasic_Menu_MinimalWindow_C* ButtonWindow; // 0x270(0x08)
	UITM_SeasonChallengeIcon_C* ChallengeIcon; // 0x278(0x08)
	UOverlay* Content; // 0x280(0x08)
	UImage* ICON_TargetDot; // 0x288(0x08)
	UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic; // 0x290(0x08)
	UITM_Campaign_Icon_C* ITM_Campaign_Icon; // 0x298(0x08)
	UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty; // 0x2a0(0x08)
	UITM_MutatorIcon_C* ITM_MutatorIcon; // 0x2a8(0x08)
	UITM_MutatorIcon_C* ITM_MutatorIcon_2; // 0x2b0(0x08)
	UVerticalBox* VerticalBox_Anomalies; // 0x2b8(0x08)
	UVerticalBox* VerticalBox_Warnings; // 0x2c0(0x08)
	UITM_MissionMapIcon_LevelLock_C* WDG_LevelLock; // 0x2c8(0x08)
	UITM_MissionMapIcon_Objective_C* WDG_Resource; // 0x2d0(0x08)
	UITM_MissionMap_Icon_BG_C* WindowBG; // 0x2d8(0x08)
	UGeneratedMission* mission; // 0x2e0(0x08)
	UITM_MisSel_FullBiome_C* BiomeController; // 0x2e8(0x08)
	FLinearColor Tint_MissionIconColor; // 0x2f0(0x10)

	void SetMutators(UGeneratedMission* Target);
	void SetButtonState(UBasic_ButtonScalable2_C* Button, bool Enabled, enum class EMissionSelection_Mode Mode);
	void ShouldEnableSoloButton(bool Show);
	void ShouldEnableHostButton(bool Show);
	void ShouldEnableJoinButton(bool Show);
	void GetPlayerController(ABP_PlayerController_SpaceRig_C* AsBP Player Controller Space Rig);
	void SelectOptions();
	void GetActiveSelectionMode(enum class EMissionSelection_Mode NewParam);
	void GetNumberOfActiveMissions(TArray<FBlueprintSessionResult> Array, int32_t sessions);
	bool HasMission();
	void SetData(UGeneratedMission* mission, UITM_MisSel_FullBiome_C* BiomeController);
	void Reset();
	void Unselect();
	void Construct();
	void ServerUpdate();
	void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature();
	void OnTeamMemberCampaignMissionChangedEvent();
	void ShowChallengeIcon(bool inHighlight, UTexture2D* Icon, FLinearColor Color);
	void ExecuteUbergraph_ITM_MisSel_MissionMapIcon(int32_t EntryPoint);
};

