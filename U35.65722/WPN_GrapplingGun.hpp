#ifndef UE4SS_SDK_WPN_GrapplingGun_HPP
#define UE4SS_SDK_WPN_GrapplingGun_HPP

class AWPN_GrapplingGun_C : public AGrapplingHookGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDAudioComponent* AudioMoving;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UFirstPersonWidgetComponent* CoolDownWidgetFirstPerson;
    class UCrosshairAggregator* CrosshairAggregator;
    class USkeletalMeshComponent* Projectile;
    class USceneComponent* TP_Muzzle;
    class USceneComponent* FP_Muzzle;
    class UCableComponent* Cable;
    float ProjectileMovement_Lerp_t_87ACE2EC4276B8AA3B88169B28949E3A;
    TEnumAsByte<ETimelineDirection::Type> ProjectileMovement__Direction_87ACE2EC4276B8AA3B88169B28949E3A;
    class UTimelineComponent* ProjectileMovement;
    FRotator PullRotation;
    class UHUD_CroNew_GrapplingGun_C* Crosshair;
    float LastFailMessageTime;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, FGearStatEntry K2Node_MakeStruct_GearStatEntry, int32 CallFunc_Array_Add_ReturnValue, TSubclassOf<class AWPN_GrapplingGun_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_TriggeredStat_gear_stat_entry, bool CallFunc_UPGDESC_TriggeredStat_is_upgraded, FGearStatEntry CallFunc_UPGDESC_TriggeredStat_gear_stat_entry_1, bool CallFunc_UPGDESC_TriggeredStat_is_upgraded_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, FGearStatEntry CallFunc_UPGDESC_GrapplingHook_GearStatEntry, bool CallFunc_UPGDESC_GrapplingHook_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_GrapplingHook_GearStatEntry_1, bool CallFunc_UPGDESC_GrapplingHook_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_4, FGearStatEntry CallFunc_UPGDESC_CoooldownAggregator_GearStatEntry, bool CallFunc_UPGDESC_CoooldownAggregator_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_GrapplingHook_GearStatEntry_2, bool CallFunc_UPGDESC_GrapplingHook_HasUpgradedValue_2, int32 CallFunc_Array_Add_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue_6);
    FTransform GetCableTransform(class USceneComponent* CallFunc_GetCableParent_Muzzle, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue);
    void SetCableEndPoint(FVector Location, FVector CallFunc_GetSocketLocation_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FHitResult CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, FVector CallFunc_InverseTransformLocation_ReturnValue);
    void GetCableParent(class USceneComponent*& Muzzle, bool Temp_bool_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class USceneComponent* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
    void ToggleCable(bool bNewVisibility, FTransform CallFunc_GetCableTransform_ReturnValue, FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult, class USceneComponent* CallFunc_GetCableParent_Muzzle, bool CallFunc_K2_AttachToComponent_ReturnValue);
    void GetAimView(FVector& Location, FVector& Forward, FTransform CallFunc_GetMuzzle_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FMinimalViewInfo CallFunc_GetCameraView_DesiredView, FVector CallFunc_GetForwardVector_ReturnValue);
    void UserConstructionScript(class UHUD_CroNew_GrapplingGun_C* K2Node_DynamicCast_AsHUD_Cro_New_Grappling_Gun, bool K2Node_DynamicCast_bSuccess);
    void ProjectileMovement__FinishedFunc();
    void ProjectileMovement__UpdateFunc();
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void ReceiveBeginPlay();
    void RecieveCycledItem();
    void Gunsling();
    void OnGrappleUpdate(float DeltaSeconds);
    void OnGrappleStart();
    void OnGrappleEnd();
    void OnGrappleFailed(bool TooFar);
    void ExecuteUbergraph_WPN_GrapplingGun(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const TArray<class AActor*>& K2Node_MakeArray_Array, FVector CallFunc_GetAimView_Location, FVector CallFunc_GetAimView_Forward, FText Temp_text_Variable, bool CallFunc_IsCoolingDown_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, class APlayerCharacter* K2Node_Event_ItemOwner, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_LineTraceSingleByProfile_OutHit, bool CallFunc_LineTraceSingleByProfile_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UHUD_CroNew_GrapplingGun_C* K2Node_DynamicCast_AsHUD_Cro_New_Grappling_Gun, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, FText CallFunc_MakeLiteralText_ReturnValue, const TArray<class AActor*>& K2Node_MakeArray_Array_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UHUD_CoolDownBar_C* K2Node_DynamicCast_AsHUD_Cool_Down_Bar, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAnyMontagePlaying_ReturnValue, float CallFunc_Montage_Play_ReturnValue, float CallFunc_Montage_Play_ReturnValue_1, FVector CallFunc_GetAimView_Location_1, FVector CallFunc_GetAimView_Forward_1, bool CallFunc_IsCoolingDown_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_LineTraceSingleByProfile_OutHit_1, bool CallFunc_LineTraceSingleByProfile_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, FVector CallFunc_BreakHitResult_Location_1, FVector CallFunc_BreakHitResult_ImpactPoint_1, FVector CallFunc_BreakHitResult_Normal_1, FVector CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, FVector CallFunc_BreakHitResult_TraceStart_1, FVector CallFunc_BreakHitResult_TraceEnd_1, FVector CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_Event_TooFar, FText CallFunc_MakeLiteralText_ReturnValue_1, FTransform CallFunc_GetCableTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_Subtract_VectorVector_ReturnValue_2, FRotator CallFunc_MakeRotFromY_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsPlaying_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_GetWindUpProgress_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetWindUpProgress_ReturnValue_1, float CallFunc_GetWindUpProgress_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue, class USceneComponent* CallFunc_GetCableParent_Muzzle, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_VLerp_ReturnValue, float Temp_float_Variable, FText CallFunc_MakeLiteralText_ReturnValue_2, bool Temp_bool_Variable_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsLocallyControlled_ReturnValue_1, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, FText CallFunc_Conv_FloatToText_ReturnValue, FText K2Node_Select_Default_1, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_2, FText CallFunc_Format_ReturnValue, class USkeletalMeshComponent* CallFunc_GetItemMesh_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1);
};

#endif