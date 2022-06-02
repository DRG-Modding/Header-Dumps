#ifndef UE4SS_SDK_HUD_TabPlayerListEntry_InteractableV2_HPP
#define UE4SS_SDK_HUD_TabPlayerListEntry_InteractableV2_HPP

class UHUD_TabPlayerListEntry_InteractableV2_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Exit;
    class UWidgetAnimation* Enter;
    class UBasic_ButtonCutCorner_C* BTN_Gamercard;
    class UBasic_ButtonCutCorner_C* BTN_Kick;
    class UBasic_ButtonCutCorner_C* BTN_mute;
    class UBasic_ButtonCutCorner_C* BTN_Respawn_Spacerig;
    class UBasic_ButtonCutCorner_C* BTN_unmute;
    class UButton* Button_Hover;
    class UHUD_TabPlayerListEntryV2_C* Entry;
    class UHorizontalBox* HorizontalBox_Actions;
    class UWidgetSwitcher* MuteSwitcher;
    class AFSDPlayerState* PlayerState;
    class APlayerController* PlayerController;
    FText KickReason;

    void SetPlayer(class AFSDPlayerState* State);
    void OnPlayerCharacterSpawned_Event(class APlayerCharacter* PlayerCharacter);
    void Update Mute Button();
    void OnPlayerSet();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void CheckHover();
    void BndEvt__BTN_mute_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_unmute_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Gamercard_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Kick_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__BTN_Respawn_Spacerig_K2Node_ComponentBoundEvent_15_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void OnFinished();
    void ExecuteUbergraph_HUD_TabPlayerListEntry_InteractableV2(int32 EntryPoint);
};

#endif
