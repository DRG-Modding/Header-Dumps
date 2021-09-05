// WidgetBlueprintGeneratedClass W_TutorialContent_Base.W_TutorialContent_Base_C
// Size: 0x278 (Inherited: 0x260)
struct UW_TutorialContent_Base_C : UTutorialContentWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	UWidgetAnimation* MainObjectiveAnim; // 0x268(0x08)
	UITM_BasicTutorialWindow_C* ITM_BasicTutorialWindow; // 0x270(0x08)

	void CompleteWithAnim();
	void OnShown();
	void SetText(FText TaskHeader, FText TaskText, FText CheckBoxText);
	void SetImage(UTexture2D* Image);
	void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature();
	void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature();
	void PlayTaskProgress();
	void OnRemoveWidget();
	void SetTaskCounter(int32_t Counter, int32_t Denominator);
	void ExecuteUbergraph_W_TutorialContent_Base(int32_t EntryPoint);
};

