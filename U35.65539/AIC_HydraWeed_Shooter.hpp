#ifndef UE4SS_SDK_AIC_HydraWeed_Shooter_HPP
#define UE4SS_SDK_AIC_HydraWeed_Shooter_HPP

class AAIC_HydraWeed_Shooter_C : UFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void OnDeath(UHealthComponentBase* HealthComponent);
    void ReceivePossess(APawn* PossessedPawn);
    void StartBehavior();
    void ExecuteUbergraph_AIC_HydraWeed_Shooter(int32 EntryPoint, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_RunBehaviorTree_ReturnValue, const FName K2Node_Event_keyName, APawn* CallFunc_K2_GetPawn_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UHydraWeedShooter* K2Node_DynamicCast_AsHydra_Weed_Shooter, bool K2Node_DynamicCast_bSuccess, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, APawn* K2Node_Event_PossessedPawn, UHydraWeedShooter* K2Node_DynamicCast_AsHydra_Weed_Shooter_1, bool K2Node_DynamicCast_bSuccess_2);
}

#endif
