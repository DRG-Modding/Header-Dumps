#ifndef UE4SS_SDK_Tutorial_Hint_BoscoAbility_HPP
#define UE4SS_SDK_Tutorial_Hint_BoscoAbility_HPP

class UTutorial_Hint_BoscoAbility_C : UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;
    float AfterUseDelay;

    void ReceiveOnHidden();
    void ReceiveOnInitialized();
    void Mark Ready If(bool Condition);
    void OnBoscoChanged(UBosco* Bosco);
    void OnLaserPointerEvent(const FLaserPointerTarget& HitInfo);
    void ExecuteUbergraph_Tutorial_Hint_BoscoAbility(int32 EntryPoint, const FLaserPointerTarget K2Node_CustomEvent_hitInfo, BoscoChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Condition, bool CallFunc_HasTutorialBeenShown_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UBosco* K2Node_CustomEvent_Bosco, bool CallFunc_IsValid_ReturnValue, TSubclassOf<UBosco> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, LaserPointerEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsUpgradeEquipped_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_2, float K2Node_Select_Default, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_3, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
}

#endif
