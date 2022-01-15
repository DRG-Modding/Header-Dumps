#ifndef UE4SS_SDK_BP_EscortGarage_HPP
#define UE4SS_SDK_BP_EscortGarage_HPP

class ABP_EscortGarage_C : ARessuplyPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMeshCarverComponent* DroppodImpactCarver1;
    UPointLightComponent* PointLight;
    UMeshCarverComponent* DroppodImpactCarver;
    UPointLightComponent* buttonLight_04;
    UPointLightComponent* buttonLight_03;
    UPointLightComponent* buttonLight_02;
    UPointLightComponent* buttonLight_01;
    UStaticMeshComponent* ButtonMesh;
    UStaticMeshComponent* ButtonMesh3;
    UStaticMeshComponent* ButtonMesh2;
    UStaticMeshComponent* ButtonMesh1;
    USceneComponent* buttons;
    USceneComponent* DrillDozerSpawnPoint;
    UActorTrackingComponent* ActorTracking;
    UPointLightComponent* PointLight_FlapBack1;
    UPointLightComponent* PointLight_FlapBack0;
    UPointLightComponent* PointLight_FlapLeft1;
    UPointLightComponent* PointLight_FlapLeft0;
    UPointLightComponent* PointLight_FlapRight1;
    UPointLightComponent* PointLight_FlapRight0;
    UPointLightComponent* PointLight_FlapFront1;
    UPointLightComponent* PointLight_FlapFront0;
    UPointLightComponent* PointLight_Inside3;
    UPointLightComponent* PointLight_Inside2;
    UPointLightComponent* PointLight_Inside1;
    UPointLightComponent* PointLight_Inside0;
    UBoxComponent* CollisionDecending;
    USphereComponent* Sphere3;
    USphereComponent* Sphere2;
    USphereComponent* Sphere1;
    UOutlineComponent* outline;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USceneComponent* RespawnLocation;
    USkeletalMeshComponent* SK_DrillDozerGarage;
    UPathfinderCollisionComponent* PathfinderCollision;
    UBoxComponent* Box;
    UAutoCarverComponent* AutoCarver;
    USingleUsableComponent* SingleUsable;
    USphereComponent* Sphere;
    UTerrainPlacementComponent* terrainPlacement;
    USkeletalMeshComponent* Drill;
    TSubclassOf<AActor> EscortMuleClass;
    bool HasBeenOpened;
    UParticleSystemComponent* DrillParticles01;
    UParticleSystemComponent* DrillParticles02;
    AEscortMule* SpawnedMule;
    UStaticMeshComponent* NewVar_0;

    void OnRep_HasBeenOpened(UStaticMeshComponent* NewLocalVar_0);
    void ReceiveBeginPlay();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void OnDroppodImpact();
    void OnDropStarted();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Damage_K2Node_ComponentBoundEvent_1_OnEnemyKilledDelegate__DelegateSignature(AActor* Target, UFSDPhysicalMaterial* PhysicalMaterial);
    void ExecuteUbergraph_BP_EscortGarage(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, TSubclassOf<UEscortMule> K2Node_ClassDynamicCast_AsEscort_Mule, bool K2Node_ClassDynamicCast_bSuccess, const FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UEscortMule* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_Event_DeltaSeconds, const FTransform CallFunc_GetTransform_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_4, FVector CallFunc_GetSocketLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, AActor* K2Node_ComponentBoundEvent_Target, UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, FVector CallFunc_GetSocketLocation_ReturnValue_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsPathfinderReady_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_GetSocketLocation_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_5, const TArray<FVector>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess);
}

#endif
