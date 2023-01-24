#ifndef UE4SS_SDK_HUD_Oxygen_HPP
#define UE4SS_SDK_HUD_Oxygen_HPP

class UHUD_Oxygen_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DangerAnim;
    class UWidgetAnimation* Fueling;
    class UImage* ARROW_Fueling;
    class UBorder* Border_1;
    class UTextBlock* DangerText;
    class UImage* Image_1;
    class UProgressBar* Oxygenbar;
    bool HoldBarColor;

    void OnOxygenChanged_Event_0(int32 oxygenLevel);
    void OnOxygenReplenishingEvent_Event_0(bool IsActive);
    void 40PercentOxygenLeft();
    void SetProgress(float CurrentProgress);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Oxygen(int32 EntryPoint);
};

#endif
