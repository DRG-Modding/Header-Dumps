#ifndef UE4SS_SDK_BP_FacilityCore_DataRack_HPP
#define UE4SS_SDK_BP_FacilityCore_DataRack_HPP

class ABP_FacilityCore_DataRack_C : UGem
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* DataRackIdle_Cue;
    UNiagaraComponent* Niagara;
    UPointLightComponent* PointLightshadow;
    UTerrainScannerStaticMesh* TerrainScannerStaticMesh;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UPointLightComponent* PointLight;
    USphereComponent* Sphere;
    UStaticMeshComponent* StaticMesh;
    UCarriableComponent* Carriable;
    UBoxComponent* Box;
    FVector throwForce;
    USoundCue* ImpactSound;
    bool CanTriggerSound;
    FName ImpactSoundParameter;

    void ReceiveBeginPlay();
    void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_5_CarriableEvent__DelegateSignature();
    void Throw(FVector force);
    void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_FacilityCore_DataRack(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FVector K2Node_Event_force, bool CallFunc_PickupItem_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_GetComponentVelocity_ReturnValue, FVector CallFunc_GetComponentVelocity_ReturnValue_1, float CallFunc_VSize_ReturnValue, float CallFunc_VSize_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
}

#endif
