#ifndef UE4SS_SDK_Console_DiscordEoMScreen_HPP
#define UE4SS_SDK_Console_DiscordEoMScreen_HPP

class UConsole_DiscordEoMScreen_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* avatar;
    UCanvasPanel* AvatarPanel;
    UTextBlock* FlavorTextBlock;
    UImage* Image_1;
    UImage* Image_2;
    UImage* Image_3;
    UTextBlock* NameTextBlock;
    UTextBlock* Online;
    UTextBlock* Total;
    ABP_PlayerController_SpaceRig_C* Player;
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
    void OnFail_D5557812434CB42B270037821C78EAB5(UTexture2DDynamic* Texture);
    void OnSuccess_D5557812434CB42B270037821C78EAB5(UTexture2DDynamic* Texture);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UpdateUI(const FDiscordServerData& discordServerCount);
    void Do Running Text(FText Text, int32 Index, UTextBlock* Target);
    void PreConstruct(bool IsDesignTime);
    void On EoM Data Received(bool HasEoM);
    void OpenDescriptions();
    void Player Name Running Effect();
    void Player Flavor Text Running Effect();
    void ExecuteUbergraph_Console_DiscordEoMScreen(int32 EntryPoint, float CallFunc_Conv_IntToFloat_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FString CallFunc_GetAvatarURL_ReturnValue, UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_1, UPresenceSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, int32 Temp_int_Variable, OnDiscordServerCountLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const FDiscordServerData K2Node_CustomEvent_discordServerCount, float CallFunc_Add_FloatFloat_ReturnValue, UTexture2DDynamic* Temp_object_Variable, UTexture2DDynamic* K2Node_CustomEvent_Texture, float CallFunc_Conv_IntToFloat_ReturnValue_1, DownloadImageDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, FText K2Node_CustomEvent_Text, int32 K2Node_CustomEvent_Index, UTextBlock* K2Node_CustomEvent_Target, bool K2Node_Event_IsDesignTime, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Len_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_FMin_ReturnValue, FString CallFunc_GetSubstring_ReturnValue, UTexture2DDynamic* K2Node_CustomEvent_Texture_1, DownloadImageDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UBP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, DiscordEoMDataDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, FString Temp_string_Variable, FText CallFunc_Array_Get_Item, bool K2Node_CustomEvent_HasEoM, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FString Temp_string_Variable_1, FString CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Len_ReturnValue_2, bool Temp_bool_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FString K2Node_Select_Default, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4);
    void ScreenChanged__DelegateSignature();
}

#endif
