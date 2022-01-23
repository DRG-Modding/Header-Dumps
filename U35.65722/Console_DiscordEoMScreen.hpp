#ifndef UE4SS_SDK_Console_DiscordEoMScreen_HPP
#define UE4SS_SDK_Console_DiscordEoMScreen_HPP

class UConsole_DiscordEoMScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* avatar;
    class UCanvasPanel* AvatarPanel;
    class UTextBlock* FlavorTextBlock;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    class UTextBlock* NameTextBlock;
    class UTextBlock* Online;
    class UTextBlock* Total;
    class ABP_PlayerController_SpaceRig_C* Player;
    float TimeSinceLastUpdate;
    int32 CurrentPresence;
    int32 CurrentMember;
    int32 PreviousPresence;
    int32 PreviousMember;
    FText PlayerNameText;
    FText FlavorText;
    FConsole_DiscordEoMScreen_CScreenChanged ScreenChanged;
    void ScreenChanged();
    TArray<FText> FlavorTextOptions;

    void ClearText();
    void OnFail_D5557812434CB42B270037821C78EAB5(class UTexture2DDynamic* Texture);
    void OnSuccess_D5557812434CB42B270037821C78EAB5(class UTexture2DDynamic* Texture);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UpdateUI(const FDiscordServerData& discordServerCount);
    void Do Running Text(FText Text, int32 Index, class UTextBlock* Target);
    void PreConstruct(bool IsDesignTime);
    void On EoM Data Received(bool HasEoM);
    void OpenDescriptions();
    void Player Name Running Effect();
    void Player Flavor Text Running Effect();
    void ExecuteUbergraph_Console_DiscordEoMScreen(int32 EntryPoint, float CallFunc_Conv_IntToFloat_ReturnValue, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FString CallFunc_GetAvatarURL_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, class UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, int32 Temp_int_Variable, FExecuteUbergraph_Console_DiscordEoMScreenK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const FDiscordServerData K2Node_CustomEvent_discordServerCount, float CallFunc_Add_FloatFloat_ReturnValue, class UTexture2DDynamic* Temp_object_Variable, class UTexture2DDynamic* K2Node_CustomEvent_Texture, float CallFunc_Conv_IntToFloat_ReturnValue_1, FExecuteUbergraph_Console_DiscordEoMScreenK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, FText K2Node_CustomEvent_Text, int32 K2Node_CustomEvent_Index, class UTextBlock* K2Node_CustomEvent_Target, bool K2Node_Event_IsDesignTime, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_FMin_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, FExecuteUbergraph_Console_DiscordEoMScreenK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_Console_DiscordEoMScreenK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FExecuteUbergraph_Console_DiscordEoMScreenK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FExecuteUbergraph_Console_DiscordEoMScreenK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, FString Temp_string_Variable, FText CallFunc_Array_Get_Item, bool K2Node_CustomEvent_HasEoM, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FString Temp_string_Variable_1, FString CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Len_ReturnValue_2, bool Temp_bool_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FString K2Node_Select_Default, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4);
    void ScreenChanged__DelegateSignature();
};

#endif
