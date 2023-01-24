#ifndef UE4SS_SDK_ITM_PendingMod_HPP
#define UE4SS_SDK_ITM_PendingMod_HPP

class UITM_PendingMod_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UImage* Image_Separator;
    class UBorder* MainBorder;
    class UUI_ModdingProgressBar_C* ModdingProgressBar;
    class UTextBlock* ModNameTextBox;
    class UTextBlock* PendingLongText;
    class UTextBlock* PendingShortText;
    class UWidgetSwitcher* StateSwitcher;
    FString ModName;
    FITM_PendingMod_COnActivationChanged OnActivationChanged;
    void OnActivationChanged();
    TEnumAsByte<ENUM_ModPendingStatus::Type> PendingStatus;

    void OnDownloadExtractProgress(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total);
    void SetColors();
    void SetData(FString InModName, TEnumAsByte<ENUM_ModPendingStatus::Type> InPendingStatus);
    void PreConstruct(bool IsDesignTime);
    void Destruct();
    void ExecuteUbergraph_ITM_PendingMod(int32 EntryPoint);
    void OnActivationChanged__DelegateSignature();
};

#endif
