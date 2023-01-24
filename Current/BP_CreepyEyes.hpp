#ifndef UE4SS_SDK_BP_CreepyEyes_HPP
#define UE4SS_SDK_BP_CreepyEyes_HPP

class ABP_CreepyEyes_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere1;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* Sphere;
    class USceneComponent* EyeParent;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class USkeletalMeshComponent* EyeLids;
    class UBoxComponent* Box;
    class USceneComponent* Eyelids And Trigger;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* DefaultSceneRoot;
    float Scale_1_NewTrack_3_BCD68ACC423F5ECA6576CB9BC05971B4;
    float Scale_1_Displacement_Offset_BCD68ACC423F5ECA6576CB9BC05971B4;
    TEnumAsByte<ETimelineDirection::Type> Scale_1__Direction_BCD68ACC423F5ECA6576CB9BC05971B4;
    class UTimelineComponent* Scale 1;
    bool IsMoving;
    bool IsTracking;
    TArray<class APlayerCharacter*> PlayersInSight;
    class APlayerCharacter* RandomPlayer;
    bool IsBeingHurt;
    FBP_CreepyEyes_COnBeingHurt OnBeingHurt;
    void OnBeingHurt(bool IsClosed);
    FTimerHandle EyeTimer;
    FTimerHandle BlinkTime;

    void GetRandomPlayer(class APlayerCharacter*& RandomPlayer);
    void Scale 1__FinishedFunc();
    void Scale 1__UpdateFunc();
    void OnNotifyEnd_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
    void OnNotifyBegin_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
    void OnInterrupted_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
    void OnBlendOut_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
    void OnCompleted_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
    void LookAtRandom();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void Blink();
    void ReceiveBeginPlay();
    void CloseEyes();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnPlayerClose(class APlayerCharacter* Player, bool enteredTrigger);
    void BlinkTimer(class APlayerCharacter* Player, bool enteredTrigger);
    void LookAt();
    void StartLookAt();
    void StopLookat();
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_CreepyEyes(int32 EntryPoint);
    void OnBeingHurt__DelegateSignature(bool IsClosed);
};

#endif
