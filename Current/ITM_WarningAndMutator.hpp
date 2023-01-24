#ifndef UE4SS_SDK_ITM_WarningAndMutator_HPP
#define UE4SS_SDK_ITM_WarningAndMutator_HPP

class UITM_WarningAndMutator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_EscapeMenu_MissionModifier_C* ITM_EscapeMenu_Mutator;
    class UITM_EscapeMenu_MissionModifier_C* ITM_EscapeMenu_Warning;
    class UUniformGridPanel* UniformGridPanel_Holder;
    FITM_WarningAndMutator_CWarningClicked WarningClicked;
    void WarningClicked();
    FITM_WarningAndMutator_CMutatorClicked MutatorClicked;
    void MutatorClicked();

    void Update(class UGeneratedMission* mission);
    void OnClicked_Even_Warning();
    void CustomEvent_Mutator();
    void ExecuteUbergraph_ITM_WarningAndMutator(int32 EntryPoint);
    void MutatorClicked__DelegateSignature();
    void WarningClicked__DelegateSignature();
};

#endif
