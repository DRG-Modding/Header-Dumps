#ifndef UE4SS_SDK_BP_Donkey_HPP
#define UE4SS_SDK_BP_Donkey_HPP

class ABP_Donkey_C : public AMolly
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* TerrainScannerMesh;
    class USphereComponent* Sphere;
    class UAudioComponent* Oxygen_Leak;
    class UStaticMeshComponent* SM_Screen_007;
    class UStaticMeshComponent* FrontPlane1;
    class UStaticMeshComponent* SM_Screen_005;
    class UStaticMeshComponent* FrontPlane;
    class UParticleSystemComponent* P_GasCanister_air_Mule1;
    class UParticleSystemComponent* P_GasCanister_air_Mule;
    class UStaticMeshComponent* SM_GasCanister1;
    class UStaticMeshComponent* SM_GasCanister;
    class UOxygenSourceComponent* OxygenSource;
    class UCapsuleComponent* PlayerRideCapsule;
    class UAudioComponent* AudioDepositing;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_Donkey_Button;
    class UStaticMeshComponent* EscapeButton;
    class UWidgetComponent* Widget;
    class UBoxComponent* UseBox_ResourceBank;
    class USphereComponent* UseSphere_Return;
    class USingleUsableComponent* ReturnToMissionUsable;
    class UBoxComponent* Box1;
    class UActorTrackingComponent* ActorTracking;
    class UStaticMeshComponent* LightCone;
    class USpotLightComponent* SpotLight;
    class USceneComponent* FloodLight;
    class UBoxComponent* Box;
    class URadarPointComponent* radarPoint;
    bool IsTrayOpen;
    FName DestinationKeyName;
    class ABP_DonkeyDestinationMarker_C* DonkeyMarker;
    FName ControlledKeyName;
    FName DropShipPosKey;
    FName GotoDropshipKey;
    FName BeingDepositedToName;
    bool HeadingForDropShip;
    int32 OverlapsPlayer;
    FBP_Donkey_CPlayerOverlapsChanged PlayerOverlapsChanged;
    void PlayerOverlapsChanged(int32 OverlapCount);
    FTimerHandle BreadCrumbTimer;
    float PlayerStartRideTime;
    class UFSDAchievement* MollyRiderAchievement;
    class ADonkey_BreadCrumb_C* LastCrumb;
    FTimerHandle TimeoutHandle;
    TSubclassOf<class ADonkey_BreadCrumb_C> BreadCrumpClass;
    TArray<class APlayerState*> Users;
    float ShowButtonDelay;

    class UDialogDataAsset* GetCallingShout();
    void UpdateStopCallRequests();
    void HandlePhotosensitivity();
    void OnRep_IsTrayOpen();
    void GotoDropship(FVector Pos);
    void Set Controlled by Drop Ship(bool Control);
    void SetDestination(FVector Destination, class APlayerCharacter* InCalledBy);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnDonkeyCalled(FVector Position, class APlayerCharacter* requester);
    void SetDonkeyPos(FVector Pos);
    void On Goto Dropship();
    void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void SpawnBreadCrumb();
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Update Button State();
    void BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool IsActive);
    void EnableButton();
    void OnRep_IsDown();
    void SetControlledByDropShip(bool Control);
    void OnPlayerLeft(class AFSDPlayerState* PlayerState);
    void SetGotoDropShip(const FVector& Location);
    void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_8_PathFinished__DelegateSignature(bool success);
    void ExecuteUbergraph_BP_Donkey(int32 EntryPoint);
    void PlayerOverlapsChanged__DelegateSignature(int32 OverlapCount);
};

#endif
