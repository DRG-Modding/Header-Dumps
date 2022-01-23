#ifndef UE4SS_SDK_AIC_MiniMule_HPP
#define UE4SS_SDK_AIC_MiniMule_HPP

class AAIC_MiniMule_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void CustomEvent_0();
    void ExecuteUbergraph_AIC_MiniMule(int32 EntryPoint, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_AIC_MiniMuleK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_RunBehaviorTree_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
};

#endif
