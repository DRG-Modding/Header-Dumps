#ifndef UE4SS_SDK_WPN_PipelineBuilder_HPP
#define UE4SS_SDK_WPN_PipelineBuilder_HPP

class AWPN_PipelineBuilder_C : UPipelineBuilderItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    UFirstPersonWidgetComponent* SmallScreenWidget;
    UFirstPersonWidgetComponent* LargeScreenWidget;
    FTransform EndTransform;
    UTrackBuilderConnectPoint* ConnectPoint;
    FTimerHandle ConnectorTraceHandle;
    UUI_PipelineBuilder_Crosshair_C* Crosshair;
    bool PlacementValid;

    void GetCrosshair(UUI_PipelineBuilder_Crosshair_C*& Result, bool CallFunc_IsValid_ReturnValue, UUI_PipelineBuilder_Crosshair_C* K2Node_DynamicCast_AsUI_Pipeline_Builder_Crosshair, bool K2Node_DynamicCast_bSuccess);
    void Update Placement Transform(bool& OutSuccess, FTransform& OutTransform, bool CandidateValid, bool success, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FTransform CallFunc_GetPlacementEx_Placement, bool CallFunc_GetPlacementEx_OutValidLocation, bool CallFunc_GetPlacementEx_OutValidMarker, const FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc_CanConnectWith_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue_1, FTransform CallFunc_GetConnectTransform_ReturnValue, bool CallFunc_CanPlaceAt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void RecieveStartUsing();
    void BndEvt__SegmentPlacer_K2Node_ComponentBoundEvent_0_PlacementUpdatedDelegate__DelegateSignature(bool InPlacementValid, const FTransform& InPlacement);
    void ReceiveBeginPlaceSegment();
    void RecieveEquipped();
    void RecieveUnequipped();
    void TraceForConnector();
    void AddedToInventory(UPlayerCharacter* ItemOwner);
    void OnCharacterStateChanged_Event(ECharacterState NewState);
    void ExecuteUbergraph_WPN_PipelineBuilder(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_ComponentBoundEvent_InPlacementValid, const FTransform K2Node_ComponentBoundEvent_InPlacement, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Update_Placement_Transform_OutSuccess, FTransform CallFunc_Update_Placement_Transform_OutTransform, bool CallFunc_IsLocallyControlled_ReturnValue_2, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_Update_Placement_Transform_OutSuccess_1, FTransform CallFunc_Update_Placement_Transform_OutTransform_1, AItem* CallFunc_GetEquippedItem_ReturnValue, FVector CallFunc_GetSightStartAndEnd_OutStartLocation, FVector CallFunc_GetSightStartAndEnd_OutEndLocation, const TArray<AActor*>& K2Node_MakeArray_Array, FHitResult CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_HasAuthority_ReturnValue, UTrackBuilderConnectPoint* K2Node_DynamicCast_AsTrack_Builder_Connect_Point, bool K2Node_DynamicCast_bSuccess, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerCharacter* K2Node_Event_ItemOwner, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, ECharacterState K2Node_CustomEvent_newState, ECharacterState CallFunc_GetCurrentState_ReturnValue, const TArray<ECharacterState>& K2Node_MakeArray_Array_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, UBP_Refinery_Target_C* K2Node_DynamicCast_AsBP_Refinery_Target, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsLocallyControlled_ReturnValue_3, UUI_PipelineBuilder_Crosshair_C* CallFunc_GetCrosshair_Result, bool CallFunc_IsValid_ReturnValue_4, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UUI_PipelineBuilder_Widget_C* K2Node_DynamicCast_AsUI_Pipeline_Builder_Widget, bool K2Node_DynamicCast_bSuccess_2, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_DegAcos_ReturnValue, UPipelineSegment* K2Node_DynamicCast_AsPipeline_Segment, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_FMin_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GetSplineLength_ReturnValue, float CallFunc_ApproximateSplineDistanceAtWorldLocation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, UUI_PipelineBuilder_Widget_Small_C* K2Node_DynamicCast_AsUI_Pipeline_Builder_Widget_Small, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_GetMaterialIndex_ReturnValue, int32 CallFunc_GetMaterialIndex_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UABP_Pipeline_Builder_C* K2Node_DynamicCast_AsABP_Pipeline_Builder, bool K2Node_DynamicCast_bSuccess_5, OnCharacterStateChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
}

#endif