#ifndef UE4SS_SDK_BP_Refinery_WarningLight_HPP
#define UE4SS_SDK_BP_Refinery_WarningLight_HPP

class ABP_Refinery_WarningLight_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* ST_Refinery_WarningLight;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void OnRefineryStateChanged(ERefineryState InRefineryState);
    void ExecuteUbergraph_BP_Refinery_WarningLight(int32 EntryPoint);
};

#endif
