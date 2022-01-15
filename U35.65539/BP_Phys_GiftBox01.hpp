#ifndef UE4SS_SDK_BP_Phys_GiftBox01_HPP
#define UE4SS_SDK_BP_Phys_GiftBox01_HPP

class ABP_Phys_GiftBox01_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* Mesh;
    UParticleSystemComponent* ParticleSystem;
    UCapsuleComponent* UseCapsule;
    UGravityChangedComponent* GravityChanged;
    UInstantUsable* InstantUsable;
    bool CanTriggerSound;
    FVector KickSoundLocation;
    APlayerCharacter* KickedBy;
    TArray<UStaticMesh*> MeshesToChooseFrom;
    TArray<UMaterialInterface*> Mats_Wrapper;
    TArray<UMaterialInterface*> Mats_Note;
    int32 RandomPresentSound;

    void OnRep_KickSoundLocation(UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void Play_Kick(UPlayerCharacter* Kicker);
    void ExecuteUbergraph_BP_Phys_GiftBox01(int32 EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_GetComponentVelocity_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FVector CallFunc_GetSocketLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_Add_VectorFloat_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetStatValue_ReturnValue, FVector CallFunc_Normal_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, UStaticMesh* CallFunc_Array_Get_Item, UMaterialInterface* CallFunc_Array_Get_Item_1, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, UMaterialInterface* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_LastIndex_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, FRotator CallFunc_MakeRotator_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item_3, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, int32 CallFunc_RandomIntegerInRange_ReturnValue_4, UPlayerCharacter* K2Node_CustomEvent_Kicker, UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
}

#endif
