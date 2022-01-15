#ifndef UE4SS_SDK_BP_Foliage_OpenOnProximity_HPP
#define UE4SS_SDK_BP_Foliage_OpenOnProximity_HPP

class ABP_Foliage_OpenOnProximity_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainDetectComponent* TerrainDetect;
    UCapsuleComponent* HitBox_Closed;
    UCapsuleComponent* HitBox_Open;
    UBoxComponent* Box;
    USphereComponent* WalkinTrigger;
    UTerrainPlacementComponent* terrainPlacement;
    UPathfinderCollisionComponent* PathfinderCollision1;
    USkeletalMeshComponent* Mesh;
    USceneComponent* DefaultSceneRoot;
    UAnimSequenceBase* ReactAnimation;
    USoundCue* deathSound;
    float AnimationDuration;

    void ReceiveBeginPlay();
    void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Close Flower();
    void PlayCloseSequence();
    void ExecuteUbergraph_BP_Foliage_OpenOnProximity(int32 EntryPoint, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_RandomFloatInRange_ReturnValue, bool Temp_bool_IsClosed_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, const TArray<AActor*>& K2Node_MakeArray_Array_1, TSubclassOf<ABP_Foliage_OpenOnProximity_C> CallFunc_GetObjectClass_ReturnValue, TArray<AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, AActor* CallFunc_Array_Get_Item, ABP_Foliage_OpenOnProximity_C* K2Node_DynamicCast_AsBP_Foliage_Open_on_Proximity, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
}

#endif
