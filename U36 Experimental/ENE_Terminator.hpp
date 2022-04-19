#ifndef UE4SS_SDK_ENE_Terminator_HPP
#define UE4SS_SDK_ENE_Terminator_HPP

class AENE_Terminator_C : public ATerminatorEnemy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* AoERange;
    class UBP_Terminator_ElectricAttack_C* BP_Terminator_ElectricAttack;
    class UDamageComponent* AoEDamage;
    class UTerrainScannerStaticMesh* TerrainScannerStaticMesh_TEMP_ForTEsting;
    class UTerminatorShoutComponent* TerminatorShout;
    class UPawnSensingComponent* PawnSensing;
    class UNiagaraComponent* NS_Terminator_Engine;
    class UOutlineComponent* outline;
    class UWeakpointGlowComponent* WeakpointGlow;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UAudioComponent* TerminatorIdle_Cue;
    class UCapsuleComponent* Capsule;
    class UChildActorComponent* RightTentacle;
    class UChildActorComponent* LeftTentacle;
    class UMeleeAttackComponent* CarveAttack;
    class UAlignEnemyComponent* AlignEnemy;
    class UPawnStatsComponent* PawnStats;
    class UEnemyComponent* enemy;
    float ArmorHP;
    int32 NumPhaseBombs;
    FVector PhaseBombPOS;
    class UAudioComponent* CallSound;
    TArray<class APlayerCharacter*> playersInside;
    FTimerHandle Handle_AttackCheck;

    void AnyArmBusy(bool& IsBusy);
    void SetupTentacles(TArray<class UBP_TentacleGrab_C*>& TentacleAttacks);
    void SetupWeakpoints();
    void SetupArmor();
    void UserConstructionScript();
    void OnNotifyEnd_3721DA334301917D32EA5D889B0378A5(FName NotifyName);
    void OnNotifyBegin_3721DA334301917D32EA5D889B0378A5(FName NotifyName);
    void OnInterrupted_3721DA334301917D32EA5D889B0378A5(FName NotifyName);
    void OnBlendOut_3721DA334301917D32EA5D889B0378A5(FName NotifyName);
    void OnCompleted_3721DA334301917D32EA5D889B0378A5(FName NotifyName);
    void OnNotifyEnd_C20FA9B940F844444E13549B61631167(FName NotifyName);
    void OnNotifyBegin_C20FA9B940F844444E13549B61631167(FName NotifyName);
    void OnInterrupted_C20FA9B940F844444E13549B61631167(FName NotifyName);
    void OnBlendOut_C20FA9B940F844444E13549B61631167(FName NotifyName);
    void OnCompleted_C20FA9B940F844444E13549B61631167(FName NotifyName);
    void OnNotifyEnd_2D0C98D44DB7A8A06CAD8D94CBADF63F(FName NotifyName);
    void OnNotifyBegin_2D0C98D44DB7A8A06CAD8D94CBADF63F(FName NotifyName);
    void OnInterrupted_2D0C98D44DB7A8A06CAD8D94CBADF63F(FName NotifyName);
    void OnBlendOut_2D0C98D44DB7A8A06CAD8D94CBADF63F(FName NotifyName);
    void OnCompleted_2D0C98D44DB7A8A06CAD8D94CBADF63F(FName NotifyName);
    void OnNotifyEnd_90FF725A419E06548840228AD88DAC76(FName NotifyName);
    void OnNotifyBegin_90FF725A419E06548840228AD88DAC76(FName NotifyName);
    void OnInterrupted_90FF725A419E06548840228AD88DAC76(FName NotifyName);
    void OnBlendOut_90FF725A419E06548840228AD88DAC76(FName NotifyName);
    void OnCompleted_90FF725A419E06548840228AD88DAC76(FName NotifyName);
    void ReceiveBeginPlay();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_3_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void BndEvt__CarveAttack_K2Node_ComponentBoundEvent_1_MeleeAttackDelegate__DelegateSignature();
    void All_ShowCarve();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void SpawnBarrier(class APlayerCharacter* Character);
    void CallPhaseBombBarrage();
    void BndEvt__ENE_Terminator_ArmorHealthDamage_K2Node_ComponentBoundEvent_0_AmorPartDestroyedDelegate__DelegateSignature(FName Name);
    void TentacleOutlineChanged(EOutline InOutline);
    void Receive_Alerted();
    void All_Detected();
    void BndEvt__ENE_Terminator_PawnSensing_K2Node_ComponentBoundEvent_5_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void Start();
    void End();
    void BndEvt__ENE_Terminator_Sphere_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CheckAvailability();
    void BndEvt__ENE_Terminator_Sphere_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_ENE_Terminator(int32 EntryPoint);
};

#endif
