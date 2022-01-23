#ifndef UE4SS_SDK_HUD_TabPlayerListEntryV2_HPP
#define UE4SS_SDK_HUD_TabPlayerListEntryV2_HPP

class UHUD_TabPlayerListEntryV2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_SupplyBar_C* AmmoBar;
    class UBorder* Border_CharacterLevel;
    class UBorder* Border_PlayerRank;
    class UTextBlock* DATA_ClassName;
    class UTextBlock* DATA_PlayerName;
    class UVerticalBox* InfoBox;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UITM_HealthBar_C* ITM_HealthBar;
    class UTextBlock* PingText;
    class UNamedSlot* PutStuffHere_Rightside;
    class UUI_NameTags_C* UI_NameTags;
    class UUI_PlayerSpeaking_C* UI_PlayerSpeaking;
    class UVerticalBox* VerticalBox_AmmoHealth;
    class AFSDPlayerState* PlayerState;
    FSlateFontInfo NameFont;

    void UpdatePlayerClass(TSubclassOf<class APlayerCharacter> CallFunc_GetSelectedCharacter_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, FText CallFunc_GetHeroName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void UpdateVolatileStats(class UPlayerHealthComponent* HealthComponent, class APlayerCharacter* PlayerCharacter, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_IsDead_ReturnValue, float CallFunc_GetHealthPct_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetSupplyAmmoStatus_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, ESlateVisibility K2Node_Select_Default, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_PingPong_ReturnValue, FLinearColor CallFunc_LinearColorLerp_ReturnValue, int32 CallFunc_GetUiPing_ReturnValue, FLinearColor K2Node_Select_Default_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void Set Data(class AFSDPlayerState* State, class APlayerCharacter* PlayerCharacter, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, FText Temp_text_Variable, FText Temp_text_Variable_1, FSet DataK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FSet DataK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FString CallFunc_GetPlayerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetGameOwnerStatus_ReturnValue, FString CallFunc_GetPlayerName_ReturnValue_1, FText K2Node_Select_Default, FText CallFunc_Conv_StringToText_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, EFSDTargetPlatform Temp_byte_Variable, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, bool K2Node_Select_Default_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ShowInfoBar(bool shouldShow);
    void CharacterChanged(class APlayerCharacter* PlayerCharacter);
    void ExecuteUbergraph_HUD_TabPlayerListEntryV2(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool K2Node_CustomEvent_ShouldShow, ESlateVisibility K2Node_Select_Default, class APlayerCharacter* K2Node_CustomEvent_PlayerCharacter);
};

#endif
