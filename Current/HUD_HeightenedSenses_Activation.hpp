#ifndef UE4SS_SDK_HUD_HeightenedSenses_Activation_HPP
#define UE4SS_SDK_HUD_HeightenedSenses_Activation_HPP

class UHUD_HeightenedSenses_Activation_C : public UPerkHUDActivationWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHUD_Hold_Activation_C* HUD_Hold_Activation;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__HUD_Hold_Activation_K2Node_ComponentBoundEvent_0_OnHoldingFinished__DelegateSignature();
    void OnCanEscapeGrabberChanged(bool bCanEscape);
    void ExecuteUbergraph_HUD_HeightenedSenses_Activation(int32 EntryPoint);
};

#endif
