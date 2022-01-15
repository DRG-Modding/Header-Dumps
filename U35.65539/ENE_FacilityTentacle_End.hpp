#ifndef UE4SS_SDK_ENE_FacilityTentacle_End_HPP
#define UE4SS_SDK_ENE_FacilityTentacle_End_HPP

class AENE_FacilityTentacle_End_C : UENE_FacilityTentacle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Base;

    void ReceivePossessed(AController* NewController);
    void ExecuteUbergraph_ENE_FacilityTentacle_End(int32 EntryPoint, FName CallFunc_MakeLiteralName_ReturnValue, AController* K2Node_Event_NewController, UAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
}

#endif
