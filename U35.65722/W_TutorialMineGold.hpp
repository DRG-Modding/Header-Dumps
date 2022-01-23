#ifndef UE4SS_SDK_W_TutorialMineGold_HPP
#define UE4SS_SDK_W_TutorialMineGold_HPP

class UW_TutorialMineGold_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    float Gold Mined;
    float GoldToMine;

    void OnShown();
    void UpdateTaskText();
    void ResourceIncreased(class UCappedResource* Resource, float Amount);
    void UpdateResource();
    void ExecuteUbergraph_W_TutorialMineGold(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FExecuteUbergraph_W_TutorialMineGoldK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_HasCharacter_ReturnValue, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, class UCappedResource* K2Node_CustomEvent_resource, float K2Node_CustomEvent_Amount, bool Temp_bool_IsClosed_Variable_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_1, class UCappedResource* CallFunc_GetResource_ReturnValue, class UCappedResource* CallFunc_GetResource_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_FloatFloat_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
