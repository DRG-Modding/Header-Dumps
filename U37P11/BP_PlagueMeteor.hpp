#ifndef UE4SS_SDK_BP_PlagueMeteor_HPP
#define UE4SS_SDK_BP_PlagueMeteor_HPP

class ABP_PlagueMeteor_C : public APlagueMeteor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* EndExplosionDamage;
    class UStaticMeshComponent* CrevasseCarver;
    class UFSDAudioComponent* PlagueMeteorIdleSound;
    class UFSDAudioComponent* PreImpactSound;
    class USceneComponent* RoofBreakChecker;
    class USceneComponent* HeartSpawnLocation;
    class UStaticMeshComponent* Meteor_Top_Lid_Mesh;
    class UPointLightComponent* Light_Meteor_Area_Glow;
    class USpotLightComponent* SpotLight;
    class USpotLightComponent* SpotLight2;
    class USpotLightComponent* SpotLight1;
    class UCapsuleComponent* CollisionMeteorTop;
    class UPathfinderCollisionComponent* PathfinderFull;
    class UPathfinderCollisionComponent* PathfinderHalf;
    class UOutlineComponent* outline;
    class USingleUsableComponent* CalldownUsable;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USceneComponent* RespawnPoint3;
    class USceneComponent* RespawnPoint2;
    class USceneComponent* RespawnPoint1;
    class USceneComponent* RespawnPoint;
    class UMoveDownedPlayerCapsule* MoveDownedPlayerCapsule;
    class UStaticMeshComponent* SM_Carver_JackhammerPlatform1;
    class UStaticMeshComponent* ImpactCraterCarver;
    class UDamageComponent* DamageKillRadius;
    class USceneComponent* CrevasseAndShards;
    class USceneComponent* MainMeteor;
    class UNiagaraComponent* NS_Meteor_Spores;
    class USceneComponent* CarverRotator;
    class UChildActorComponent* End3;
    class UChildActorComponent* End1;
    class USceneComponent* CrackerPistons;
    class UStaticMeshComponent* TerrainScannerMesh;
    class USphereComponent* Sphere;
    class UAutoCarverComponent* AutoCarver;
    class UAudioComponent* RumbleSound;
    class UParticleSystemComponent* EarthquakeParticles;
    TArray<class ABP_RockCracker_EndPoint_C*> ConnectionPoints;
    int32 PointsConnected;
    int32 NumberOfConnections;
    int32 DrillsActivated;
    TArray<class APlayerCharacter*> PushedToPlayers;
    TArray<class UStaticMeshComponent*> Shards;
    int32 PlagueHeartsSpawned;
    bool ShowOnScanner;
    int32 PlagueHeartsDeposited;
    class UHUD_RockCracker_Event_C* Event Widget;
    TEnumAsByte<EMeteorUIState::Type> EventUIState;
    class AEVENT_MeteorDefence_C* EVENT_MeteorDefence;
    bool WaitingForHud;
    FTimerHandle BreakRoofTimer;
    int32 WorkingPods;
    bool StartLavaCarve;
    bool IsEventDone;
    class UNiagaraComponent* EarthquakeParticles2;
    class UAudioComponent* MicroMeteorSound;

    void OnRep_IsEventDone();
    void IsEventFinished(bool& IsFinished);
    void SetWorkingPodCount(int32 Count);
    void OnRep_Event_MeteorDefence();
    void OnRep_EventUIActive();
    void ConvertToImpactPos(FTransform InTransform, FTransform& OutTransform);
    void OnRep_ShowOnScanner();
    void UserConstructionScript();
    void DropStarted();
    void Impacted();
    void EnableVisuals();
    void ReceiveBeginPlay();
    void PowerLineConnected(class ABP_RockCracker_EndPoint_C* EndPoint);
    void failed();
    void success();
    void OnPistonRepaired(class APlayerCharacter* User, EInputKeys Key);
    void EndExplosion();
    void EventFinished();
    void BndEvt__BP_PlagueMeteor_CalldownUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__BP_PlagueMeteor_CalldownUsable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void OnStageAdvanced(int32 Stage);
    void OnHeartDeposited();
    void NearImpact();
    void CarveCrevasse(class UStaticMesh* StaticMesh, const FTransform& Transform);
    void StartRepairPistons();
    void OnPodsLanded(class ARessuplyPod* InPod, ERessuplyPodState InState);
    void StartEvent();
    void PushEventWidget_WhenHudIsReady();
    void TestIfRoofBreak();
    void SpawnBreakThroughParticle(FVector Location);
    void StartBreakThroughTimer();
    void StateChanged(ERockCrackerstate CurrentState, ERockCrackerstate previousState);
    void WorkingPodCountChanged(int32 OldCount, int32 NewCount);
    void LastaudioSignal();
    void BndEvt__BP_PlagueMeteor_AutoCarver_K2Node_ComponentBoundEvent_0_CarveDoneDelegate__DelegateSignature();
    void OpenMeteor();
    void SpawnHearts();
    void TestDestroy();
    void Impacted_Latejoin();
    void DestroyAndSpawnHearts_FailSafe();
    void ExecuteUbergraph_BP_PlagueMeteor(int32 EntryPoint);
};

#endif
