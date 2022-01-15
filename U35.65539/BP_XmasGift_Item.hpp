#ifndef UE4SS_SDK_BP_XmasGift_Item_HPP
#define UE4SS_SDK_BP_XmasGift_Item_HPP

class ABP_XmasGift_Item_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;
    UParticleSystem* deathParticles;
    USoundCue* deathSound;
    TArray<UStaticMesh*> GiftOptions;
    USoundBase* HoHoHo;
    TArray<UMaterialInterface*> GiftMats;
    bool CanOpen;
    UStaticMesh* CurrentGiftOption;
    UMaterialInterface* CurrentMat1;
    UMaterialInterface* CurrentMat2;

    void RandomizeGift(bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item, UStaticMesh* CallFunc_Array_Get_Item_1, UMaterialInterface* CallFunc_Array_Get_Item_2);
    void OnRep_CurrentMat2();
    void OnRep_CurrentMat1();
    void OnRep_CurrentGiftOption(bool CallFunc_SetStaticMesh_ReturnValue);
    void XmasLaugh(FVector Location);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_XmasGift_Item(int32 EntryPoint, FVector CallFunc_GetActorUpVector_ReturnValue, FVector K2Node_CustomEvent_Location, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UBP_UnknownArtifact_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_RandomFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, FVector CallFunc_Add_VectorVector_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue_3, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, UDecalComponent* CallFunc_SpawnDecal_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_4);
}

#endif
