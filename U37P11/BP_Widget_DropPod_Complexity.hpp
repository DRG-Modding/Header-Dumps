#ifndef UE4SS_SDK_BP_Widget_DropPod_Complexity_HPP
#define UE4SS_SDK_BP_Widget_DropPod_Complexity_HPP

class ABP_Widget_DropPod_Complexity_C : public AActor
{
    class UWidgetComponentCustomMaterial* WidgetComponentCustomMaterial;
    class USceneComponent* DefaultSceneRoot;
    class UWidget_DropPod_AltitudeMeter_C* Widget;
    float Duration;
    float Start;
    float End;
    float DepthArrivalVariable;

};

#endif
