#ifndef UE4SS_SDK_AIC_FacilityTurretDrone_HPP
#define UE4SS_SDK_AIC_FacilityTurretDrone_HPP

class AAIC_FacilityTurretDrone_C : UEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<AFacilityTurret> TurretClass;
    int32 TurretVersion;
    FTransform TargetTransform;
    bool IsSetup;

    void SetTargetTransform(FTransform TargetTransform);
    void ReceivePossess(APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_FacilityTurretDrone(int32 EntryPoint, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, APawn* K2Node_Event_PossessedPawn, UDeepPathfinderMovement* CallFunc_GetComponentByClass_ReturnValue, UBP_FacilityTurretDrone_C* K2Node_DynamicCast_AsBP_Facility_Turret_Drone, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_FindNearestPathfinderPoint_ReturnValue);
}

#endif
