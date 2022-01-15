#ifndef UE4SS_SDK_HUD_Warning_Manager_HPP
#define UE4SS_SDK_HUD_Warning_Manager_HPP

class UHUD_Warning_Manager_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UVerticalBox* V_WarningHolder;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnNewHUDWarning_Event(UHUDWarningWidget* newWidget);
    void ExecuteUbergraph_HUD_Warning_Manager(int32 EntryPoint, NewHUDWarningDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, UHUDWarning_DefaultEntry_C* CallFunc_Create_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UHUDWarningWidget* K2Node_CustomEvent_newWidget, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
}

#endif
