#ifndef UE4SS_SDK_BP_Widget_DropPod_DangerLevel_HPP
#define UE4SS_SDK_BP_Widget_DropPod_DangerLevel_HPP

class ABP_Widget_DropPod_DangerLevel_C : AActor
{
    UWidgetComponent* Widget1;
    USceneComponent* DefaultSceneRoot;
    UWidget_DropPod_AltitudeMeter_C* Widget;
    float Duration;
    float Start;
    float End;
    float DepthArrivalVariable;
}

#endif
