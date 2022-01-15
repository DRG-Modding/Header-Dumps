#ifndef UE4SS_SDK_HUD_FieldMedic_HPP
#define UE4SS_SDK_HUD_FieldMedic_HPP

class UHUD_FieldMedic_C : UPerkHUDActivationWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimIntro;
    UHUD_Hold_Activation_C* HUD_Hold_Activation;
    bool Listening;
    UDownedStateComponent* DownedState;
    APlayerCharacter* RevivingCharacter;

    void GetInstantRevivablePlayer(UUsableComponentBase* TargetUseComponent, UPlayerCharacter*& OutPlayer, UPlayerCharacter* Player, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UFloatPerkAsset* CallFunc_GetPerk_Perks_FieldMedic, AActor* CallFunc_GetOwner_ReturnValue, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_CanUseCharge_ReturnValue);
    void GetPerk(UFloatPerkAsset*& Perks_FieldMedic, UGameData* CallFunc_GetFSDGameData_ReturnValue);
    void OnFireReleased();
    void OnBeginUsingEvent_Event_0(UUsableComponentBase* Component);
    void OnFirePressed();
    void OnEndUsingEvent_Event_0();
    void Construct();
    void OnEndUsing();
    void OnBeginUsing(UUsableComponentBase* Component);
    void OnInstantRevivePressed();
    void ListenToFirePressed(bool InListen);
    void BndEvt__HUD_Hold_Activation_K2Node_ComponentBoundEvent_1_OnHoldingFinished__DelegateSignature();
    void ExecuteUbergraph_HUD_FieldMedic(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, EndUsingDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, BeginUsingDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, UUsableComponentBase* K2Node_CustomEvent_component_1, AActor* CallFunc_GetOwner_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FirePressedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_UseCharge_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_1, UFloatPerkAsset* CallFunc_GetPerk_Perks_FieldMedic, bool CallFunc_CanUseCharge_ReturnValue, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_3, UUsableComponentBase* K2Node_CustomEvent_component, UPlayerCharacter* CallFunc_GetInstantRevivablePlayer_OutPlayer, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_4, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_5, bool K2Node_CustomEvent_InListen, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_6, FirePressedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FirePressedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_7, FirePressedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_8, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_9, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_10, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_2, UFloatPerkAsset* CallFunc_GetPerk_Perks_FieldMedic_1, bool CallFunc_UseCharge_ReturnValue_1);
}

#endif
