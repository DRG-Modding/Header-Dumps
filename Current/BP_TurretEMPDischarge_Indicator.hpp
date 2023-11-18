#ifndef UE4SS_SDK_BP_TurretEMPDischarge_Indicator_HPP
#define UE4SS_SDK_BP_TurretEMPDischarge_Indicator_HPP

class ABP_TurretEMPDischarge_Indicator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* PlasmaLineRangeSphere;
    class USceneComponent* DefaultSceneRoot;

    void SetEMPIndicatorActive(bool Active);
    void ExecuteUbergraph_BP_TurretEMPDischarge_Indicator(int32 EntryPoint);
};

#endif
