#ifndef UE4SS_SDK_UI_ModdingProgressBar_HPP
#define UE4SS_SDK_UI_ModdingProgressBar_HPP

class UUI_ModdingProgressBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* ActionProgressBar;
    class USizeBox* HeightSizeBox;
    class UBasic_Label_C* LabelAction;
    int32 Height;
    bool PreviewDownloading;
    int32 PreviewProgress;
    int32 PreviewTotal;
    int32 Width;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    bool IsDownloading;
    int32 CurrentProgress;
    int32 CurrentTotal;

    void SetProgressCustomText(FText Text, int32 Progress, int32 Total);
    void GetTotal(int32& Total);
    void Error(EUGCPackageError InErrorType);
    void FinishExtracting();
    FText Int2Text(int32 Value);
    void SetProgress(bool Downloading, int32 Progress, int32 Total);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ModdingProgressBar(int32 EntryPoint);
};

#endif
