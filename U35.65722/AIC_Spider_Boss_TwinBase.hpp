#ifndef UE4SS_SDK_AIC_Spider_Boss_TwinBase_HPP
#define UE4SS_SDK_AIC_Spider_Boss_TwinBase_HPP

class AAIC_Spider_Boss_TwinBase_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartSpeedModifier();
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Spider_Boss_TwinBase(int32 EntryPoint, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UDifficultyManager* CallFunc_GetDifficultyManager_ReturnValue, const FName K2Node_Event_keyName, float CallFunc_GetBossDifficultyScaler_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AENE_Spider_Boss_TwinBase_C* K2Node_DynamicCast_AsENE_Spider_Boss_Twin_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ASpiderEnemy* K2Node_DynamicCast_AsSpider_Enemy, bool K2Node_DynamicCast_bSuccess_1, FName CallFunc_MakeLiteralName_ReturnValue, int32 CallFunc_AddModifier_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue_2, bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

#endif
