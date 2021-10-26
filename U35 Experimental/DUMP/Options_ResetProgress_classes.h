// WidgetBlueprintGeneratedClass Options_ResetProgress.Options_ResetProgress_C
// Size: 0x240 (Inherited: 0x230)
struct UOptions_ResetProgress_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBasic_ButtonWithControls_C* Basic_ButtonWithControls; // 0x238(0x08)

	void OnFailure_E60EC8DB4E80DB2E20AA1A9F09A53224();
	void OnSuccess_E60EC8DB4E80DB2E20AA1A9F09A53224();
	void BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature();
	void Answer(bool Yes);
	void TutorialAnswer(bool Yes);
	void ExecuteUbergraph_Options_ResetProgress(int32_t EntryPoint);
};

