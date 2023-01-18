#ifndef UE4SS_SDK_HUD_Modding_Downloads_Entry_HPP
#define UE4SS_SDK_HUD_Modding_Downloads_Entry_HPP

class UHUD_Modding_Downloads_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* ContentSizeBox;
    class UImage* Img_Completed;
    class UBasic_Label_C* LabelModName;
    class UUI_ModdingProgressBar_C* ModdingProgressBar;
    FString ModName;
    float Progress;
    FString PreviewName;
    bool PreviewDownloading;
    int32 PreviewDownloaded;
    int32 PreviewTotal;
    int32 Downloaded;
    int32 Total;
    bool Downloading;
    bool IsFinished;

    void GetIsFinished(bool& IsFinished);
    void Error(EUGCPackageError InErrorType);
    void Finish();
    void GetProgress(float& Progress);
    void GetModName(FString& ModName);
    void SetProgress(FString InModName, bool InDownloading, int32 InDownloaded, int32 InTotal);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Modding_Downloads_Entry(int32 EntryPoint);
};

#endif
