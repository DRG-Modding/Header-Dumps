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
    void ExecuteUbergraph_Options_PushToTalk(int32 EntryPoint, FExecuteUbergraph_Options_PushToTalkK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, bool CallFunc_GetPushToTalk_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor);
};

#endif
