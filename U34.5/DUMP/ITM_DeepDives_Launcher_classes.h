// WidgetBlueprintGeneratedClass ITM_DeepDives_Launcher.ITM_DeepDives_Launcher_C
// Size: 0x348 (Inherited: 0x230)
struct UITM_DeepDives_Launcher_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UButton* BackgroundButton; // 0x238(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar; // 0x240(0x08)
	UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_107; // 0x248(0x08)
	UUI_GenericLabel_C* Data_CodeName; // 0x250(0x08)
	UTextBlock* DATA_Quote; // 0x258(0x08)
	UUI_GenericLabel_C* Data_Region; // 0x260(0x08)
	UImage* Image_104; // 0x268(0x08)
	UImage* Image_211; // 0x270(0x08)
	UImage* Image_228; // 0x278(0x08)
	UImage* Image_466; // 0x280(0x08)
	UImage* Image_613; // 0x288(0x08)
	UITM_DeepDiveHeader_C* ITM_DeepDiveHeader; // 0x290(0x08)
	UITM_DeepDives_LaunchButton_C* ITM_DeepDives_LaunchButton; // 0x298(0x08)
	UITM_DeepDives_RejoinButton_C* ITM_DeepDives_RejoinButton; // 0x2a0(0x08)
	UITM_Gear_Bar_C* ITM_Gear_Bar; // 0x2a8(0x08)
	UImage* MovieCanvas; // 0x2b0(0x08)
	UOverlay* PersonalBestOverlay; // 0x2b8(0x08)
	UUI_GenericLabel_C* PersonalBestText; // 0x2c0(0x08)
	UShadowBG_C* ShadowBG; // 0x2c8(0x08)
	UShadowBG_C* ShadowBG_217; // 0x2d0(0x08)
	UShadowBG_C* ShadowBG_C_1; // 0x2d8(0x08)
	UShadowBG_C* ShadowBG_C_2; // 0x2e0(0x08)
	UImage* StaticOverlay; // 0x2e8(0x08)
	UMediaPlayer* MediaPlayer; // 0x2f0(0x08)
	UMediaTexture* MediaTexture; // 0x2f8(0x08)
	UMediaSource* Movie; // 0x300(0x08)
	bool ShowHardDeepDive; // 0x308(0x01)
	bool IsHovering; // 0x309(0x01)
	FMulticastInlineDelegate OnStartMission; // 0x310(0x10)
	FMulticastInlineDelegate OnJoinMission; // 0x320(0x10)
	FMulticastInlineDelegate OnRefresh; // 0x330(0x10)
	UAudioComponent* HoverAudioComponent; // 0x340(0x08)

	void SetBestTime();
	void SetPersonalBest(int32_t TotalSeconds);
	void UpdateBiomeQuote(UDeepDive* InDeepDive);
	void SetButtonsEnabled(bool bInIsEnabled, FText DisabledExplanation);
	void Refresh();
	UDeepDive* GetDeepDive();
	void SetMovie(UMediaSource* InMovie);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__LaunchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void SetHovered(bool InHovered);
	void BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature(FString OpenedUrl);
	void BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void OnFocusLost(FFocusEvent InFocusEvent);
	void ExecuteUbergraph_ITM_DeepDives_Launcher(int32_t EntryPoint);
	void OnRefresh__DelegateSignature(bool success);
	void OnJoinMission__DelegateSignature(bool EliteDeepDive);
	void OnStartMission__DelegateSignature(UDeepDive* DeepDive);
};

