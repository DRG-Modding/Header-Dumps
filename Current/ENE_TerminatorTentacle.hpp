#ifndef UE4SS_SDK_ENE_TerminatorTentacle_HPP
#define UE4SS_SDK_ENE_TerminatorTentacle_HPP

class AENE_TerminatorTentacle_C : public ATerminatorTentacle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTentacleBusyComponent* TentacleBusy;
    class UBP_TentacleGrab_C* GrabAttack;
    class UWeakpointGlowComponent* WeaponFireGlow;
    class UNiagaraComponent* NS_Inner_Energy;
    class USkeletalMeshComponent* Head_Mesh;
    class USceneComponent* Rotator2;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* SM_LightCone001;
    class UBillboardComponent* MeleeAttackPosition;
    class UOutlineComponent* outline;
    class USceneComponent* Head;
    class USkeletalMeshComponent* TentacleMesh;
    class USplineComponent* Spline;
    class UDamageComponent* InitialDamage;
    class UExplosionComponent* Explosion;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstanceDynamic* DynamicMaterial_Tell;
    FTransform AttackGoalTransform;
    class AActor* CurrentTarget;
    float IdleHeadMovementDuration;
    float MeleeAttackDuration;
    bool HitGround;
    float HeadStuckInGroundDuration;

    void Spawn Crush Particles();
    bool GetIsTargetable();
    class USceneComponent* GetHeadRotator();
    class USceneComponent* GetHeadRoot();
    class USkeletalMeshComponent* GetMesh();
    void GetTentacle(class AENE_TerminatorTentacle_C*& Tentacle);
    FVector GetTargetCenterMass();
    void HitTerrainAndStop(FVector TargetLocation, float Penetration, FVector& NewTargetLocation, bool& HitTerrain);
    void UserConstructionScript();
    void OnNotifyEnd_A95BA6584C48C6EABBD6A895A1E446D7(FName NotifyName);
    void OnNotifyBegin_A95BA6584C48C6EABBD6A895A1E446D7(FName NotifyName);
    void OnInterrupted_A95BA6584C48C6EABBD6A895A1E446D7(FName NotifyName);
    void OnBlendOut_A95BA6584C48C6EABBD6A895A1E446D7(FName NotifyName);
    void OnCompleted_A95BA6584C48C6EABBD6A895A1E446D7(FName NotifyName);
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void KillTentacle();
    void ReceiveBeginPlay();
    void OnRangedAttack();
    void HandleDeath();
    void SpawnTentacleParts();
    void OwnerOutline(EOutline InOutline);
    void OnHeadEnteredTerrain();
    void OnHeadExitedTerrain();
    void BndEvt__ENE_TerminatorTentacle_GrabAttack_K2Node_ComponentBoundEvent_0_Crush__DelegateSignature();
    void ExecuteUbergraph_ENE_TerminatorTentacle(int32 EntryPoint);
};

#endif
