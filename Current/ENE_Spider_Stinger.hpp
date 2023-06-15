#ifndef UE4SS_SDK_ENE_Spider_Stinger_HPP
#define UE4SS_SDK_ENE_Spider_Stinger_HPP

class AENE_Spider_Stinger_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight_Tail;
    class UPointLightComponent* PointLight_Weakpoint;
    class UCapsuleComponent* Capsule;
    class UStingerIdleAudioComponent* StingerIdleAudio;
    class USplineMeshComponent* Extender;
    class USkeletalMeshComponent* TailEnd;
    class USphereComponent* Sphere;
    class USplineHookAttack* SplineHookAttack;
    class UAlignEnemyComponent* AlignEnemy;
    class UArmorHealthDamageComponent* ArmorHealthDamage;
    class UMeleeAttackComponent* MeleeAttack;
    TArray<class UMaterialInterface*> TailMateirals;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void StartDissolve();
    void BndEvt__ENE_Spider_Stinger_HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void StartCorrosiveDissovle();
    void ExecuteUbergraph_ENE_Spider_Stinger(int32 EntryPoint);
};

#endif
