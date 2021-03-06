#ifndef UE4SS_SDK_BP_SupplyPod_Ammo_HPP
#define UE4SS_SDK_BP_SupplyPod_Ammo_HPP

class ABP_SupplyPod_Ammo_C : public ARessuplyPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* OxygenSound;
    class UChildActorComponent* OxygenTank02;
    class UChildActorComponent* OxygenTank01;
    class UDropToTerrainComponent* DropToTerrain;
    class UStaticMeshComponent* FrontPlane1;
    class UOxygenSourceComponent* OxygenSource;
    class UTerrainDetectComponent* TerrainDetect;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UActorTrackingComponent* ActorTracking;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBoxComponent* Box;
    class UCapsuleComponent* UseCapsule4;
    class UCapsuleComponent* UseCapsule3;
    class UCapsuleComponent* UseCapsule2;
    class UCapsuleComponent* UseCapsule1;
    class USingleUsableComponent* SingleUsable3;
    class USingleUsableComponent* SingleUsable4;
    class USkeletalMeshComponent* SupplyPod_Door_4;
    class USkeletalMeshComponent* SupplyPod_Door_3;
    class USkeletalMeshComponent* SupplyPod_Door_2;
    class USkeletalMeshComponent* SupplyPod_Door_1;
    class USkeletalMeshComponent* SK_DropPod_Drill;
    class USingleUsableComponent* SingleUsable1;
    class USingleUsableComponent* SingleUsable2;
    class UAudioComponent* Audio;
    class UOutlineComponent* outline;
    class UAutoCarverComponent* AutoCarver;
    class URadarPointComponent* radarPoint;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* SM_DropPod_Hull;
    TMap<class USkeletalMeshComponent*, class UMaterialInstanceDynamic*> DoorMaterials;
    float FellFromheight;
    float MinFallDistance;
    float TimeOfImpact;
    class UParticleSystemComponent* DropParticles;
    class UParticleSystemComponent* DropParticles2;

    void HandlePhotosentitivity(class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue);
    void HandleUsableChanged(class UPrimitiveComponent* UseCollider, class USkeletalMeshComponent* DoorMesh, bool CanUse);
    void HealUser(class APlayerCharacter* User, float CallFunc_GetStatValue_ReturnValue);
    void DisableUsable(class UPrimitiveComponent* collider, class USkeletalMeshComponent* DoorMesh, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void ResupplyUser(class APlayerCharacter* User);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3);
    void OnDroppodImpact();
    void OnDropStarted();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool CanUse);
    void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnTunnelBLocked();
    void SupplyUsed(class APlayerCharacter* User, class USingleUsableComponent* Target);
    void UsableChanged(bool CanUse, class UPrimitiveComponent* UseCollider, class USkeletalMeshComponent* DoorMesh);
    void ReceiveBeginPlay();
    void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_10_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_11_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_12_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_13_UserCountChangedDelegate__DelegateSignature(int32 userCount);
    void HandleUserCountChanged(int32 userCount, class USingleUsableComponent* Usable, class USkeletalMeshComponent* Door);
    void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_14_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void ExecuteUbergraph_BP_SupplyPod_Ammo(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float K2Node_Event_DeltaSeconds, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, bool K2Node_ComponentBoundEvent_canUse_3, bool K2Node_ComponentBoundEvent_canUse_2, bool K2Node_ComponentBoundEvent_canUse_1, bool K2Node_ComponentBoundEvent_canUse, class APlayerCharacter* K2Node_ComponentBoundEvent_user_3, EInputKeys K2Node_ComponentBoundEvent_key_3, class APlayerCharacter* K2Node_ComponentBoundEvent_user_2, EInputKeys K2Node_ComponentBoundEvent_key_2, class APlayerCharacter* K2Node_ComponentBoundEvent_user_1, EInputKeys K2Node_ComponentBoundEvent_key_1, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, const FTransform CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_User, class USingleUsableComponent* K2Node_CustomEvent_Target, class ABP_TunnelBlocker_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_CustomEvent_canUse, class UPrimitiveComponent* K2Node_CustomEvent_UseCollider, class USkeletalMeshComponent* K2Node_CustomEvent_DoorMesh, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_2, int32 K2Node_ComponentBoundEvent_userCount_3, int32 K2Node_ComponentBoundEvent_userCount_2, int32 K2Node_ComponentBoundEvent_userCount_1, int32 K2Node_ComponentBoundEvent_userCount, int32 K2Node_CustomEvent_UserCount, class USingleUsableComponent* K2Node_CustomEvent_Usable, class USkeletalMeshComponent* K2Node_CustomEvent_Door, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_ComponentBoundEvent_IsFalling, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_K2_GetActorLocation_ReturnValue_5, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_TimeSince_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_GetPhotosensitiveMode_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
};

#endif
