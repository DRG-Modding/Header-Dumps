// WidgetBlueprintGeneratedClass _MENU_Wardrobe._MENU_Wardrobe_C
// Size: 0x33c (Inherited: 0x270)
struct U_MENU_Wardrobe_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UITM_Wardrobe_ClassSelector_C* ClassSelector; // 0x278(0x08)
	UITM_Wardrobe_ItemSelector_C* ItemSelector_Left; // 0x280(0x08)
	UITM_Wardrobe_ItemSelector_C* ItemSelector_Right; // 0x288(0x08)
	UITM_DragRotateCharacter_C* ITM_DragRotateCharacter; // 0x290(0x08)
	UITM_LoadoutSelectorBar_C* ITM_LoadoutSelectorBar; // 0x298(0x08)
	UMENU_SpaceRigTemplate_C* MENU_SpaceRig; // 0x2a0(0x08)
	USafeZone* PlatformSafeZone; // 0x2a8(0x08)
	UButton* ShuffleButton; // 0x2b0(0x08)
	UUI_RandomizeIcon_C* ShuffleIcon; // 0x2b8(0x08)
	UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Armor; // 0x2c0(0x08)
	UITM_Wardrobe_ItemSlot_Vanity_C* Slot_ArmorColor; // 0x2c8(0x08)
	UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Beard; // 0x2d0(0x08)
	UITM_Wardrobe_ItemSlot_Vanity_C* Slot_BeardColor; // 0x2d8(0x08)
	UITM_Wardrobe_ItemSlot_Vanity_C* Slot_EyeBrows; // 0x2e0(0x08)
	UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Head; // 0x2e8(0x08)
	UITM_Wardrobe_ItemSlot_Vanity_C* Slot_Moustache; // 0x2f0(0x08)
	UITM_Wardrobe_ItemSlot_Vanity_C* Slot_SideBurns; // 0x2f8(0x08)
	UITM_Wardrobe_ItemSlot_Vanity_C* Slot_SkinColor; // 0x300(0x08)
	UITM_Wardrobe_ItemSlot_VictoryMoves_C* Slot_VictoryMoves; // 0x308(0x08)
	UVerticalBox* SlotsLeftBox; // 0x310(0x08)
	UVerticalBox* SlotsRightBox; // 0x318(0x08)
	UPlayerCharacterID* PlayerCharacter; // 0x320(0x08)
	TArray<UITM_Wardrobe_ItemSlot_Base_C*> ItemSlots; // 0x328(0x10)
	float FadeInAnimTime; // 0x338(0x04)

	void EquipRandomItems();
	void PlayIntroAnimations();
	void CheckArmorMasteryUnlocks();
	void InitSlotColumn(UPanelWidget* InBox, UITM_Wardrobe_ItemSelector_C* InSelector, bool InLeftSide);
	void RefreshSlots();
	void ReleaseRenderTargets();
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void GetCharacter(APlayerCharacter* Character);
	void BndEvt__MENU_SpaceRig_K2Node_ComponentBoundEvent_0_OnClosedClicked__DelegateSignature();
	void ReceiveCloseCommand();
	void PreConstruct(bool IsDesignTime);
	void OnShown();
	void BndEvt__ITM_LoadoutSelectorBar_K2Node_ComponentBoundEvent_2_NewLoadoutSelected__DelegateSignature();
	void BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(APlayerCharacter* Character);
	void Refresh();
	void SetCharacter(UPlayerCharacterID* PlayerCharacter);
	void OnClosed();
	void Construct();
	void OnEquippedChanged_Event_1();
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph__MENU_Wardrobe(int32_t EntryPoint);
};

