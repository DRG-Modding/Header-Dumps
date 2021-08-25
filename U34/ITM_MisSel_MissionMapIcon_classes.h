// WidgetBlueprintGeneratedClass ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C
// Size: 0x2f8 (Inherited: 0x230)
struct UITM_MisSel_MissionMapIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* Click; // 0x238(0x08)
	struct UWidgetAnimation* Hover; // 0x240(0x08)
	struct UBasic_ButtonScalable2_C* BTN_HostPrivate; // 0x248(0x08)
	struct UBasic_ButtonScalable2_C* BTN_HostPublic; // 0x250(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Join; // 0x258(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Solo; // 0x260(0x08)
	struct UButton* Button_Selection; // 0x268(0x08)
	struct UBasic_Menu_MinimalWindow_C* ButtonWindow; // 0x270(0x08)
	struct UOverlay* Content; // 0x278(0x08)
	struct UImage* ICON_TargetDot; // 0x280(0x08)
	struct UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic; // 0x288(0x08)
	struct UITM_Campaign_Icon_C* ITM_Campaign_Icon; // 0x290(0x08)
	struct UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty; // 0x298(0x08)
	struct UITM_MutatorIcon_C* ITM_MutatorIcon; // 0x2a0(0x08)
	struct UITM_MutatorIcon_C* ITM_MutatorIcon_2; // 0x2a8(0x08)
	struct UVerticalBox* VerticalBox_Anomalies; // 0x2b0(0x08)
	struct UVerticalBox* VerticalBox_Warnings; // 0x2b8(0x08)
	struct UITM_MissionMapIcon_LevelLock_C* WDG_LevelLock; // 0x2c0(0x08)
	struct UITM_MissionMapIcon_Objective_C* WDG_Resource; // 0x2c8(0x08)
	struct UITM_MissionMap_Icon_BG_C* WindowBG; // 0x2d0(0x08)
	struct UGeneratedMission* mission; // 0x2d8(0x08)
	struct UITM_MisSel_FullBiome_C* BiomeController; // 0x2e0(0x08)
	struct FLinearColor Tint_MissionIconColor; // 0x2e8(0x10)

	void SetMutators(struct UGeneratedMission* Target); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetMutators
	void SetButtonState(struct UBasic_ButtonScalable2_C* Button, bool Enabled, char Mode); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetButtonState
	void ShouldEnableSoloButton(bool Show); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableSoloButton
	void ShouldEnableHostButton(bool Show); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableHostButton
	void ShouldEnableJoinButton(bool Show); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ShouldEnableJoinButton
	void GetPlayerController(struct ABP_PlayerController_SpaceRig_C* AsBP Player Controller Space Rig); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetPlayerController
	void SelectOptions(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SelectOptions
	void GetActiveSelectionMode(char NewParam); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetActiveSelectionMode
	void GetNumberOfActiveMissions(struct TArray<struct FBlueprintSessionResult> Array, int32_t sessions); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.GetNumberOfActiveMissions
	bool HasMission(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.HasMission
	void SetData(struct UGeneratedMission* mission, struct UITM_MisSel_FullBiome_C* BiomeController); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.SetData
	void Reset(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Reset
	void Unselect(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Unselect
	void Construct(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.Construct
	void ServerUpdate(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ServerUpdate
	void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
	void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.PreConstruct
	void BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
	void OnTeamMemberCampaignMissionChangedEvent(); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.OnTeamMemberCampaignMissionChangedEvent
	void ExecuteUbergraph_ITM_MisSel_MissionMapIcon(int32_t EntryPoint); // Function ITM_MisSel_MissionMapIcon.ITM_MisSel_MissionMapIcon_C.ExecuteUbergraph_ITM_MisSel_MissionMapIcon
};

