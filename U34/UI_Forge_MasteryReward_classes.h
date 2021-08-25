// WidgetBlueprintGeneratedClass UI_Forge_MasteryReward.UI_Forge_MasteryReward_C
// Size: 0x268 (Inherited: 0x230)
struct UUI_Forge_MasteryReward_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UWidgetAnimation* AnimIntro; // 0x238(0x08)
	struct UITM_BigButton_C* ContinueButton; // 0x240(0x08)
	struct UImage* NoiseImage; // 0x248(0x08)
	struct UUI_Forge_Details_C* UI_Forge_Details; // 0x250(0x08)
	struct FMulticastInlineDelegate OnFinished; // 0x258(0x10)

	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UI_Forge_MasteryReward.UI_Forge_MasteryReward_C.OnKeyUp
	void Show(struct USchematic* InSchematic); // Function UI_Forge_MasteryReward.UI_Forge_MasteryReward_C.Show
	void Construct(); // Function UI_Forge_MasteryReward.UI_Forge_MasteryReward_C.Construct
	void OnIntroStarted(); // Function UI_Forge_MasteryReward.UI_Forge_MasteryReward_C.OnIntroStarted
	void OnIntroFinished(); // Function UI_Forge_MasteryReward.UI_Forge_MasteryReward_C.OnIntroFinished
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function UI_Forge_MasteryReward.UI_Forge_MasteryReward_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void ClickContinue(); // Function UI_Forge_MasteryReward.UI_Forge_MasteryReward_C.ClickContinue
	void ExecuteUbergraph_UI_Forge_MasteryReward(int32_t EntryPoint); // Function UI_Forge_MasteryReward.UI_Forge_MasteryReward_C.ExecuteUbergraph_UI_Forge_MasteryReward
	void OnFinished__DelegateSignature(); // Function UI_Forge_MasteryReward.UI_Forge_MasteryReward_C.OnFinished__DelegateSignature
};

