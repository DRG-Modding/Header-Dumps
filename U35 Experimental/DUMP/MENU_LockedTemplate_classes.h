// WidgetBlueprintGeneratedClass MENU_LockedTemplate.MENU_LockedTemplate_C
// Size: 0x2a0 (Inherited: 0x230)
struct UMENU_LockedTemplate_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimLock; // 0x238(0x08)
	UNamedSlot* BodySlot; // 0x240(0x08)
	URichTextBlock* BodyText; // 0x248(0x08)
	UBasic_ButtonScalable2_C* CloseButton; // 0x250(0x08)
	UTextBlock* HeaderText; // 0x258(0x08)
	UImage* ImageLock; // 0x260(0x08)
	UITM_MenuBackground_C* ITM_MenuBackground; // 0x268(0x08)
	ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown; // 0x270(0x08)
	bool Locked; // 0x278(0x01)
	FText Message; // 0x280(0x18)
	UTexture2D* LockIcon; // 0x298(0x08)

	void GetIsUnlocked(bool Locked);
	void GetIsLocked(bool Locked);
	void RequireOnePromotedCharacter(bool Locked);
	void SetLockIcon(UTexture2D* Texture);
	void SetMessaqe(FText InText);
	void SetMenuLocked(bool IsLocked, bool Locked);
	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Close();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void LockAnimFinished();
	void ExecuteUbergraph_MENU_LockedTemplate(int32_t EntryPoint);
};

