#ifndef UE4SS_SDK_Options_ResetProgress_HPP
#define UE4SS_SDK_Options_ResetProgress_HPP

class UOptions_ResetProgress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonWithControls_C* Basic_ButtonWithControls;

    void OnFailure_E60EC8DB4E80DB2E20AA1A9F09A53224();
    void OnSuccess_E60EC8DB4E80DB2E20AA1A9F09A53224();
    void BndEvt__Basic_ButtonWithControls_K2Node_ComponentBoundEvent_21_OnClicked__DelegateSignature();
    void Answer(bool Yes);
    void TutorialAnswer(bool Yes);
    void ExecuteUbergraph_Options_ResetProgress(int32 EntryPoint);
};

#endif
