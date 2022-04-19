#ifndef UE4SS_SDK_HUD_Modding_Downloads_HPP
#define UE4SS_SDK_HUD_Modding_Downloads_HPP

class UHUD_Modding_Downloads_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimOpenClose;
    class UVerticalBox* EntryBox;
    class UTextBlock* TextHeadline;
    FString PreviewName;
    TArray<FString> PreviewPendingNames;
    bool PreviewDownloading;
    int32 PreviewProgress;
    int32 PreviewTotal;
    FTimerHandle HideHandle;
    bool IsOpen;
    bool Downloading;
    class UHUD_Modding_Downloads_Entry_C* CurrentEntry;
    TMap<class FString, class EUGCPackageError> PreviewFailed;
    bool IsDesignTime;

    void ShowFailedToInstall(TMap<class FString, class EUGCPackageError> InFailed);
    void SetOpen(bool InIsOpen);
    void GetEntry(FString InModName, class UHUD_Modding_Downloads_Entry_C*& OutEntry, FString& OutName);
    void SetDownloadProgress(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total);
    void Construct();
    void OnErrorInstalling(FString ModName, EUGCPackageError ErrorType);
    void PreConstruct(bool IsDesignTime);
    void OnDownloadProgress(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total);
    void OnAnimFinished();
    void HideFromHUD();
    void Destruct();
    void Simulate();
    void OnDownloadFinished(FString ModName, FString ModId);
    void ExecuteUbergraph_HUD_Modding_Downloads(int32 EntryPoint);
};

#endif
