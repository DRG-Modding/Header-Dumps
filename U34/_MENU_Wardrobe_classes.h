// WidgetBlueprintGeneratedClass _MENU_Wardrobe._MENU_Wardrobe_C
// Size: 0x334 (Inherited: 0x270)
struct U_MENU_Wardrobe_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UITM_Wardrobe_ClassSelector_C* ClassSelector; // 0x278(0x08)
	struct UITM_Wardrobe_ItemSelector_C* ItemSelector_Left; // 0x280(0x08)
	struct UITM_Wardrobe_ItemSelector_C* ItemSelector_Right; // 0x288(0x08)
	struct UITM_DragRotateCharacter_C* ITM_DragRotateCharacter; // 0x290(0x08)
	struct UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar; // 0x298(0x08)
	struct UMENU_SpaceRigTemplate_C* MENU_SpaceRig; // 0x2a0(0x08)
	struct UButton* ShuffleButton; // 0x2a8(0x08)
	struct UUI_RandomizeIcon_C* ShuffleIcon; // 0x2b0(0x08)
	struct UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Armor; // 0x2b8(0x08)
	struct UITM_Wardrobe_ItemSlot_Vanity_C* Slot_ArmorColor; // 0x2c0(0x08)
	struct UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Beard; // 0x2c8(0x08)
	struct UITM_Wardrobe_ItemSlot_Vanity_C* Slot_BeardColor; // 0x2d0(0x08)
	struct UITM_Wardrobe_ItemSlot_Vanity_C* Slot_EyeBrows; // 0x2d8(0x08)
	struct UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Head; // 0x2e0(0x08)
	struct UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Moustache; // 0x2e8(0x08)
	struct UITM_Wardrobe_ItemSlot_Vanity_C* Slot_SideBurns; // 0x2f0(0x08)
	struct UITM_Wardrobe_ItemSlot_Vanity_C* Slot_SkinColor; // 0x2f8(0x08)
	struct UITM_Wardrobe_ItemSlot_VictoryMoves_C* Slot_VictoryMoves; // 0x300(0x08)
	struct UVerticalBox* SlotsLeftBox; // 0x308(0x08)
	struct UVerticalBox* SlotsRightBox; // 0x310(0x08)
	struct UPlayerCharacterID* PlayerCharacter; // 0x318(0x08)
	struct TArray<struct UITM_Wardrobe_ItemSlot_Base_C*> ItemSlots; // 0x320(0x10)
	float FadeInAnimTime; // 0x330(0x04)

	void EquipRandomItems(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.EquipRandomItems
	void PlayIntroAnimations(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.PlayIntroAnimations
	void CheckArmorMasteryUnlocks(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.CheckArmorMasteryUnlocks
	void InitSlotColumn(struct UPanelWidget* InBox, struct UITM_Wardrobe_ItemSelector_C* InSelector, bool InLeftSide); // Function _MENU_Wardrobe._MENU_Wardrobe_C.InitSlotColumn
	void RefreshSlots(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.RefreshSlots
	void ReleaseRenderTargets(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.ReleaseRenderTargets
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function _MENU_Wardrobe._MENU_Wardrobe_C.OnKeyUp
	void GetCharacter(struct APlayerCharacter* Character); // Function _MENU_Wardrobe._MENU_Wardrobe_C.GetCharacter
	void BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature
	void ReceiveCloseCommand(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.ReceiveCloseCommand
	void PreConstruct(bool IsDesignTime); // Function _MENU_Wardrobe._MENU_Wardrobe_C.PreConstruct
	void OnShown(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.OnShown
	void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature
	void BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(struct APlayerCharacter* Character); // Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
	void Refresh(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.Refresh
	void SetCharacter(struct UPlayerCharacterID* PlayerCharacter); // Function _MENU_Wardrobe._MENU_Wardrobe_C.SetCharacter
	void OnClosed(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.OnClosed
	void Construct(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.Construct
	void OnEquippedChanged_Event_1(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.OnEquippedChanged_Event_1
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function _MENU_Wardrobe._MENU_Wardrobe_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	void ExecuteUbergraph__MENU_Wardrobe(int32_t EntryPoint); // Function _MENU_Wardrobe._MENU_Wardrobe_C.ExecuteUbergraph__MENU_Wardrobe
};

