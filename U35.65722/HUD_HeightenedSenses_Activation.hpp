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
    void ExecuteUbergraph_HUD_HeightenedSenses_Activation(int32 EntryPoint, FExecuteUbergraph_HUD_HeightenedSenses_ActivationK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, bool CallFunc_IsJumpPressed_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_UseCharge_ReturnValue, bool K2Node_CustomEvent_bCanEscape, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
};

#endif
