#ifndef UE4SS_SDK_BP_Bulkhead01_HPP
#define UE4SS_SDK_BP_Bulkhead01_HPP

class ABP_Bulkhead01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* SideCollider1;
    class UBoxComponent* SideCollider;
    class UBoxComponent* collider;
    class USkeletalMeshComponent* Mesh_Door;
    class UBoxComponent* TriggerBox;
    class USceneComponent* SharedRoot;
    float TL_Open_Movement_20FE459B46C78C2032475C820E41D3EA;
    TEnumAsByte<ETimelineDirection::Type> TL_Open__Direction_20FE459B46C78C2032475C820E41D3EA;
    class UTimelineComponent* TL_Open;
    float Driver_Movement_137D39154F4F54A9387D6EB46EC05709;
    TEnumAsByte<ETimelineDirection::Type> Driver__Direction_137D39154F4F54A9387D6EB46EC05709;
    class UTimelineComponent* Driver;
    float Open_Time;
    TArray<class APlayerCharacter*> Players;
    bool IsOpen;
    float TimeSinceLastSwap;
    float MinDoorTime;
    bool DoorCanOpen;

    void HasPlayersNearby(bool& AnyPlayers, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void OnRep_IsOpen();
    void Driver__FinishedFunc();
    void Driver__UpdateFunc();
    void TL_Open__FinishedFunc();
    void TL_Open__UpdateFunc();
    void Open();
    void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Close();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Bulkhead01(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool CallFunc_HasAuthority_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_HasPlayersNearby_AnyPlayers, bool CallFunc_EqualEqual_BoolBool_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

#endif
