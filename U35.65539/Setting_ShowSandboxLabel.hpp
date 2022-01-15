#ifndef UE4SS_SDK_Setting_ShowSandboxLabel_HPP
#define UE4SS_SDK_Setting_ShowSandboxLabel_HPP

class USetting_ShowSandboxLabel_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* Basic_CheckBox;
    float TextWidth;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Setting_ShowSandboxLabel(int32 EntryPoint, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_ComponentBoundEvent_IsChecked, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_GetShowSandboxLabel_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
