#ifndef UE4SS_SDK_HUD_JetBootsFuel_Vertical_HPP
#define UE4SS_SDK_HUD_JetBootsFuel_Vertical_HPP

class UHUD_JetBootsFuel_Vertical_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DangerAnim;
    class UWidgetAnimation* Fueling;
    class UTextBlock* DangerText;
    class UImage* Image_2;
    class UImage* Image_Background;
    class UImage* Image_Background_Outline;
    class UImage* Image_Line;
    class UProgressBar* Oxygenbar;
    bool IsFadedOut;
    FLinearColor NormalColor;
    FLinearColor OverHeatColor;
    bool IsFadedIn;
    bool QueuedFadeOut;
    float LastProgress;
    FLinearColor WarningColor;

    void PreConstruct(bool IsDesignTime);
    void SetProgress(float CurrentProgress, bool overHeated);
    void SetIsActive(bool Active);
    void ExecuteUbergraph_HUD_JetBootsFuel_Vertical(int32 EntryPoint);
};

#endif
