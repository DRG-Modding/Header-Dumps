#ifndef UE4SS_SDK_HUD_PlayerName_Label_HPP
#define UE4SS_SDK_HUD_PlayerName_Label_HPP

class UHUD_PlayerName_Label_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATA_PlayerName;
    UInvalidationBox* InvalidationBox_1;

    void UpdateCharacterName(bool Temp_bool_Variable, int32 Temp_int_Variable, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess_1, const FText CallFunc_GetHeroName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_GetSelectedCharacterLevel_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 K2Node_Select_Default, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void Construct();
    void OnPlayerNameChanged(FString NewName);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_PlayerName_Label(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, PlayerNameChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, FString K2Node_CustomEvent_NewName, FText CallFunc_Conv_StringToText_ReturnValue, FString CallFunc_GetPlayerName_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime);
}

#endif
