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

    void UserConstructionScript(float CallFunc_RandomFloatInRange_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void ProximityChanged(class APlayerCharacter* Player, bool enteredTrigger);
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_AnimatedFoliage_Base(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_BP_AnimatedFoliage_BaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, bool CallFunc_IsValid_ReturnValue, class UFXSystemAsset* K2Node_Select_Default);
};

#endif
