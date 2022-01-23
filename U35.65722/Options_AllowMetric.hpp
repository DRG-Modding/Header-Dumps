#ifndef UE4SS_SDK_Options_AllowMetric_HPP
#define UE4SS_SDK_Options_AllowMetric_HPP

class UOptions_AllowMetric_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    class UWidget* GetToolTipWidget_0(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBasic_ToolTip_C* CallFunc_Create_ReturnValue);
    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_8_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Options_AllowMetric(int32 EntryPoint, bool K2Node_ComponentBoundEvent_IsChecked, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1);
};

#endif
