#ifndef UE4SS_SDK_BP_Widget_DropPod_Complexity_HPP
#define UE4SS_SDK_BP_Widget_DropPod_Complexity_HPP

class ABP_Widget_DropPod_Complexity_C : AActor
{
    UWidgetComponentCustomMaterial* WidgetComponentCustomMaterial;
    USceneComponent* DefaultSceneRoot;
    UWidget_DropPod_AltitudeMeter_C* Widget;
    float Duration;
    float Start;
    float End;
    float DepthArrivalVariable;
}

#endif
