#ifndef UE4SS_SDK_BP_RedSugarRocksLogic_HPP
#define UE4SS_SDK_BP_RedSugarRocksLogic_HPP

class UBP_RedSugarRocksLogic_C : public UPerkLogic
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 SugarRushRank;

    FText GetAdditionalText(int32 Rankbool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, FText K2Node_Select_Default);
    void StartLogic(int32 Rank);
    void OnHealedFromCrystal();
    void ExecuteUbergraph_BP_RedSugarRocksLogic(int32 EntryPoint, FExecuteUbergraph_BP_RedSugarRocksLogicK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 K2Node_Event_rank, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_PushActiveStatusEffect_ReturnValue);
};

#endif
