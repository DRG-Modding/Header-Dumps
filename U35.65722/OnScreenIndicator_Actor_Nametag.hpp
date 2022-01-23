#ifndef UE4SS_SDK_OnScreenIndicator_Actor_Nametag_HPP
#define UE4SS_SDK_OnScreenIndicator_Actor_Nametag_HPP

class UOnScreenIndicator_Actor_Nametag_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall;
    class UTextBlock* DATA_Class;
    class UTextBlock* DATA_Distance;
    class UTextBlock* DATA_Name;
    class APlayerCharacter* Player;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnToggleOutline_Event(bool Visible);
    void UpdateName();
    void Construct();
    void OnPlayerNameChanged_Event(FString NewName);
    void Set Player(class APlayerCharacter* Player);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_OnScreenIndicator_Actor_Nametag(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_CustomEvent_Visible, const FText CallFunc_GetHeroName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetPlayerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FString K2Node_CustomEvent_NewName, FExecuteUbergraph_OnScreenIndicator_Actor_NametagK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerCharacter* K2Node_CustomEvent_player, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, FExecuteUbergraph_OnScreenIndicator_Actor_NametagK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_Event_IsDesignTime, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1);
};

#endif
