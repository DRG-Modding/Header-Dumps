// WidgetBlueprintGeneratedClass ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C
// Size: 0x2a0 (Inherited: 0x230)
struct UITM_ItemUnlockedIcon_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* OutroAnim; // 0x238(0x08)
	UWidgetAnimation* Ping; // 0x240(0x08)
	UImage* UnlockedIcon; // 0x248(0x08)
	bool MatchChildNotifications; // 0x250(0x01)
	TArray<UObject*> IDArray; // 0x258(0x10)
	bool HasNotification; // 0x268(0x01)
	FMulticastInlineDelegate OnNotificationRemoved; // 0x270(0x10)
	TArray<UITM_ItemUnlockedIcon_C*> Children; // 0x280(0x10)
	FMulticastInlineDelegate OnChanged; // 0x290(0x10)

	void Refresh();
	void ClearChildren();
	void ChildNotificationChanged();
	void AddChildNotification(UITM_ItemUnlockedIcon_C* ChildIcon);
	void RemoveNotification();
	void SetItemIDArray(TArray<UObject*> ObjectsWithID, bool MatchChildNotifications);
	void SetVisible();
	void HideIcon();
	void OnAnimFinished();
	void ExecuteUbergraph_ITM_ItemUnlockedIcon(int32_t EntryPoint);
	void OnChanged__DelegateSignature();
	void OnNotificationRemoved__DelegateSignature();
};

