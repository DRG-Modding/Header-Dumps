#ifndef UE4SS_SDK_ITM_Mod_Joining_HPP
#define UE4SS_SDK_ITM_Mod_Joining_HPP

class UITM_Mod_Joining_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetSwitcher* HasMetaData_Switcher;
    class UWidgetSwitcher* Installed_Switcher;
    class UButton* LinkButton;
    class UBasic_Label_C* Mod_Approval;
    class UBasic_Label_C* Mod_Name;
    class UUI_ModdingProgressBar_C* ModdingProgressBar;
    class UCircularThrobber* ModName_Loading;
    class UButton* OptionalRequiredButton;
    FString ModId;
    bool DownloadFinished;
    FITM_Mod_Joining_COnMetaDataLoaded OnMetaDataLoaded;
    void OnMetaDataLoaded(FString ModId, EUGCApprovalStatus ModStatus, class UITM_Mod_Joining_C* ModWidget);
    FString ModName;
    FString ModURL;
    EUGCApprovalStatus ApprovalStatus;
    bool ModInstalled;
    class UModioModInfoWrapper* MetaData;
    TEnumAsByte<ENUM_MenuColors::Type> NameColor;
    bool DownloadRequired;
    FITM_Mod_Joining_CSwitchedDownload SwitchedDownload;
    void SwitchedDownload(bool ShouldDownload, FString ModId);

    void GetModName(FString& ModName);
    void Update();
    void SetMetaData(class UModioModInfoWrapper* InModMetaData);
    class UWidget* Get_LinkButton_ToolTip();
    void OnDownloadExtractModFinished(FString ModName, FString ModId);
    void OnDownloadExtractMod(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total);
    void Construct();
    void BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnOverlayClosed(FString LastURL);
    void Destruct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__OptionalRequiredButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_Mod_Joining(int32 EntryPoint);
    void SwitchedDownload__DelegateSignature(bool ShouldDownload, FString ModId);
    void OnMetaDataLoaded__DelegateSignature(FString ModId, EUGCApprovalStatus ModStatus, class UITM_Mod_Joining_C* ModWidget);
};

#endif
