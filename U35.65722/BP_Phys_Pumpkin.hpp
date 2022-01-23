#ifndef UE4SS_SDK_BP_Phys_Pumpkin_HPP
#define UE4SS_SDK_BP_Phys_Pumpkin_HPP

class ABP_Phys_Pumpkin_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class UParticleSystemComponent* ParticleSystem;
    class UCapsuleComponent* UseCapsule;
    class UGravityChangedComponent* GravityChanged;
    class UInstantUsable* InstantUsable;
    bool CanTriggerSound;
    FVector_NetQuantize KickSoundLocation;
    class APlayerCharacter* KickedBy;
    TArray<class UStaticMesh*> MeshesToChooseFrom;

    void OnRep_KickSoundLocation(class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Phys_Pumpkin(int32 EntryPoint, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UStaticMesh* CallFunc_Array_Get_Item, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_GetComponentVelocity_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, FVector_NetQuantize CallFunc_VectorToNetQuantize_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_Add_VectorFloat_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetStatValue_ReturnValue, FVector CallFunc_Normal_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
};

#endif
