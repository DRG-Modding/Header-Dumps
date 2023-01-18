#ifndef UE4SS_SDK_WND_MisSel_MissionOptions_HPP
#define UE4SS_SDK_WND_MisSel_MissionOptions_HPP

class UWND_MisSel_MissionOptions_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBlurBackground_C* BlurBackground;
    class UITM_BigButton_C* BTN_ConfirmMission2;
    class UTextBlock* DataHazardBonus;
    class UTextBlock* DATAJoinModeDescription;
    class UTextBlock* DATAJoinModeHeader;
    class URichTextBlock* DATALockMessage;
    class UTextBlock* DATASoloModeDescription;
    class UTextBlock* DATASoloModeHeader;
    class UTextBlock* DATATeamModeDescription;
    class UTextBlock* DATATeamModeHeader;
    class UImage* Icon_SoloMode;
    class UImage* Icon_TeamMode;
    class UImage* Image_JoinMode;
    class UITM_OnlineRestricted_C* ITM_OnlineRestricted;
    class UBorder* JoinMode;
    class UHorizontalBox* LockedBar;
    class UBorder* LockedBarHolder;
    class UBasic_PasswordField_C* ServerPassword;
    class UBorder* SoloMode;
    class UBorder* TeamMode;
    class UTextBlock* TXTWorkEnvironment;
    class UVerticalBox* VerticalBox_StartMission;
    class UBasic_OptionSwitcher_C* WorkEnvironmentSelector;
    FWND_MisSel_MissionOptions_COnStartMission OnStartMission;
    void OnStartMission();
    class UGeneratedMission* mission;
    TEnumAsByte<EMissionSelection_Mode::Type> Mode;
    FWND_MisSel_MissionOptions_COnJoinMission OnJoinMission;
    void OnJoinMission();
    bool FriendsOnly;
    FWND_MisSel_MissionOptions_COnDifficultyChanged OnDifficultyChanged;
    void OnDifficultyChanged(class UDifficultySetting* NewDifficulty, class UGeneratedMission* mission);
    FWND_MisSel_MissionOptions_COnStartSoloMission OnStartSoloMission;
    void OnStartSoloMission();
    bool ShouldClose;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HandleKeyUp(const FKeyEvent& KeyEvent, bool& OutHandled, FEventReply& OutReply);
    class UDifficultySetting* GetSelectedDifficulty();
    void UpdateConfirmButton();
    void SetMissionLocked(bool IsLocked, FText Explanation);
    void HandleModeChange(TEnumAsByte<EMissionSelection_Mode::Type> Selection);
    void GetPassword(FText& Password, bool& HasPassword);
    bool IsFriendsOnly();
    void UpdateHazardBonus();
    void OnFailure_E07C54DA4555FCCB80821BA994BEDE78();
    void OnSuccess_E07C54DA4555FCCB80821BA994BEDE78();
    void OnFailure_E07C54DA4555FCCB80821BA9DC34619D();
    void OnSuccess_E07C54DA4555FCCB80821BA9DC34619D();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ShowMode(TEnumAsByte<EMissionSelection_Mode::Type> Mode);
    void SetMission(class UGeneratedMission* mission);
    void BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature(FText Text);
    void BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature(FText Text, uint8 CommitMethod);
    void BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ResetSelectedDifficulty();
    void BndEvt__BTN_ConfirmMission2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void SetFocusDependentOnInputDevice();
    void ExecuteUbergraph_WND_MisSel_MissionOptions(int32 EntryPoint);
    void OnStartSoloMission__DelegateSignature();
    void OnDifficultyChanged__DelegateSignature(class UDifficultySetting* NewDifficulty, class UGeneratedMission* mission);
    void OnJoinMission__DelegateSignature();
    void OnStartMission__DelegateSignature();
};

#endif
