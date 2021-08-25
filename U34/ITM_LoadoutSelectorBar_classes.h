// WidgetBlueprintGeneratedClass ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C
// Size: 0x2a1 (Inherited: 0x230)
struct UITM_LoadoutSelectorBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UHorizontalBox* HorizontalBox_101; // 0x238(0x08)
	struct UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x240(0x08)
	struct UITM_LoadoutIconSelector_C* ITM_LoadoutIconSelector; // 0x248(0x08)
	struct UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_1; // 0x250(0x08)
	struct UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_2; // 0x258(0x08)
	struct UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_3; // 0x260(0x08)
	struct FMulticastInlineDelegate NewLoadoutSelected; // 0x268(0x10)
	struct UPlayerCharacterID* CharacterClass; // 0x278(0x08)
	struct TArray<struct UITM_LoadoutSelectButton_C*> LoadoutButtons; // 0x280(0x10)
	struct UITM_LoadoutSelectButton_C* SelectedLoadoutButton; // 0x290(0x08)
	struct UBasic_ToolTip_HeadlineAndText_C* HoverTooltipWidget; // 0x298(0x08)
	bool CanSwitchIcon; // 0x2a0(0x01)

	struct UWidget* GetToolTipWidget(); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.GetToolTipWidget
	void SetData(struct UPlayerCharacterID* CharacterClass); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetData
	void SetSelected(int32_t Index); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelected
	void BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct UITM_LoadoutSelectButton_C* Button); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	void BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct UITM_LoadoutSelectButton_C* Button); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	void BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct UITM_LoadoutSelectButton_C* Button); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	void BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature(struct UTexture2D* Texture, int32_t ImageIndex); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature
	void SelectPressed(struct UITM_LoadoutSelectButton_C* Button, int32_t Index); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SelectPressed
	void SetLoadoutIcon(struct UITM_LoadoutSelectButton_C* Button, int32_t Index); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetLoadoutIcon
	void RefreshLoadout(); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.RefreshLoadout
	void SetSelectorVisible(bool IsVisible); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.SetSelectorVisible
	void ExecuteUbergraph_ITM_LoadoutSelectorBar(int32_t EntryPoint); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.ExecuteUbergraph_ITM_LoadoutSelectorBar
	void NewLoadoutSelected__DelegateSignature(); // Function ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C.NewLoadoutSelected__DelegateSignature
};

