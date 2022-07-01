#ifndef UE4SS_SDK_BP_Refinery_Rocketlamp_HPP
#define UE4SS_SDK_BP_Refinery_Rocketlamp_HPP

class ABP_Refinery_RocketLamp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight1;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Lamp Mesh;
    class USceneComponent* DefaultSceneRoot;
    ERefineryState State;

    void ReceiveBeginPlay();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_BP_Refinery_RocketLamp(int32 EntryPoint);
};

#endif
