#ifndef UE4SS_SDK_ENE_FlyingSmartRock_HPP
#define UE4SS_SDK_ENE_FlyingSmartRock_HPP

class AENE_FlyingSmartRock_C : public AEnemyDeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_FlyingRock_Birth;
    class UParticleSystemComponent* Trail;
    class UPointLightComponent* PointLight;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* Core;
    class UAudioComponent* RockAttack_FloatingLoop_Cue;
    class UAudioComponent* PrepareToAttack_Cue;
    class UDamageComponent* Damage;
    class UOutlineComponent* outline;
    class UEnemyComponent* enemy;
    float Timeline_1_ScaleMesh_EC054E764BE887708377689ABBE38A90;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_EC054E764BE887708377689ABBE38A90;
    class UTimelineComponent* Timeline_1;
    float Timeline_0_Size_3A168B64422F3454BD6578A9FC2C38D3;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3A168B64422F3454BD6578A9FC2C38D3;
    class UTimelineComponent* Timeline_0;
    float AttackTell_ParticleScale_AADFBFDA4F8A42D878B608A53FD58DB2;
    float AttackTell_Light_AADFBFDA4F8A42D878B608A53FD58DB2;
    TEnumAsByte<ETimelineDirection::Type> AttackTell__Direction_AADFBFDA4F8A42D878B608A53FD58DB2;
    class UTimelineComponent* AttackTell;
    FTimerHandle TimeLOS;
    float AttackDistance;
    FVector CoreSize;
    float LightRadiusBoost;
    float LightIntensityBoost;
    class UMaterialInstanceDynamic* DynamicMaterial_Core;
    float EmissiveBoost;
    class UParticleSystemComponent* ConnectionParticles;
    class AEscortDestination* Heartstone;
    FVector FinalMeshSize;

    void UserConstructionScript();
    void AttackTell__FinishedFunc();
    void AttackTell__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void CollideDamageDie(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void CheckTargetLOS();
    void AttackTargetEffects(FVector TargetLocation);
    void StopTell();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ScaleCore();
    void ReceiveTick(float DeltaSeconds);
    void SpawnConnectionParticles();
    void RemoveConnectionParticles();
    void ReceiveDestroyed();
    void ScaleMesh();
    void ExecuteUbergraph_ENE_FlyingSmartRock(int32 EntryPoint);
};

#endif
