#ifndef UE4SS_SDK_HUD_Warning_Manager_HPP
#define UE4SS_SDK_HUD_Warning_Manager_HPP

class UHUD_Warning_Manager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* V_WarningHolder;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnNewHUDWarning_Event(class UHUDWarningWidget* newWidget);
    void ExecuteUbergraph_HUD_Warning_Manager(int32 EntryPoint, FExecuteUbergraph_HUD_Warning_ManagerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UHUDWarning_DefaultEntry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UHUDWarningWidget* K2Node_CustomEvent_newWidget, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1);
};

#endif
