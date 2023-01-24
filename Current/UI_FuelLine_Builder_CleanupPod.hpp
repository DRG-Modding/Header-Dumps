#ifndef UE4SS_SDK_UI_FuelLine_Builder_CleanupPod_HPP
#define UE4SS_SDK_UI_FuelLine_Builder_CleanupPod_HPP

class UUI_FuelLine_Builder_CleanupPod_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_AdvancedLabel_C* CancelLabel;
    class UProgressBar* DistanceProgress;
    class UUI_AdvancedLabel_C* FireLabel;

    void SetProgress(float InPercent);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_FuelLine_Builder_CleanupPod(int32 EntryPoint);
};

#endif
