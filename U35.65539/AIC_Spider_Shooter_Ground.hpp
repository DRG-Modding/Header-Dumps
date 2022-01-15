#ifndef UE4SS_SDK_AIC_Spider_Shooter_Ground_HPP
#define UE4SS_SDK_AIC_Spider_Shooter_Ground_HPP

class AAIC_Spider_Shooter_Ground_C : UAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ExecuteUbergraph_AIC_Spider_Shooter_Ground(int32 EntryPoint, APawn* CallFunc_K2_GetPawn_ReturnValue, UENE_Spider_Shooter_C* K2Node_DynamicCast_AsENE_Spider_Shooter, bool K2Node_DynamicCast_bSuccess, FName CallFunc_MakeLiteralName_ReturnValue, const FName K2Node_Event_keyName, bool K2Node_SwitchName_CmpSuccess, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
