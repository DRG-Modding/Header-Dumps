#ifndef UE4SS_SDK_ITM_CreateNewSaveSlot_Entry_HPP
#define UE4SS_SDK_ITM_CreateNewSaveSlot_Entry_HPP

class UITM_CreateNewSaveSlot_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FlashingText;
    class UBasic_ButtonCutCorner_C* Basic_CurrentProgress;
    class UBasic_ButtonCutCorner_C* Basic_NewProgress;
    class UImage* IMG_MissionIcon;
    class UBasic_TextInputField_C* SaveslotName_Input;
    FString saveSlotName;
    bool ResetProgress;
    FITM_CreateNewSaveSlot_Entry_COnSaveslotCreated OnSaveslotCreated;
    void OnSaveslotCreated();
    FString IlligalChars;
    class UBasic_ToolTip_C* CurrentProgressTooltip;

    class UWidget* CreateCurrentProgressButtonToolTip();
    void CheckForIlligalChars(FString inString, bool& IsIlligal);
    void ChangeSave(FString Name, bool Reset, bool StartTutorial);
    void SaveSlotNameExists(bool& Exists);
    void SaveNameInputError();
    void BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_2_OnTextCommitted__DelegateSignature(FText Text, uint8 CommitMethod);
    void BndEvt__Basic_ButtonCutCorner_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature();
    void Answer(bool Yes);
    void BndEvt__Basic_NewProgress_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
    void TutorialAnswer(bool Yes);
    void BndEvt__SaveslotName_Input_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(FText Text);
    void ExecuteUbergraph_ITM_CreateNewSaveSlot_Entry(int32 EntryPoint);
    void OnSaveslotCreated__DelegateSignature();
};

#endif
