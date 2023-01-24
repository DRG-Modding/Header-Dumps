#ifndef UE4SS_SDK_WND_JoiningModded_HPP
#define UE4SS_SDK_WND_JoiningModded_HPP

class UWND_JoiningModded_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URichTextSizable* AboutToJoinModdedText;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_PasswordField_C* Basic_PasswordField;
    class UBlurBackground_C* BlurBackground;
    class UBorder* Border_0;
    class UBasic_ButtonScalable2_C* BTN_Cancel;
    class UBasic_ButtonScalable2_C* BTN_Join;
    class UVerticalBox* DependenciesLoading;
    class UUI_ModdingProgressBar_C* DependenciesProgressBar;
    class URichTextSizable* DisclaimerModded;
    class UWidgetSwitcher* HasMods_Switcher;
    class UTextBlock* Header;
    class UImage* Image_122;
    class UVerticalBox* ModsInstalledBox;
    class UVerticalBox* ModsPendingBox;
    class UCircularThrobber* SubscribtionLoading;
    FBlueprintSessionResult Session;
    FWND_JoiningModded_CJoinModdedServer JoinModdedServer;
    void JoinModdedServer(FBlueprintSessionResult Session, FString Password);
    FWND_JoiningModded_COnCancel OnCancel;
    void OnCancel();
    bool EmptyMods;
    TArray<FString> ModsToInstall;
    TArray<FString> HostMods;
    TArray<FString> ModsToEnable;
    bool DependencyRecusivenessDone;
    TArray<FString> DependencyMods;
    FString DependencyRequestedMod;
    int32 NumOfDependenciesChecked;
    TArray<FString> OptionalMods;
    int32 TotalNumberOfDependenciesToCheck;
    class UBasic_ToolTip_C* JoinButtonTooltip;
    TArray<FString> ModsNotToDisable;
    FTimerHandle DependencyHideTimerHandle;

    class UWidget* GetJoinButtonTooltip();
    void UpdateHasModsInstalled();
    void OnGottonModDependencies(const TArray<FString>& ModIds, FString ParentMod);
    void UnbindEvents();
    void OnFetchedTermsOfUse(class UModioTermsWrapper* Terms);
    void StartJoinSession();
    void OnDownloadFinished(FString ModName, FString ModId);
    void SubscribeToMods();
    void SetDefaultModDescription();
    void SetColors();
    void SetModNames();
    void SetSession(FBlueprintSessionResult Session);
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ReceiveCloseCommand();
    void ReceiveOkCommand();
    void AnsweredTerms(bool Agree);
    void ReloadWorldAndJoin();
    void OnModioUserAuthenticated(bool Authenticated);
    void Construct();
    void Cancel();
    void RequestDependenciesOfDependencies();
    void OnErrorInstallingMod(FString ModName, EUGCPackageError ErrorType);
    void SetHasHiddenMods();
    void OnRequiredModsFetched(const TArray<FString>& ModsToEnable, const TArray<FString>& ModsToInstall);
    void OnOptionalModsFetched(const TArray<FString>& ModsToEnable, const TArray<FString>& ModsToInstall);
    void SetupOptionalMods(const TArray<FString>& OptionalModsToSetup, const TArray<FString>& OptionalModsToEnable);
    void OnSwitchedDownloadStatus(bool ShouldDownload, FString ModId);
    void ModdedSaveChosen();
    void RequestTermsOfUse();
    void OnHideDenpendencyLoader();
    void ExecuteUbergraph_WND_JoiningModded(int32 EntryPoint);
    void OnCancel__DelegateSignature();
    void JoinModdedServer__DelegateSignature(FBlueprintSessionResult Session, FString Password);
};

#endif
