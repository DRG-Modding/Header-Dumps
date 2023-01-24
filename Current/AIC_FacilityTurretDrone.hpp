#ifndef UE4SS_SDK_AIC_FacilityTurretDrone_HPP
#define UE4SS_SDK_AIC_FacilityTurretDrone_HPP

class AAIC_FacilityTurretDrone_C : public AEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class AFacilityTurret> TurretClass;
    int32 TurretVersion;
    FTransform TargetTransform;
    bool IsSetup;

    void SetTargetTransform(FTransform TargetTransform);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_FacilityTurretDrone(int32 EntryPoint);
};

#endif
