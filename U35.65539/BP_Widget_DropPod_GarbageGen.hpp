#ifndef UE4SS_SDK_BP_Widget_DropPod_GarbageGen_HPP
#define UE4SS_SDK_BP_Widget_DropPod_GarbageGen_HPP

class ABP_Widget_DropPod_GarbageGen_C : AActor
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
