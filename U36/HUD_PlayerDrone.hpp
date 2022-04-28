#ifndef UE4SS_SDK_HUD_PlayerDrone_HPP
#define UE4SS_SDK_HUD_PlayerDrone_HPP

class UHUD_PlayerDrone_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* countdownText;
    float CountDownTimer;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_HUD_PlayerDrone(int32 EntryPoint);
};

#endif
