#ifndef UE4SS_SDK_ITM_Mod_HPP
#define UE4SS_SDK_ITM_Mod_HPP

class UITM_Mod_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UImage* backgroundOutline;
    class UButton* ButtonAuthorURL;
    class UButton* ButtonImage;
    class UButton* ButtonTitle;
    class UBasic_CheckBox_C* CheckBox_Enabled;
    class UHorizontalBox* ContentBox;
    class UTextBlock* DeprecatedLabel;
    class USizeBox* EntrySizeBox;
    class UImage* Image_Separator;
    class UBasic_Image_C* ImgCrashed;
    class UBasic_Image_C* ImgVersion;
    class UHorizontalBox* LeftBox;
    class UTextBlock* ModDescriptionTextbox;
    class UTextBlock* ModDownloadVersionText;
    class UImage* ModifiedImg;
    class UTextBlock* ModMadeByTextBox;
    class UTextBlock* ModNameTextBox;
    class UTextBlock* ModSlotNumber;
    class UTextBlock* ModStatusText;
    class UImage* ModThumbnail;
    class UTextBlock* ModVersionText;
    class USizeBox* ThumbnailSizeBox;
    FString ModName;
    FString ModVersion;
    FString ModURL;
    FString ModCategory;
    EUGCApprovalStatus ModStatus;
    FString ModDescription;
    FString ModAuthor;
    FString ModAuthorURL;
    bool IsModMounted;
    bool PendingModMounting;
    FITM_Mod_COnActivationChanged OnActivationChanged;
    void OnActivationChanged(class UITM_Mod_C* ManipulatedModItem);
    bool IsModDeprecated;
    class UUGCPackage* UGCPackage;
    bool CompactMode;
    bool Crashed;
    bool DependencyRemoved;
    class UBasic_ToolTip_C* VersionTooltip;
    TArray<class UITM_Mod_C*> ParentModItems;
    TArray<class UITM_Mod_C*> DependentModItems;
    bool ShowStatus;
    bool WrongVersion;
    TArray<FString> NamesOfDependencies;
    EUGCDownloadVersion ModDownloadVersion;

    void GetDownloadVersionToolTip(EUGCDownloadVersion InStatus, FText& OutStatus);
    void GetDownloadVersionText(EUGCDownloadVersion InDownloadVersion, FText& OutStatus);
    void CheckIfSavedInSlot();
    void SetFromPackage(class UUGCPackage* InPackage);
    class UWidget* GetDependencyCheckboxTooltip();
    void FindParentsInArray(TArray<class UWidget*>& PotentialParents);
    class UWidget* CreateversionTooltip();
    void CheckGameVersionBeforeEnable(bool InEnabled);
    void OnModStateDependencyChanged(bool IsChecked, bool ShouldDisableCheckmark, bool& HasChanged);
    void ResetModEnabled();
    void SetModEnabled(bool InEnabled);
    void OnOverlayClosed(FString LastURL);
    void HasCrashed(bool& OutHasCrashed);
    void SetCompactMode(bool SimpleMode);
    void GetStatusToolTip(bool InShowStatus, EUGCApprovalStatus InStatus, FText& OutStatus);
    void OnThumbnailFetched(class UTexture2DDynamic* ModioModThumbnail);
    void GetStringOrDefault(FString inString, FText InDefault, FString& OutValue);
    void GetTruncatedString(FString inString, int32 InMaxLength, FString& OutResult);
    void GetStatusText(bool InShowStatus, EUGCApprovalStatus InStatus, FText& OutStatus);
    void SetColors();
    void SetData(FString InModName, FString InModVersion, FString InModURL, FString InModCategory, EUGCApprovalStatus InModStatus, EUGCDownloadVersion InModDownloadVersion, FString InModDescription, FString InModAuthor, FString InModAuthorURL, bool InModIsMounted, bool InModPendingMounted, bool InModIsDeprecated, bool InDependencyRemoved, bool InShowStatus, bool InCrashed, bool InWrongVersion);
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void UpdateModifed();
    void BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonAuthorURL_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ButtonImage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonImage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ButtonImage_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void Refresh();
    void SetModActivationChanged(bool IsChecked);
    void SetModActivationChangedForceParents(const bool IsChecked);
    void RequestDependencyNames();
    void ExecuteUbergraph_ITM_Mod(int32 EntryPoint);
    void OnActivationChanged__DelegateSignature(class UITM_Mod_C* ManipulatedModItem);
};

#endif
