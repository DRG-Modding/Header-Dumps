#ifndef UE4SS_SDK_BP_Widget_DropPod_BiomeRadar_HPP
#define UE4SS_SDK_BP_Widget_DropPod_BiomeRadar_HPP

class ABP_Widget_DropPod_BiomeRadar_C : public AActor
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
