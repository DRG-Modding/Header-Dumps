#ifndef UE4SS_SDK_BP_Bulkhead01_HPP
#define UE4SS_SDK_BP_Bulkhead01_HPP

class ABP_Bulkhead01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UBoxComponent* SideCollider1;
    class UBoxComponent* SideCollider;
    class UBoxComponent* collider;
    class USkeletalMeshComponent* Mesh_Door;
    class UBoxComponent* TriggerBox;
    class USceneComponent* SharedRoot;
    float Driver_Movement_137D39154F4F54A9387D6EB46EC05709;
    TEnumAsByte<ETimelineDirection::Type> Driver__Direction_137D39154F4F54A9387D6EB46EC05709;
    class UTimelineComponent* Driver;
    float Open_Time;
    TArray<class APlayerCharacter*> Players;
    bool IsOpen;
    float TimeSinceLastSwap;
    float MinDoorTime;
    bool DoorCanOpen;

    void HasPlayersNearby(bool& AnyPlayers);
    void OnRep_IsOpen();
    void Driver__FinishedFunc();
    void Driver__UpdateFunc();
    void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Open();
    void Close();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Bulkhead01(int32 EntryPoint);
};

#endif
