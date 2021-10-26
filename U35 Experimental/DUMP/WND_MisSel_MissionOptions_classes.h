// WidgetBlueprintGeneratedClass WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C
// Size: 0x350 (Inherited: 0x230)
struct UWND_MisSel_MissionOptions_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBlurBackground_C* BlurBackground; // 0x238(0x08)
	UITM_BigButton_C* BTN_ConfirmMission2; // 0x240(0x08)
	UTextBlock* DataHazardBonus; // 0x248(0x08)
	UTextBlock* DATAJoinModeDescription; // 0x250(0x08)
	UTextBlock* DATAJoinModeHeader; // 0x258(0x08)
	URichTextBlock* DATALockMessage; // 0x260(0x08)
	UTextBlock* DATASoloModeDescription; // 0x268(0x08)
	UTextBlock* DATASoloModeHeader; // 0x270(0x08)
	UTextBlock* DATATeamModeDescription; // 0x278(0x08)
	UTextBlock* DATATeamModeHeader; // 0x280(0x08)
	UImage* Icon_SoloMode; // 0x288(0x08)
	UImage* Icon_TeamMode; // 0x290(0x08)
	UImage* Image_JoinMode; // 0x298(0x08)
	UITM_OnlineRestricted_C* ITM_OnlineRestricted; // 0x2a0(0x08)
	UBorder* JoinMode; // 0x2a8(0x08)
	UHorizontalBox* LockedBar; // 0x2b0(0x08)
	UBorder* LockedBarHolder; // 0x2b8(0x08)
	UTextBlock* MissionConfigTxt; // 0x2c0(0x08)
	UBasic_PasswordField_C* ServerPassword; // 0x2c8(0x08)
	UBorder* SoloMode; // 0x2d0(0x08)
	UBorder* TeamMode; // 0x2d8(0x08)
	UTextBlock* TXTWorkEnvironment; // 0x2e0(0x08)
	UVerticalBox* VerticalBox_StartMission; // 0x2e8(0x08)
	UBasic_OptionSwitcher_C* WorkEnvironmentSelector; // 0x2f0(0x08)
	FMulticastInlineDelegate OnStartMission; // 0x2f8(0x10)
	UGeneratedMission* mission; // 0x308(0x08)
	enum class EMissionSelection_Mode Mode; // 0x310(0x01)
	FMulticastInlineDelegate OnJoinMission; // 0x318(0x10)
	bool FriendsOnly; // 0x328(0x01)
	FMulticastInlineDelegate OnDifficultyChanged; // 0x330(0x10)
	FMulticastInlineDelegate OnStartSoloMission; // 0x340(0x10)

	void HandleKeyDown(FKeyEvent KeyEvent, bool OutHandled, FEventReply OutReply);
	FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
	UDifficultySetting* GetSelectedDifficulty();
	void UpdateConfirmButton();
	void SetMissionLocked(bool IsLocked, FText Explanation);
	void HandleModeChange(enum class EMissionSelection_Mode Selection);
	void GetPassword(FText Password, bool HasPassword);
	bool IsFriendsOnly();
	void UpdateHazardBonus();
	void OnFailure_E07C54DA4555FCCB80821BA994BEDE78();
	void OnSuccess_E07C54DA4555FCCB80821BA994BEDE78();
	void OnFailure_E07C54DA4555FCCB80821BA9DC34619D();
	void OnSuccess_E07C54DA4555FCCB80821BA9DC34619D();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ShowMode(enum class EMissionSelection_Mode Mode);
	void SetMission(UGeneratedMission* mission);
	void BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature(FText Text);
	void BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature(FText Text, char CommitMethod);
	void BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature(FText Value, int32_t Index);
	void ResetSelectedDifficulty();
	void BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WND_MisSel_MissionOptions(int32_t EntryPoint);
	void OnStartSoloMission__DelegateSignature();
	void OnDifficultyChanged__DelegateSignature(UDifficultySetting* NewDifficulty, UGeneratedMission* mission);
	void OnJoinMission__DelegateSignature();
	void OnStartMission__DelegateSignature();
};

