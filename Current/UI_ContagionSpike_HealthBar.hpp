#ifndef UE4SS_SDK_UI_ContagionSpike_HealthBar_HPP
#define UE4SS_SDK_UI_ContagionSpike_HealthBar_HPP

class UUI_ContagionSpike_HealthBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimAttention;
    class UWidgetAnimation* AnimGhostHealth;
    class UProgressBar* GhostHealthBar;
    class UProgressBar* HealthBar;
    class UImage* Image_129;
    class USizeBox* SBox;
    int32 Size;
    float Percent;
    float GhostProgress;

    void SetGhostProgress(float InProgress);
    void SetPercent(float InPercent);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_ContagionSpike_HealthBar(int32 EntryPoint);
};

#endif
