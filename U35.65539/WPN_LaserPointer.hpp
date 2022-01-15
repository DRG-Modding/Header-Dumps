#ifndef UE4SS_SDK_WPN_LaserPointer_HPP
#define UE4SS_SDK_WPN_LaserPointer_HPP

class AWPN_LaserPointer_C : ULaserPointerItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    UFirstPersonWidgetComponent* FirstPersonWidget;
    USceneComponent* FPTransform;
    UStaticMeshComponent* LightBeam_Cylinder;
    USceneComponent* LightBeam;
    UAudioComponent* LaserLight_On_Cue;
    UCrosshairAggregator* CrosshairAggregator;
    USceneComponent* TPTransform;
    UHUD_LaserPointerDisplay_C* HUD;
    float Delay;
    UMaterialInstanceDynamic* BackgroundMaterial;
    FLinearColor BackgroundDefaultColor;
    TArray<ABP_PointOfInterest_C*> PointsOfInterest;
    UTexture2D* PreviousPOI;
    float PreviousPOITime;
    UAudioComponent* StartStop;
    FGuid PreviousLookAtID;

    void SetLaserBeamMaterial(UPlayerCharacter* InCharacter, UInventoryList* CallFunc_GetInventoryList_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool K2Node_DynamicCast_bSuccess);
    void SetBeamVisibility(bool bNewVisibility, bool CallFunc_IsValid_ReturnValue, UHUD_Crosshair_LaserPointer_C* K2Node_DynamicCast_AsHUD_Crosshair_Laser_Pointer, bool K2Node_DynamicCast_bSuccess);
    void CanPlacePOI(FVector Location, UTexture* Icon, bool& Can Place, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, ABP_PointOfInterest_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void UpdateBackgroundColor(bool K2Node_SwitchEnum_CmpSuccess);
    void SetBackgroundColor(FLinearColor Value);
    void Adjust Beam(FTransform CallFunc_GetPointTransform_PointTransform, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_VSize_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotFromX_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult);
    void GetPointTransform(FTransform& PointTransform, bool Temp_bool_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, USceneComponent* K2Node_Select_Default, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue);
    void UserConstructionScript(FLinearColor CallFunc_K2_GetVectorParameterValue_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void RecieveUnequipped();
    void OnPointOfInterest(AActor* TargetActor, FVector TargetLocation, UTexture2D* TargetIcon);
    void ReceiveBeginPlay();
    void AddedToInventory(UPlayerCharacter* ItemOwner);
    void OnScanComplete();
    void OnMarkerPlaced_Event(FVector Location, const FText& Name, FLinearColor Color, AActor* Target, ELaserPointerTargetType TypeOfTarget);
    void RecieveEquipped();
    void OnPOIDestroyed(AActor* DestroyedActor);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_WPN_LaserPointer(int32 EntryPoint, ScanComplete__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FVector CallFunc_K2_GetActorLocation_ReturnValue, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UHUD_LaserPointerDisplay_C* K2Node_DynamicCast_AsHUD_Laser_Pointer_Display, bool K2Node_DynamicCast_bSuccess, AActor* K2Node_Event_TargetActor, FVector K2Node_Event_TargetLocation, UTexture2D* K2Node_Event_TargetIcon, FTransform CallFunc_Conv_VectorToTransform_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UPlayerCharacter* K2Node_Event_ItemOwner, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsInMinersManual_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector K2Node_CustomEvent_Location, const FText K2Node_CustomEvent_Name, FLinearColor K2Node_CustomEvent_Color, AActor* K2Node_CustomEvent_Target, ELaserPointerTargetType K2Node_CustomEvent_TypeOfTarget, bool CallFunc_NotEqual_GuidGuid_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, AActor* K2Node_CustomEvent_DestroyedActor, ABP_PointOfInterest_C* K2Node_DynamicCast_AsBP_Point_Of_Interest, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, MarkerPlacedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ABP_PointOfInterest_C* CallFunc_FinishSpawningActor_ReturnValue);
}

#endif
