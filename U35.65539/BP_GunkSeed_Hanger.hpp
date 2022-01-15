#ifndef UE4SS_SDK_BP_GunkSeed_Hanger_HPP
#define UE4SS_SDK_BP_GunkSeed_Hanger_HPP

class ABP_GunkSeed_Hanger_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* AoeOverlapSphere;
    UHealthDamageTracker* HealthDamageTracker;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UPathfinderCollisionComponent* PathfinderCollision;
    UPointLightComponent* PointLight;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* Root;
    UInstantUsable* InstantUsable;
    USphereComponent* Sphere;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    float MinForce;
    float MaxForce;
    FVector EndPointOffset;
    bool HasSeed;
    ABP_GunkSeed_C* GunkSeed;
    FVector SlapForce;

    void OnRep_SlapForce();
    void OnRep_HasSeed(float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
    void DropSeed();
    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float Amount, float BaseAmount, UPrimitiveComponent* Component, UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_5_DamageSig__DelegateSignature(float Amount);
    void ExecuteUbergraph_BP_GunkSeed_Hanger(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_RandomUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, float K2Node_ComponentBoundEvent_Amount_1, float K2Node_ComponentBoundEvent_BaseAmount, UPrimitiveComponent* K2Node_ComponentBoundEvent_Component, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physmat, const FName K2Node_ComponentBoundEvent_boneName, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UBP_GunkSeed_C* CallFunc_FinishSpawningActor_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float K2Node_ComponentBoundEvent_Amount);
}

#endif
