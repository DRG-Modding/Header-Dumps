#ifndef UE4SS_SDK_HUD_TabPlayerListEntryV2_HPP
#define UE4SS_SDK_HUD_TabPlayerListEntryV2_HPP

class UHUD_TabPlayerListEntryV2_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_SupplyBar_C* AmmoBar;
    UBorder* Border_CharacterLevel;
    UBorder* Border_PlayerRank;
    UTextBlock* DATA_ClassName;
    UTextBlock* DATA_PlayerName;
    UVerticalBox* InfoBox;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    UITM_HealthBar_C* ITM_HealthBar;
    UTextBlock* PingText;
    UNamedSlot* PutStuffHere_Rightside;
    UUI_NameTags_C* UI_NameTags;
    UUI_PlayerSpeaking_C* UI_PlayerSpeaking;
    UVerticalBox* VerticalBox_AmmoHealth;
    AFSDPlayerState* PlayerState;
    FSlateFontInfo NameFont;

    void UpdatePlayerClass(TSubclassOf<UPlayerCharacter> CallFunc_GetSelectedCharacter_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, FText CallFunc_GetHeroName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void UpdateVolatileStats(UPlayerHealthComponent* HealthComponent, UPlayerCharacter* PlayerCharacter, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_IsDead_ReturnValue, float CallFunc_GetHealthPct_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetSupplyAmmoStatus_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, ESlateVisibility K2Node_Select_Default, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_PingPong_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue, int32 CallFunc_GetUiPing_ReturnValue, FLinearColor K2Node_Select_Default_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void Set Data(UFSDPlayerState* State, UPlayerCharacter* PlayerCharacter, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, FText Temp_text_Variable, FText Temp_text_Variable_1, PlayerSpawnedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, PlayerSpawnedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FString CallFunc_GetPlayerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetGameOwnerStatus_ReturnValue, FString CallFunc_GetPlayerName_ReturnValue_1, FText K2Node_Select_Default, FText CallFunc_Conv_StringToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, EFSDTargetPlatform Temp_byte_Variable, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool K2Node_Select_Default_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ShowInfoBar(bool shouldShow);
    void CharacterChanged(UPlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_HUD_TabPlayerListEntryV2(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool K2Node_CustomEvent_ShouldShow, ESlateVisibility K2Node_Select_Default, UPlayerCharacter* K2Node_CustomEvent_PlayerCharacter);
}

#endif
