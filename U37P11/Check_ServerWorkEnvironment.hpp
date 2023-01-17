#ifndef UE4SS_SDK_Check_ServerWorkEnvironment_HPP
#define UE4SS_SDK_Check_ServerWorkEnvironment_HPP

class UCheck_ServerWorkEnvironment_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* CheckBox;
    class UButton* ClickButton;
    class UTextBlock* NameLabel;
    bool IsChecked;
    class UDifficultySetting* Difficulty;
    FCheck_ServerWorkEnvironment_COnCheckedChanged OnCheckedChanged;
    void OnCheckedChanged(class UCheck_ServerWorkEnvironment_C* CheckBox, class UDifficultySetting* Difficulty, bool IsChecked);

    void SetIsChecked(bool InIsChecked);
    bool IsInteractable();
    void GetIsChecked(bool& Checked);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_Check_ServerWorkEnvironment(int32 EntryPoint);
    void OnCheckedChanged__DelegateSignature(class UCheck_ServerWorkEnvironment_C* CheckBox, class UDifficultySetting* Difficulty, bool IsChecked);
};

#endif
