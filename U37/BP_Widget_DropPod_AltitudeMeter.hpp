#ifndef UE4SS_SDK_BP_Widget_DropPod_AltitudeMeter_HPP
#define UE4SS_SDK_BP_Widget_DropPod_AltitudeMeter_HPP

class ABP_Widget_DropPod_AltitudeMeter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget1;
    class USceneComponent* DefaultSceneRoot;
    class UWidget_DropPod_AltitudeMeter_C* Widget;
    float Duration;
    float Start;
    float End;
    float NewDepth;
    float currentDepth;

    void TriggerCountdown();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void OnMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter(int32 EntryPoint);
};

#endif
