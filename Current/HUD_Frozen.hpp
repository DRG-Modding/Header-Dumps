#ifndef UE4SS_SDK_HUD_Frozen_HPP
#define UE4SS_SDK_HUD_Frozen_HPP

class UHUD_Frozen_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical_C_0;
    class UBorder* Border_0;
    class UBorder* Border_1;
    class UUI_AdvancedLabel_C* InstructionsLabel;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    class UUI_FrozenInputSequence_C* UI_FrozenInputSequence;
    class UProgressBar* UnfreezeProgressBar;
    class UWidgetSwitcher* WidgetSwitcher_214;
    float CurrentProgress;
    FString InputSequenceText;
    TArray<class UCharacterBreakOutState*> BreakoutStates;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnCharacterStateChanged_Event(ECharacterState NewState);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetProgress(float CurrentProgress);
    void ThawInputUpdated(const TArray<EThawInputDirection>& Inputs, bool Initial);
    void OnBreakOutInputSuccess_Event_0(EThawInputDirection Direction);
    void CustomEvent_0(EThawInputDirection Direction);
    void ExecuteUbergraph_HUD_Frozen(int32 EntryPoint);
};

#endif
