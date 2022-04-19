#ifndef UE4SS_SDK_BP_Facility_PowerStation_GeneratorBase_HPP
#define UE4SS_SDK_BP_Facility_PowerStation_GeneratorBase_HPP

class ABP_Facility_PowerStation_GeneratorBase_C : public AFacilityPowerStation
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* GunTower_Carver01;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UNiagaraComponent* ConnectionBeam;
    class USphereComponent* DiscoverSphere;
    class UStaticMeshComponent* TerrainScannerMesh;
    class URoomCarverComponent* RoomCarver;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UTerrainPlacementComponent* terrainPlacement;
    class USingleUsableComponent* ActivateUsable;
    class USphereComponent* Usable;
    class USkeletalMeshComponent* SkeletalMesh;
    class UTetherComponent* Tether;
    class USceneComponent* DefaultSceneRoot;
    FBP_Facility_PowerStation_GeneratorBase_COnShieldGeneratorCharged OnShieldGeneratorCharged;
    void OnShieldGeneratorCharged(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
    FBP_Facility_PowerStation_GeneratorBase_COnOverChargerCalled OnOverChargerCalled;
    void OnOverChargerCalled(FVector Location, int32 roomIndex);
    int32 roomIndex;
    float HackingPower;
    FBP_Facility_PowerStation_GeneratorBase_COnProgress OnProgress;
    void OnProgress(float Progress);
    FBP_Facility_PowerStation_GeneratorBase_CFirstConnect FirstConnect;
    void FirstConnect(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherlineStart);
    bool HasHadPower;
    bool Discovered;
    FBP_Facility_PowerStation_GeneratorBase_CPowerChanged PowerChanged;
    void PowerChanged(bool hasPower);
    class UTetherComponent* NewVar_0;
    class UMaterialInstanceDynamic* LightMaterial;
    bool StartedHacking;
    class AFacilityHackingPod* ConnectedHackingPod;
    FBP_Facility_PowerStation_GeneratorBase_CConnectedPodChanged ConnectedPodChanged;
    void ConnectedPodChanged(class AFacilityHackingPod* Pod);

    class AActor* GetBossActor();
    TSubclassOf<class UBossFightWidget> GetWidgetClass();
    bool IsStillValid();
    void OnRep_ConnectedHackingPod();
    void GetCallOverchargerUsable(class USingleUsableComponent*& Usable);
    void OnRep_HackingPower();
    void GetConnectorPoint(TArray<FTransform>& OutTransform);
    void OnRep_Discovered();
    void SetRoom(int32 roomIndex);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Tether_K2Node_ComponentBoundEvent_0_TetherPowerChanged_Delegate__DelegateSignature(bool hasPower);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__DiscoverSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Tether_K2Node_ComponentBoundEvent_3_TeherMessage_Delegate__DelegateSignature(const FName& Message);
    void Cheat_CallOverCharger();
    void OnMatchStarted_Event_0();
    void OnHackingComplete();
    void OnHackingChanged(bool IsHacking);
    void BndEvt__Tether_K2Node_ComponentBoundEvent_4_TetherConnectionChanged_Deletage__DelegateSignature(class UTetherComponent* frontConnection, class UTetherComponent* backConnection);
    void ExecuteUbergraph_BP_Facility_PowerStation_GeneratorBase(int32 EntryPoint);
    void ConnectedPodChanged__DelegateSignature(class AFacilityHackingPod* Pod);
    void PowerChanged__DelegateSignature(bool hasPower);
    void FirstConnect__DelegateSignature(class ABP_Facility_PowerStation_GeneratorBase_C* Generator, class UTetherComponent* tetherlineStart);
    void OnProgress__DelegateSignature(float Progress);
    void OnOverChargerCalled__DelegateSignature(FVector Location, int32 roomIndex);
    void OnShieldGeneratorCharged__DelegateSignature(class ABP_Facility_PowerStation_GeneratorBase_C* Generator);
};

#endif
