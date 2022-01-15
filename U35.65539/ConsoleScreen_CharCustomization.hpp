#ifndef UE4SS_SDK_ConsoleScreen_CharCustomization_HPP
#define UE4SS_SDK_ConsoleScreen_CharCustomization_HPP

class UConsoleScreen_CharCustomization_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    UConsoleScreen_Notification_C* ConsoleScreen_Notification;

    void Construct();
    void OnItemUINotificationChange();
    void ExecuteUbergraph_ConsoleScreen_CharCustomization(int32 EntryPoint, bool Temp_bool_Variable, ItemUINotificationDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, ESlateVisibility K2Node_Select_Default);
}

#endif
