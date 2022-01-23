#ifndef UE4SS_SDK_ITM_CharacterDeepDive_HPP
#define UE4SS_SDK_ITM_CharacterDeepDive_HPP

class UITM_CharacterDeepDive_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_ScalableLevelDisplay_C* DATA_Class;
    class UUI_ScalableLevelDisplay_C* DATA_Player;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UUI_Character_Supplies_C* UI_Character_Supplies;
    class UUI_ScalableMissionStats_C* UI_ScalableMissionStats;
    int32 PlayerArrayIndex;
    class AFSDPlayerState* PlayerState;

    void SetData(int32 InPlayerArrayIndex);
    void ExecuteUbergraph_ITM_CharacterDeepDive(int32 EntryPoint, int32 CallFunc_GetPlayerRank_ReturnValue, int32 K2Node_CustomEvent_InPlayerArrayIndex, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, FString CallFunc_GetPlayerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetSelectedCharacter_ReturnValue, int32 CallFunc_GetSelectedCharacterLevel_ReturnValue, FText CallFunc_GetHeroName_ReturnValue);
};

#endif
