#ifndef UE4SS_SDK_AIC_PlagueShark_HPP
#define UE4SS_SDK_AIC_PlagueShark_HPP

class AAIC_PlagueShark_C : public AEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_PlagueShark(int32 EntryPoint);
};

#endif
