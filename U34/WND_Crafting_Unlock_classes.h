// WidgetBlueprintGeneratedClass WND_Crafting_Unlock.WND_Crafting_Unlock_C
// Size: 0x302 (Inherited: 0x270)
struct UWND_Crafting_Unlock_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* SwitchToEquip; // 0x278(0x08)
	struct UBasic_ButtonScalable2_C* BTN_No; // 0x280(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Yes; // 0x288(0x08)
	struct UBasic_Menu_MinimalWindow_C* buttons; // 0x290(0x08)
	struct UTextBlock* DATA_ItemName; // 0x298(0x08)
	struct UHorizontalBox* HorizontalBoxResources; // 0x2a0(0x08)
	struct UImage* ImageSmoke; // 0x2a8(0x08)
	struct UITM_MenuBackground_C* ITM_MenuBackground; // 0x2b0(0x08)
	struct UBasic_Menu_MinimalWindow_C* MainWindow; // 0x2b8(0x08)
	struct UTextBlock* TXT_Equip; // 0x2c0(0x08)
	struct UTextBlock* TXT_Purchase; // 0x2c8(0x08)
	struct UVerticalBox* WindowBox_Buy; // 0x2d0(0x08)
	struct TScriptInterface<None> Item; // 0x2d8(0x10)
	struct AFSDPlayerState* Player; // 0x2e8(0x08)
	struct UAudioComponent* ShoutAudioComponent; // 0x2f0(0x08)
	struct APlayerCharacter* Character; // 0x2f8(0x08)
	bool CanCraft; // 0x300(0x01)
	bool IsBuyPopUp; // 0x301(0x01)

	void CreateResources(); // Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.CreateResources
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.OnKeyUp
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void Close(); // Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Close
	void Cancel(); // Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Cancel
	void Select(); // Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Select
	void DoEquipMenu(); // Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.DoEquipMenu
	void PreConstruct(bool IsDesignTime); // Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.PreConstruct
	void Show(struct TScriptInterface<None> Item, struct AFSDPlayerState* Player, struct APlayerCharacter* Character); // Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Show
	void ExecuteUbergraph_WND_Crafting_Unlock(int32_t EntryPoint); // Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.ExecuteUbergraph_WND_Crafting_Unlock
};

