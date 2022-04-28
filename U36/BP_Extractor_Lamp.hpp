#ifndef UE4SS_SDK_BP_Extractor_Lamp_HPP
#define UE4SS_SDK_BP_Extractor_Lamp_HPP

class ABP_Extractor_Lamp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Lamp Mesh;
    class USceneComponent* DefaultSceneRoot;

    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Extractor_Lamp(int32 EntryPoint);
};

#endif
