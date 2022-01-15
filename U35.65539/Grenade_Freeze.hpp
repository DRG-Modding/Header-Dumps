#ifndef UE4SS_SDK_Grenade_Freeze_HPP
#define UE4SS_SDK_Grenade_Freeze_HPP

class AGrenade_Freeze_C : UITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    USphereComponent* Sphere;
    UDamageComponent* Damage;
    UParticleSystem* TriggerEffect;
    USoundCue* TriggerSound;

    void AddGearStateEntries(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<UGrenade_Freeze_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue);
    void OnExploded();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Grenade_Freeze(int32 EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsNonFriendlyPawn_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}

#endif
