#ifndef UE4SS_SDK_BP_SpikeyPlant_HPP
#define UE4SS_SDK_BP_SpikeyPlant_HPP

class ABP_SpikeyPlant_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* Damage;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class USkeletalMeshComponent* Plant;
    class UTerrainPlacementComponent* terrainPlacement;
    class UTerrainDetectComponent* TerrainDetect;
    class USphereComponent* Spike Free Area;
    class USphereComponent* Spike Spawn Area;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* DefaultSceneRoot;
    float Retract_spikes_extract_12C035484D9FA60A9729318F1FE2B43F;
    TEnumAsByte<ETimelineDirection::Type> Retract_spikes__Direction_12C035484D9FA60A9729318F1FE2B43F;
    class UTimelineComponent* Retract spikes;
    float Extrude_spikes_extract_506BA7914733C21AE25E36ACEB72E417;
    TEnumAsByte<ETimelineDirection::Type> Extrude_spikes__Direction_506BA7914733C21AE25E36ACEB72E417;
    class UTimelineComponent* Extrude spikes;
    int32 Max Amount Of Spikes;
    int32 Min amount Of Spikes;
    bool IsExtruded;
    bool IsActive;
    FTimerHandle ActiveTimer;
    TArray<class USkeletalMeshComponent*> AnimatedSpikeMeshes;
    FBP_SpikeyPlant_CChange state Change state;
    void Change state(bool Is Extruded, bool Is Triggered);
    TArray<class UCapsuleComponent*> Capsule colliders;
    float SpikeScale;
    bool PlayerIsNearby;
    int32 SpikeSeed;
    TArray<FTransform> SpikeTransforms;
    FTransform CurrentTransform;
    FCSGRaycastHitInfo Hit;

    void FindSpikeLocation();
    void AddSpikeAndCollision(const FTransform WorldTransform, bool IsFirstSpike);
    void OnRep_SpikeTransforms();
    void OnRep_IsExtruded();
    void UserConstructionScript();
    void Extrude spikes__FinishedFunc();
    void Extrude spikes__UpdateFunc();
    void Extrude spikes__HitActors__EventFunc();
    void Retract spikes__FinishedFunc();
    void Retract spikes__UpdateFunc();
    void Retract spikes__DeactivateHit__EventFunc();
    void ReceiveBeginPlay();
    void Spike extrusion();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float Damage, const FDamageData& DamageData, bool anyHealthLost);
    void ExtrudeSpikes();
    void Retract Spike event();
    void Raytrace for terrain placement();
    void On Spike Capsule Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PlayerNearby(class APlayerCharacter* Player, bool enteredTrigger);
    void ExecuteUbergraph_BP_SpikeyPlant(int32 EntryPoint);
    void Change state__DelegateSignature(bool Is Extruded, bool Is Triggered);
};

#endif
