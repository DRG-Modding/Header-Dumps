#ifndef UE4SS_SDK_Tutorial_Hint_BoscoAbility_HPP
#define UE4SS_SDK_Tutorial_Hint_BoscoAbility_HPP

class UTutorial_Hint_BoscoAbility_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;
    float AfterUseDelay;

    void ReceiveOnHidden();
    void ReceiveOnInitialized();
    void Mark Ready If(bool Condition);
    void OnBoscoChanged(class ABosco* Bosco);
    void OnLaserPointerEvent(const FLaserPointerTarget& HitInfo);
    void ExecuteUbergraph_Tutorial_Hint_BoscoAbility(int32 EntryPoint, const FLaserPointerTarget K2Node_CustomEvent_hitInfo, FExecuteUbergraph_Tutorial_Hint_BoscoAbilityK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Condition, bool CallFunc_HasTutorialBeenShown_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class ABosco* K2Node_CustomEvent_Bosco, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class ABosco> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FExecuteUbergraph_Tutorial_Hint_BoscoAbilityK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsUpgradeEquipped_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_2, float K2Node_Select_Default, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
};

#endif
