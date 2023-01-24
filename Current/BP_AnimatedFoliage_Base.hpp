#ifndef UE4SS_SDK_BP_AnimatedFoliage_Base_HPP
#define UE4SS_SDK_BP_AnimatedFoliage_Base_HPP

class ABP_AnimatedFoliage_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UTerrainPlacementComponent* terrainPlacement;
    class UTerrainDetectComponent* TerrainDetect;
    class USimpleHealthComponent* SimpleHealth;
    class UCapsuleComponent* CapsuleCollision;
    class USkeletalMeshComponent* SK_AnimatedMesh;
    class USceneComponent* DefaultSceneRoot;
    class USoundCue* deathSound;
    class UParticleSystem* deathParticles;
    class UNiagaraSystem* NiagaraDeathParticles;
    float PlayAnimationDistance;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void ProximityChanged(class APlayerCharacter* Player, bool enteredTrigger);
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_AnimatedFoliage_Base(int32 EntryPoint);
};

#endif
