#ifndef UE4SS_SDK_ENE_Spider_Lobber_HPP
#define UE4SS_SDK_ENE_Spider_Lobber_HPP

class AENE_Spider_Lobber_C : public AENE_Spider_Lobber_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileAttackComponent* ProjectileAttackNarrow;
    class UProjectileAttackComponent* ProjectileAttack;
    class UMaterialInstanceDynamic* LobberButtMat_0;
    class APRJ_Spider_Lobber_NOTINUSE_C* LastProjectile;
    float ButtGlowStart_0;
    float ButtPointsGlowStart_0;
    class UMaterialInstanceDynamic* LobberButtPointsMat_0;

    void InitDynamicMaterials_0();
    void GetEnemySpawnedCount(int32& SpawnCount);
    void BndEvt__ENE_Spider_Lobber_ProjectileAttack_K2Node_ComponentBoundEvent_1_ProjetileSpawnedDelegate__DelegateSignature(class AProjectileBase* Projectile, class AActor* Target);
    void BndEvt__ENE_Spider_Lobber_ProjectileAttackNarrow_K2Node_ComponentBoundEvent_2_ProjetileSpawnedDelegate__DelegateSignature(class AProjectileBase* Projectile, class AActor* Target);
    void ExecuteUbergraph_ENE_Spider_Lobber(int32 EntryPoint);
};

#endif
