#ifndef UE4SS_SDK_HUD_IronWill_Activation_HPP
#define UE4SS_SDK_HUD_IronWill_Activation_HPP

class UHUD_IronWill_Activation_C : UPerkHUDActivationWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimIntro;
    UHUD_Hold_Activation_C* HUD_Hold_Activation;
    bool PlayerDown;

    void EndHolding();
    void StartHolding();
    void OnCharacterStateChanged(ECharacterState NewState);
    void BndEvt__HUD_Hold_Activation_K2Node_ComponentBoundEvent_0_OnCountDownFinished__DelegateSignature();
    void BndEvt__HUD_Hold_Activation_K2Node_ComponentBoundEvent_1_OnHoldingFinished__DelegateSignature();
    void UnbindEvents();
    void Construct();
    void OnTeamDown_Event(bool boolValue);
    void ExecuteUbergraph_HUD_IronWill_Activation(int32 EntryPoint, BoolDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, ECharacterState CallFunc_GetCurrentState_ReturnValue, ECharacterState K2Node_CustomEvent_newState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, OnCharacterStateChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_3, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_4, OnJumpPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_CanActivateIronWill_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, OnJumpReleasedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_5, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_6, bool K2Node_CustomEvent_BoolValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue);
}

#endif
