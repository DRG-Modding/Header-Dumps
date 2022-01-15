#ifndef UE4SS_SDK_ITM_TopBar_CharacterLevel_HPP
#define UE4SS_SDK_ITM_TopBar_CharacterLevel_HPP

class UITM_TopBar_CharacterLevel_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* CharacterLevel;
    UBorder* LevelBG;
    UHorizontalBox* LineBox;
    float Width;
    float Right Padding;

    void FromPlayerState(UPlayerState* PlayerState, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, FCharacterProgress CallFunc_GetSelectCharacterProgress_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetCharacterLevel(int32 CharacterLevel, FText CallFunc_Conv_IntToText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnPlayerCharacterSpawned(UPlayerCharacter* PlayerCharacter);
    void OnCharacterStatsChanged_Event(UFSDPlayerState* PlayerState);
    void ExecuteUbergraph_ITM_TopBar_CharacterLevel(int32 EntryPoint, UFSDPlayerState* K2Node_CustomEvent_PlayerState, PlayerSpawnedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, CharacterProgressChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, FMargin K2Node_MakeStruct_Margin, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FVector2D CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_1, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_2, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_3);
}

#endif
