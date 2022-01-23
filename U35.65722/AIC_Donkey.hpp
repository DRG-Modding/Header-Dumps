#ifndef UE4SS_SDK_AIC_Donkey_HPP
#define UE4SS_SDK_AIC_Donkey_HPP

class AAIC_Donkey_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void OnOverlapsChanged(int32 OverlapCount);
    void ExecuteUbergraph_AIC_Donkey(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_AIC_DonkeyK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_RunBehaviorTree_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 K2Node_CustomEvent_OverlapCount, class ABP_Donkey_C* K2Node_DynamicCast_AsBP_Donkey, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue);
};

#endif
