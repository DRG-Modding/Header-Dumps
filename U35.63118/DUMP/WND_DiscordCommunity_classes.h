// WidgetBlueprintGeneratedClass WND_DiscordCommunity.WND_DiscordCommunity_C
// Size: 0x2b0 (Inherited: 0x270)
struct UWND_DiscordCommunity_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UBasic_ButtonScalable_C* Basic_ButtonScalable; // 0x278(0x08)
	UBasic_ButtonScalable_C* Basic_ButtonScalable_C_1; // 0x280(0x08)
	UBasic_ButtonScalable_C* Basic_ButtonScalable_C_2; // 0x288(0x08)
	UMENU_SpaceRigTemplate_C* MENU_TopBar; // 0x290(0x08)
	UScreen_DiscordScreen_C* Screen_DiscordScreen; // 0x298(0x08)
	UBasic_ButtonTab_C* ActiveTab; // 0x2a0(0x08)
	UCommunityGoal* Goal; // 0x2a8(0x08)

	FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	void Close Window();
	void OnShown();
	void BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__Basic_ButtonScalable_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__Basic_ButtonScalable_C_1_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WND_DiscordCommunity(int32_t EntryPoint);
};

