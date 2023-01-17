#ifndef UE4SS_SDK_AIC_FriendlyShredder_HPP
#define UE4SS_SDK_AIC_FriendlyShredder_HPP

class AAIC_FriendlyShredder_C : public AFSDAIController
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AENE_Jelly_Passive_Mother_C* Mother;
    float SpeedModifier;

    class AENE_Jelly_Passive_Mother_C* FindNewMother();
    void ReceiveBeginPlay();
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceivePossess(class APawn* PossessedPawn);
    void Speed Changer();
    void StartSpeedModifier();
    void ExecuteUbergraph_AIC_FriendlyShredder(int32 EntryPoint);
};

#endif
