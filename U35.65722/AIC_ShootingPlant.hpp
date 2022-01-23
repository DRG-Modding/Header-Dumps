#ifndef UE4SS_SDK_AIC_ShootingPlant_HPP
#define UE4SS_SDK_AIC_ShootingPlant_HPP

class AAIC_ShootingPlant_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void StartBehavior();
    void ExecuteUbergraph_AIC_ShootingPlant(int32 EntryPoint, FExecuteUbergraph_AIC_ShootingPlantK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_RunBehaviorTree_ReturnValue, const FName K2Node_Event_keyName, class APawn* CallFunc_K2_GetPawn_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, class AShootingPlant* K2Node_DynamicCast_AsShooting_Plant, bool K2Node_DynamicCast_bSuccess, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, class APawn* K2Node_Event_PossessedPawn, class AShootingPlant* K2Node_DynamicCast_AsShooting_Plant_1, bool K2Node_DynamicCast_bSuccess_2);
};

#endif
