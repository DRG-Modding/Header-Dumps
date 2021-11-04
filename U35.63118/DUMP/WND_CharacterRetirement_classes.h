// WidgetBlueprintGeneratedClass WND_CharacterRetirement.WND_CharacterRetirement_C
// Size: 0x370 (Inherited: 0x270)
struct UWND_CharacterRetirement_C : UWindowWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UWidgetAnimation* AnimPanBackground; // 0x278(0x08)
	UWidgetAnimation* FadeOut; // 0x280(0x08)
	UWidgetAnimation* WarningPulse; // 0x288(0x08)
	UBorder* BackgroundFade; // 0x290(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x298(0x08)
	UBasic_Menu_LargeWindowWithHeader_C* Basic_Menu_LargeWindowWithHeader; // 0x2a0(0x08)
	UBlurBackground_C* BlurBackground; // 0x2a8(0x08)
	UBasic_ButtonScalable2_C* BTN_No; // 0x2b0(0x08)
	UBasic_ButtonScalable2_C* BTN_Yes; // 0x2b8(0x08)
	USizeBox* DialogBox; // 0x2c0(0x08)
	UFSDLabelWidget* FSDLabelWidget_1; // 0x2c8(0x08)
	UHorizontalBox* HorizontalBox_Cost; // 0x2d0(0x08)
	UImage* Image_1; // 0x2d8(0x08)
	UImage* Image_2; // 0x2e0(0x08)
	UITM_Craft_ResourceBig_C* ITM_Craft_ResourceBig; // 0x2e8(0x08)
	UMissionControl_MainDialogue_C* MissionControl; // 0x2f0(0x08)
	UOVERLAY_RetirementGranted_C* OVERLAY_RetirementGranted; // 0x2f8(0x08)
	UPlayerCharacterID* characterID; // 0x300(0x08)
	TMap<UResourceData*, int32_t> RetirementCost; // 0x308(0x50)
	int32_t RetiredCount; // 0x358(0x04)
	UAudioComponent* CharacterAudio; // 0x360(0x08)
	UAudioComponent* FanfareAudio; // 0x368(0x08)

	void StopAudio(UAudioComponent* InAudioComponent);
	bool IsAudioFinished(UAudioComponent* InAudioComponent);
	void BuildCostList();
	void OnFailure_8D7CEF664ECE349247F068951073F0FE();
	void OnSuccess_8D7CEF664ECE349247F068951073F0FE();
	void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void SetData(UPlayerCharacterID* characterID);
	void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void OnShown();
	void HideMouseCursor();
	void BndEvt__OVERLAY_RetirementGranted_K2Node_ComponentBoundEvent_1_OnFinished__DelegateSignature();
	void Retire();
	void FadeInBackground(float Duration);
	void Stop Character Audio();
	void OnClosed();
	void OnRewardsClosed(UWindowWidget* Window);
	void ExecuteUbergraph_WND_CharacterRetirement(int32_t EntryPoint);
};

