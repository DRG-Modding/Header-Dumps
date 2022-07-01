#ifndef UE4SS_SDK_ENE_StabberVine_Tentacle_HPP
#define UE4SS_SDK_ENE_StabberVine_Tentacle_HPP

class AENE_StabberVine_Tentacle_C : public AStabberVine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* LaserPointer;
    class UParticleSystemComponent* P_KillerVine_Death;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* SM_BladeMesh;
    class USceneComponent* Rotator;
    class USphereComponent* DamageSphere;
    class USceneComponent* Head;
    class USkeletalMeshComponent* SK_VineMesh;
    class USplineComponent* Spline;
    class UMotionAudioController* MotionAudioController;
    class UStaticMeshComponent* Weakspot;
    class UAudioComponent* KillerVine_Attack_Cue;
    class UDamageComponent* HeadDamage;
    class UExplosionComponent* Explosion;
    class USceneComponent* DefaultSceneRoot;
    class AENE_StabberVines_C* TentaclesBody_BP;
    class UMaterialInstanceDynamic* DynamicMaterial;
    FLinearColor IdleColor;
    FName MaterialColourParamString;
    FTransform AttackGoalTransform;
    class AActor* CurrentTarget;
    bool IsDoingMelee;
    float IdleHeadMovementDuration;
    float MeleeAttackDuration;
    bool HitGround;

    class USceneComponent* GetHeadRotator();
    class USceneComponent* GetHeadRoot();
    FVector GetTargetCenterMass();
    void GetDistanceToHead(FVector InLocation, float& Distance);
    void OnRep_TentaclesBody_BP();
    void HitTerrainAndStop(FVector TargetLocation, float Penetration, FVector& NewTargetLocation, bool& HitTerrain);
    void CheckLoS(class AActor* LoSCheckTargetActor, bool& ClearLoSToTarget);
    void UserConstructionScript();
    void HydraMeleeTell(FLinearColor NewColor);
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void DoMeleeAttack(class AActor* AttackTarget);
    void BndEvt__DamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void KillTentacle();
    void ReceiveBeginPlay();
    void Recieve_OnRep_Owner();
    void PlayPreAttackSound();
    void PlayAttackCue();
    void BndEvt__Outline_K2Node_ComponentBoundEvent_0_OutlineChanged__DelegateSignature(EOutline InOutline);
    void All_PlayHitGround();
    void PlayHitGround();
    void ExecuteUbergraph_ENE_StabberVine_Tentacle(int32 EntryPoint);
};

#endif
