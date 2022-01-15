#ifndef UE4SS_SDK_BP_Kickable_Base_HPP
#define UE4SS_SDK_BP_Kickable_Base_HPP

class ABP_Kickable_Base_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UGravityChangedComponent* GravityChanged;
    UInstantUsable* InstantUsable;
    UCapsuleComponent* Capsule;
    UStaticMeshComponent* Kickable Mesh;
    bool CanTriggerSound;
    FVector KickSoundLocation;
    APlayerCharacter* KickedBy;

    void OnRep_KickSoundLocation(UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void destroy();
    void DestroyOvertime();
    void Play_Kick(UPlayerCharacter* Kicker);
    void BndEvt__Kickable Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Set Is Interactable(bool Can interact);
    void ExecuteUbergraph_BP_Kickable_Base(int32 EntryPoint, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetStatValue_ReturnValue, FVector CallFunc_Normal_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_Kicker, FVector CallFunc_Multiply_VectorFloat_ReturnValue, UPlayerTPAnimInstance* CallFunc_GetTPAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, FVector CallFunc_GetComponentVelocity_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_Add_VectorFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, bool K2Node_CustomEvent_Can_interact, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, uint8 K2Node_Select_Default);
}

#endif
