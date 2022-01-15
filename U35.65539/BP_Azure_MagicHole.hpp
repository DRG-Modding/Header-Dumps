#ifndef UE4SS_SDK_BP_Azure_MagicHole_HPP
#define UE4SS_SDK_BP_Azure_MagicHole_HPP

class ABP_Azure_MagicHole_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStatusEffectTriggerComponent* StatusEffectTrigger;
    UAudioComponent* AzureMagic_Hole_Cue;
    UBP_DamageTriggerComponent_C* BP_DamageTriggerComponent;
    UCapsuleComponent* Capsule;
    UChildActorComponent* BP_MagicHoleBottomDebris;
    UBillboardComponent* Billboard;
    UParticleSystemComponent* P_Biome_Azure_MagicHole_Sparks;
    ULevelGenerationCarverComponent* LevelGenerationCarver_Base;
    ULevelGenerationCarverComponent* LevelGenerationCarver_Hole;
    USceneComponent* Carvers;
    UTerrainPlacementComponent* terrainPlacement;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* SM_Carver_DropPodDrill002;
    UStaticMeshComponent* SM_Carver_DropPodDrill001;
    USceneComponent* DefaultSceneRoot;
    float UpwardPush;

    void ReceiveBeginPlay();
    void OnComponentBeginOverlap_Event_0(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnComponentEndOverlap_Event_0(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_Azure_MagicHole(int32 EntryPoint, ComponentBeginOverlapSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ComponentEndOverlapSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent_1, AActor* K2Node_CustomEvent_OtherActor_1, UPrimitiveComponent* K2Node_CustomEvent_OtherComp_1, int32 K2Node_CustomEvent_OtherBodyIndex_1, bool K2Node_CustomEvent_bFromSweep, const FHitResult K2Node_CustomEvent_SweepResult, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerMovementComponent* K2Node_DynamicCast_AsPlayer_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, AActor* K2Node_CustomEvent_OtherActor, UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_2, UPlayerMovementComponent* K2Node_DynamicCast_AsPlayer_Movement_Component_1, bool K2Node_DynamicCast_bSuccess_3);
}

#endif
