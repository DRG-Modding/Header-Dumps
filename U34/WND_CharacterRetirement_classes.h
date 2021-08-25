// WidgetBlueprintGeneratedClass WND_CharacterRetirement.WND_CharacterRetirement_C
// Size: 0x370 (Inherited: 0x270)
struct UWND_CharacterRetirement_C : UWindowWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* AnimPanBackground; // 0x278(0x08)
	struct UWidgetAnimation* FadeOut; // 0x280(0x08)
	struct UWidgetAnimation* WarningPulse; // 0x288(0x08)
	struct UBorder* BackgroundFade; // 0x290(0x08)
	struct UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x298(0x08)
	struct UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader; // 0x2a0(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x2a8(0x08)
	struct UBasic_ButtonScalable2_C* BTN_No; // 0x2b0(0x08)
	struct UBasic_ButtonScalable2_C* BTN_Yes; // 0x2b8(0x08)
	struct USizeBox* DialogBox; // 0x2c0(0x08)
	struct UFSDLabelWidget* FSDLabelWidget_1; // 0x2c8(0x08)
	struct UHorizontalBox* HorizontalBox_Cost; // 0x2d0(0x08)
	struct UImage* Image_1; // 0x2d8(0x08)
	struct UImage* Image_2; // 0x2e0(0x08)
	struct UITM_Craft_ResourceBig_C* ITM_Craft_ResourceBig; // 0x2e8(0x08)
	struct UMissionControl_MainDialogue_C* MissionControl; // 0x2f0(0x08)
	struct UOVERLAY_RetirementGranted_C* OVERLAY_RetirementGranted; // 0x2f8(0x08)
	struct UPlayerCharacterID* characterID; // 0x300(0x08)
	struct TMap<struct UResourceData*, int32_t> RetirementCost; // 0x308(0x50)
	int32_t RetiredCount; // 0x358(0x04)
	char UnknownData_35C[0x4]; // 0x35c(0x04)
	struct UAudioComponent* CharacterAudio; // 0x360(0x08)
	struct UAudioComponent* FanfareAudio; // 0x368(0x08)

	void StopAudio(struct UAudioComponent* InAudioComponent); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.StopAudio
	bool IsAudioFinished(struct UAudioComponent* InAudioComponent); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.IsAudioFinished
	void BuildCostList(); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.BuildCostList
	void OnFailure_8D7CEF664ECE349247F068951073F0FE(); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnFailure_8D7CEF664ECE349247F068951073F0FE
	void OnSuccess_8D7CEF664ECE349247F068951073F0FE(); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnSuccess_8D7CEF664ECE349247F068951073F0FE
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void SetData(struct UPlayerCharacterID* characterID); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.SetData
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	void PreConstruct(bool IsDesignTime); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.PreConstruct
	void OnShown(); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnShown
	void HideMouseCursor(); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.HideMouseCursor
	void BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature(); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature
	void Retire(); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.Retire
	void FadeInBackground(float Duration); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.FadeInBackground
	void Stop Character Audio(); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.Stop Character Audio
	void OnClosed(); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnClosed
	void OnRewardsClosed(struct UWindowWidget* Window); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.OnRewardsClosed
	void ExecuteUbergraph_WND_CharacterRetirement(int32_t EntryPoint); // Function WND_CharacterRetirement.WND_CharacterRetirement_C.ExecuteUbergraph_WND_CharacterRetirement
};

