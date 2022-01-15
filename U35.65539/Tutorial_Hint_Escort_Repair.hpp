#ifndef UE4SS_SDK_Tutorial_Hint_Escort_Repair_HPP
#define UE4SS_SDK_Tutorial_Hint_Escort_Repair_HPP

class UTutorial_Hint_Escort_Repair_C : UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float AccumilatedDamage;
    float TotalDamageBeforeShowingHint;
    AEscortMule* Drilldozer;
    UFriendlyHealthComponent* DrilldozerHealth;

    void ReceiveOnInitialized();
    void OnPermanentDamage(int32 currSegment, int32 prevSegment);
    void DorettaDamaged(float Amount);
    void ExecuteUbergraph_Tutorial_Hint_Escort_Repair(int32 EntryPoint, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<UObjective> CallFunc_GetObjectClass_ReturnValue, TSubclassOf<UEscortObjective> K2Node_ClassDynamicCast_AsEscort_Objective, bool K2Node_ClassDynamicCast_bSuccess, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UObjective* CallFunc_GetPrimaryObjective_ReturnValue_1, UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 K2Node_CustomEvent_currSegment, int32 K2Node_CustomEvent_prevSegment, bool K2Node_SwitchInteger_CmpSuccess, HealthSegmentChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Amount, float CallFunc_Add_FloatFloat_ReturnValue, DamageSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, DamageSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2);
}

#endif
