// WidgetBlueprintGeneratedClass ITM_LoadoutSelectorBar.ITM_LoadoutSelectorBar_C
// Size: 0x2a1 (Inherited: 0x230)
struct UITM_LoadoutSelectorBar_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UHorizontalBox* HorizontalBox_101; // 0x238(0x08)
	UITM_CharacterIcon_C* ITM_CharacterIcon; // 0x240(0x08)
	UITM_LoadoutIconSelector_C* ITM_LoadoutIconSelector; // 0x248(0x08)
	UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_1; // 0x250(0x08)
	UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_2; // 0x258(0x08)
	UITM_LoadoutSelectButton_C* ITM_LoadoutSelectButton_3; // 0x260(0x08)
	FMulticastInlineDelegate NewLoadoutSelected; // 0x268(0x10)
	UPlayerCharacterID* CharacterClass; // 0x278(0x08)
	TArray<UITM_LoadoutSelectButton_C*> LoadoutButtons; // 0x280(0x10)
	UITM_LoadoutSelectButton_C* SelectedLoadoutButton; // 0x290(0x08)
	UBasic_ToolTip_HeadlineAndText_C* HoverTooltipWidget; // 0x298(0x08)
	bool CanSwitchIcon; // 0x2a0(0x01)

	UWidget* GetToolTipWidget();
	void SetData(UPlayerCharacterID* CharacterClass);
	void SetSelected(int32_t Index);
	void BndEvt__Itm_LoadoutSelectButton_0_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(UITM_LoadoutSelectButton_C* Button);
	void BndEvt__Itm_LoadoutSelectButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(UITM_LoadoutSelectButton_C* Button);
	void BndEvt__Itm_LoadoutSelectButton_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(UITM_LoadoutSelectButton_C* Button);
	void BndEvt__ITM_LoadoutIconSelector_K2Node_ComponentBoundEvent_6_OnIconSelected__DelegateSignature(UTexture2D* Texture, int32_t ImageIndex);
	void SelectPressed(UITM_LoadoutSelectButton_C* Button, int32_t Index);
	void SetLoadoutIcon(UITM_LoadoutSelectButton_C* Button, int32_t Index);
	void RefreshLoadout();
	void SetSelectorVisible(bool IsVisible);
	void ExecuteUbergraph_ITM_LoadoutSelectorBar(int32_t EntryPoint);
	void NewLoadoutSelected__DelegateSignature();
};

