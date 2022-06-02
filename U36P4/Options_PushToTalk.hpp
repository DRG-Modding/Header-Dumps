#ifndef UE4SS_SDK_Options_PushToTalk_HPP
#define UE4SS_SDK_Options_PushToTalk_HPP

class UOptions_PushToTalk_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    class UUI_AdvancedLabel_C* PushToTalkLabel;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_PushToTalk(int32 EntryPoint);
};

#endif
