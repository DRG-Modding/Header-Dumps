#ifndef UE4SS_SDK_HUD_PlayerDrone_HPP
#define UE4SS_SDK_HUD_PlayerDrone_HPP

class UHUD_PlayerDrone_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* countdownText;
    float CountDownTimer;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_HUD_PlayerDrone(int32 EntryPoint, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int64 CallFunc_FCeil64_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FText CallFunc_Conv_Int64ToText_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
}

#endif
