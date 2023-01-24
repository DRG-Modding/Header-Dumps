#ifndef UE4SS_SDK_BP_RockCrackerPod_HPP
#define UE4SS_SDK_BP_RockCrackerPod_HPP

class ABP_RockCrackerPod_C : public ARockCrackerPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* FuelLineStart;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USkeletalMeshComponent* SkeletalMesh;
    class UNiagaraComponent* N_BrokenSmoke;
    class UAudioComponent* RockCrackerPodRunning_Cue;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UChildActorComponent* BP_OxygenTankSound;
    class UChildActorComponent* BP_OxygenTank1;
    class UChildActorComponent* BP_OxygenTank;
    class UOutlineComponent* outline;
    class UOxygenSourceComponent* OxygenSource;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UDropToTerrainComponent* DropToTerrain;
    class UAutoCarverComponent* AutoCarver;
    class UCapsuleComponent* RepairCollider;
    class USingleUsableComponent* ReviveUsable;
    class UObjectAttackerPositioning* ObjectAttackerPositioning;
    class UCapsuleComponent* BodyCollision;
    class USkeletalMeshComponent* SK_DropPod_Drill;
    FTimerHandle ResizeCarverTimer;
    class ABP_RockCracker_EndPoint_C* EndPoint;
    class AFuelLineSegment* FirstFuelLineSegment;
    FBP_RockCrackerPod_COnLanded OnLanded;
    void OnLanded();
    FBP_RockCrackerPod_COnEventActiveChanged OnEventActiveChanged;
    void OnEventActiveChanged(bool Active);
    class UAudioComponent* DrillingSound;
    class UParticleSystemComponent* DrillingParticles;
    FVector FuelLineStartLocation;

    void OnRep_FuelLineStartLocation();
    void UpdateLights(class UMaterialInterface* NewMaterial);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__BP_RockCrackerPod_ReviveUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnEventStarted();
    void OnEventEnded(bool wasSuccess);
    void OnDroppodImpact();
    void ResizeCarver();
    void SetEndPoint(class ABP_RockCracker_EndPoint_C* EndPoint);
    void BndEvt__BP_RockCrackerPod_DropToTerrain_K2Node_ComponentBoundEvent_3_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void OnFirstFuelLineSegment(class AFuelLineSegment* InFirstSegment);
    void OnEnterState(ERockCrackerstate PodState);
    void OnExitState(ERockCrackerstate PodState);
    void BndEvt__BP_RockCrackerPod_Health_K2Node_ComponentBoundEvent_7_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void SwitchYellowLights(bool isGreen);
    void ExecuteUbergraph_BP_RockCrackerPod(int32 EntryPoint);
    void OnEventActiveChanged__DelegateSignature(bool Active);
    void OnLanded__DelegateSignature();
};

#endif
