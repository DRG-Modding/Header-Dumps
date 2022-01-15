#ifndef UE4SS_SDK_HUD_DownedBomb_Activation_HPP
#define UE4SS_SDK_HUD_DownedBomb_Activation_HPP

class UHUD_DownedBomb_Activation_C : UPerkHUDActivationWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimIntro;
    UHUD_Hold_Activation_C* HUD_Hold_Activation;
    bool PlayerDown;
    UDownedStateComponent* DownedState;

    void Construct();
    void BndEvt__HUD_Hold_Activation_K2Node_ComponentBoundEvent_1_OnHoldingFinished__DelegateSignature();
    void OnEnableDownedBombUIEvent_Event_0(bool Active);
    void OnGrenadePressed(bool boolValue);
    void ExecuteUbergraph_HUD_DownedBomb_Activation(int32 EntryPoint, EnableDownedBombUIDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, BoolDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue, UDownedStateComponent* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_CustomEvent_Active, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, bool K2Node_CustomEvent_BoolValue);
}

#endif
