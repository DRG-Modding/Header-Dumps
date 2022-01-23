#ifndef UE4SS_SDK_AIC_Spider_Shooter_HPP
#define UE4SS_SDK_AIC_Spider_Shooter_HPP

class AAIC_Spider_Shooter_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Spider_Shooter(int32 EntryPoint, FName CallFunc_MakeLiteralName_ReturnValue, const FName K2Node_Event_keyName, bool K2Node_SwitchName_CmpSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AENE_Spider_Shooter_C* K2Node_DynamicCast_AsENE_Spider_Shooter, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, class APawn* K2Node_Event_PossessedPawn);
};

#endif
