#ifndef UE4SS_SDK_AIC_Spider_ExploderTank_HPP
#define UE4SS_SDK_AIC_Spider_ExploderTank_HPP

class AAIC_Spider_ExploderTank_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceivePossess(class APawn* PossessedPawn);
    void TookDamage(float Amount);
    void ExecuteUbergraph_AIC_Spider_ExploderTank(int32 EntryPoint);
};

#endif
