#ifndef UE4SS_SDK_OnScreenIndicator_Actor_Nametag_HPP
#define UE4SS_SDK_OnScreenIndicator_Actor_Nametag_HPP

class UOnScreenIndicator_Actor_Nametag_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall;
    UTextBlock* DATA_Class;
    UTextBlock* DATA_Distance;
    UTextBlock* DATA_Name;
    APlayerCharacter* Player;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnToggleOutline_Event(bool Visible);
    void UpdateName();
    void Construct();
    void OnPlayerNameChanged_Event(FString NewName);
    void Set Player(UPlayerCharacter* Player);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_Actor_Nametag(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_CustomEvent_Visible, const FText CallFunc_GetHeroName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetPlayerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FString K2Node_CustomEvent_NewName, PlayerNameChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerCharacter* K2Node_CustomEvent_player, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, ToggleOutlineSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_Event_IsDesignTime, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1);
}

#endif
