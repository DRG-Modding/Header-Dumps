// WidgetBlueprintGeneratedClass WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C
// Size: 0x350 (Inherited: 0x230)
struct UWND_MisSel_MissionOptions_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBlurBackground_C* BlurBackground; // 0x238(0x08)
	struct UITM_BigButton_C* BTN_ConfirmMission2; // 0x240(0x08)
	struct UTextBlock* DataHazardBonus; // 0x248(0x08)
	struct UTextBlock* DATAJoinModeDescription; // 0x250(0x08)
	struct UTextBlock* DATAJoinModeHeader; // 0x258(0x08)
	struct URichTextBlock* DATALockMessage; // 0x260(0x08)
	struct UTextBlock* DATASoloModeDescription; // 0x268(0x08)
	struct UTextBlock* DATASoloModeHeader; // 0x270(0x08)
	struct UTextBlock* DATATeamModeDescription; // 0x278(0x08)
	struct UTextBlock* DATATeamModeHeader; // 0x280(0x08)
	struct UImage* Icon_SoloMode; // 0x288(0x08)
	struct UImage* Icon_TeamMode; // 0x290(0x08)
	struct UImage* Image_JoinMode; // 0x298(0x08)
	struct UITM_OnlineRestricted_C* ITM_OnlineRestricted; // 0x2a0(0x08)
	struct UBorder* JoinMode; // 0x2a8(0x08)
	struct UHorizontalBox* LockedBar; // 0x2b0(0x08)
	struct UBorder* LockedBarHolder; // 0x2b8(0x08)
	struct UTextBlock* MissionConfigTxt; // 0x2c0(0x08)
	struct UBasic_PasswordField_C* ServerPassword; // 0x2c8(0x08)
	struct UBorder* SoloMode; // 0x2d0(0x08)
	struct UBorder* TeamMode; // 0x2d8(0x08)
	struct UTextBlock* TXTWorkEnvironment; // 0x2e0(0x08)
	struct UVerticalBox* VerticalBox_StartMission; // 0x2e8(0x08)
	struct UBasic_OptionSwitcher_C* WorkEnvironmentSelector; // 0x2f0(0x08)
	struct FMulticastInlineDelegate OnStartMission; // 0x2f8(0x10)
	struct UGeneratedMission* mission; // 0x308(0x08)
	char Mode; // 0x310(0x01)
	char UnknownData_311[0x7]; // 0x311(0x07)
	struct FMulticastInlineDelegate OnJoinMission; // 0x318(0x10)
	bool FriendsOnly; // 0x328(0x01)
	char UnknownData_329[0x7]; // 0x329(0x07)
	struct FMulticastInlineDelegate OnDifficultyChanged; // 0x330(0x10)
	struct FMulticastInlineDelegate OnStartSoloMission; // 0x340(0x10)

	struct UDifficultySetting* GetSelectedDifficulty(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetSelectedDifficulty
	void UpdateConfirmButton(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateConfirmButton
	void SetMissionLocked(bool IsLocked, struct FText Explanation); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMissionLocked
	void HandleModeChange(char Selection); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.HandleModeChange
	void GetPassword(struct FText Password, bool HasPassword); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetPassword
	bool IsFriendsOnly(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.IsFriendsOnly
	void UpdateHazardBonus(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateHazardBonus
	void OnFailure_E07C54DA4555FCCB80821BA994BEDE78(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA994BEDE78
	void OnSuccess_E07C54DA4555FCCB80821BA994BEDE78(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA994BEDE78
	void OnFailure_E07C54DA4555FCCB80821BA9DC34619D(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA9DC34619D
	void OnSuccess_E07C54DA4555FCCB80821BA9DC34619D(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA9DC34619D
	void PreConstruct(bool IsDesignTime); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.PreConstruct
	void Construct(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.Construct
	void ShowMode(char Mode); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ShowMode
	void SetMission(struct UGeneratedMission* mission); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMission
	void BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature(struct FText Text); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature
	void BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature(struct FText Text, char CommitMethod); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature
	void BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature(struct FText Value, int32_t Index); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature
	void ResetSelectedDifficulty(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ResetSelectedDifficulty
	void BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	void ExecuteUbergraph_WND_MisSel_MissionOptions(int32_t EntryPoint); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ExecuteUbergraph_WND_MisSel_MissionOptions
	void OnStartSoloMission__DelegateSignature(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartSoloMission__DelegateSignature
	void OnDifficultyChanged__DelegateSignature(struct UDifficultySetting* NewDifficulty, struct UGeneratedMission* mission); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnDifficultyChanged__DelegateSignature
	void OnJoinMission__DelegateSignature(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnJoinMission__DelegateSignature
	void OnStartMission__DelegateSignature(); // Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartMission__DelegateSignature
};

