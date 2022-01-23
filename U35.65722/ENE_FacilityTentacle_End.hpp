#ifndef UE4SS_SDK_ENE_FacilityTentacle_End_HPP
#define UE4SS_SDK_ENE_FacilityTentacle_End_HPP

class AENE_FacilityTentacle_End_C : public AENE_FacilityTentacle_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Base;

    void ReceivePossessed(class AController* NewController);
    void ExecuteUbergraph_ENE_FacilityTentacle_End(int32 EntryPoint, FName CallFunc_MakeLiteralName_ReturnValue, class AController* K2Node_Event_NewController, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
};

#endif
