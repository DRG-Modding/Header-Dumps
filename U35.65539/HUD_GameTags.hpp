#ifndef UE4SS_SDK_HUD_GameTags_HPP
#define UE4SS_SDK_HUD_GameTags_HPP

class UHUD_GameTags_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHUD_GameTags_Entry_C* GameTag_Experimental;
    UHUD_GameTags_Entry_C* GameTag_Sandbox;

    void UpdateSandboxTag(UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetShowSandboxLabel_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetIsModded_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void UpdateExperimentalTag(FString CallFunc_GetSteamBranchString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, FString CallFunc_GetProjectVersion_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue_1, ESteamBranch CallFunc_GetSteamBranch_ReturnValue, FString CallFunc_ToUpper_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, FText CallFunc_Conv_StringToText_ReturnValue);
    void Construct();
    void ExecuteUbergraph_HUD_GameTags(int32 EntryPoint, ModdingSettingsChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue);
}

#endif
