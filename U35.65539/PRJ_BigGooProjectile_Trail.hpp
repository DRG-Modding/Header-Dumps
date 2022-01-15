#ifndef UE4SS_SDK_PRJ_BigGooProjectile_Trail_HPP
#define UE4SS_SDK_PRJ_BigGooProjectile_Trail_HPP

class APRJ_BigGooProjectile_Trail_C : UPRJ_BaseBigGooProjectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float CurrentClusterPitch;
    float ClusterEjectionForce;
    TSubclassOf<AProjectileBase> FragmentSize;
    int32 SpawnedFragments;
    FTimerHandle SpawnTimer;

    void OnRep_SpawnedFragments(bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
    void OnInitialized();
    void SpawnFragments();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void OnUpgradeElementAdded(UProjectileUpgradeElement* element);
    void ExecuteUbergraph_PRJ_BigGooProjectile_Trail(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const FTransform CallFunc_GetTransform_ReturnValue, bool K2Node_Event_PredictedImpact, const FHitResult K2Node_Event_HitResult, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_Add_VectorVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, FRotator CallFunc_ComposeRotators_ReturnValue, AProjectileBase* CallFunc_SpawnProjectileFromSelf_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UProjectileUpgradeElement* K2Node_Event_element, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
}

#endif
