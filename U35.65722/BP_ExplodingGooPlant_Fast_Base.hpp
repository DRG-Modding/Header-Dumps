#ifndef UE4SS_SDK_BP_ExplodingGooPlant_Fast_Base_HPP
#define UE4SS_SDK_BP_ExplodingGooPlant_Fast_Base_HPP

class ABP_ExplodingGooPlant_Fast_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UTerrainDetectComponent* TerrainDetect;
    class UOutlineComponent* outline;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UPointLightComponent* PointLight;
    class USimpleHealthComponent* SimpleHealth;
    class UStaticMeshComponent* Body;
    class USceneComponent* DefaultSceneRoot;
    float Damage;
    float BlastRadius;

    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_ExplodingGooPlant_Fast_Base(int32 EntryPoint, class UDecalComponent* CallFunc_SpawnDecalAtActor_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, const FTransform CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, class ABP_ExplodingGooPlant_Puddle_C* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<FVector>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_PlaceActors_OutSpawnedActors, bool CallFunc_PlaceActors_ReturnValue, bool Temp_bool_IsClosed_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

#endif
