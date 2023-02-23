#ifndef UE4SS_SDK_BP_DropPod_Base_HPP
#define UE4SS_SDK_BP_DropPod_Base_HPP

class ABP_DropPod_Base_C : public ADropPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget_SeatMonitorRight1;
    class UWidgetComponent* Widget_SeatMonitorLeft1;
    class UChildActorComponent* Widget_RandomCode07;
    class UChildActorComponent* Widget_RandomCode06;
    class UChildActorComponent* Widget_RandomCode05;
    class UChildActorComponent* Widget_RandomCode04;
    class UChildActorComponent* Widget_RandomCode03;
    class UChildActorComponent* Widget_Countdown2;
    class UChildActorComponent* Widget_Countdown1;
    class UChildActorComponent* Widget_RandomCode02;
    class UChildActorComponent* Widget_RandomCode01;
    class UChildActorComponent* Widget_MissionData1;
    class UChildActorComponent* Widget_CaveData1;
    class UChildActorComponent* Widget_DangerLevel02;
    class UChildActorComponent* Widget_DangerLevel01;
    class UChildActorComponent* Widget_ResourceScreen02;
    class UChildActorComponent* Widget_ResourceScreen01;
    class UAutoCarverComponent* AutoCarverArm;
    class UAudioComponent* Audio_Molly_Loadbeam;
    class USkeletalMeshComponent* SK_DropPod_DroneBay;
    class USkeletalMeshComponent* SK_DropPod_MuleBay;
    class UBoxComponent* Ramp_DwarfDetector;
    class UPathfinderCollisionComponent* PathfinderWalkable;
    class UPathfinderCollisionComponent* PathfinderBlockerDrill_Walk;
    class UPathfinderCollisionComponent* PathfinderBlockerDrill_Block;
    class UStaticMeshComponent* Monitor_Right;
    class UStaticMeshComponent* Monitor_Left;
    class UStaticMeshComponent* DrillBlocker;
    class UPointLightComponent* light_filler2;
    class UPointLightComponent* light_filler1;
    class UPointLightComponent* light_readySign1;
    class USceneComponent* RedLights;
    class UStaticMeshComponent* StaticMesh17;
    class UPointLightComponent* light_display4;
    class UPointLightComponent* light_display3;
    class UStaticMeshComponent* SM_DropPod_ClimbTread;
    class UStaticMeshComponent* SM_DropPod_ClimbTread3;
    class UStaticMeshComponent* SM_DropPod_ClimbTread2;
    class UStaticMeshComponent* SM_DropPod_ClimbTread1;
    class USkeletalMeshComponent* OreBox_Left;
    class USkeletalMeshComponent* OreBox_Right;
    class USkeletalMeshComponent* OreBox_Back;
    class UChildActorComponent* BP_TruckerBalls1;
    class UChildActorComponent* BP_TruckerBalls;
    class UStaticMeshComponent* StaticMesh16;
    class UStaticMeshComponent* StaticMesh15;
    class UStaticMeshComponent* StaticMesh14;
    class UStaticMeshComponent* StaticMesh13;
    class UStaticMeshComponent* StaticMesh12;
    class UStaticMeshComponent* StaticMesh11;
    class UPointLightComponent* PointLight15;
    class UPointLightComponent* PointLight14;
    class UPointLightComponent* PointLight13;
    class UPointLightComponent* PointLight12;
    class UPointLightComponent* PointLight11;
    class UPointLightComponent* PointLight10;
    class UPointLightComponent* PointLight9;
    class UPointLightComponent* PointLight8;
    class UPointLightComponent* PointLight7;
    class UPointLightComponent* PointLight6;
    class UPointLightComponent* PointLight5;
    class UPointLightComponent* PointLight4;
    class UBoxComponent* InSidePodArea;
    class UOxygenSourceComponent* OxygenSource;
    class UAudioComponent* AudioCenter;
    class UAudioComponent* AudioBack;
    class UAudioComponent* AudioFront;
    class UAudioComponent* AudioRight;
    class UAudioComponent* AudioLeft;
    class UAutoCarverComponent* PrettyCarver;
    class UTerrainPlacementComponent* terrainPlacement;
    class USphereComponent* KillSphere;
    class UBoxComponent* DwarfChecker;
    class UStaticMeshComponent* StaticMesh6;
    class UStaticMeshComponent* StaticMesh10;
    class UStaticMeshComponent* StaticMesh9;
    class UStaticMeshComponent* StaticMesh8;
    class UStaticMeshComponent* StaticMesh7;
    class UPathfinderCollisionComponent* PathfinderBlocker;
    class UBoxComponent* Box;
    class USceneComponent* DonkeyReturnDropPosition;
    class USceneComponent* DonkeySpawnPosition;
    class USkeletalMeshComponent* Ramp;
    class UChildActorComponent* BP_Drop_CamShake;
    class UChildActorComponent* Spawn2;
    class UChildActorComponent* Spawn1;
    class UChildActorComponent* Spawn4;
    class USkeletalMeshComponent* SK_DropPod_Drill;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class USceneComponent* floorCollision;
    class UStaticMeshComponent* Spot2;
    class UStaticMeshComponent* Spot1;
    class USceneComponent* hull;
    class USceneComponent* seats;
    class USceneComponent* lights_interior;
    class USkeletalMeshComponent* SK_DropPod_Airlock;
    class UChildActorComponent* Spawn3;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* StaticMesh5;
    class UStaticMeshComponent* StaticMesh4;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UStaticMeshComponent* Cone2;
    class USpotLightComponent* SpotLight2;
    class USpotLightComponent* SpotLight1;
    class UStaticMeshComponent* Cone1;
    class UStaticMeshComponent* SM_DropPod_Hull;
    class UStaticMeshComponent* SM_DropPod_Hull_NoCol;
    class UStaticMeshComponent* Seat_Empty4;
    class UStaticMeshComponent* Seat_Empty3;
    class UStaticMeshComponent* Seat_Empty2;
    class UStaticMeshComponent* Seat_Empty1;
    class UPointLightComponent* light_display2;
    class UPointLightComponent* light_display1;
    float Timeline_1_LerpDelay_3C91DA044E3AE316CFE9988822F28BC8;
    float Timeline_1_Lerp_3C91DA044E3AE316CFE9988822F28BC8;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_3C91DA044E3AE316CFE9988822F28BC8;
    class UTimelineComponent* Timeline_1;
    float Timeline_5_LerpDelay_BD4E08A7452DF28657A134A2565D0A25;
    float Timeline_5_Lerp_BD4E08A7452DF28657A134A2565D0A25;
    TEnumAsByte<ETimelineDirection::Type> Timeline_5__Direction_BD4E08A7452DF28657A134A2565D0A25;
    class UTimelineComponent* Timeline_5;
    float Timeline_0_RedLightIntensity_2F2B1CD4469260DD2E665FA77E175746;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2F2B1CD4469260DD2E665FA77E175746;
    class UTimelineComponent* Timeline_0;
    float light_readysign_intensity;
    class UAudioComponent* DrillSound;
    class AMULE* MuleInstance;
    FTransform MuleTransform;
    bool MuleSequenceComplete;
    bool OpenDoorsOnLanding;
    bool UnloadMule;
    FTimerHandle CarverRotationTimer;
    bool ShouldTurnOnHeadlight;
    bool CanControlHeadlight;
    TEnumAsByte<DroppodDoorState::Type> DoorState;
    class UMaterialInstanceDynamic* LightFlickerMaterial;
    class UParticleSystemComponent* MulebayParticle;
    FBP_DropPod_Base_CDoorStateChanged DoorStateChanged;
    void DoorStateChanged(TEnumAsByte<DroppodDoorState::Type> DoorState);
    FTransform MuleUnloadTransform;
    bool MuleBayOpen;
    FBP_DropPod_Base_COnMuleBayOpenedDispatch OnMuleBayOpenedDispatch;
    void OnMuleBayOpenedDispatch();
    TArray<class AMULE*> MulesToCollect;
    bool CarvingComplete;
    bool MuleWasLoaded;

    FVector GetDonkeyReturnPickupLocation();
    void OnRep_MuleSequenceComplete();
    void CollectMule(class AMULE* MULE);
    void OnRep_MuleUnloadTransform();
    void GetMuleUnloadTarget(class AMULE*& MULE, FTransform& RelativeTransform);
    void EnableMulebay();
    void OnRep_DoorState();
    float OperateMuleBay(bool Open, class UAnimMontage*& Montage);
    bool AnyPlayersOnRamp();
    void HandleRampPhotosensitivity();
    void SetPathBlockersEnabled(bool Enable);
    void DestroyIfClose(TArray<class AActor*>& Actors, float DistanceSQ);
    void RemoveDangerousCaveItems(float Distance);
    void SetAllPlayersAnsel(bool Active);
    void SetDoorState(TEnumAsByte<DroppodDoorState::Type> DoorState);
    void GetCountDown(bool First, class ABP_Widget_DropPod_AltitudeMeter_C*& AsBP Count Down Actor);
    void OnRep_MuleInstance();
    void OnMuleLoaded();
    void GetMule(class AMolly*& Donkey);
    void SetStandingDown(bool IsStandingDown);
    void CloseRamp();
    void OpenRamp();
    void OnAllPlayersLeftPod();
    void SetPreferredCharacter(class UChildActorComponent* Spawn, class UPlayerCharacterID* Class);
    void UserConstructionScript();
    void Timeline_5__FinishedFunc();
    void Timeline_5__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void StartDeparture();
    void OnDroppodImpact();
    void Start Donkey Unload Sequence();
    void Unload Donkey();
    void OnDrillingStarted();
    void Load Donkey(class AMULE* MULE);
    void BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__KillSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void DrillRotate();
    void OnCharacterEnter(class APlayerCharacter* Character);
    void OnCharacterExit(class APlayerCharacter* Character);
    void DropPodSetAnsel(bool Active);
    void AllSetAnsel(bool Active);
    void BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__InSidePodArea_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void MakeTruckerDicesMove();
    void OnFirstPlayerLeftPod();
    void ReceiveDestroyed();
    void OnRepDoorState();
    void LowerMuleToGround();
    void OpenMuleBay();
    void OnMuleBayOpenedDispatch_Event_0();
    void SetMuleInstance(class AMolly* Donkey);
    void OnRep_RampState();
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_BP_DropPod_Base(int32 EntryPoint);
    void OnMuleBayOpenedDispatch__DelegateSignature();
    void DoorStateChanged__DelegateSignature(TEnumAsByte<DroppodDoorState::Type> DoorState);
};

#endif
