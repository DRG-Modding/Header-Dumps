#ifndef UE4SS_SDK_Setting_Modding_CheckVersion_HPP
#define UE4SS_SDK_Setting_Modding_CheckVersion_HPP

class USetting_Modding_CheckVersion_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    float TextWidth;

    class UWidget* GetBasicToolTipWidget(class UBasic_ToolTip_C* ToolTip, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UBasic_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Setting_Modding_CheckVersion(int32 EntryPoint, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, bool K2Node_ComponentBoundEvent_IsChecked, bool CallFunc_GetCheckGameVersion_ReturnValue, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_1);
};

#endif
