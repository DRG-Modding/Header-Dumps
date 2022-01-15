#ifndef UE4SS_SDK_BP_Gem_HPP
#define UE4SS_SDK_BP_Gem_HPP

class ABP_Gem_C : UGem
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainDetectComponent* TerrainDetect5;
    UTerrainDetectComponent* TerrainDetect4;
    UTerrainDetectComponent* TerrainDetect3;
    UTerrainDetectComponent* TerrainDetect2;
    UTerrainDetectComponent* TerrainDetect1;
    UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    UStaticMeshComponent* TerrainScannerMesh;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UCarriableComponent* Carriable;
    UBoxComponent* Box;
    USphereComponent* Sphere;
    int32 Detects;
    USoundCue* DugFreeCue;
    bool CanTriggerSound;
    USoundBase* ImpactSound;
    FName ImpactSoundParameter;
    USoundBase* PickupSound;
    FVector InWorldScale;
    FVector throwForce;
    bool VisibleToTerrainScanner;
    bool ExposeNeighbourhoodToTerrainScanner;
    UFSDAchievement* CollectedAchievement;
    bool VisibleToScannerAfterDigOut;

    void ReleaseToWorld();
    void SetPickedUp(UPlayerCharacter* Character, bool CallFunc_PickupItem_ReturnValue);
    void PointCleared(bool CallFunc_GetHasBeenReleased_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature();
    void BndEvt__TerrainDetect5_K2Node_ComponentBoundEvent_6_PointRemovedEvent__DelegateSignature();
    void All_PlayDugFree();
    void BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_0_CarriableEvent__DelegateSignature();
    void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool CanUse);
    void Throw(FVector force);
    void ReceiveBeginPlay();
    void Receive_OnDeposited(UPlayerCharacter* fromPlayer);
    void Cheat_ReleaseToWorld();
    void ExecuteUbergraph_BP_Gem(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_GetComponentVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_ComponentBoundEvent_canUse, FVector K2Node_Event_force, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, UPlayerCharacter* K2Node_Event_fromPlayer, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, UPlayerCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFirstPerson_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, FVector CallFunc_MakeVector_ReturnValue_1, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, FVector CallFunc_GetComponentVelocity_ReturnValue_1, float CallFunc_VSize_ReturnValue_1);
}

#endif
