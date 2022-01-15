#ifndef UE4SS_SDK_BP_XmasBauble_Item_HPP
#define UE4SS_SDK_BP_XmasBauble_Item_HPP

class ABP_XmasBauble_Item_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainPlacementComponent* terrainPlacement;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    UTerrainDetectComponent* TerrainDetect;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;
    UParticleSystem* deathParticles;
    USoundCue* deathSound;
    TArray<UMaterialInterface*> Mats;
    UMaterialInterface* CurrentMaterial;
    FRotator RandomRotation;

    void OnRep_RandomRotation(FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult);
    void OnRep_CurrentMaterial();
    void ReceiveBeginPlay();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void OnTerrainPointRemoved();
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_XmasBauble_Item(int32 EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_HasAuthority_ReturnValue_1);
}

#endif
