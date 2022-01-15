#ifndef UE4SS_SDK_PopUp_Analytics_HPP
#define UE4SS_SDK_PopUp_Analytics_HPP

class UPopUp_Analytics_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_SmallWindowWithHeader_C* Basic_Menu_SmallWindowWithHeader;
    UBlurBackground_C* BlurBackground;
    UBasic_ButtonScalable_C* BTN_Continue;
    UBasic_ButtonScalable_C* BTN_YesToAll;
    UBasic_Menu_MinimalWindow_C* Info_AnonymousData;
    UBasic_Menu_MinimalWindow_C* Info_PersonalData;
    UBasic_OptionSmall_C* OPT_Anonymous;
    UBasic_OptionSmall_C* OPT_Personal;
    UOptions_AnonymousMetrics_C* Options_AnonymousMetrics;
    UOptions_PersonalMetrics_C* Options_PersonalMetrics;

    void Construct();
    void BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_163_OnReleased__DelegateSignature();
    void BndEvt__Basic_OptionSmall_K2Node_ComponentBoundEvent_63_OnHoveringBegin__DelegateSignature();
    void BndEvt__OPT_Anonymous_K2Node_ComponentBoundEvent_88_OnHoveringEnd__DelegateSignature();
    void BndEvt__OPT_Personal_K2Node_ComponentBoundEvent_94_OnHoveringBegin__DelegateSignature();
    void BndEvt__OPT_Personal_K2Node_ComponentBoundEvent_98_OnHoveringEnd__DelegateSignature();
    void BndEvt__BTN_YesToAll_K2Node_ComponentBoundEvent_217_OnReleased__DelegateSignature();
    void ExecuteUbergraph_PopUp_Analytics(int32 EntryPoint, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_HasAnalytics_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_SetAnonymousAnalytics_ReturnValue, bool CallFunc_SetPersonalAnalytics_ReturnValue);
}

#endif
