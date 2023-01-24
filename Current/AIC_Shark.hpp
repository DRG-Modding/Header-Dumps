#ifndef UE4SS_SDK_AIC_Shark_HPP
#define UE4SS_SDK_AIC_Shark_HPP

class AAIC_Shark_C : public AEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Shark(int32 EntryPoint);
};

#endif
