#ifndef UE4SS_SDK_BP_Gem_HPP
#define UE4SS_SDK_BP_Gem_HPP

class ABP_Gem_C : public AGem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainDetectComponent* TerrainDetect5;
    class UTerrainDetectComponent* TerrainDetect4;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UStaticMeshComponent* TerrainScannerMesh;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UCarriableComponent* Carriable;
    class UBoxComponent* Box;
    class USphereComponent* Sphere;
    int32 Detects;
    class USoundCue* DugFreeCue;
    bool CanTriggerSound;
    class USoundBase* ImpactSound;
    FName ImpactSoundParameter;
    class USoundBase* PickupSound;
    FVector InWorldScale;
    FVector throwForce;
    bool VisibleToTerrainScanner;
    bool ExposeNeighbourhoodToTerrainScanner;
    class UFSDAchievement* CollectedAchievement;
    bool VisibleToScannerAfterDigOut;

    void ReleaseToWorld();
    void SetPickedUp(class APlayerCharacter* Character, bool CallFunc_PickupItem_ReturnValue);
    void PointCleared(bool CallFunc_GetHasBeenReleased_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature();
    void All_PlayDugFree();
    void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void Throw(FVector force);
    void ReceiveBeginPlay();
    void Receive_OnDeposited(class APlayerCharacter* fromPlayer);
    void Cheat_ReleaseToWorld();
    void ExecuteUbergraph_BP_Gem(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_GetComponentVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_ComponentBoundEvent_canUse, FVector K2Node_Event_force, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, class APlayerCharacter* K2Node_Event_fromPlayer, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class APlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFirstPerson_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_1, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, FVector CallFunc_GetComponentVelocity_ReturnValue_1, float CallFunc_VSize_ReturnValue_1);
};

#endif
