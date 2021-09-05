// WidgetBlueprintGeneratedClass UI_MissionReadOut_Base.UI_MissionReadOut_Base_C
// Size: 0x261 (Inherited: 0x230)
struct UUI_MissionReadOut_Base_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UNamedSlot* ContentSlot; // 0x238(0x08)
	ULCD_MissionReadout_NoMissionSelected_C* LCD_MissionReadout_NoMissionSelected; // 0x240(0x08)
	UWidgetSwitcher* MissionSwitcher; // 0x248(0x08)
	FMulticastInlineDelegate OnMissionSelected; // 0x250(0x10)
	bool ShowDeepDives; // 0x260(0x01)

	void CanShowMissionType(UGeneratedMission* InMission, bool CanShow);
	void Construct();
	void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
	void ExecuteUbergraph_UI_MissionReadOut_Base(int32_t EntryPoint);
	void OnMissionSelected__DelegateSignature(UGeneratedMission* InMission);
};

