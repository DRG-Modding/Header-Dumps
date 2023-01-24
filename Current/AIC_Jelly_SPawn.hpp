#ifndef UE4SS_SDK_AIC_Jelly_SPawn_HPP
#define UE4SS_SDK_AIC_Jelly_SPawn_HPP

class AAIC_Jelly_Spawn_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AENE_Jelly_Passive_Mother_C* Mother;

    class AENE_Jelly_Passive_Mother_C* FindNewMother();
    void ReceiveBeginPlay();
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void ExecuteUbergraph_AIC_Jelly_Spawn(int32 EntryPoint);
};

#endif
