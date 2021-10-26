// WidgetBlueprintGeneratedClass HUD_TabPlayerListEntry_InteractableV2.HUD_TabPlayerListEntry_InteractableV2_C
// Size: 0x2d8 (Inherited: 0x250)
struct UHUD_TabPlayerListEntry_InteractableV2_C : UFSDUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UWidgetAnimation* Exit; // 0x258(0x08)
	UWidgetAnimation* Enter; // 0x260(0x08)
	UBasic_ButtonCutCorner_C* BTN_Gamercard; // 0x268(0x08)
	UBasic_ButtonCutCorner_C* BTN_Kick; // 0x270(0x08)
	UBasic_ButtonCutCorner_C* BTN_mute; // 0x278(0x08)
	UBasic_ButtonCutCorner_C* BTN_Respawn_Spacerig; // 0x280(0x08)
	UBasic_ButtonCutCorner_C* BTN_unmute; // 0x288(0x08)
	UButton* Button_Hover; // 0x290(0x08)
	UHUD_TabPlayerListEntryV2_C* Entry; // 0x298(0x08)
	UHorizontalBox* HorizontalBox_Actions; // 0x2a0(0x08)
	UWidgetSwitcher* MuteSwitcher; // 0x2a8(0x08)
	AFSDPlayerState* PlayerState; // 0x2b0(0x08)
	APlayerController* PlayerController; // 0x2b8(0x08)
	FText KickReason; // 0x2c0(0x18)

	void SetPlayer(AFSDPlayerState* State);
	void OnPlayerSet();
	void OnPlayerCharacterSpawned_Event(APlayerCharacter* PlayerCharacter);
	void Update Mute Button();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void CheckHover();
	void BndEvt__BTN_mute_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void BndEvt__BTN_Respawn_Spacerig_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(UBasic_ButtonCutCorner_C* Button);
	void OnFinished();
	void ExecuteUbergraph_HUD_TabPlayerListEntry_InteractableV2(int32_t EntryPoint);
};

