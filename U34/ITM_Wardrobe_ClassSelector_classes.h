// WidgetBlueprintGeneratedClass ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C
// Size: 0x2da (Inherited: 0x230)
struct UITM_Wardrobe_ClassSelector_C : UUserWidget {
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
	struct UITM_ItemUnlockedIcon_C* NotificationIcon; // 0x280(0x08)
	struct UBasic_ScrollArrow_C* ScrollLeft; // 0x288(0x08)
	struct UBasic_ScrollArrow_C* ScrollRight; // 0x290(0x08)
	struct FText HeaderText; // 0x298(0x18)
	struct UPlayerCharacterID* CurrentCharacter; // 0x2b0(0x08)
	struct FMulticastInlineDelegate OnCharacterChanged; // 0x2b8(0x10)
	enum class ECharselectionCameraLocation SelectionType; // 0x2c8(0x01)
	char UnknownData_2C9[0x7]; // 0x2c9(0x07)
	struct UObject* CategoryID; // 0x2d0(0x08)
	bool UpdatePreviewCharacter; // 0x2d8(0x01)
	bool ShowOtherClassesNotifications; // 0x2d9(0x01)

	void SetSwitchButtonState(); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetSwitchButtonState
	void GetPrevCharacter(struct UPlayerCharacterID* Character); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetPrevCharacter
	void GetNextCharacter(struct UPlayerCharacterID* Character); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetNextCharacter
	void GetBPGameState(struct ABP_GameState_C* GameState); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.GetBPGameState
	void SetCharacterInfo(struct UPlayerCharacterID* characterID); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetCharacterInfo
	void PreConstruct(bool IsDesignTime); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.PreConstruct
	void SetData(struct UPlayerCharacterID* Character, struct UObject* CategoryID); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SetData
	void BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	void BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	void SelectPrev(); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SelectPrev
	void SelectNext(); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SelectNext
	void SwitchToCharacter(); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.SwitchToCharacter
	void Construct(); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.Construct
	void CharacterChanged(struct APlayerCharacter* NewCharacter); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.CharacterChanged
	void BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void UpdateNotification(); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.UpdateNotification
	void ExecuteUbergraph_ITM_Wardrobe_ClassSelector(int32_t EntryPoint); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.ExecuteUbergraph_ITM_Wardrobe_ClassSelector
	void OnCharacterChanged__DelegateSignature(struct APlayerCharacter* Character); // Function ITM_Wardrobe_ClassSelector.ITM_Wardrobe_ClassSelector_C.OnCharacterChanged__DelegateSignature
};

