#ifndef UE4SS_SDK_WND_JoiningPassword_HPP
#define UE4SS_SDK_WND_JoiningPassword_HPP

class UWND_JoiningPassword_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_PasswordField_C* Basic_PasswordField;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_Cancel;
    class UBasic_ButtonScalable2_C* BTN_Join;
    class UTextBlock* TextBlock_2;
    FBlueprintSessionResult Session;
    FWND_JoiningPassword_CJoinWithPassword JoinWithPassword;
    void JoinWithPassword(FBlueprintSessionResult Session, FString Password);
    FWND_JoiningPassword_COnCancel OnCancel;
    void OnCancel();

    void SetSession(FBlueprintSessionResult Session);
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WND_JoiningPassword_Basic_PasswordField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature(FText Text, uint8 CommitMethod);
    void ExecuteUbergraph_WND_JoiningPassword(int32 EntryPoint);
    void OnCancel__DelegateSignature();
    void JoinWithPassword__DelegateSignature(FBlueprintSessionResult Session, FString Password);
};

#endif
