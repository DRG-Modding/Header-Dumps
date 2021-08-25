// WidgetBlueprintGeneratedClass HUD_Main.HUD_Main_C
// Size: 0x4a8 (Inherited: 0x230)
struct UHUD_Main_C : UFSDMainHUDWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* FadeToBlack; // 0x238(0x08)
	struct UWidgetAnimation* MoveIn; // 0x240(0x08)
	struct UCanvasPanel* AllCameraModes; // 0x248(0x08)
	struct UAnnouncement_Controller_C* Announcement_Controller; // 0x250(0x08)
	struct UCanvasPanel* BottomBar; // 0x258(0x08)
	struct UScreenOverlay_ShieldDamage_C* BP_HUD_ArmorDamageIndicator; // 0x260(0x08)
	struct UScreenOverlay_HealthDamage_C* BP_HUD_DamageIndicator; // 0x268(0x08)
	struct UHUD_Altimeter_C* BS_Altimeter_506; // 0x270(0x08)
	struct UHUD_AmmoCount_C* BS_AmmoCount_67; // 0x278(0x08)
	struct UHUD_Chat_C* BS_Chat; // 0x280(0x08)
	struct UHUD_Flares_C* BS_Flares_331; // 0x288(0x08)
	struct UHUD_Grenades_C* BS_Grenades_240; // 0x290(0x08)
	struct UOnScreenIndicator_UsableItem_Simple_C* BS_UsableItem_385; // 0x298(0x08)
	struct UHUD_WeaponName_C* BS_WeaponName_116; // 0x2a0(0x08)
	struct UWidgetSwitcher* CamerModeSwitcher; // 0x2a8(0x08)
	struct UCanvasPanel* CenterBar; // 0x2b0(0x08)
	struct UHUD_CoolDownManager_C* CoolDownManager; // 0x2b8(0x08)
	struct UImage* FadeOverlay; // 0x2c0(0x08)
	struct UCanvasPanel* FirstPersonCanvas; // 0x2c8(0x08)
	struct UEditableTextBox* HiddenChatHelper; // 0x2d0(0x08)
	struct UBasic_HUD_BracketWindowBig_Single_C* Holder_AmmoCounter; // 0x2d8(0x08)
	struct UBasic_HUD_BracketWindowBig_Single_C* Holder_Gadgets; // 0x2e0(0x08)
	struct UHUD_ActionHoldProgress_C* HUD_ActionHoldProgress; // 0x2e8(0x08)
	struct UHUD_ActivatablePerks_C* HUD_ActivatablePerks; // 0x2f0(0x08)
	struct UHUD_BossFight_Manager_C* HUD_BossFight_Manager; // 0x2f8(0x08)
	struct UHUD_Countdown_Extraction_C* HUD_Countdown_Extraction_100; // 0x300(0x08)
	struct UHUD_CrosshairManager_C* HUD_CrosshairManager; // 0x308(0x08)
	struct UHUD_DamageClass_Indicator_C* HUD_DamageClass_Indicator; // 0x310(0x08)
	struct UHUD_Directional_Damage_IndicatorV2_C* HUD_Directional_Damage_IndicatorV2; // 0x318(0x08)
	struct UHUD_EnemyTargeting_C* HUD_EnemyTargeting; // 0x320(0x08)
	struct UHUD_ExperimentalBranch_C* HUD_ExperimentalBranch; // 0x328(0x08)
	struct UHUD_Flashlight_C* HUD_Flashlight_C_1; // 0x330(0x08)
	struct UHUD_Frozen_C* HUD_Frozen; // 0x338(0x08)
	struct UHUD_Itembar_C* HUD_Itembar; // 0x340(0x08)
	struct UHUD_ItemWheel_C* HUD_ItemWheel; // 0x348(0x08)
	struct UHUD_Milestone_Manager_C* HUD_KPI_Manager; // 0x350(0x08)
	struct UHUD_MapTool_C* HUD_MapTool_209; // 0x358(0x08)
	struct UHUD_MinersManualNotification_Manager_C* HUD_MinersManualNotification_Manager; // 0x360(0x08)
	struct UMissionControl_MainDialogue_C* HUD_MissionShout; // 0x368(0x08)
	struct UHUD_MutatorsAndWarnings_3_C* HUD_MutatorsAndWarnings_4; // 0x370(0x08)
	struct UHUD_ActorContext_Manager_C* HUD_ObjectContext_Manager; // 0x378(0x08)
	struct UHUD_ObjectivesBox_C* HUD_Objectives; // 0x380(0x08)
	struct UHUD_Oxygen_C* HUD_Oxygen; // 0x388(0x08)
	struct UHUD_PlayerDown_C* HUD_PlayerDown; // 0x390(0x08)
	struct UHUD_PlayerInfo_C* HUD_PlayerInfo; // 0x398(0x08)
	struct UHUD_Radar2_C* HUD_Radar2; // 0x3a0(0x08)
	struct UHUD_Resources_Player_C* HUD_Resources_Player; // 0x3a8(0x08)
	struct UHUD_Resources_Team_C* HUD_Resources_Team; // 0x3b0(0x08)
	struct UHUD_SentryGunManager_C* HUD_SentryGunManager; // 0x3b8(0x08)
	struct UHUD_TeamDisplay_Small_C* HUD_TeamDisplay_Small; // 0x3c0(0x08)
	struct UHUD_ThrowCarriable_C* HUD_ThrowCarriable; // 0x3c8(0x08)
	struct UHUD_TutorialWidget_C* HUD_TutorialWidget; // 0x3d0(0x08)
	struct UHUD_Warning_Manager_C* HUD_Warning_Manager; // 0x3d8(0x08)
	struct URetainerBox* Retainer_BottomRight; // 0x3e0(0x08)
	struct URetainerBox* Retainer_Chat; // 0x3e8(0x08)
	struct URetainerBox* Retainer_TeamDisplay; // 0x3f0(0x08)
	struct URetainerBox* Retainer_UpperLeft; // 0x3f8(0x08)
	struct URetainerBox* Retainer_UpperRight; // 0x400(0x08)
	struct URetainerBox* RetainerBox_1; // 0x408(0x08)
	struct URetainerBox* RetainerBox_2; // 0x410(0x08)
	struct URetainerBox* RetainerBox_3; // 0x418(0x08)
	struct URetainerBox* RetainerBox_5; // 0x420(0x08)
	struct URetainerBox* RetainerBox_DamageClass_Indicator; // 0x428(0x08)
	struct URetainerBox* RetainerBox_DamageClass_Indicator_2; // 0x430(0x08)
	struct UCanvasPanel* TopBar; // 0x438(0x08)
	struct UUI_FPS_C* UI_FPS; // 0x440(0x08)
	struct UUI_NetInfo_C* UI_NetInfo; // 0x448(0x08)
	struct UOnScreenIndicator_UsableItem_WithDescription_C* Usable; // 0x450(0x08)
	struct UVerticalBox* V_BossFightAndSpeak; // 0x458(0x08)
	struct UVerticalBox* VBox_Events; // 0x460(0x08)
	struct UVerticalBox* VBox_Events_Left; // 0x468(0x08)
	struct UVerticalBox* VerticalBox_EventsAndSpeak; // 0x470(0x08)
	struct APlayerCharacter* Character; // 0x478(0x08)
	bool hudVisible; // 0x480(0x01)
	char UnknownData_481[0x3]; // 0x481(0x03)
	float FPS; // 0x484(0x04)
	struct UObjective* ObjDummy; // 0x488(0x08)
	struct UHUDVisibilityGroup* VG_Grenades; // 0x490(0x08)
	struct UHUDVisibilityGroup* VG_Flares; // 0x498(0x08)
	struct UHUDVisibilityGroup* VG_Flashlight; // 0x4a0(0x08)

	void ToggleHUD(bool IsVisible, bool Instant); // Function HUD_Main.HUD_Main_C.ToggleHUD
	void Destruct(); // Function HUD_Main.HUD_Main_C.Destruct
	void AllDwarvesDown(); // Function HUD_Main.HUD_Main_C.AllDwarvesDown
	void OnCameraModeChanged(enum class ECharacterCameraMode NewCameraMode, enum class ECharacterCameraMode OldCameraMode); // Function HUD_Main.HUD_Main_C.OnCameraModeChanged
	void UpdateCurrentCanvas(); // Function HUD_Main.HUD_Main_C.UpdateCurrentCanvas
	void OnCharacterStateChanged(enum class ECharacterState NewState); // Function HUD_Main.HUD_Main_C.OnCharacterStateChanged
	void PushEvent(struct UWidget* EventWidget, bool Left); // Function HUD_Main.HUD_Main_C.PushEvent
	void Setup HUD Elements(); // Function HUD_Main.HUD_Main_C.Setup HUD Elements
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function HUD_Main.HUD_Main_C.Tick
	void Construct(); // Function HUD_Main.HUD_Main_C.Construct
	void BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature(struct UHUDVisibilityGroup* Group, bool IsVisible); // Function HUD_Main.HUD_Main_C.BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature
	void BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature(struct UHUDVisibilityGroup* Group, bool IsVisible); // Function HUD_Main.HUD_Main_C.BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature
	void BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature(struct UHUDVisibilityGroup* Group, bool IsVisible); // Function HUD_Main.HUD_Main_C.BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature
	void RefreshHUDElements(); // Function HUD_Main.HUD_Main_C.RefreshHUDElements
	void ExecuteUbergraph_HUD_Main(int32_t EntryPoint); // Function HUD_Main.HUD_Main_C.ExecuteUbergraph_HUD_Main
};

