#ifndef UE4SS_SDK_BP_GunkSeed_HPP
#define UE4SS_SDK_BP_GunkSeed_HPP

class ABP_GunkSeed_C : public AGem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UAudioComponent* GunkSeedReleased;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Sphere;
    class UCarriableComponent* Carriable;
    class USphereComponent* UseSphere;
    FVector throwForce;
    class USoundBase* ImpactSound;
    float MaxLength;
    bool Dropped;

    void OnRep_Dropped();
    void ReleaseFromHanger();
    void ReceiveBeginPlay();
    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void Throw(FVector force);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
    void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Drop();
    void BndEvt__Usable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ExecuteUbergraph_BP_GunkSeed(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_PickupItem_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector K2Node_Event_force, bool Temp_bool_Has_Been_Initd_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_GetComponentVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_ComponentBoundEvent_canUse);
};

#endif
