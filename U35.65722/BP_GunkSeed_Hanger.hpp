#ifndef UE4SS_SDK_BP_GunkSeed_Hanger_HPP
#define UE4SS_SDK_BP_GunkSeed_Hanger_HPP

class ABP_GunkSeed_Hanger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* AoeOverlapSphere;
    class UHealthDamageTracker* HealthDamageTracker;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UPointLightComponent* PointLight;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* Root;
    class UInstantUsable* InstantUsable;
    class USphereComponent* Sphere;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    float MinForce;
    float MaxForce;
    FVector EndPointOffset;
    bool HasSeed;
    class ABP_GunkSeed_C* GunkSeed;
    FVector SlapForce;

    void OnRep_SlapForce();
    void OnRep_HasSeed(float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
    void DropSeed();
    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_2_BodypartHitSig__DelegateSignature(float Amount, float BaseAmount, class UPrimitiveComponent* Component, class UFSDPhysicalMaterial* PhysMat, const FName& BoneName);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__HealthDamageTracker_K2Node_ComponentBoundEvent_5_DamageSig__DelegateSignature(float Amount);
    void ExecuteUbergraph_BP_GunkSeed_Hanger(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_RandomUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, float K2Node_ComponentBoundEvent_Amount_1, float K2Node_ComponentBoundEvent_BaseAmount, class UPrimitiveComponent* K2Node_ComponentBoundEvent_Component, class UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physmat, const FName K2Node_ComponentBoundEvent_boneName, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_GunkSeed_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FVector CallFunc_Subtract_VectorVector_ReturnValue, FVector CallFunc_Normal_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float K2Node_ComponentBoundEvent_Amount);
};

#endif
