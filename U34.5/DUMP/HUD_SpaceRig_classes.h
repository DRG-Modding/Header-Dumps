// WidgetBlueprintGeneratedClass HUD_SpaceRig.HUD_SpaceRig_C
// Size: 0x2e0 (Inherited: 0x250)
struct UHUD_SpaceRig_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* BeerBuffAnimation; // 0x258(0x08)
	UOnScreenIndicator_UsableItem_Simple_C* BS_UsableItem_385; // 0x260(0x08)
	UHUD_ActionHoldProgress_C* HUD_ActionHoldProgress; // 0x268(0x08)
	UHUD_CrossHair_BasicDot_C* HUD_CrossHair_BasicDot_C_1; // 0x270(0x08)
	UHUD_ExperimentalBranch_C* HUD_ExperimentalBranch; // 0x278(0x08)
	UHUD_Frozen_C* HUD_Frozen; // 0x280(0x08)
	UHUD_MinersManualNotification_Manager_C* HUD_MinersManualNotification_Manager; // 0x288(0x08)
	UMissionControl_MainDialogue_C* HUD_MissionShoutWidget_112; // 0x290(0x08)
	UHUD_Modding_Downloads_C* HUD_Modding_Downloads; // 0x298(0x08)
	UHUD_TutorialLevelManager_C* HUD_TutorialLevelManager; // 0x2a0(0x08)
	UMenu_ServerStatus_C* Menu_ServerStatus; // 0x2a8(0x08)
	UScreen_CharacterInfo_C* Screen_CharacterInfo; // 0x2b0(0x08)
	UUI_BeerBuff_Spacerig_C* UI_BeerBuff_Spacerig; // 0x2b8(0x08)
	UUI_CurvedCanvas_C* UI_CurvedCanvas; // 0x2c0(0x08)
	UUI_FPS_C* UI_FPS; // 0x2c8(0x08)
	UUI_NetInfo_C* UI_NetInfo; // 0x2d0(0x08)
	UOnScreenIndicator_UsableItem_WithDescription_C* Usable; // 0x2d8(0x08)

	void Construct();
	void OnCountdownCompleted_Event_1();
	void OnCameraModeChanged_Event(enum class ECharacterCameraMode NewCameraMode, enum class ECharacterCameraMode OldCameraMode);
	void OnTemporaryBuffChanged(UTemporaryBuff* buff, APlayerCharacter* AffectedPlayer);
	void ExecuteUbergraph_HUD_SpaceRig(int32_t EntryPoint);
};

