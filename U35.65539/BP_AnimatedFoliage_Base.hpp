#ifndef UE4SS_SDK_BP_AnimatedFoliage_Base_HPP
#define UE4SS_SDK_BP_AnimatedFoliage_Base_HPP

class ABP_AnimatedFoliage_Base_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UTerrainPlacementComponent* terrainPlacement;
    UTerrainDetectComponent* TerrainDetect;
    USimpleHealthComponent* SimpleHealth;
    UCapsuleComponent* CapsuleCollision;
    USkeletalMeshComponent* SK_AnimatedMesh;
    USceneComponent* DefaultSceneRoot;
    USoundCue* deathSound;
    UParticleSystem* deathParticles;
    UNiagaraSystem* NiagaraDeathParticles;
    float PlayAnimationDistance;

    void UserConstructionScript(float CallFunc_RandomFloatInRange_ReturnValue);
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void ProximityChanged(UPlayerCharacter* Player, bool enteredTrigger);
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_AnimatedFoliage_Base(int32 EntryPoint, bool Temp_bool_Variable, PlayerProximityDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, bool CallFunc_IsValid_ReturnValue, UFXSystemAsset* K2Node_Select_Default);
}

#endif
