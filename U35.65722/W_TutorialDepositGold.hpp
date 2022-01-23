#ifndef UE4SS_SDK_W_TutorialDepositGold_HPP
#define UE4SS_SDK_W_TutorialDepositGold_HPP

class UW_TutorialDepositGold_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;
    float StartAmount;

    void OnShown();
    void UpdateText();
    void FinishedDepositing(class UResourceBank* ResourceBank);
    void ExecuteUbergraph_W_TutorialDepositGold(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FExecuteUbergraph_W_TutorialDepositGoldK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasCharacter_ReturnValue, class UResourceBank* K2Node_CustomEvent_ResourceBank, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class UCappedResource* CallFunc_GetResource_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue_1, class UCappedResource* CallFunc_GetResource_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
};

#endif
