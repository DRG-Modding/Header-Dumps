#ifndef UE4SS_SDK_BP_Foliage_OpenOnProximity_HPP
#define UE4SS_SDK_BP_Foliage_OpenOnProximity_HPP

class ABP_Foliage_OpenOnProximity_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UCapsuleComponent* HitBox_Closed;
    class UCapsuleComponent* HitBox_Open;
    class UBoxComponent* Box;
    class USphereComponent* WalkinTrigger;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision1;
    class USkeletalMeshComponent* Mesh;
    class USceneComponent* DefaultSceneRoot;
    class UAnimSequenceBase* ReactAnimation;
    class USoundCue* deathSound;
    float AnimationDuration;

    void ReceiveBeginPlay();
    void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Close Flower();
    void PlayCloseSequence();
    void ExecuteUbergraph_BP_Foliage_OpenOnProximity(int32 EntryPoint, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_RandomFloatInRange_ReturnValue, bool Temp_bool_IsClosed_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<TEnumAsByte<EObjectTypeQuery>>& K2Node_MakeArray_Array, const TArray<class AActor*>& K2Node_MakeArray_Array_1, TSubclassOf<class ABP_Foliage_OpenOnProximity_C> CallFunc_GetObjectClass_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABP_Foliage_OpenOnProximity_C* K2Node_DynamicCast_AsBP_Foliage_Open_on_Proximity, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

#endif
