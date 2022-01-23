#ifndef UE4SS_SDK_Options_GameServerName_HPP
#define UE4SS_SDK_Options_GameServerName_HPP

class UOptions_GameServerName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_TextInputField_C* Basic_TextInputField;

    void UINeedsUpdate();
    void ShowOptions();
    void Construct();
    void BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature(FText Text, uint8 CommitMethod);
    void UpdateName(FString NewValue);
    void ExecuteUbergraph_Options_GameServerName(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetPlayerControllerID_ReturnValue, FExecuteUbergraph_Options_GameServerNameK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, FString CallFunc_GameServerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FText K2Node_ComponentBoundEvent_Text, uint8 K2Node_ComponentBoundEvent_CommitMethod, FString CallFunc_Conv_TextToString_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_2, FString K2Node_CustomEvent_NewValue, FExecuteUbergraph_Options_GameServerNameK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
};

#endif
