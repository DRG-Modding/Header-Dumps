#ifndef UE4SS_SDK_AIC_Spider_Tank_Boss_HPP
#define UE4SS_SDK_AIC_Spider_Tank_Boss_HPP

class AAIC_Spider_Tank_Boss_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnArmorDestroyed(float EnrageDuration);
    void ReceivePossess(class APawn* PossessedPawn);
    void ReceiveBeginPlay();
    void StartSpeedModifier();
    void ExecuteUbergraph_AIC_Spider_Tank_Boss(int32 EntryPoint);
};

#endif
