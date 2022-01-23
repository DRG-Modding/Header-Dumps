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
    void ExecuteUbergraph_HUD_DownedBomb_Activation(int32 EntryPoint, FExecuteUbergraph_HUD_DownedBomb_ActivationK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_DownedBomb_ActivationK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue, class UDownedStateComponent* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_CustomEvent_Active, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, bool K2Node_CustomEvent_BoolValue);
};

#endif
