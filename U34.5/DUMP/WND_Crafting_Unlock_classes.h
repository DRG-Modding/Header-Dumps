// WidgetBlueprintGeneratedClass WND_Crafting_Unlock.WND_Crafting_Unlock_C
// Size: 0x302 (Inherited: 0x270)
struct UWND_Crafting_Unlock_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* SwitchToEquip; // 0x278(0x08)
	UBasic_ButtonScalable2_C* BTN_No; // 0x280(0x08)
	UBasic_ButtonScalable2_C* BTN_Yes; // 0x288(0x08)
	UBasic_Menu_MinimalWindow_C* buttons; // 0x290(0x08)
	UTextBlock* DATA_ItemName; // 0x298(0x08)
	UHorizontalBox* HorizontalBoxResources; // 0x2a0(0x08)
	UImage* ImageSmoke; // 0x2a8(0x08)
	UITM_MenuBackground_C* ITM_MenuBackground; // 0x2b0(0x08)
	UBasic_Menu_MinimalWindow_C* MainWindow; // 0x2b8(0x08)
	UTextBlock* TXT_Equip; // 0x2c0(0x08)
	UTextBlock* TXT_Purchase; // 0x2c8(0x08)
	UVerticalBox* WindowBox_Buy; // 0x2d0(0x08)
	TScriptInterface<ICraftable> Item; // 0x2d8(0x10)
	AFSDPlayerState* Player; // 0x2e8(0x08)
	UAudioComponent* ShoutAudioComponent; // 0x2f0(0x08)
	APlayerCharacter* Character; // 0x2f8(0x08)
	bool CanCraft; // 0x300(0x01)
	bool IsBuyPopUp; // 0x301(0x01)

	void CreateResources();
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Close();
	void Cancel();
	void Select();
	void DoEquipMenu();
	void PreConstruct(bool IsDesignTime);
	void Show(TScriptInterface<ICraftable> Item, AFSDPlayerState* Player, APlayerCharacter* Character);
	void ExecuteUbergraph_WND_Crafting_Unlock(int32_t EntryPoint);
};

