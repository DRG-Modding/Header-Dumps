// WidgetBlueprintGeneratedClass ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C
// Size: 0x2c9 (Inherited: 0x230)
struct UITM_CharacterSwitcherBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x238(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1; // 0x240(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Switch; // 0x248(0x08)
	struct UTextBlock* DATA_CharacterLevel; // 0x250(0x08)
	struct UTextBlock* DATA_ClassName; // 0x258(0x08)
	struct UBorder* HeaderBG; // 0x260(0x08)
	struct UImage* Image_1; // 0x268(0x08)
	struct UImage* Image_2; // 0x270(0x08)
	struct UImage* Image_4; // 0x278(0x08)
	struct UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon; // 0x280(0x08)
	struct UBasic_ScrollArrow_C* ScrollLeft; // 0x288(0x08)
	struct UBasic_ScrollArrow_C* ScrollRight; // 0x290(0x08)
	struct FText HeaderText; // 0x298(0x18)
	struct UPlayerCharacterID* CurrentCharacter; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnCharacterChanged; // 0x2b8(0x10)
	enum class ECharselectionCameraLocation SelectionType; // 0x2c8(0x01)

	void CheckArmorUnlocks(); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CheckArmorUnlocks
	void GotoNext(bool Next, bool PlaySound); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GotoNext
	void SetSwitchButtonState(); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetSwitchButtonState
	void GetPrevCharacter(struct UPlayerCharacterID* Character); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetPrevCharacter
	void GetNextCharacter(struct UPlayerCharacterID* Character); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetNextCharacter
	void GetBPGameState(struct ABP_GameState_C* GameState); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.GetBPGameState
	void SetCharacterInfo(struct UPlayerCharacterID* playerClass); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetCharacterInfo
	void SelectPrev(); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectPrev
	void SelectNext(); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SelectNext
	void SwitchToCharacter(); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SwitchToCharacter
	void Construct(); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.Construct
	void CharacterChanged(struct APlayerCharacter* NewCharacter); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.CharacterChanged
	void BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	void BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	void UpdateNotification(); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.UpdateNotification
	void SetData(struct UPlayerCharacterID* Character); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.SetData
	void PreConstruct(bool IsDesignTime); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.PreConstruct
	void ExecuteUbergraph_ITM_CharacterSwitcherBar(int32_t EntryPoint); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.ExecuteUbergraph_ITM_CharacterSwitcherBar
	void OnCharacterChanged__DelegateSignature(struct APlayerCharacter* Character); // Function ITM_CharacterSwitcherBar.ITM_CharacterSwitcherBar_C.OnCharacterChanged__DelegateSignature
};

