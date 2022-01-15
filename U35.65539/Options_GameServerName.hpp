#ifndef UE4SS_SDK_Options_GameServerName_HPP
#define UE4SS_SDK_Options_GameServerName_HPP

class UOptions_GameServerName_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_TextInputField_C* Basic_TextInputField;

    void UINeedsUpdate();
    void ShowOptions();
    void Construct();
    void BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature(FText Text, uint8 CommitMethod);
    void UpdateName(FString NewValue);
    void ExecuteUbergraph_Options_GameServerName(int32 EntryPoint, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetPlayerControllerID_ReturnValue, StringConfigChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, FString CallFunc_GameServerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FText K2Node_ComponentBoundEvent_Text, uint8 K2Node_ComponentBoundEvent_CommitMethod, FString CallFunc_Conv_TextToString_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, FString K2Node_CustomEvent_NewValue, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
}

#endif
