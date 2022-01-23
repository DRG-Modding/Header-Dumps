#ifndef UE4SS_SDK_ConsoleScreen_PickAxe_HPP
#define UE4SS_SDK_ConsoleScreen_PickAxe_HPP

class UConsoleScreen_PickAxe_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;

    void Construct();
    void OnItemUINotificationChange();
    void ExecuteUbergraph_ConsoleScreen_PickAxe(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_ConsoleScreen_PickAxeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, ESlateVisibility K2Node_Select_Default);
};

#endif
