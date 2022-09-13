#ifndef UE4SS_SDK_BP_WallMaggot_HPP
#define UE4SS_SDK_BP_WallMaggot_HPP

class ABP_WallMaggot_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UAudioComponent* WallMaggotExtrude_Cue;
    class UAudioComponent* WallMaggotRetract_Cue;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* WallMaggot_idle_Cue;
    class UTerrainDetectComponent* TerrainDetect;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainPlacementComponent* terrainPlacement;
    class USkeletalMeshComponent* SK_HollowBoughMaggot_01;
    class UStaticMeshComponent* SM_Carver_Rock14;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class USceneComponent* DefaultSceneRoot;
    bool Hide;
    TArray<FSingleAnimationPlayData> Animations;
    class USoundCue* deathSound;
    class UParticleSystem* deathParticles;

    void OnRep_Hide();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void TriggerHide(class APlayerCharacter* Player, bool enteredTrigger);
    void Retract();
    void Extend();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_WallMaggot(int32 EntryPoint);
};

#endif
