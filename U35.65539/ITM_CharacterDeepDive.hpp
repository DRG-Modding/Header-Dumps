#ifndef UE4SS_SDK_ITM_CharacterDeepDive_HPP
#define UE4SS_SDK_ITM_CharacterDeepDive_HPP

class UITM_CharacterDeepDive_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UUI_ScalableLevelDisplay_C* DATA_Class;
    UUI_ScalableLevelDisplay_C* DATA_Player;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    UUI_Character_Supplies_C* UI_Character_Supplies;
    UUI_ScalableMissionStats_C* UI_ScalableMissionStats;
    int32 PlayerArrayIndex;
    AFSDPlayerState* PlayerState;

    void SetData(int32 InPlayerArrayIndex);
    void ExecuteUbergraph_ITM_CharacterDeepDive(int32 EntryPoint, int32 CallFunc_GetPlayerRank_ReturnValue, int32 K2Node_CustomEvent_InPlayerArrayIndex, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UPlayerState* CallFunc_Array_Get_Item, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, FString CallFunc_GetPlayerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetSelectedCharacter_ReturnValue, int32 CallFunc_GetSelectedCharacterLevel_ReturnValue, FText CallFunc_GetHeroName_ReturnValue);
}

#endif
