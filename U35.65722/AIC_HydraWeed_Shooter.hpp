#ifndef UE4SS_SDK_AIC_HydraWeed_Shooter_HPP
#define UE4SS_SDK_AIC_HydraWeed_Shooter_HPP

class AAIC_HydraWeed_Shooter_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void StartBehavior();
    void ExecuteUbergraph_AIC_HydraWeed_Shooter(int32 EntryPoint, FExecuteUbergraph_AIC_HydraWeed_ShooterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_RunBehaviorTree_ReturnValue, const FName K2Node_Event_keyName, class APawn* CallFunc_K2_GetPawn_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, class AHydraWeedShooter* K2Node_DynamicCast_AsHydra_Weed_Shooter, bool K2Node_DynamicCast_bSuccess, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_Event_PossessedPawn, class AHydraWeedShooter* K2Node_DynamicCast_AsHydra_Weed_Shooter_1, bool K2Node_DynamicCast_bSuccess_2);
};

#endif
