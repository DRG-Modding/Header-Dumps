#ifndef UE4SS_SDK_ITM_Grenade_Base_HPP
#define UE4SS_SDK_ITM_Grenade_Base_HPP

class AITM_Grenade_Base_C : AGrenade
{
    FPointerToUberGraphFrame UberGraphFrame;
    UParticleSystemComponent* P_GrenadeTrail;
    UUpgradableGearComponent* UpgradableGear;
    UWidgetComponent* Widget;
    UStaticMeshComponent* StaticMesh;
    UBoxComponent* Box;
    APlayerCharacter* Character;
    UDialogDataAsset* Grenade warning;
    float GrenadeLifetimeAfterExplosion;
    float DebugRadius;
    UParticleSystem* DelayedDestructionParticles;
    float InViewTime;
    float InitialAngularVelocityScale;
    USoundMix* ExplosionMixModifier;
    float ExplosionDuckingTime;
    float ExplosionDuckMinDistance;
    float ExplosionDuckMaxDistance;

    void GetGearStatEntry(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<UITM_Grenade_Base_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Grenades_GearStatEntry, int32 CallFunc_Array_Add_ReturnValue);
    void AddGearStateEntries(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveBeginPlay();
    void OnExploded();
    void ExecuteUbergraph_ITM_Grenade_Base(int32 EntryPoint, UDialogDataAsset* Temp_object_Variable, UDialogDataAsset* Temp_object_Variable_1, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, AActor* CallFunc_GetOwner_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, UDialogDataAsset* K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHUDVisible_ReturnValue, APawn* CallFunc_GetInstigator_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_GetActorRightVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2);
}

#endif
