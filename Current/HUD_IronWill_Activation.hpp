#ifndef UE4SS_SDK_HUD_IronWill_Activation_HPP
#define UE4SS_SDK_HUD_IronWill_Activation_HPP

class UHUD_IronWill_Activation_C : public UPerkHUDActivationWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UHUD_Hold_Activation_C* HUD_Hold_Activation;
    bool PlayerDown;

    void EndHolding();
    void StartHolding();
    void OnCharacterStateChanged(ECharacterState NewState);
    void BndEvt__HUD_Hold_Activation_K2Node_ComponentBoundEvent_0_OnCountDownFinished__DelegateSignature();
    void BndEvt__HUD_Hold_Activation_K2Node_ComponentBoundEvent_1_OnHoldingFinished__DelegateSignature();
    void UnbindEvents();
    void Construct();
    void OnTeamDown_Event(bool boolValue);
    void ExecuteUbergraph_HUD_IronWill_Activation(int32 EntryPoint);
};

#endif
