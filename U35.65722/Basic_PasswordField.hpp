#ifndef UE4SS_SDK_Basic_PasswordField_HPP
#define UE4SS_SDK_Basic_PasswordField_HPP

class UBasic_PasswordField_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UEditableTextBox* ServerPassword;
    class UBorder* ServerPasswordBorder;
    FText HintText;
    FBasic_PasswordField_COnTextChanged OnTextChanged;
    void OnTextChanged(FText Text);
    FBasic_PasswordField_COnTextCommitted OnTextCommitted;
    void OnTextCommitted(FText Text, uint8 CommitMethod);

    void GetPassword(FText& Password, FText CallFunc_GetText_ReturnValue);
    FText GetPasswordHint();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ServerPassword_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__ServerPassword_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_Basic_PasswordField(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, const FText K2Node_ComponentBoundEvent_Text_1, const FText K2Node_ComponentBoundEvent_Text, TEnumAsByte<ETextCommit::Type> K2Node_ComponentBoundEvent_CommitMethod);
    void OnTextCommitted__DelegateSignature(FText Text, uint8 CommitMethod);
    void OnTextChanged__DelegateSignature(FText Text);
};

#endif
