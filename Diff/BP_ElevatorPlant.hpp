#ifndef UE4SS_SDK_BP_ElevatorPlant_HPP
#define UE4SS_SDK_BP_ElevatorPlant_HPP

class ABP_ElevatorPlant_C : public AElevatorPlant
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* MovingSound;
    class UBoxComponent* collider;
    class UTerrainDetectComponent* TerrainDetect;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UStaticMeshComponent* TriggerSpot;
    class UBoxComponent* DipExitTriggerBox;
    class UBoxComponent* DipEnterTriggerBox;
    class USphereComponent* OpenLeafTrigger;
    class UCapsuleComponent* VineCollision;
    class UAudioComponent* audio;
    class USimpleHealthComponent* SimpleHealth;
    class USkeletalMeshComponent* SK_VineLeaf;
    class USphereComponent* ExitTrigger;
    class USphereComponent* EnterTrigger;
    class USceneComponent* VineLeaf;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* VineBaseGFX;
    class UArrowComponent* Arrow1;
    class USceneComponent* VineBase;
    class USplineMeshComponent* VineSplineMesh;
    float LeafNoiseLocX_Loc_X_C3E82D484E1EA0898E61A8A649FA59CB;
    TEnumAsByte<ETimelineDirection::Type> LeafNoiseLocX__Direction_C3E82D484E1EA0898E61A8A649FA59CB;
    class UTimelineComponent* LeafNoiseLocX;
    float LeafNoiseLocZ_Loc_Z_4DAF06224AFB4B398CE7C4BEFD405866;
    TEnumAsByte<ETimelineDirection::Type> LeafNoiseLocZ__Direction_4DAF06224AFB4B398CE7C4BEFD405866;
    class UTimelineComponent* LeafNoiseLocZ;
    float LeafNoiseLocY_Loc_Y_ADE163CE4F1D71B67ECCEFB1B5142EC7;
    TEnumAsByte<ETimelineDirection::Type> LeafNoiseLocY__Direction_ADE163CE4F1D71B67ECCEFB1B5142EC7;
    class UTimelineComponent* LeafNoiseLocY;
    FVector BaseTangentShift_TangentDirectionOffset_9B6A6F96444645618A2203B2C6B0F617;
    float BaseTangentShift_TangentLengthMod_9B6A6F96444645618A2203B2C6B0F617;
    TEnumAsByte<ETimelineDirection::Type> BaseTangentShift__Direction_9B6A6F96444645618A2203B2C6B0F617;
    class UTimelineComponent* BaseTangentShift;
    int32 AttemptCount;
    FBP_ElevatorPlant_COnStateChange OnStateChange;
    void OnStateChange(bool IsIdle);

    void ToggleLeaf(bool IsOpen);
    void FindValidDestinationPoint(FVector& ValidDestinationPoint, bool& success);
    void FindValidRestPoint(FVector& ValidRestPoint, bool& success);
    void LeafNoiseLocX__FinishedFunc();
    void LeafNoiseLocX__UpdateFunc();
    void LeafNoiseLocY__FinishedFunc();
    void LeafNoiseLocY__UpdateFunc();
    void LeafNoiseLocZ__FinishedFunc();
    void LeafNoiseLocZ__UpdateFunc();
    void BaseTangentShift__FinishedFunc();
    void BaseTangentShift__UpdateFunc();
    void BndEvt__DipExitTriggerBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void BndEvt__DipEnterTriggerBox_K2Node_ComponentBoundEvent_310_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__OpenLeafTrigger_K2Node_ComponentBoundEvent_26_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_40_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_BodypartHitSig__DelegateSignature(float Amount, float BaseAmount, const FDamageData& DamageData);
    void BndEvt__ExitTrigger_K2Node_ComponentBoundEvent_27_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void OnTimelineStart();
    void OnCStateChanged(bool IsIdling);
    void ProximityChanged(class APlayerCharacter* Player, bool enteredTrigger);
    void ExecuteUbergraph_BP_ElevatorPlant(int32 EntryPoint);
    void OnStateChange__DelegateSignature(bool IsIdle);
};

#endif
