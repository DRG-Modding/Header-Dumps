#ifndef UE4SS_SDK_Grenade_Cluster_HPP
#define UE4SS_SDK_Grenade_Cluster_HPP

class AGrenade_Cluster_C : UITM_Grenade_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 GrenadeFragments;
    USoundBase* ClusterBreakSound;
    UParticleSystem* ClusterBreakParticles;
    float CurrentClusterPitch;
    float ClusterEjectionForce;

    void AddGearStateEntries(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<UGrenade_Cluster_C> CallFunc_GetObjectClass_ReturnValue, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry, bool CallFunc_UPGDESC_Damage_HasUpgradedValue, int32 CallFunc_Array_Add_ReturnValue, TSubclassOf<UGrenade_Cluster_C> CallFunc_GetObjectClass_ReturnValue_1, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_1, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_1, int32 CallFunc_Array_Add_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue, FGearStatEntry K2Node_MakeStruct_GearStatEntry, int32 CallFunc_Array_Add_ReturnValue_2, TSubclassOf<UGrenade_Cluster_C> CallFunc_GetObjectClass_ReturnValue_2, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_2, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_2, int32 CallFunc_Array_Add_ReturnValue_3, TSubclassOf<UGrenade_Cluster_C> CallFunc_GetObjectClass_ReturnValue_3, FGearStatEntry CallFunc_UPGDESC_Damage_GearStatEntry_3, bool CallFunc_UPGDESC_Damage_HasUpgradedValue_3, int32 CallFunc_Array_Add_ReturnValue_4);
    void OnExploded();
    void ExecuteUbergraph_Grenade_Cluster(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UGrenade_Cluster_Fragment_C* CallFunc_FinishSpawningActor_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, FRotator CallFunc_TransformRotation_ReturnValue, FVector CallFunc_Conv_RotatorToVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
}

#endif
