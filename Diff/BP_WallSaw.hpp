#ifndef UE4SS_SDK_BP_WallSaw_HPP
#define UE4SS_SDK_BP_WallSaw_HPP

class ABP_WallSaw_C : public AWallSaw
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDAudioComponent* WallSawDestroyed;
    class UFSDAudioComponent* WallSawActivated;
    class UNiagaraComponent* NS_Grenade_WallSaw_Trail;
    class UNiagaraComponent* NS_WallSaw_GroundSpark;
    class UNiagaraComponent* NS_WallSaw_FallAppartParticles;
    class UNiagaraComponent* NS_WallSaw_DeployParticles;
    class UCapsuleComponent* GrazeCapsule;
    class USkeletalMeshComponent* SK_HandGrenade_R_FoldOut;
    class UPointLightComponent* PointLight;
    class USceneComponent* SawPivot;
    class UDamageComponent* GlanceDamage;
    class USceneComponent* DefaultSceneRoot;
    float SpawnWobble_NewTrack_0_8C6FC6E8454070F73FE4D1B7EC977E67;
    TEnumAsByte<ETimelineDirection::Type> SpawnWobble__Direction_8C6FC6E8454070F73FE4D1B7EC977E67;
    class UTimelineComponent* SpawnWobble;
    float MaxPotentialLifetimeDamage;
    float DurationBeforeExpiration;
    float RotationSpeed;
    class UParticleSystem* FallingAppartDeathParticles;
    class UParticleSystem* SawDeployedParticles;
    class UParticleSystem* SlicingOnImpactParticles;
    FRotator StartRotation;

    void SpawnWobble__FinishedFunc();
    void SpawnWobble__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void DestroySelf();
    void GrazeOverlapCallback(class AActor* Actor, class UPrimitiveComponent* prim);
    void ExecuteUbergraph_BP_WallSaw(int32 EntryPoint);
};

#endif
