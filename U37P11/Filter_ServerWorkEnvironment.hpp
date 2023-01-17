#ifndef UE4SS_SDK_Filter_ServerWorkEnvironment_HPP
#define UE4SS_SDK_Filter_ServerWorkEnvironment_HPP

class UFilter_ServerWorkEnvironment_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* EntryBox;
    class UBasic_ExpandableMenu_C* MenuWorkEnvironment;
    TArray<class UCheck_ServerWorkEnvironment_C*> Entries;
    FFilter_ServerWorkEnvironment_COnSelectionChanged OnSelectionChanged;
    void OnSelectionChanged();

    void OpenMenu(bool Open);
    void GetSelectedDifficulties(TArray<class UDifficultySetting*>& Difficulties);
    void IsDifficultySelected(class UDifficultySetting* InDifficulty, bool& Selected);
    void UpdateSubheader();
    void Add Work Environment(class UDifficultySetting* Difficulty, class UCheck_ServerWorkEnvironment_C*& OutWidget, bool& OutIsChecked);
    void PreConstruct(bool IsDesignTime);
    void OnCheckedChanged(class UCheck_ServerWorkEnvironment_C* CheckBox, class UDifficultySetting* Difficulty, bool IsChecked);
    void Reset();
    void ExecuteUbergraph_Filter_ServerWorkEnvironment(int32 EntryPoint);
    void OnSelectionChanged__DelegateSignature();
};

#endif
