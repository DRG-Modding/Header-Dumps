#ifndef UE4SS_SDK_BP_BurrowComponent_HPP
#define UE4SS_SDK_BP_BurrowComponent_HPP

class UBP_BurrowComponent_C : UBurrowComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAnimMontage* BurrowAnimation;
    UAnimMontage* UnBurrowAnimation;
    FBP_BurrowComponent_COnBurrow OnBurrow;
    void OnBurrow();
    FBP_BurrowComponent_COnUnBurrow OnUnBurrow;
    void OnUnBurrow();
    FBP_BurrowComponent_COnBurrowComplete OnBurrowComplete;
    void OnBurrowComplete(bool IsEmerging);
    FTimerHandle TimerHandle;

    void GetPawn(UEnemyDeepPathfinderCharacter*& AsEnemy Deep Pathfinder Character, AActor* CallFunc_GetOwner_ReturnValue, UEnemyDeepPathfinderCharacter* K2Node_DynamicCast_AsEnemy_Deep_Pathfinder_Character, bool K2Node_DynamicCast_bSuccess);
    void PlayBurrow(UAnimMontage* MontageToPlay);
    void PlayUnburrow(UAnimMontage* MontageToPlay);
    void Unburrow(UAnimMontage* customMontage);
    void Burrow(UAnimMontage* customMontage);
    void BurrowComplete();
    void UnburrowComplete();
    void ReceiveBeginPlay();
    void OnFrozenEvent_Event_0(bool boolValue);
    void OnDeath_Event_0(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_BurrowComponent(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, BoolDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, AActor* CallFunc_GetOwner_ReturnValue, UAnimMontage* K2Node_CustomEvent_MontageToPlay_1, UAnimMontage* K2Node_CustomEvent_MontageToPlay, UEnemyDeepPathfinderCharacter* CallFunc_GetPawn_AsEnemy_Deep_Pathfinder_Character, UEnemyDeepPathfinderCharacter* CallFunc_GetPawn_AsEnemy_Deep_Pathfinder_Character_1, UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_Montage_Play_ReturnValue, UEnemyDeepPathfinderCharacter* CallFunc_GetPawn_AsEnemy_Deep_Pathfinder_Character_2, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue_1, UEnemyDeepPathfinderCharacter* CallFunc_GetPawn_AsEnemy_Deep_Pathfinder_Character_3, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_Montage_Play_ReturnValue_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, UAnimMontage* K2Node_Event_customMontage_1, UAnimMontage* K2Node_Event_customMontage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UAnimMontage* K2Node_Select_Default, UAnimMontage* K2Node_Select_Default_1, UEnemyDeepPathfinderCharacter* CallFunc_GetPawn_AsEnemy_Deep_Pathfinder_Character_4, bool K2Node_CustomEvent_BoolValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, UHealthComponentBase* K2Node_CustomEvent_HealthComponent);
    void OnBurrowComplete__DelegateSignature(bool IsEmerging);
    void OnUnBurrow__DelegateSignature();
    void OnBurrow__DelegateSignature();
}

#endif
