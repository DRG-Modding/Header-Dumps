#ifndef UE4SS_SDK_Tutorial_Hint_LowO2_HPP
#define UE4SS_SDK_Tutorial_Hint_LowO2_HPP

class UTutorial_Hint_LowO2_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float AccumilatedDamage;
    float TotalDamageBeforeShowingHint;
    class AEscortMule* Drilldozer;
    class UFriendlyHealthComponent* DrilldozerHealth;

    void ReceiveOnInitialized();
    void ExecuteUbergraph_Tutorial_Hint_LowO2(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_IsMutatorActive_ReturnValue);
};

#endif
