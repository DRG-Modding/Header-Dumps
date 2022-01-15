#ifndef UE4SS_SDK_WPN_OilExtractor_HPP
#define UE4SS_SDK_WPN_OilExtractor_HPP

class AWPN_OilExtractor_C : UWPN_Extractor_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* OilExtractorHitPositive;
    UAudioComponent* OilExtractorHitNegative;
    UWidgetComponent* Widget_OilReadoutBottom_Ground;
    UWidgetComponent* Widget_OilReadoutTop_Ground;
    UWidgetComponent* Widget_OilReadoutBottom_TP;
    UWidgetComponent* Widget_OilReadoutTop_TP;
    UFirstPersonWidgetComponent* Widget_OilReadoutBottom;
    UFirstPersonWidgetComponent* Widget_OilReadoutTop;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UActorTrackingComponent* ActorTracking;
    USoundCue* ImpactSound;
    UMaterialInstanceDynamic* FuelbarMat;

    void SetFilledUI(UWidgetComponent* Widget, float FilledAmount, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, UUI_OilExtractor_Bar_C* K2Node_DynamicCast_AsUI_Oil_Extractor_Bar, bool K2Node_DynamicCast_bSuccess);
    void OnCurrentLoadChanged(float load);
    void ReceiveBeginPlay();
    void RecieveEquipped();
    void RecieveUnequipped();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__DroppedCollider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnValidSurfaceChanged(bool IsValid);
    void ExecuteUbergraph_WPN_OilExtractor(int32 EntryPoint, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_Event_DeltaSeconds, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, bool Temp_bool_IsClosed_Variable, float K2Node_Event_load, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_GetComponentVelocity_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool K2Node_Event_isValid);
}

#endif
