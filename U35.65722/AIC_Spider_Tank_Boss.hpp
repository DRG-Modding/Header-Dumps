#ifndef UE4SS_SDK_AIC_Spider_Tank_Boss_HPP
#define UE4SS_SDK_AIC_Spider_Tank_Boss_HPP

class AAIC_Spider_Tank_Boss_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void OnArmorDestroyed(float EnrageDuration);
    void ReceivePossess(class APawn* PossessedPawn);
    void ReceiveBeginPlay();
    void StartSpeedModifier();
    void ExecuteUbergraph_AIC_Spider_Tank_Boss(int32 EntryPoint, FExecuteUbergraph_AIC_Spider_Tank_BossK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_EnrageDuration, class APawn* K2Node_Event_PossessedPawn, class AENE_Spider_Tank_Boss_C* K2Node_DynamicCast_AsENE_Spider_Tank_Boss, bool K2Node_DynamicCast_bSuccess, FName CallFunc_MakeLiteralName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, FName CallFunc_MakeLiteralName_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ASpiderEnemy* K2Node_DynamicCast_AsSpider_Enemy, bool K2Node_DynamicCast_bSuccess_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, float CallFunc_GetBossDifficultyScaler_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class ASpiderEnemy* K2Node_DynamicCast_AsSpider_Enemy_1, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_AddModifier_ReturnValue, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue_1, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue_1, float CallFunc_GetBossDifficultyScaler_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, int32 CallFunc_AddModifier_ReturnValue_1);
};

#endif
