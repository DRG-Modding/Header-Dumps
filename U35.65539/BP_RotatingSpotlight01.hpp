#ifndef UE4SS_SDK_BP_RotatingSpotlight01_HPP
#define UE4SS_SDK_BP_RotatingSpotlight01_HPP

class ABP_RotatingSpotlight01_C : ABP_RadarDish01_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USpotLightComponent* SpotLight;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_RotatingSpotlight01(int32 EntryPoint);
}

#endif
