// WidgetBlueprintGeneratedClass WND_DiscordCommunity.WND_DiscordCommunity_C
// Size: 0x2b0 (Inherited: 0x270)
struct UWND_DiscordCommunity_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UBasic_ButtonScalable_C* Basic_ButtonScalable; // 0x278(0x08)
	struct UBasic_ButtonScalable_C* Basic_ButtonScalable_C_1; // 0x280(0x08)
	struct UBasic_ButtonScalable_C* Basic_ButtonScalable_C_2; // 0x288(0x08)
	struct UMENU_SpaceRigTemplate_C* MENU_TopBar; // 0x290(0x08)
	struct UScreen_DiscordScreen_C* Screen_DiscordScreen; // 0x298(0x08)
	struct UBasic_ButtonTab_C* ActiveTab; // 0x2a0(0x08)
	struct UCommunityGoal* Goal; // 0x2a8(0x08)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WND_DiscordCommunity.WND_DiscordCommunity_C.OnKeyUp
	void Close Window(); // Function WND_DiscordCommunity.WND_DiscordCommunity_C.Close Window
	void OnShown(); // Function WND_DiscordCommunity.WND_DiscordCommunity_C.OnShown
	void BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WND_DiscordCommunity.WND_DiscordCommunity_C.BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void BndEvt__Basic_ButtonScalable_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WND_DiscordCommunity.WND_DiscordCommunity_C.BndEvt__Basic_ButtonScalable_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void BndEvt__Basic_ButtonScalable_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function WND_DiscordCommunity.WND_DiscordCommunity_C.BndEvt__Basic_ButtonScalable_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	void ExecuteUbergraph_WND_DiscordCommunity(int32_t EntryPoint); // Function WND_DiscordCommunity.WND_DiscordCommunity_C.ExecuteUbergraph_WND_DiscordCommunity
};

