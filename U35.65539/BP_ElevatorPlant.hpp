#ifndef UE4SS_SDK_BP_ElevatorPlant_HPP
#define UE4SS_SDK_BP_ElevatorPlant_HPP

class ABP_ElevatorPlant_C : AElevatorPlant
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UAudioComponent* MovingSound;
    UBoxComponent* collider;
    UTerrainDetectComponent* TerrainDetect;
    UPathfinderCollisionComponent* PathfinderCollision;
    UStaticMeshComponent* TriggerSpot;
    UBoxComponent* DipExitTriggerBox;
    UBoxComponent* DipEnterTriggerBox;
    USphereComponent* OpenLeafTrigger;
    UCapsuleComponent* VineCollision;
    UAudioComponent* Audio;
    USimpleHealthComponent* SimpleHealth;
    USkeletalMeshComponent* SK_VineLeaf;
    USphereComponent* ExitTrigger;
    USphereComponent* EnterTrigger;
    USceneComponent* VineLeaf;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* VineBaseGFX;
    UArrowComponent* Arrow1;
    USceneComponent* VineBase;
    USplineMeshComponent* VineSplineMesh;
    float LeafNoiseLocX_Loc_X_C3E82D484E1EA0898E61A8A649FA59CB;
    TEnumAsByte<ETimelineDirection::Type> LeafNoiseLocX__Direction_C3E82D484E1EA0898E61A8A649FA59CB;
    UTimelineComponent* LeafNoiseLocX;
    float LeafNoiseLocZ_Loc_Z_4DAF06224AFB4B398CE7C4BEFD405866;
    TEnumAsByte<ETimelineDirection::Type> LeafNoiseLocZ__Direction_4DAF06224AFB4B398CE7C4BEFD405866;
    UTimelineComponent* LeafNoiseLocZ;
    float LeafNoiseLocY_Loc_Y_ADE163CE4F1D71B67ECCEFB1B5142EC7;
    TEnumAsByte<ETimelineDirection::Type> LeafNoiseLocY__Direction_ADE163CE4F1D71B67ECCEFB1B5142EC7;
    UTimelineComponent* LeafNoiseLocY;
    FVector BaseTangentShift_TangentDirectionOffset_9B6A6F96444645618A2203B2C6B0F617;
    float BaseTangentShift_TangentLengthMod_9B6A6F96444645618A2203B2C6B0F617;
    TEnumAsByte<ETimelineDirection::Type> BaseTangentShift__Direction_9B6A6F96444645618A2203B2C6B0F617;
    UTimelineComponent* BaseTangentShift;
    int32 AttemptCount;
    FBP_ElevatorPlant_COnStateChange OnStateChange;
    void OnStateChange(bool IsIdle);

    void ToggleLeaf(bool IsOpen, FVector CallFunc_K2_GetComponentLocation_ReturnValue);
    void FindValidDestinationPoint(FVector& ValidDestinationPoint, bool& success, FVector CandidatePoint, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_TransformLocation_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue_1, const TArray<uint8>& K2Node_MakeArray_Array, int32 Temp_int_Variable, const TArray<AActor*>& Temp_object_Variable, bool CallFunc_Greater_IntInt_ReturnValue, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_TransformLocation_ReturnValue_1);
    void FindValidRestPoint(FVector& ValidRestPoint, bool& success, FVector CandidatePoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, int32 Temp_int_Variable, const TArray<AActor*>& Temp_object_Variable, bool CallFunc_Greater_IntInt_ReturnValue, FHitResult CallFunc_SphereTraceSingleForObjects_OutHit, bool CallFunc_SphereTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_TransformLocation_ReturnValue);
    void LeafNoiseLocX__FinishedFunc();
    void LeafNoiseLocX__UpdateFunc();
    void LeafNoiseLocY__FinishedFunc();
    void LeafNoiseLocY__UpdateFunc();
    void LeafNoiseLocZ__FinishedFunc();
    void LeafNoiseLocZ__UpdateFunc();
    void BaseTangentShift__FinishedFunc();
    void BaseTangentShift__UpdateFunc();
    void BndEvt__DipExitTriggerBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void BndEvt__DipEnterTriggerBox_K2Node_ComponentBoundEvent_310_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__OpenLeafTrigger_K2Node_ComponentBoundEvent_26_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_40_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_BodypartHitSig__DelegateSignature(float Amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    void BndEvt__ExitTrigger_K2Node_ComponentBoundEvent_27_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void OnTimelineStart();
    void OnCStateChanged(bool IsIdling);
    void ProximityChanged(UPlayerCharacter* Player, bool enteredTrigger);
    void ExecuteUbergraph_BP_ElevatorPlant(int32 EntryPoint, float CallFunc_GetVineMovementAlpha_ReturnValue, StartTimelineEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, COnStateChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, PlayerProximityDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, TArray<AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, AActor* K2Node_ComponentBoundEvent_OtherActor_3, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, AActor* K2Node_ComponentBoundEvent_OtherActor_2, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, bool K2Node_ComponentBoundEvent_bFromSweep_1, const FHitResult K2Node_ComponentBoundEvent_SweepResult_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float K2Node_ComponentBoundEvent_Amount, float K2Node_ComponentBoundEvent_BaseAmount, UPrimitiveComponent* K2Node_ComponentBoundEvent_Component, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physmat, const FName K2Node_ComponentBoundEvent_boneName, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_3, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_GetInitialTangentLenth_ReturnValue, float CallFunc_GetLeafLocationNoiseSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector K2Node_MathExpression_ReturnValue, const FVector CallFunc_GetRelativeRestLocation_ReturnValue, const FVector CallFunc_GetRelativeDestinationLocation_ReturnValue, bool K2Node_CustomEvent_IsIdling, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Lerp_ReturnValue, FRotator K2Node_MathExpression_ReturnValue_1, bool CallFunc_GetIsMoving_ReturnValue, bool CallFunc_GetIsMoving_ReturnValue_1, bool CallFunc_GetIsMoving_ReturnValue_2, bool CallFunc_GetIsExtended_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, FVector CallFunc_K2_GetActorLocation_ReturnValue);
    void OnStateChange__DelegateSignature(bool IsIdle);
}

#endif
