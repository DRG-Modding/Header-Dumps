#ifndef UE4SS_SDK_BP_DropPod_Escape_Base_HPP
#define UE4SS_SDK_BP_DropPod_Escape_Base_HPP

class ABP_DropPod_Escape_Base_C : public ABP_DropPod_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    class UStaticMeshComponent* SM_Light032;
    class UBoxComponent* DepositBank_02;
    class UStaticMeshComponent* SM_Light031;
    class UBoxComponent* DepositBank_01;
    class UStaticMeshComponent* SM_Light03;
    class UBoxComponent* DepositBank;
    class UWidgetComponent* Widget_ExitZoneText;
    class UStaticMeshComponent* FrontPlane3;
    class UStaticMeshComponent* SM_Screen_008;
    class UParticleSystemComponent* P_GasCanister_air_Mule4;
    class UStaticMeshComponent* SM_GasCanister3;
    class UStaticMeshComponent* SM_GasCanister2;
    class UStaticMeshComponent* FrontPlane2;
    class UStaticMeshComponent* SM_Screen_007;
    class UParticleSystemComponent* P_GasCanister_air_Mule3;
    class UStaticMeshComponent* FrontPlane1;
    class UStaticMeshComponent* SM_Screen_006;
    class UParticleSystemComponent* P_GasCanister_air_Mule2;
    class UStaticMeshComponent* SM_GasCanister1;
    class UStaticMeshComponent* SM_GasCanister;
    class UAudioComponent* Oxygen_Leak;
    class UStaticMeshComponent* FrontPlane;
    class UStaticMeshComponent* SM_Screen_005;
    class UParticleSystemComponent* P_GasCanister_air_Mule1;
    class UAudioComponent* audio;
    class UParticleSystemComponent* Droppod_FallingRocks;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UAudioComponent* AudioDepositing;
    class UActorTrackingComponent* ActorTrackingIcon;
    class UResourceBank* ResourceBank;
    class UBoxComponent* Box1_0;
    class UStaticMeshComponent* ExitZone;
    class USphereComponent* TriggerOnOffOutline;
    class UBoxComponent* AllDwarves_LiftOff_Ready;
    class URadarPointComponent* radarPoint;
    class UOutlineComponent* outline;
    FVector DropPodLandingMarker;
    bool WaitForMule;
    int32 CharactersInsideCount;
    bool TakingOff;
    float HurryCoolDown;
    class ABP_DropPod_LandingZone_C* SpawnedLandingZone;
    class UParticleSystemComponent* SmallRocks;
    class UParticleSystemComponent* ConcSmallRocks;

    void DisableDynamicElements(bool Enabled);
    void HandlePhotosentitivity();
    void GetFrontLocation(FVector& DoorLocation);
    void IsAnyCharacterInEscapePod(bool& EscapePodPopulated);
    void LockCharactersInPod();
    void UserConstructionScript();
    void OnDroppodImpact();
    void BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__TriggerOutline_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnDrillingStarted();
    void ReceiveBeginPlay();
    void OnDonkeyReachedDropShip();
    void OnDeparting();
    void OnPrepForTakeOff();
    void OnMuleLoaded();
    void OnCharacterEnter(class APlayerCharacter* Character);
    void OnCharacterExit(class APlayerCharacter* Character);
    void HandleHurryShouts();
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive);
    void OnRepDoorState();
    void OnMuleBayOpenedDispatch_Event_1();
    void ForceTakeoff();
    void RecieveReturnTimerFifteenSecondWarning();
    void RecieveReturnTimerExpired();
    void OnAllDwavesInsidePod(bool AllInside);
    void ExecuteUbergraph_BP_DropPod_Escape_Base(int32 EntryPoint);
};

#endif
