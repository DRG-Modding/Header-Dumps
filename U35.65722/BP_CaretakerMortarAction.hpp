#ifndef UE4SS_SDK_BP_CaretakerMortarAction_HPP
#define UE4SS_SDK_BP_CaretakerMortarAction_HPP

class UBP_CaretakerMortarAction_C : public UBP_CaretakerActionBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 BurstCount;
    float TimeBetweenShots;
    int32 BaseBurstSize;
    FTransform Origin;
    FName LastSelectedSocket;
    FVector LastSelectedTargetLocation;
    class APlayerCharacter* LastSelectedTarget;
    int32 ExtraBurstSizePerAditionalPlayer;

    void GetEstimatedStartDuration(float& StartDuration, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_GetBossDifficultyScaler_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue);
    void LaunchProjectile(FVector TargetLocation, FVector SpawnLocation, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, class ABP_PhaseBomb_C* CallFunc_FinishSpawningActor_ReturnValue);
    void OnStarted();
    void FireMortar();
    void OnTriggered();
    void OnStopped();
    void FireBurst();
    void All_ShowPhaseBombLaunch(FName AttachPointName);
    void ExecuteUbergraph_BP_CaretakerMortarAction(int32 EntryPoint, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetBossDifficultyScaler_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, TArray<class APlayerCharacter*>& CallFunc_GetPlayersInRange_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* CallFunc_Array_GetRandom_Item, bool CallFunc_Greater_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_Add_VectorVector_ReturnValue, FCSGRaycastHitInfo CallFunc_Raycast_hitInfo, bool CallFunc_Raycast_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FName CallFunc_GetClosestPhaseBombSocket_Result, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable, bool Temp_bool_IsClosed_Variable, class ACaretaker* CallFunc_GetCaretaker_ReturnValue, class ACaretaker* CallFunc_GetCaretaker_ReturnValue_1, bool CallFunc_HasAutority_ReturnValue, class APlayerCharacter* CallFunc_GetLocalPlayerCharacter_ReturnValue, FName K2Node_CustomEvent_AttachPointName, class AActor* CallFunc_GetOwner_ReturnValue_1, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1, class ACaretaker* K2Node_DynamicCast_AsCaretaker, bool K2Node_DynamicCast_bSuccess, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue_1, float CallFunc_GetBossDifficultyScaler_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_2, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue_2, float CallFunc_GetBossDifficultyScaler_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class ACaretaker* K2Node_DynamicCast_AsCaretaker_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetNumAdditionalPlayers_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_FCeil_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class UTracerManager* CallFunc_GetWorldSubsystem_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue);
};

#endif
