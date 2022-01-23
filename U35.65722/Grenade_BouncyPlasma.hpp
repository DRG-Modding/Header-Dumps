#ifndef UE4SS_SDK_Grenade_BouncyPlasma_HPP
#define UE4SS_SDK_Grenade_BouncyPlasma_HPP

class AGrenade_BouncyPlasma_C : public AITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UDamageComponent* Damage;
    int32 ExplosionCount;
    int32 MaxExplosions;
    float ConcecutiveExplosionsDelay;
    bool Exploded;

    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, FText CallFunc_Conv_IntToText_ReturnValue, FGearStatEntry K2Node_MakeStruct_GearStatEntry, int32 CallFunc_Array_Add_ReturnValue, TSubclassOf<class AGrenade_BouncyPlasma_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue_1, TSubclassOf<class AGrenade_BouncyPlasma_C> CallFunc_GetObjectClass_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_1, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
    void OnRep_ExplosionCount(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void TriggerExplosion();
    void HideGrenade();
    void ReceiveBeginPlay();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Grenade_BouncyPlasma(int32 EntryPoint, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsCloseToLocalPlayer_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, FVector K2Node_ComponentBoundEvent_NormalImpulse, const FHitResult K2Node_ComponentBoundEvent_Hit, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_IsCloseToLocalPlayer_ReturnValue_1, bool CallFunc_IsInRangeOfLocalPlayer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsNonFriendlyPawn_ReturnValue);
};

#endif
