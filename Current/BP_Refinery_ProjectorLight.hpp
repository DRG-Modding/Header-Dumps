#ifndef UE4SS_SDK_BP_Refinery_ProjectorLight_HPP
#define UE4SS_SDK_BP_Refinery_ProjectorLight_HPP

class ABP_Refinery_ProjectorLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box1;
    class UBoxComponent* Box;
    class UStaticMeshComponent* StaticMesh4;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* ST_Floodlight_Small;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_BP_Refinery_ProjectorLight(int32 EntryPoint);
};

#endif
