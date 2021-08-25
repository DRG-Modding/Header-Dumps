// WidgetBlueprintGeneratedClass ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C
// Size: 0x2a0 (Inherited: 0x230)
struct UITM_ItemUnlockedIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* OutroAnim; // 0x238(0x08)
	struct UWidgetAnimation* Ping; // 0x240(0x08)
	struct UImage* UnlockedIcon; // 0x248(0x08)
	bool MatchChildNotifications; // 0x250(0x01)
	char UnknownData_251[0x7]; // 0x251(0x07)
	struct TArray<struct UObject*> IDArray; // 0x258(0x10)
	bool HasNotification; // 0x268(0x01)
	char UnknownData_269[0x7]; // 0x269(0x07)
	struct FMulticastInlineDelegate OnNotificationRemoved; // 0x270(0x10)
	struct TArray<struct UITM_ItemUnlockedIcon_C*> Children; // 0x280(0x10)
	struct FMulticastInlineDelegate OnChanged; // 0x290(0x10)

	void Refresh(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.Refresh
	void ClearChildren(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ClearChildren
	void ChildNotificationChanged(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ChildNotificationChanged
	void AddChildNotification(struct UITM_ItemUnlockedIcon_C* ChildIcon); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.AddChildNotification
	void RemoveNotification(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.RemoveNotification
	void SetItemIDArray(struct TArray<struct UObject*> ObjectsWithID, bool MatchChildNotifications); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetItemIDArray
	void SetVisible(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.SetVisible
	void HideIcon(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.HideIcon
	void OnAnimFinished(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnAnimFinished
	void ExecuteUbergraph_ITM_ItemUnlockedIcon(int32_t EntryPoint); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ExecuteUbergraph_ITM_ItemUnlockedIcon
	void OnChanged__DelegateSignature(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnChanged__DelegateSignature
	void OnNotificationRemoved__DelegateSignature(); // Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.OnNotificationRemoved__DelegateSignature
};

