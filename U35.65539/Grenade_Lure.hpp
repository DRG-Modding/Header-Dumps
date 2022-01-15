#ifndef UE4SS_SDK_Grenade_Lure_HPP
#define UE4SS_SDK_Grenade_Lure_HPP

class AGrenade_Lure_C : UITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void AddGearStateEntries(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, FGearStatEntry K2Node_MakeStruct_GearStatEntry, FGearStatEntry K2Node_MakeStruct_GearStatEntry_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
    void OnExploded();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void DoCustomExplosion();
    void ExecuteUbergraph_Grenade_Lure(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_RandomFloatInRange_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, FRotator CallFunc_MakeRotator_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FTransform CallFunc_MakeTransform_ReturnValue, FVector CallFunc_Normal_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UBP_LureTarget_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2);
}

#endif
