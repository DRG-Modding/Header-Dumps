#ifndef UE4SS_SDK_BP_CaterpillarTrack_HPP
#define UE4SS_SDK_BP_CaterpillarTrack_HPP

class ABP_CaterpillarTrack_C : AEscortMuleTrack
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UInstancedMeshOnSpline* InstancedMeshOnSpline1;
    UOutlineComponent* outline;
    UStaticMeshComponent* SM_DrillDozer_Threads_Shape_Template;
    USplineComponent* SourceSpline;
    USkeletalMeshComponent* SkeletalMesh;
    USplineComponent* TargetSpline;
    USceneComponent* DefaultSceneRoot;
    FVector LastTrace;
    FVector CurrTrace;
    float DeltaTime;
    float Speed;
    float JointSpeedFactor;

    void Line Trace(const FVector Start, const FVector End, FVector& Hit, bool& DidHit, const TArray<AActor*>& Temp_object_Variable, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void UpdateTrackSpeed();
    void ParentOutlineChanged(EOutline InOutline);
    void ExecuteUbergraph_BP_CaterpillarTrack(int32 EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, AActor* CallFunc_GetAttachParentActor_ReturnValue, UOutlineComponent* CallFunc_GetComponentByClass_ReturnValue, OutlineChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, EOutline K2Node_CustomEvent_InOutline, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1);
}

#endif
