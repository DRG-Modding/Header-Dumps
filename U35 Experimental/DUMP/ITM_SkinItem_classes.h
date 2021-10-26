// WidgetBlueprintGeneratedClass ITM_SkinItem.ITM_SkinItem_C
// Size: 0x2d3 (Inherited: 0x230)
struct UITM_SkinItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* AnimIntro; // 0x238(0x08)
	UWidgetAnimation* AnimPing; // 0x240(0x08)
	UWidgetAnimation* AnimUnlocked; // 0x248(0x08)
	UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon; // 0x250(0x08)
	UITM_SkinIcon_C* ITM_SkinIcon; // 0x258(0x08)
	UButton* SkinButton; // 0x260(0x08)
	UItemSkin* Skin; // 0x268(0x08)
	FMulticastInlineDelegate OnSkinClicked; // 0x270(0x10)
	AFSDPlayerState* PlayerState; // 0x280(0x08)
	UItemID* Item; // 0x288(0x08)
	float Size; // 0x290(0x04)
	FMulticastInlineDelegate OnHovering; // 0x298(0x10)
	FMulticastInlineDelegate OnUnhovering; // 0x2a8(0x10)
	int32_t Index; // 0x2b8(0x04)
	bool Hovered; // 0x2bc(0x01)
	bool PreviewLocked; // 0x2bd(0x01)
	bool PreviewHovered; // 0x2be(0x01)
	bool PreviewEquipped; // 0x2bf(0x01)
	FMulticastInlineDelegate OnNotificationRemoved; // 0x2c0(0x10)
	bool IsShowingNotification; // 0x2d0(0x01)
	bool ShowBucket; // 0x2d1(0x01)
	bool IsDefaultItem; // 0x2d2(0x01)

	void SetIsDefaultItem(bool InDefault);
	void ClearEventHandlers();
	void SetState(UItemSkin* InSkin, bool InLocked, bool InHovered, bool InEquipped);
	bool IsUnlocked();
	void Refresh();
	void BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void Play Intro(float Duration, int32_t Max Columns);
	void BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void Ping Skin();
	void PreConstruct(bool IsDesignTime);
	void OnAnimUnlockedFinished();
	void RefreshNotificationIcon(float DelayBeforeRefresh);
	void ExecuteUbergraph_ITM_SkinItem(int32_t EntryPoint);
	void OnNotificationRemoved__DelegateSignature(UITM_SkinItem_C* Skin);
	void OnUnhovering__DelegateSignature(UITM_SkinItem_C* SkinItem);
	void OnHovering__DelegateSignature(UITM_SkinItem_C* SkinItem);
	void OnSkinClicked__DelegateSignature(UITM_SkinItem_C* Item);
};

