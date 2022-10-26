#ifndef UE4SS_SDK_UI_RockCracker_Builder_HPP
#define UE4SS_SDK_UI_RockCracker_Builder_HPP

class UUI_RockCracker_Builder_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_AdvancedLabel_C* CancelLabel;
    class UProgressBar* DistanceProgress;
    class UUI_AdvancedLabel_C* FireLabel;

    void SetProgress(float InPercent);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_RockCracker_Builder(int32 EntryPoint);
};

#endif
