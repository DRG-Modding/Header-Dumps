#ifndef UE4SS_SDK_ENE_FacilityTentacle_HPP
#define UE4SS_SDK_ENE_FacilityTentacle_HPP

class AENE_FacilityTentacle_C : public AFacilityTentacle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWeakpointGlowComponent* WeaponFireGlow;
    class UNiagaraComponent* NS_Inner_Energy;
    class USkeletalMeshComponent* Head_Mesh;
    class USceneComponent* Rotator2;
    class USpotLightComponent* SpotLight;
    class USphereComponent* DamageSphere;
    class UStaticMeshComponent* SM_LightCone001;
    class UBP_TentacleBurrowAttack_C* BurrowAttack;
    class UBP_Tentacle_RangedAttack_C* RangedAttack;
    class UBP_TentacleMeleeAttack_C* MeleeAttack;
    class UPointLightComponent* PointLight;
    class UBillboardComponent* MeleeAttackPosition;
    class UBillboardComponent* RangedAttackPosition;
    class UOutlineComponent* outline;
    class USceneComponent* Head;
    class USkeletalMeshComponent* TentacleMesh;
    class USplineComponent* Spline;
    class UMotionAudioController* MotionAudioController;
    class UDamageComponent* HeadDamage;
    class UExplosionComponent* Explosion;
    class USceneComponent* DefaultSceneRoot;
    class ABP_MainFacility_DataVault_C* MainFacility_BP;
    class UMaterialInstanceDynamic* DynamicMaterial_Tell;
    FTransform AttackGoalTransform;
    class AActor* CurrentTarget;
    float IdleHeadMovementDuration;
    float MeleeAttackDuration;
    bool HitGround;
    float HeadStuckInGroundDuration;

    class USceneComponent* GetHeadRotator();
    class USceneComponent* GetHeadRoot();
    class USkeletalMeshComponent* GetMesh();
    void GetTentacle(class AENE_FacilityTentacle_C*& Tentacle);
    FVector GetTargetCenterMass();
    void HitTerrainAndStop(FVector TargetLocation, float Penetration, FVector& NewTargetLocation, bool& HitTerrain);
    void CheckLoS(class AActor* LoSCheckTargetActor, bool& ClearLoSToTarget);
    void UserConstructionScript();
    void OnNotifyEnd_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
    void OnNotifyBegin_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
    void OnInterrupted_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
    void OnBlendOut_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
    void OnCompleted_B4D1D3344A61A929F5F4A39F56548CF8(FName NotifyName);
    void OnNotifyEnd_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
    void OnNotifyBegin_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
    void OnInterrupted_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
    void OnBlendOut_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
    void OnCompleted_8602CF374E202C1C0971AB8E6016E177(FName NotifyName);
    void DoMeleeAttack(class AActor* AttackTarget);
    void BndEvt__DamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void KillTentacle();
    void ReceiveBeginPlay();
    void PlayPreAttackSound();
    void PlayAttackCue();
    void BndEvt__Outline_K2Node_ComponentBoundEvent_0_OutlineChanged__DelegateSignature(EOutline InOutline);
    void All_PlayHitGround();
    void PlayHitGround();
    void PlayFinalAttackWarning();
    void OnRangedAttack();
    void HandleDeath();
    void ExecuteUbergraph_ENE_FacilityTentacle(int32 EntryPoint);
};

#endif
