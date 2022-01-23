#ifndef UE4SS_SDK_BP_CaveVine_HPP
#define UE4SS_SDK_BP_CaveVine_HPP

class ABP_CaveVine_C : public ACaveVine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UInstantUsable* InstantUsable;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBoxComponent* Box;
    class UTerrainPlacementComponent* terrainPlacement;
    class USimpleHealthComponent* SimpleHealth;
    class UMotionAudioController* MotionAudioController;
    class UAudioComponent* CaveVine_Tracking;
    class UAudioComponent* CaveVine_Idle;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* HeadMesh;
    class UStaticMeshComponent* BaseMesh;
    class USphereComponent* SphereCollider;

    void UserConstructionScript(FVector CallFunc_GetEndPosition_ReturnValue, FVector CallFunc_GetEndTangent_ReturnValue, FRotator CallFunc_MakeRotFromX_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult);
    void BP_OnInitialized();
    void BP_OnTargetChanged(class UHealthComponent* NewTarget);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_3_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_CaveVine(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, FHitResult CallFunc_K2_SetWorldLocation_SweepHitResult, FVector CallFunc_Add_VectorVector_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UHealthComponent* K2Node_Event_NewTarget, bool CallFunc_IsValid_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_IsAlive_ReturnValue);
};

#endif
