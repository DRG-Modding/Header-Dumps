#ifndef UE4SS_SDK_UI_EarlyAccessThankYou_HPP
#define UE4SS_SDK_UI_EarlyAccessThankYou_HPP

class UUI_EarlyAccessThankYou_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UITM_MenuBackground_C* ITM_MenuBackground;
    class UFSDEvent* EA_Event;

    void Construct();
    void EventActive(const class UFSDEvent* InFsdEvent, bool InIsActive);
    void ExecuteUbergraph_UI_EarlyAccessThankYou(int32 EntryPoint, class UFSDEventManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, FExecuteUbergraph_UI_EarlyAccessThankYouK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const class UFSDEvent* K2Node_CustomEvent_InFsdEvent, bool K2Node_CustomEvent_InIsActive, bool CallFunc_IsEventActive_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
};

#endif
