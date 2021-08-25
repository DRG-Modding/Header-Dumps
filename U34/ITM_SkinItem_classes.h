// WidgetBlueprintGeneratedClass ITM_SkinItem.ITM_SkinItem_C
// Size: 0x2d3 (Inherited: 0x230)
struct UITM_SkinItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimIntro; // 0x238(0x08)
	struct UWidgetAnimation* AnimPing; // 0x240(0x08)
	struct UWidgetAnimation* AnimUnlocked; // 0x248(0x08)
	struct UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon; // 0x250(0x08)
	struct UITM_SkinIcon_C* ITM_SkinIcon; // 0x258(0x08)
	struct UButton* SkinButton; // 0x260(0x08)
	struct UItemSkin* Skin; // 0x268(0x08)
	struct FMulticastInlineDelegate OnSkinClicked; // 0x270(0x10)
	struct AFSDPlayerState* PlayerState; // 0x280(0x08)
	struct UItemID* Item; // 0x288(0x08)
	float Size; // 0x290(0x04)
	char UnknownData_294[0x4]; // 0x294(0x04)
	struct FMulticastInlineDelegate OnHovering; // 0x298(0x10)
	struct FMulticastInlineDelegate OnUnhovering; // 0x2a8(0x10)
	int32_t Index; // 0x2b8(0x04)
	bool Hovered; // 0x2bc(0x01)
	bool PreviewLocked; // 0x2bd(0x01)
	bool PreviewHovered; // 0x2be(0x01)
	bool PreviewEquipped; // 0x2bf(0x01)
	struct FMulticastInlineDelegate OnNotificationRemoved; // 0x2c0(0x10)
	bool IsShowingNotification; // 0x2d0(0x01)
	bool ShowBucket; // 0x2d1(0x01)
	bool IsDefaultItem; // 0x2d2(0x01)

	void SetIsDefaultItem(bool InDefault); // Function ITM_SkinItem.ITM_SkinItem_C.SetIsDefaultItem
	void ClearEventHandlers(); // Function ITM_SkinItem.ITM_SkinItem_C.ClearEventHandlers
	void SetState(struct UItemSkin* InSkin, bool InLocked, bool InHovered, bool InEquipped); // Function ITM_SkinItem.ITM_SkinItem_C.SetState
	bool IsUnlocked(); // Function ITM_SkinItem.ITM_SkinItem_C.IsUnlocked
	void Refresh(); // Function ITM_SkinItem.ITM_SkinItem_C.Refresh
	void BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void Construct(); // Function ITM_SkinItem.ITM_SkinItem_C.Construct
	void Play Intro(float Duration, int32_t Max Columns); // Function ITM_SkinItem.ITM_SkinItem_C.Play Intro
	void BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	void Ping Skin(); // Function ITM_SkinItem.ITM_SkinItem_C.Ping Skin
	void PreConstruct(bool IsDesignTime); // Function ITM_SkinItem.ITM_SkinItem_C.PreConstruct
	void OnAnimUnlockedFinished(); // Function ITM_SkinItem.ITM_SkinItem_C.OnAnimUnlockedFinished
	void RefreshNotificationIcon(float DelayBeforeRefresh); // Function ITM_SkinItem.ITM_SkinItem_C.RefreshNotificationIcon
	void ExecuteUbergraph_ITM_SkinItem(int32_t EntryPoint); // Function ITM_SkinItem.ITM_SkinItem_C.ExecuteUbergraph_ITM_SkinItem
	void OnNotificationRemoved__DelegateSignature(struct UITM_SkinItem_C* Skin); // Function ITM_SkinItem.ITM_SkinItem_C.OnNotificationRemoved__DelegateSignature
	void OnUnhovering__DelegateSignature(struct UITM_SkinItem_C* SkinItem); // Function ITM_SkinItem.ITM_SkinItem_C.OnUnhovering__DelegateSignature
	void OnHovering__DelegateSignature(struct UITM_SkinItem_C* SkinItem); // Function ITM_SkinItem.ITM_SkinItem_C.OnHovering__DelegateSignature
	void OnSkinClicked__DelegateSignature(struct UITM_SkinItem_C* Item); // Function ITM_SkinItem.ITM_SkinItem_C.OnSkinClicked__DelegateSignature
};

