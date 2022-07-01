#ifndef UE4SS_SDK_AIC_Jelly_Swarmer_HPP
#define UE4SS_SDK_AIC_Jelly_Swarmer_HPP

class AAIC_Jelly_Swarmer_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AENE_Jelly_Passive_Mother_C* Mother;

    class AENE_Jelly_Passive_Mother_C* FindNewMother();
    void ReceiveBeginPlay();
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Jelly_Swarmer(int32 EntryPoint);
};

#endif
