// WidgetBlueprintGeneratedClass HUD_TutorialWidget.HUD_TutorialWidget_C
// Size: 0x291 (Inherited: 0x258)
struct UHUD_TutorialWidget_C : UTutorialWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	UWidgetAnimation* Exit; // 0x260(0x08)
	UITM_BasicTutorialWindow_C* ITM_BasicTutorialWindow; // 0x268(0x08)
	float AnimationSpeed; // 0x270(0x04)
	FText DefaultHeader; // 0x278(0x18)
	bool IsChangingHintText; // 0x290(0x01)

	void OnShow(FText Text, FText Title, FText TaskText, UTexture2D* Image);
	void Construct();
	void OnHide(bool watched);
	void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_RemoveAnimationFinished__DelegateSignature();
	void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_CompleteAnimationFinished__DelegateSignature();
	void ContinueChange();
	void ExecuteUbergraph_HUD_TutorialWidget(int32_t EntryPoint);
};

