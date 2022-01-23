#ifndef UE4SS_SDK_PopUp_Analytics_HPP
#define UE4SS_SDK_PopUp_Analytics_HPP

class UPopUp_Analytics_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_SmallWindowWithHeader_C* Basic_Menu_SmallWindowWithHeader;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable_C* BTN_Continue;
    class UBasic_ButtonScalable_C* BTN_YesToAll;
    class UBasic_Menu_MinimalWindow_C* Info_AnonymousData;
    class UBasic_Menu_MinimalWindow_C* Info_PersonalData;
    class UBasic_OptionSmall_C* OPT_Anonymous;
    class UBasic_OptionSmall_C* OPT_Personal;
    class UOptions_AnonymousMetrics_C* Options_AnonymousMetrics;
    class UOptions_PersonalMetrics_C* Options_PersonalMetrics;

    void Construct();
    void BndEvt__Basic_ButtonScalable_K2Node_ComponentBoundEvent_163_OnReleased__DelegateSignature();
    void BndEvt__Basic_OptionSmall_K2Node_ComponentBoundEvent_63_OnHoveringBegin__DelegateSignature();
    void BndEvt__OPT_Anonymous_K2Node_ComponentBoundEvent_88_OnHoveringEnd__DelegateSignature();
    void BndEvt__OPT_Personal_K2Node_ComponentBoundEvent_94_OnHoveringBegin__DelegateSignature();
    void BndEvt__OPT_Personal_K2Node_ComponentBoundEvent_98_OnHoveringEnd__DelegateSignature();
    void BndEvt__BTN_YesToAll_K2Node_ComponentBoundEvent_217_OnReleased__DelegateSignature();
    void ExecuteUbergraph_PopUp_Analytics(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_HasAnalytics_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_SetAnonymousAnalytics_ReturnValue, bool CallFunc_SetPersonalAnalytics_ReturnValue);
};

#endif
