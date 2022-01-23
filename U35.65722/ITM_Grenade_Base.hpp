#ifndef UE4SS_SDK_ITM_Grenade_Base_HPP
#define UE4SS_SDK_ITM_Grenade_Base_HPP

class AITM_Grenade_Base_C : public AGrenade
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UParticleSystemComponent* P_GrenadeTrail;
    class UUpgradableGearComponent* UpgradableGear;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* Box;
    class APlayerCharacter* Character;
    class UDialogDataAsset* Grenade warning;
    float GrenadeLifetimeAfterExplosion;
    float DebugRadius;
    class UParticleSystem* DelayedDestructionParticles;
    float InViewTime;
    float InitialAngularVelocityScale;
    class USoundMix* ExplosionMixModifier;
    float ExplosionDuckingTime;
    float ExplosionDuckMinDistance;
    float ExplosionDuckMaxDistance;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<class AITM_Grenade_Base_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Grenades_GearStatEntry, int32 CallFunc_Array_Add_ReturnValue);
    void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveBeginPlay();
    void OnExploded();
    void ExecuteUbergraph_ITM_Grenade_Base(int32 EntryPoint, class UDialogDataAsset* Temp_object_Variable, class UDialogDataAsset* Temp_object_Variable_1, bool CallFunc_HasAuthority_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, class UDialogDataAsset* K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHUDVisible_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, FVector CallFunc_RandomUnitVector_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FVector CallFunc_GetActorRightVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2);
};

#endif
