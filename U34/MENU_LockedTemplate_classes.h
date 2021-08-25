// WidgetBlueprintGeneratedClass MENU_LockedTemplate.MENU_LockedTemplate_C
// Size: 0x2a0 (Inherited: 0x230)
struct UMENU_LockedTemplate_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimLock; // 0x238(0x08)
	struct UNamedSlot* BodySlot; // 0x240(0x08)
	struct URichTextBlock* BodyText; // 0x248(0x08)
	struct UBasic_ButtonScalable2_C* CloseButton; // 0x250(0x08)
	struct UTextBlock* HeaderText; // 0x258(0x08)
	struct UImage* ImageLock; // 0x260(0x08)
	struct UITM_MenuBackground_C* ITM_MenuBackground; // 0x268(0x08)
	struct ULobby_BarTop_Countdown_C* Lobby_BarTop_Countdown; // 0x270(0x08)
	bool Locked; // 0x278(0x01)
	char UnknownData_279[0x7]; // 0x279(0x07)
	struct FText Message; // 0x280(0x18)
	struct UTexture2D* LockIcon; // 0x298(0x08)

	void GetIsUnlocked(bool Locked); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.GetIsUnlocked
	void GetIsLocked(bool Locked); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.GetIsLocked
	void RequireOnePromotedCharacter(bool Locked); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.RequireOnePromotedCharacter
	void SetLockIcon(struct UTexture2D* Texture); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetLockIcon
	void SetMessaqe(struct FText InText); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetMessaqe
	void SetMenuLocked(bool IsLocked, bool Locked); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.SetMenuLocked
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.OnKeyUp
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void Close(); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.Close
	void Construct(); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.Construct
	void PreConstruct(bool IsDesignTime); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.PreConstruct
	void LockAnimFinished(); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.LockAnimFinished
	void ExecuteUbergraph_MENU_LockedTemplate(int32_t EntryPoint); // Function MENU_LockedTemplate.MENU_LockedTemplate_C.ExecuteUbergraph_MENU_LockedTemplate
};

