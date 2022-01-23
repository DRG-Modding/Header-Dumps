#ifndef UE4SS_SDK_BP_ReturningPromotionKey_HPP
#define UE4SS_SDK_BP_ReturningPromotionKey_HPP

class ABP_ReturningPromotionKey_C : public ADeepPathfinderCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* MovingAudioComponent;
    class UStaticMeshComponent* KeyMesh;
    class USceneComponent* KeyMover;
    FTransform KeyTransform;
    float alpha;
    class APlayerCharacter* Target;
    FVector StartLocation;

    void MoveTowardsCamera(bool& Finished, FVector Dir, FVector CallFunc_Divide_VectorFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_VSize_ReturnValue, FVector CallFunc_ClampVectorSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, FHitResult CallFunc_K2_AddActorWorldOffset_SweepHitResult, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue);
    void OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD(float DeltaTime, float NormalizedTime);
    void Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD(float DeltaTime, float NormalizedTime);
    void MoveToCharacter(class APlayerCharacter* InTarget);
    void ReceiveBeginPlay();
    void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature(bool success);
    void ExecuteUbergraph_BP_ReturningPromotionKey(int32 EntryPoint, float K2Node_CustomEvent_DeltaTime_1, float K2Node_CustomEvent_NormalizedTime_1, FExecuteUbergraph_BP_ReturningPromotionKeyK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_DeltaTime, float K2Node_CustomEvent_NormalizedTime, FExecuteUbergraph_BP_ReturningPromotionKeyK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, float Temp_float_Variable_1, class UMiniTimerAction* CallFunc_MiniTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_InTarget, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_StartMoveToActor_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_VEase_ReturnValue, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool K2Node_ComponentBoundEvent_Success, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
};

#endif
