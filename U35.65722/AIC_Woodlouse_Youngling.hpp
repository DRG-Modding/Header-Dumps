#ifndef UE4SS_SDK_AIC_Woodlouse_Youngling_HPP
#define UE4SS_SDK_AIC_Woodlouse_Youngling_HPP

class AAIC_Woodlouse_Youngling_C : public AEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Woodlouse_Youngling(int32 EntryPoint, bool CallFunc_RunBehaviorTree_ReturnValue);
};

#endif
