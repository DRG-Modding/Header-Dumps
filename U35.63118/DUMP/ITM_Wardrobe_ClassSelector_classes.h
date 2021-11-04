// WidgetBlueprintGeneratedClass ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C
// Size: 0x2da (Inherited: 0x230)
struct UITM_Wardrobe_ClassSelector_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1; // 0x240(0x08)
	UBasic_ButtonScalable2_C* BTN_Switch; // 0x248(0x08)
	UTextBlock* DATA_CharacterLevel; // 0x250(0x08)
	UTextBlock* DATA_ClassName; // 0x258(0x08)
	UBorder* HeaderBG; // 0x260(0x08)
	UImage* Image_4; // 0x268(0x08)
	UITM_ItemUnlockedIcon_C* NotificationIcon; // 0x270(0x08)
	UBasic_ScrollArrow_C* ScrollLeft; // 0x278(0x08)
	UBasic_ScrollArrow_C* ScrollRight; // 0x280(0x08)
	UUI_AdvancedLabel_C* UI_AdvancedLabel_2; // 0x288(0x08)
	UUI_AdvancedLabel_C* UI_AdvancedLabel_165; // 0x290(0x08)
	FText HeaderText; // 0x298(0x18)
	UPlayerCharacterID* CurrentCharacter; // 0x2b0(0x08)
	FMulticastInlineDelegate OnCharacterChanged; // 0x2b8(0x10)
	enum class ECharselectionCameraLocation SelectionType; // 0x2c8(0x01)
	UObject* CategoryID; // 0x2d0(0x08)
	bool UpdatePreviewCharacter; // 0x2d8(0x01)
	bool ShowOtherClassesNotifications; // 0x2d9(0x01)

	void SetSwitchButtonState();
	void GetPrevCharacter(UPlayerCharacterID* Character);
	void GetNextCharacter(UPlayerCharacterID* Character);
	void GetBPGameState(ABP_GameState_C* GameState);
	void SetCharacterInfo(UPlayerCharacterID* characterID);
	void PreConstruct(bool IsDesignTime);
	void SetData(UPlayerCharacterID* Character, UObject* CategoryID);
	void BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void SelectPrev();
	void SelectNext();
	void SwitchToCharacter();
	void Construct();
	void CharacterChanged(APlayerCharacter* NewCharacter);
	void BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void UpdateNotification();
	void ExecuteUbergraph_ITM_Wardrobe_ClassSelector(int32_t EntryPoint);
	void OnCharacterChanged__DelegateSignature(APlayerCharacter* Character);
};

