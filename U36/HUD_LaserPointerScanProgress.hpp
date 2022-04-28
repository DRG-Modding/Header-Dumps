#ifndef UE4SS_SDK_HUD_LaserPointerScanProgress_HPP
#define UE4SS_SDK_HUD_LaserPointerScanProgress_HPP

class UHUD_LaserPointerScanProgress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* ProgressBar_59;

    void SetProgress(float Progress);
    void ExecuteUbergraph_HUD_LaserPointerScanProgress(int32 EntryPoint);
};

#endif
