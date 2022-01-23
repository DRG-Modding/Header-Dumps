#ifndef UE4SS_SDK_ITM_TopBar_CharacterLevel_HPP
#define UE4SS_SDK_ITM_TopBar_CharacterLevel_HPP

class UITM_TopBar_CharacterLevel_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* CharacterLevel;
    class UBorder* LevelBG;
    class UHorizontalBox* LineBox;
    float Width;
    float Right Padding;

    void FromPlayerState(class APlayerState* PlayerState, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, FCharacterProgress CallFunc_GetSelectCharacterProgress_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetCharacterLevel(int32 CharacterLevel, FText CallFunc_Conv_IntToText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter);
    void OnCharacterStatsChanged_Event(class AFSDPlayerState* PlayerState);
    void ExecuteUbergraph_ITM_TopBar_CharacterLevel(int32 EntryPoint, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, FExecuteUbergraph_ITM_TopBar_CharacterLevelK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_TopBar_CharacterLevelK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, FMargin K2Node_MakeStruct_Margin, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FVector2D CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_1, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_2, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_3);
};

#endif
