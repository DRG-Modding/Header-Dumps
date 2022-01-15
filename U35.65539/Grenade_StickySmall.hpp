#ifndef UE4SS_SDK_Grenade_StickySmall_HPP
#define UE4SS_SDK_Grenade_StickySmall_HPP

class AGrenade_StickySmall_C : UITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UDamageComponent* BluntDamage;

    void AddGearStateEntries(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<UGrenade_StickySmall_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue, TSubclassOf<UGrenade_StickySmall_C> CallFunc_GetObjectClass_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_1, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_1, TSubclassOf<UGrenade_StickySmall_C> CallFunc_GetObjectClass_ReturnValue_2, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_2, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_2, int32 CallFunc_Array_Add_ReturnValue_2, TSubclassOf<UGrenade_StickySmall_C> CallFunc_GetObjectClass_ReturnValue_3, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_3, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_3, int32 CallFunc_Array_Add_ReturnValue_3);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Grenade_StickySmall(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, FVector CallFunc_BreakHitResult_Location, FVector CallFunc_BreakHitResult_ImpactPoint, FVector CallFunc_BreakHitResult_Normal, FVector CallFunc_BreakHitResult_ImpactNormal, UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, AActor* CallFunc_BreakHitResult_HitActor, UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, FVector CallFunc_BreakHitResult_TraceStart, FVector CallFunc_BreakHitResult_TraceEnd, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_GetVelocity_ReturnValue, FVector CallFunc_Normal_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, AProjectileBase* CallFunc_SpawnProjectile_ReturnValue);
}

#endif