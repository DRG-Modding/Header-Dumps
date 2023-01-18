#ifndef UE4SS_SDK_ENE_Flea_HPP
#define UE4SS_SDK_ENE_Flea_HPP

class AENE_Flea_C : public AEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* Trail;
    class UAudioComponent* Audio Flying;
    class UAudioComponent* Audio Idle;
    class UPointLightComponent* PointLight;
    class USkeletalMeshComponent* Wings;
    class UInDangerComponent* InDanger;
    class UOutlineComponent* outline;
    class UEnemyComponent* enemy;
    class USphereComponent* Sphere;
    class UGroundToAirComponent* GroundToAir;
    float FleeFromplayerRange;
    float MinWalkTIme;
    float MaxWalkTime;

    void SetWantstoFly(bool Fly);
    void BndEvt__GroundToAir_K2Node_ComponentBoundEvent_0_ChangedStateSig__DelegateSignature();
    void OnMessageAI(FName TriggerName);
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__InDanger_K2Node_ComponentBoundEvent_2_IsInDangerSig__DelegateSignature();
    void ReceiveBeginPlay();
    void LookforPlayers();
    void RandomFlight();
    void OnFrozen(class AActor* Source);
    void ExecuteUbergraph_ENE_Flea(int32 EntryPoint);
};

#endif
