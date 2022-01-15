#ifndef UE4SS_SDK_AIC_Spider_Menace_HPP
#define UE4SS_SDK_AIC_Spider_Menace_HPP

class AAIC_Spider_Menace_C : UAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ReceivePossess(APawn* PossessedPawn);
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ExecuteUbergraph_AIC_Spider_Menace(int32 EntryPoint, APawn* K2Node_Event_PossessedPawn, FName CallFunc_MakeLiteralName_ReturnValue, const FName K2Node_Event_keyName, UObject* CallFunc_GetValueAsObject_ReturnValue, bool K2Node_SwitchName_CmpSuccess, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_K2_GetPawn_ReturnValue, UENE_Spider_RapidShooter_C* K2Node_DynamicCast_AsENE_Spider_Rapid_Shooter, bool K2Node_DynamicCast_bSuccess_1);
}

#endif
