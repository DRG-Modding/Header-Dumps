#ifndef UE4SS_SDK_Basic_TextInputField_HPP
#define UE4SS_SDK_Basic_TextInputField_HPP

class UBasic_TextInputField_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEditableTextBox* InputField;
    class UBorder* InputFieldBorder;
    FText HintText;
    FBasic_TextInputField_COnTextChanged OnTextChanged;
    void OnTextChanged(FText Text);
    FBasic_TextInputField_COnTextCommitted OnTextCommitted;
    void OnTextCommitted(FText Text, uint8 CommitMethod);

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetText(FText InText);
    void GetHint(FText& HintText);
    FText GetText();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__InputField_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__InputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_Basic_TextInputField(int32 EntryPoint);
    void OnTextCommitted__DelegateSignature(FText Text, uint8 CommitMethod);
    void OnTextChanged__DelegateSignature(FText Text);
};

#endif
