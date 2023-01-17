#ifndef UE4SS_SDK_BP_Widget_DropPod_DangerLevel_HPP
#define UE4SS_SDK_BP_Widget_DropPod_DangerLevel_HPP

class ABP_Widget_DropPod_DangerLevel_C : public AActor
{
    class UWidgetComponent* Widget1;
    class USceneComponent* DefaultSceneRoot;
    class UWidget_DropPod_AltitudeMeter_C* Widget;
    float Duration;
    float Start;
    float End;
    float DepthArrivalVariable;

};

#endif
