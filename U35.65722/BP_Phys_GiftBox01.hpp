#ifndef UE4SS_SDK_BP_Phys_GiftBox01_HPP
#define UE4SS_SDK_BP_Phys_GiftBox01_HPP

class ABP_Phys_GiftBox01_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class UParticleSystemComponent* ParticleSystem;
    class UCapsuleComponent* UseCapsule;
    class UGravityChangedComponent* GravityChanged;
    class UInstantUsable* InstantUsable;
    bool CanTriggerSound;
    FVector KickSoundLocation;
    class APlayerCharacter* KickedBy;
    TArray<class UStaticMesh*> MeshesToChooseFrom;
    TArray<class UMaterialInterface*> Mats_Wrapper;
    TArray<class UMaterialInterface*> Mats_Note;
    int32 RandomPresentSound;

    void OnRep_KickSoundLocation(class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void Play_Kick(class APlayerCharacter* Kicker);
    void ExecuteUbergraph_BP_Phys_GiftBox01(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_GetComponentVelocity_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FVector CallFunc_GetSocketLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_Add_VectorFloat_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetStatValue_ReturnValue, FVector CallFunc_Normal_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, class UStaticMesh* CallFunc_Array_Get_Item, class UMaterialInterface* CallFunc_Array_Get_Item_1, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, class UMaterialInterface* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_LastIndex_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, int32 CallFunc_RandomIntegerInRange_ReturnValue_3, FRotator CallFunc_MakeRotator_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item_3, FHitResult CallFunc_K2_AddLocalRotation_SweepHitResult, int32 CallFunc_RandomIntegerInRange_ReturnValue_4, class APlayerCharacter* K2Node_CustomEvent_Kicker, class UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
};

#endif
