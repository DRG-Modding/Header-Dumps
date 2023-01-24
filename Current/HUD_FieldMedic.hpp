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

    void GetInstantRevivablePlayer(class UUsableComponentBase* TargetUseComponent, class APlayerCharacter*& OutPlayer);
    void GetPerk(class UFloatPerkAsset*& Perks_FieldMedic);
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
    void ExecuteUbergraph_HUD_FieldMedic(int32 EntryPoint);
};

#endif
