#ifndef UE4SS_SDK_ConsoleScreen_MissionDataActor_HPP
#define UE4SS_SDK_ConsoleScreen_MissionDataActor_HPP

class AConsoleScreen_MissionDataActor_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetComponentCustomMaterial* WidgetComponentCustomMaterial;
    USceneComponent* DefaultSceneRoot;
    UWidget_DropPod_AltitudeMeter_C* Widget;
    float Duration;
    float Start;
    float End;
    float DepthArrivalVariable;

    void TriggerCountdown();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ConsoleScreen_MissionDataActor(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
}

#endif
