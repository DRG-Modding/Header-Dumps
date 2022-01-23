#ifndef UE4SS_SDK_BP_EscortGarage_HPP
#define UE4SS_SDK_BP_EscortGarage_HPP

class ABP_EscortGarage_C : public ARessuplyPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeshCarverComponent* DroppodImpactCarver1;
    class UPointLightComponent* PointLight;
    class UMeshCarverComponent* DroppodImpactCarver;
    class UPointLightComponent* buttonLight_04;
    class UPointLightComponent* buttonLight_03;
    class UPointLightComponent* buttonLight_02;
    class UPointLightComponent* buttonLight_01;
    class UStaticMeshComponent* ButtonMesh;
    class UStaticMeshComponent* ButtonMesh3;
    class UStaticMeshComponent* ButtonMesh2;
    class UStaticMeshComponent* ButtonMesh1;
    class USceneComponent* buttons;
    class USceneComponent* DrillDozerSpawnPoint;
    class UActorTrackingComponent* ActorTracking;
    class UPointLightComponent* PointLight_FlapBack1;
    class UPointLightComponent* PointLight_FlapBack0;
    class UPointLightComponent* PointLight_FlapLeft1;
    class UPointLightComponent* PointLight_FlapLeft0;
    class UPointLightComponent* PointLight_FlapRight1;
    class UPointLightComponent* PointLight_FlapRight0;
    class UPointLightComponent* PointLight_FlapFront1;
    class UPointLightComponent* PointLight_FlapFront0;
    class UPointLightComponent* PointLight_Inside3;
    class UPointLightComponent* PointLight_Inside2;
    class UPointLightComponent* PointLight_Inside1;
    class UPointLightComponent* PointLight_Inside0;
    class UBoxComponent* CollisionDecending;
    class USphereComponent* Sphere3;
    class USphereComponent* Sphere2;
    class USphereComponent* Sphere1;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USceneComponent* RespawnLocation;
    class USkeletalMeshComponent* SK_DrillDozerGarage;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UBoxComponent* Box;
    class UAutoCarverComponent* AutoCarver;
    class USingleUsableComponent* SingleUsable;
    class USphereComponent* Sphere;
    class UTerrainPlacementComponent* terrainPlacement;
    class USkeletalMeshComponent* Drill;
    TSubclassOf<class AActor> EscortMuleClass;
    bool HasBeenOpened;
    class UParticleSystemComponent* DrillParticles01;
    class UParticleSystemComponent* DrillParticles02;
    class AEscortMule* SpawnedMule;
    class UStaticMeshComponent* NewVar_0;

    void OnRep_HasBeenOpened(class UStaticMeshComponent* NewLocalVar_0);
    void ReceiveBeginPlay();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnDroppodImpact();
    void OnDropStarted();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Damage_K2Node_ComponentBoundEvent_1_OnEnemyKilledDelegate__DelegateSignature(class AActor* Target, class UFSDPhysicalMaterial* PhysicalMaterial);
    void ExecuteUbergraph_BP_EscortGarage(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UClass* CallFunc_LoadClass_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, TSubclassOf<class AEscortMule> K2Node_ClassDynamicCast_AsEscort_Mule, bool K2Node_ClassDynamicCast_bSuccess, const FTransform CallFunc_GetTransform_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AEscortMule* CallFunc_FinishSpawningActor_ReturnValue, float K2Node_Event_DeltaSeconds, const FTransform CallFunc_GetTransform_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_4, FVector CallFunc_GetSocketLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* K2Node_ComponentBoundEvent_Target, class UFSDPhysicalMaterial* K2Node_ComponentBoundEvent_physicalMaterial, FVector CallFunc_GetSocketLocation_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue_1, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsPathfinderReady_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess_1, FVector CallFunc_GetSocketLocation_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_5, const TArray<FVector>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess);
};

#endif
