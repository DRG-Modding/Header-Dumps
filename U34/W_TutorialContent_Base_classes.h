// WidgetBlueprintGeneratedClass W_TutorialContent_Base.W_TutorialContent_Base_C
// Size: 0x278 (Inherited: 0x260)
struct UW_TutorialContent_Base_C : UTutorialContentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* MainObjectiveAnim; // 0x268(0x08)
	struct UITM_BasicTutorialWindow_C* ITM_BasicTutorialWindow; // 0x270(0x08)

	void CompleteWithAnim(); // Function W_TutorialContent_Base.W_TutorialContent_Base_C.CompleteWithAnim
	void OnShown(); // Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnShown
	void SetText(struct FText TaskHeader, struct FText TaskText, struct FText CheckBoxText); // Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetText
	void SetImage(struct UTexture2D* Image); // Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetImage
	void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature(); // Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_0_CompleteAnimationFinished__DelegateSignature
	void BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature(); // Function W_TutorialContent_Base.W_TutorialContent_Base_C.BndEvt__ITM_BasicTutorialWindow_K2Node_ComponentBoundEvent_1_RemoveAnimationFinished__DelegateSignature
	void PlayTaskProgress(); // Function W_TutorialContent_Base.W_TutorialContent_Base_C.PlayTaskProgress
	void OnRemoveWidget(); // Function W_TutorialContent_Base.W_TutorialContent_Base_C.OnRemoveWidget
	void SetTaskCounter(int32_t Counter, int32_t Denominator); // Function W_TutorialContent_Base.W_TutorialContent_Base_C.SetTaskCounter
	void ExecuteUbergraph_W_TutorialContent_Base(int32_t EntryPoint); // Function W_TutorialContent_Base.W_TutorialContent_Base_C.ExecuteUbergraph_W_TutorialContent_Base
};

