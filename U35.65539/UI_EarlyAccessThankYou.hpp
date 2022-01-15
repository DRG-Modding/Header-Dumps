#ifndef UE4SS_SDK_UI_EarlyAccessThankYou_HPP
#define UE4SS_SDK_UI_EarlyAccessThankYou_HPP

class UUI_EarlyAccessThankYou_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimIntro;
    UITM_MenuBackground_C* ITM_MenuBackground;
    UFSDEvent* EA_Event;

    void Construct();
    void EventActive(const UFSDEvent* InFsdEvent, bool InIsActive);
    void ExecuteUbergraph_UI_EarlyAccessThankYou(int32 EntryPoint, UFSDEventManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, FSDEventActivateChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const UFSDEvent* K2Node_CustomEvent_InFsdEvent, bool K2Node_CustomEvent_InIsActive, bool CallFunc_IsEventActive_ReturnValue, bool CallFunc_IsPlayInEditor_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
}

#endif
