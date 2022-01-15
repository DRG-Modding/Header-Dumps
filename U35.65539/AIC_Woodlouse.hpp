#ifndef UE4SS_SDK_AIC_Woodlouse_HPP
#define UE4SS_SDK_AIC_Woodlouse_HPP

class AAIC_Woodlouse_C : UEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Woodlouse(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue);
}

#endif
