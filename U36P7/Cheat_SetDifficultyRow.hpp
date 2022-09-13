#ifndef UE4SS_SDK_Cheat_SetDifficultyRow_HPP
#define UE4SS_SDK_Cheat_SetDifficultyRow_HPP

class UCheat_SetDifficultyRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* CheckBox_SelectDiff;
    class UTextBlock* TextBlock_DiffName;
    class UDifficultySetting* Difficulty;
    FCheat_SetDifficultyRow_COn Difficulty Selected On Difficulty Selected;
    void On Difficulty Selected();

    void Set Difficulty Item(class UDifficultySetting* Difficulty);
    void Check if owned difficulty is active();
    void BndEvt__CheckBox_SelectDiff_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_Cheat_SetDifficultyRow(int32 EntryPoint);
    void On Difficulty Selected__DelegateSignature();
};

#endif
