// WidgetBlueprintGeneratedClass MENU_Loadout.MENU_Loadout_C
// Size: 0x31c (Inherited: 0x270)
struct UMENU_Loadout_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UITM_DragRotateCharacter_C* ITM_DragRotateCharacter; // 0x278(0x08)
	UITM_CharacterSwitcherBar_C* ITM_Loadout_CharSelect; // 0x280(0x08)
	UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow; // 0x288(0x08)
	UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_1; // 0x290(0x08)
	UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_2; // 0x298(0x08)
	UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_3; // 0x2a0(0x08)
	UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_14; // 0x2a8(0x08)
	UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_15; // 0x2b0(0x08)
	UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_16; // 0x2b8(0x08)
	UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_17; // 0x2c0(0x08)
	UITM_Loadout_PerksEquip_C* ITM_Loadout_PerksEquip; // 0x2c8(0x08)
	UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar; // 0x2d0(0x08)
	UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x2d8(0x08)
	UVerticalBox* VerticalBox_Left; // 0x2e0(0x08)
	UVerticalBox* VerticalBox_Right; // 0x2e8(0x08)
	FMulticastInlineDelegate CharacterSelected; // 0x2f0(0x10)
	TArray<UITM_Loadout_ItemWindow_C*> LoadoutItems; // 0x300(0x10)
	UITM_Loadout_ItemWindow_C* HoveredItem; // 0x310(0x08)
	float FadeInAnimTime; // 0x318(0x04)

	void PlayIntroAnimations();
	void CheckForNotification();
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent MouseEvent);
	void GetClassFromPlayerState(UPlayerCharacterID* SelectedCharacter);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnShown();
	void Refresh();
	void BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(APlayerCharacter* Character);
	void Stop Ansel();
	void Start Ansel();
	void OnClosed();
	void Refresh Loadout Items();
	void Setup Loadout Items();
	void OnNewTopWindow();
	void ReceiveSelectCharacterCommand();
	void ReceiveSelectNextCommand();
	void ReceiveSelectPreviousCommand();
	void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature();
	void On Unhovered_Event(UITM_Loadout_ItemWindow_C* Item);
	void On Hovered(UITM_Loadout_ItemWindow_C* Item);
	void Open Item Window(UITM_Loadout_ItemWindow_C* Item);
	void ExecuteUbergraph_MENU_Loadout(int32_t EntryPoint);
	void CharacterSelected__DelegateSignature();
};

