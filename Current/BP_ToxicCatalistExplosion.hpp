#ifndef UE4SS_SDK_BP_ToxicCatalistExplosion_HPP
#define UE4SS_SDK_BP_ToxicCatalistExplosion_HPP

class ABP_ToxicCatalistExplosion_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_ToxicCatalyst_DeathExplosion;
    class UDamageComponent* ExplosionDamage;
    class USceneComponent* DefaultSceneRoot;
    float BaseExplosionDamage;
    float ExtraDamagePerBullet;
    float BaseRadius;
    float ExtraRadiusPerBullet;
    FRuntimeFloatCurve Curve;
    class USkeletalMeshComponent* Victim Mesh;
    int32 StackAmmount;

    void TriggerDeathExplosion(int32 NumBullets, float DamageDelay, class USkeletalMeshComponent* VictimMesh);
    void ExecuteUbergraph_BP_ToxicCatalistExplosion(int32 EntryPoint);
};

#endif
