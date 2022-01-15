#ifndef UE4SS_SDK_BP_CaveVine_HPP
#define UE4SS_SDK_BP_CaveVine_HPP

class ABP_CaveVine_C : ACaveVine
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Sphere;
    UInstantUsable* InstantUsable;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UBoxComponent* Box;
    UTerrainPlacementComponent* terrainPlacement;
    USimpleHealthComponent* SimpleHealth;
    UMotionAudioController* MotionAudioController;
    UAudioComponent* CaveVine_Tracking;
    UAudioComponent* CaveVine_Idle;
    UOutlineComponent* outline;
    UStaticMeshComponent* HeadMesh;
    UStaticMeshComponent* BaseMesh;
    USphereComponent* SphereCollider;

    void UserConstructionScript(FVector CallFunc_GetEndPosition_ReturnValue, FVector CallFunc_GetEndTangent_ReturnValue, FRotator CallFunc_MakeRotFromX_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult);
    void BP_OnInitialized();
    void BP_OnTargetChanged(UHealthComponent* NewTarget);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_CaveVine(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FVector CallFunc_Add_VectorVector_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UHealthComponent* K2Node_Event_NewTarget, bool CallFunc_IsValid_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_IsAlive_ReturnValue);
}

#endif
