#ifndef UE4SS_SDK_BP_Azure_MagicHole_HPP
#define UE4SS_SDK_BP_Azure_MagicHole_HPP

class ABP_Azure_MagicHole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStatusEffectTriggerComponent* StatusEffectTrigger;
    class UAudioComponent* AzureMagic_Hole_Cue;
    class UBP_DamageTriggerComponent_C* BP_DamageTriggerComponent;
    class UCapsuleComponent* Capsule;
    class UChildActorComponent* BP_MagicHoleBottomDebris;
    class UBillboardComponent* Billboard;
    class UParticleSystemComponent* P_Biome_Azure_MagicHole_Sparks;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_Base;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_Hole;
    class USceneComponent* Carvers;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_Carver_DropPodDrill002;
    class UStaticMeshComponent* SM_Carver_DropPodDrill001;
    class USceneComponent* DefaultSceneRoot;
    float UpwardPush;

    void ReceiveBeginPlay();
    void OnComponentBeginOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnComponentEndOverlap_Event_0(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Azure_MagicHole(int32 EntryPoint);
};

#endif
