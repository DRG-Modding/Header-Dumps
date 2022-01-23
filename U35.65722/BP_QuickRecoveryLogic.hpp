#ifndef UE4SS_SDK_BP_QuickRecoveryLogic_HPP
#define UE4SS_SDK_BP_QuickRecoveryLogic_HPP

class UBP_QuickRecoveryLogic_C : public UPerkLogic
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 DisperseEnemiesRank;
    float DispersionRadius;
    bool FoundAliveEnemies;

    FText GetAdditionalText(int32 Rank);
    void StartLogic(int32 Rank);
    void RevivedOther();
    void PlayFleeEffect();
    void ExecuteUbergraph_BP_QuickRecoveryLogic(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Event_rank, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const TArray<TEnumAsByte<EObjectTypeQuery>>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, const TArray<class AActor*>& K2Node_MakeArray_Array_1, FExecuteUbergraph_BP_QuickRecoveryLogicK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFSDPawn* K2Node_DynamicCast_AsFSDPawn, bool K2Node_DynamicCast_bSuccess, class UEnemyHealthComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsAlive_ReturnValue);
};

#endif
