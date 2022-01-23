#ifndef UE4SS_SDK_HUD_FieldMedic_HPP
#define UE4SS_SDK_HUD_FieldMedic_HPP

class UHUD_FieldMedic_C : public UPerkHUDActivationWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UHUD_Hold_Activation_C* HUD_Hold_Activation;
    bool Listening;
    class UDownedStateComponent* DownedState;
    class APlayerCharacter* RevivingCharacter;

    void GetInstantRevivablePlayer(class UUsableComponentBase* TargetUseComponent, class APlayerCharacter*& OutPlayer, class APlayerCharacter* Player, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UFloatPerkAsset* CallFunc_GetPerk_Perks_FieldMedic, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_CanUseCharge_ReturnValue);
    void GetPerk(class UFloatPerkAsset*& Perks_FieldMedic, class UGameData* CallFunc_GetFSDGameData_ReturnValue);
    void OnFireReleased();
    void OnBeginUsingEvent_Event_0(class UUsableComponentBase* Component);
    void OnFirePressed();
    void OnEndUsingEvent_Event_0();
    void Construct();
    void OnEndUsing();
    void OnBeginUsing(class UUsableComponentBase* Component);
    void OnInstantRevivePressed();
    void ListenToFirePressed(bool InListen);
    void BndEvt__HUD_Hold_Activation_K2Node_ComponentBoundEvent_1_OnHoldingFinished__DelegateSignature();
    void ExecuteUbergraph_HUD_FieldMedic(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_HUD_FieldMedicK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_FieldMedicK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UUsableComponentBase* K2Node_CustomEvent_component_1, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FExecuteUbergraph_HUD_FieldMedicK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_2, bool CallFunc_UseCharge_ReturnValue, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UFloatPerkAsset* CallFunc_GetPerk_Perks_FieldMedic, bool CallFunc_CanUseCharge_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_3, class UUsableComponentBase* K2Node_CustomEvent_component, class APlayerCharacter* CallFunc_GetInstantRevivablePlayer_OutPlayer, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_4, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_5, bool K2Node_CustomEvent_InListen, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_6, FExecuteUbergraph_HUD_FieldMedicK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_HUD_FieldMedicK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_7, FExecuteUbergraph_HUD_FieldMedicK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_8, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_9, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_10, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UFloatPerkAsset* CallFunc_GetPerk_Perks_FieldMedic_1, bool CallFunc_UseCharge_ReturnValue_1);
};

#endif
