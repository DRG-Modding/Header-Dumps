#ifndef UE4SS_SDK_HUD_HeightenedSenses_Activation_HPP
#define UE4SS_SDK_HUD_HeightenedSenses_Activation_HPP

class UHUD_HeightenedSenses_Activation_C : UPerkHUDActivationWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHUD_Hold_Activation_C* HUD_Hold_Activation;

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__HUD_Hold_Activation_K2Node_ComponentBoundEvent_0_OnHoldingFinished__DelegateSignature();
    void OnCanEscapeGrabberChanged(bool bCanEscape);
    void ExecuteUbergraph_HUD_HeightenedSenses_Activation(int32 EntryPoint, CanEscapeGrabberDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsJumpPressed_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_UseCharge_ReturnValue, bool K2Node_CustomEvent_bCanEscape, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
}

#endif
