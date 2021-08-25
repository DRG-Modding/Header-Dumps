// WidgetBlueprintGeneratedClass UI_MissionReadOut_Base.UI_MissionReadOut_Base_C
// Size: 0x261 (Inherited: 0x230)
struct UUI_MissionReadOut_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UNamedSlot* ContentSlot; // 0x238(0x08)
	struct ULCD_MissionReadout_NoMissionSelected_C* LCD_MissionReadout_NoMissionSelected; // 0x240(0x08)
	struct UWidgetSwitcher* MissionSwitcher; // 0x248(0x08)
	struct FMulticastInlineDelegate OnMissionSelected; // 0x250(0x10)
	bool ShowDeepDives; // 0x260(0x01)

	void CanShowMissionType(struct UGeneratedMission* InMission, bool CanShow); // Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.CanShowMissionType
	void Construct(); // Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.Construct
	void OnGeneratedMissionChanged(struct UGeneratedMission* OutGeneratedMission); // Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.OnGeneratedMissionChanged
	void ExecuteUbergraph_UI_MissionReadOut_Base(int32_t EntryPoint); // Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.ExecuteUbergraph_UI_MissionReadOut_Base
	void OnMissionSelected__DelegateSignature(struct UGeneratedMission* InMission); // Function UI_MissionReadOut_Base.UI_MissionReadOut_Base_C.OnMissionSelected__DelegateSignature
};

