#ifndef UE4SS_SDK_WPN_ZipLineGun_HPP
#define UE4SS_SDK_WPN_ZipLineGun_HPP

class AWPN_ZipLineGun_C : UZipLineItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPointLightComponent* PointLight;
    USpotLightComponent* SpotLight;
    UFirstPersonWidgetComponent* FirstPersonWidget;
    UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    UPointLightComponent* Muzzle Light;
    UZiplineLauncherComponent* ZiplineLauncher;
    USceneComponent* Beam;
    UCrosshairAggregator* CrosshairAggregator;
    float debug_t;
    UHUD_Crosshair_ZiplineGun_C* Crosshair;
    float BeamDelay;
    bool InRange;
    bool TooFar;
    bool TooClose;
    bool WeaponFired;

    void GetGrounded(bool& OutGrounded, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ActorMatchesTagQuery_ReturnValue);
    FVector CalcFirstPersonMuzzleLocation(UPlayerController* CallFunc_GetPlayerController_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FVector CallFunc_CalcFirstPersonFOVPositionCorrection_ReturnValue);
    bool CanFireWeapon(FText& FailMsg, UDialogDataAsset*& FailShoutbool Temp_bool_Variable, UDialogDataAsset* Temp_object_Variable, UDialogDataAsset* Temp_object_Variable_1, UDialogDataAsset* K2Node_Select_Default, FText CallFunc_Can_Fire_FailMsg, UDialogDataAsset* CallFunc_Can_Fire_FailShout, bool CallFunc_Can_Fire_CanShoot);
    void GetGearStatEntry(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<UWPN_ZipLineGun_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_ZiplineGun_GearStatEntry, bool CallFunc_UPGDESC_ZiplineGun_HasUpgradedValue, FGearStatEntry CallFunc_UPGDESC_ZiplineGun_GearStatEntry_1, bool CallFunc_UPGDESC_ZiplineGun_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_ZiplineGun_GearStatEntry_2, bool CallFunc_UPGDESC_ZiplineGun_HasUpgradedValue_2, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, FGearStatEntry CallFunc_UPGDESC_AmmoDriven_GearStatEntry_1, bool CallFunc_UPGDESC_AmmoDriven_HasAnyUpgrades_1, FGearStatEntry CallFunc_UPGDESC_ZiplineGun_GearStatEntry_3, bool CallFunc_UPGDESC_ZiplineGun_HasUpgradedValue_3, int32 CallFunc_Array_Add_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue_5);
    void GetCrosshair(UHUD_Crosshair_ZiplineGun_C*& Result, bool CallFunc_IsValid_ReturnValue, UHUD_Crosshair_ZiplineGun_C* K2Node_DynamicCast_AsHUD_Crosshair_Zipline_Gun, bool K2Node_DynamicCast_bSuccess);
    void Update Line Of Sight(FVector Direction, FVector End, bool DidHit, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, FHitResult CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
    void Negate(float Value, float& Result, float CallFunc_Abs_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
    void Between(float Value, float Min, float Max, bool& IsBetween, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Can Fire(FText& FailMsg, UDialogDataAsset*& FailShout, bool& CanShoot, bool CallFunc_GetGrounded_OutGrounded, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Negate_Result, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_DegAcos_ReturnValue, bool CallFunc_Between_IsBetween, bool CallFunc_Not_PreBool_ReturnValue_1);
    FVector GetStartLocation(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    void LineTrace(FHitResult& OutHit, FVector& Direction, float& Distance, bool& HitAny, FVector EndLocation, FVector StartLocation, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, const TArray<AActor*>& K2Node_MakeArray_Array, FMinimalViewInfo CallFunc_GetCameraView_DesiredView, const TArray<uint8>& K2Node_MakeArray_Array_1, FHitResult CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, FVector CallFunc_GetForwardVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    void ReceiveTick(float DeltaSeconds);
    void RecieveStopUsing();
    void RecieveEquipped();
    void AddedToInventory(UPlayerCharacter* ItemOwner);
    void ReceiveBeginPlay();
    void BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(UUserWidget* Crosshair);
    void RecieveUnequipped();
    void BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature(const FVector& Location);
    void ExecuteUbergraph_WPN_ZipLineGun(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPlayerCharacter* K2Node_Event_ItemOwner, bool CallFunc_IsLocallyControlled_ReturnValue, float K2Node_Event_DeltaSeconds, FText CallFunc_Can_Fire_FailMsg, UDialogDataAsset* CallFunc_Can_Fire_FailShout, bool CallFunc_Can_Fire_CanShoot, UHUD_Crosshair_ZiplineGun_C* CallFunc_GetCrosshair_Result, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, UHUD_Crosshair_ZiplineGun_C* CallFunc_GetCrosshair_Result_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_1, UHUD_Crosshair_ZiplineGun_C* CallFunc_GetCrosshair_Result_2, bool CallFunc_IsValid_ReturnValue_3, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UUserWidget* K2Node_ComponentBoundEvent_Crosshair, UWeaponDisplay_Base_AmmoCount_C* K2Node_DynamicCast_AsWeapon_Display_Base_Ammo_Count, bool K2Node_DynamicCast_bSuccess, UHUD_Crosshair_ZiplineGun_C* K2Node_DynamicCast_AsHUD_Crosshair_Zipline_Gun, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_Abs_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, UHUD_Crosshair_ZiplineGun_C* K2Node_DynamicCast_AsHUD_Crosshair_Zipline_Gun_1, bool K2Node_DynamicCast_bSuccess_2, const FVector K2Node_ComponentBoundEvent_location, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetZiplineGunAutoSwitch_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FHitResult CallFunc_LineTrace_OutHit, FVector CallFunc_LineTrace_Direction, float CallFunc_LineTrace_Distance, bool CallFunc_LineTrace_HitAny, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool CallFunc_BooleanOR_ReturnValue_1, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
}

#endif
