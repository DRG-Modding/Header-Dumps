#ifndef UE4SS_SDK_HUD_DownedBomb_Activation_HPP
#define UE4SS_SDK_HUD_DownedBomb_Activation_HPP

class UHUD_DownedBomb_Activation_C : public UPerkHUDActivationWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UHUD_Hold_Activation_C* HUD_Hold_Activation;
    bool PlayerDown;
    class UDownedStateComponent* DownedState;

    void Construct();
    void BndEvt__HUD_Hold_Activation_K2Node_ComponentBoundEvent_1_OnHoldingFinished__DelegateSignature();
    void OnEnableDownedBombUIEvent_Event_0(bool Active);
    void OnGrenadePressed(bool boolValue);
    void ExecuteUbergraph_HUD_DownedBomb_Activation(int32 EntryPoint);
};

#endif
