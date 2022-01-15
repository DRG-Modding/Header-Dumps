#ifndef UE4SS_SDK_AIC_ShootingPlant_HPP
#define UE4SS_SDK_AIC_ShootingPlant_HPP

class AAIC_ShootingPlant_C : UFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void OnDeath(UHealthComponentBase* HealthComponent);
    void ReceivePossess(APawn* PossessedPawn);
    void StartBehavior();
    void ExecuteUbergraph_AIC_ShootingPlant(int32 EntryPoint, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_RunBehaviorTree_ReturnValue, const FName K2Node_Event_keyName, APawn* CallFunc_K2_GetPawn_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UShootingPlant* K2Node_DynamicCast_AsShooting_Plant, bool K2Node_DynamicCast_bSuccess, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, APawn* K2Node_Event_PossessedPawn, UShootingPlant* K2Node_DynamicCast_AsShooting_Plant_1, bool K2Node_DynamicCast_bSuccess_2);
}

#endif
