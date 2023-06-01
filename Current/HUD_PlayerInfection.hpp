#ifndef UE4SS_SDK_HUD_PlayerInfection_HPP
#define UE4SS_SDK_HUD_PlayerInfection_HPP

class UHUD_PlayerInfection_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Appear;
    class UWidgetAnimation* Pulse;
    class UWidgetAnimation* fade;
    class UWidgetAnimation* Warning;
    class UImage* BG;
    class UImage* Glow;
    class UImage* Icon_Temp;
    class USizeBox* RootSize;
    class UProgressBar* TempBar;
    FLinearColor Tint_Infection;
    bool Faded;

    void SetFaded(bool FadeOut);
    void UpdateInfection(float InTemperature, float InChange);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnInfectionChanged(int32 IntValue);
    void OnInfectionStateChangedEvent_Event_0(EInfectionState State);
    void ExecuteUbergraph_HUD_PlayerInfection(int32 EntryPoint);
};

#endif
