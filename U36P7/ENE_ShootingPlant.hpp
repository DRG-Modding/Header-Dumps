#ifndef UE4SS_SDK_ENE_ShootingPlant_HPP
#define UE4SS_SDK_ENE_ShootingPlant_HPP

class AENE_ShootingPlant_C : public AShootingPlant
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProjectileAttackComponent* ProjectileAttack;
    class UStaticMeshComponent* Weakspot2;
    class UStaticMeshComponent* Weakspot;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPawnSensingComponent* PawnSensing;
    class UOutlineComponent* outline;
    class UCapsuleComponent* Capsule;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;

    class USkeletalMeshComponent* GetMesh();
    void BndEvt__Health_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__Health_K2Node_ComponentBoundEvent_31_HealthChangedSig__DelegateSignature(float Health);
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void OnFrozen(class AActor* Source);
    void OnUnFrozen();
    void OnRep_Target();
    void ExecuteUbergraph_ENE_ShootingPlant(int32 EntryPoint);
};

#endif
