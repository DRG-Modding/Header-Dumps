// WidgetBlueprintGeneratedClass MENU_Loadout.MENU_Loadout_C
// Size: 0x31c (Inherited: 0x270)
struct UMENU_Loadout_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UITM_DragRotateCharacter_C* ITM_DragRotateCharacter; // 0x278(0x08)
	struct UITM_CharacterSwitcherBar_C* ITM_Loadout_CharSelect; // 0x280(0x08)
	struct UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow; // 0x288(0x08)
	struct UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_1; // 0x290(0x08)
	struct UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_2; // 0x298(0x08)
	struct UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_3; // 0x2a0(0x08)
	struct UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_14; // 0x2a8(0x08)
	struct UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_15; // 0x2b0(0x08)
	struct UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_16; // 0x2b8(0x08)
	struct UITM_Loadout_ItemWindow_C* ITM_Loadout_ItemWindow_17; // 0x2c0(0x08)
	struct UITM_Loadout_PerksEquip_C* ITM_Loadout_PerksEquip; // 0x2c8(0x08)
	struct UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar; // 0x2d0(0x08)
	struct UMENU_SpaceRigTemplate_C* MENU_SpaceRigTemplate; // 0x2d8(0x08)
	struct UVerticalBox* VerticalBox_Left; // 0x2e0(0x08)
	struct UVerticalBox* VerticalBox_Right; // 0x2e8(0x08)
	struct FMulticastInlineDelegate CharacterSelected; // 0x2f0(0x10)
	struct TArray<struct UITM_Loadout_ItemWindow_C*> LoadoutItems; // 0x300(0x10)
	struct UITM_Loadout_ItemWindow_C* HoveredItem; // 0x310(0x08)
	float FadeInAnimTime; // 0x318(0x04)

	void PlayIntroAnimations(); // Function MENU_Loadout.MENU_Loadout_C.PlayIntroAnimations
	void CheckForNotification(); // Function MENU_Loadout.MENU_Loadout_C.CheckForNotification
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function MENU_Loadout.MENU_Loadout_C.OnKeyUp
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function MENU_Loadout.MENU_Loadout_C.OnMouseWheel
	void GetClassFromPlayerState(struct UPlayerCharacterID* SelectedCharacter); // Function MENU_Loadout.MENU_Loadout_C.GetClassFromPlayerState
	void PreConstruct(bool IsDesignTime); // Function MENU_Loadout.MENU_Loadout_C.PreConstruct
	void Construct(); // Function MENU_Loadout.MENU_Loadout_C.Construct
	void OnShown(); // Function MENU_Loadout.MENU_Loadout_C.OnShown
	void Refresh(); // Function MENU_Loadout.MENU_Loadout_C.Refresh
	void BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(struct APlayerCharacter* Character); // Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
	void Stop Ansel(); // Function MENU_Loadout.MENU_Loadout_C.Stop Ansel
	void Start Ansel(); // Function MENU_Loadout.MENU_Loadout_C.Start Ansel
	void OnClosed(); // Function MENU_Loadout.MENU_Loadout_C.OnClosed
	void Refresh Loadout Items(); // Function MENU_Loadout.MENU_Loadout_C.Refresh Loadout Items
	void Setup Loadout Items(); // Function MENU_Loadout.MENU_Loadout_C.Setup Loadout Items
	void OnNewTopWindow(); // Function MENU_Loadout.MENU_Loadout_C.OnNewTopWindow
	void ReceiveSelectCharacterCommand(); // Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectCharacterCommand
	void ReceiveSelectNextCommand(); // Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectNextCommand
	void ReceiveSelectPreviousCommand(); // Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectPreviousCommand
	void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature(); // Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_1_NewLoadoutSelected__DelegateSignature
	void On Unhovered_Event(struct UITM_Loadout_ItemWindow_C* Item); // Function MENU_Loadout.MENU_Loadout_C.On Unhovered_Event
	void On Hovered(struct UITM_Loadout_ItemWindow_C* Item); // Function MENU_Loadout.MENU_Loadout_C.On Hovered
	void Open Item Window(struct UITM_Loadout_ItemWindow_C* Item); // Function MENU_Loadout.MENU_Loadout_C.Open Item Window
	void ExecuteUbergraph_MENU_Loadout(int32_t EntryPoint); // Function MENU_Loadout.MENU_Loadout_C.ExecuteUbergraph_MENU_Loadout
	void CharacterSelected__DelegateSignature(); // Function MENU_Loadout.MENU_Loadout_C.CharacterSelected__DelegateSignature
};

