#ifndef UE4SS_SDK_ENE_GliderBeast_HPP
#define UE4SS_SDK_ENE_GliderBeast_HPP

class AENE_GliderBeast_C : public AFlyingEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* GliderBeastDeath_Cue;
    class UAudioComponent* GliderBeastGrabOneShotScream;
    class UAudioComponent* GliderBeastIdleScream;
    class UAudioComponent* GliderBeastAttachScream;
    class UAIPlayerControlComponent* AIPlayerControl;
    class USphereComponent* Sphere;
    class UEnemyComponent* enemy;
    class UOutlineComponent* outline;
    FTimerHandle AudioScreamHandle;
    bool IsControlledByPlayer;
    bool LastScreamForced;
    class UAudioComponent* LastPlayedScream;
    class UAudioComponent* NewVar_0;

    void PlayScream(class UAudioComponent* ForcedScream);
    void OnNotifyEnd_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void OnNotifyBegin_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void OnInterrupted_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void OnBlendOut_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void OnCompleted_71AD1CB34498196F772390944624EEFE(FName NotifyName);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnControlledByPlayer(bool IsControlled, bool IsLocallyControlled);
    void ScreamUpdate();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ENE_GliderBeast(int32 EntryPoint);
};

#endif
