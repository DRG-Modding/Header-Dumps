#ifndef UE4SS_SDK_BP_BurrowComponent_HPP
#define UE4SS_SDK_BP_BurrowComponent_HPP

class UBP_BurrowComponent_C : public UBurrowComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimMontage* BurrowAnimation;
    class UAnimMontage* UnBurrowAnimation;
    FBP_BurrowComponent_COnBurrow OnBurrow;
    void OnBurrow();
    FBP_BurrowComponent_COnUnBurrow OnUnBurrow;
    void OnUnBurrow();
    FBP_BurrowComponent_COnBurrowComplete OnBurrowComplete;
    void OnBurrowComplete(bool IsEmerging);
    FTimerHandle TimerHandle;

    void GetPawn(class AEnemyDeepPathfinderCharacter*& AsEnemy Deep Pathfinder Character, class AActor* CallFunc_GetOwner_ReturnValue, class AEnemyDeepPathfinderCharacter* K2Node_DynamicCast_AsEnemy_Deep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess);
    void PlayBurrow(class UAnimMontage* MontageToPlay);
    void PlayUnburrow(class UAnimMontage* MontageToPlay);
    void Unburrow(class UAnimMontage* customMontage);
    void Burrow(class UAnimMontage* customMontage);
    void BurrowComplete();
    void UnburrowComplete();
    void ReceiveBeginPlay();
    void OnFrozenEvent_Event_0(bool boolValue);
    void OnDeath_Event_0(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_BurrowComponent(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, FExecuteUbergraph_BP_BurrowComponentK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_BP_BurrowComponentK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_BP_BurrowComponentK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_BP_BurrowComponentK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class AActor* CallFunc_GetOwner_ReturnValue, class UAnimMontage* K2Node_CustomEvent_MontageToPlay_1, class UAnimMontage* K2Node_CustomEvent_MontageToPlay, class AEnemyDeepPathfinderCharacter* CallFunc_GetPawn_AsEnemy_Deep_Pathfinder_Character, class AEnemyDeepPathfinderCharacter* CallFunc_GetPawn_AsEnemy_Deep_Pathfinder_Character_1, class UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, class AEnemyDeepPathfinderCharacter* CallFunc_GetPawn_AsEnemy_Deep_Pathfinder_Character_2, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, class UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue_1, class AEnemyDeepPathfinderCharacter* CallFunc_GetPawn_AsEnemy_Deep_Pathfinder_Character_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, class UAnimMontage* K2Node_Event_customMontage_1, class UAnimMontage* K2Node_Event_customMontage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimMontage* K2Node_Select_Default, class UAnimMontage* K2Node_Select_Default_1, class AEnemyDeepPathfinderCharacter* CallFunc_GetPawn_AsEnemy_Deep_Pathfinder_Character_4, bool K2Node_CustomEvent_BoolValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent);
    void OnBurrowComplete__DelegateSignature(bool IsEmerging);
    void OnUnBurrow__DelegateSignature();
    void OnBurrow__DelegateSignature();
};

#endif
