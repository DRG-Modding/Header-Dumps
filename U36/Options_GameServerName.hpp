#ifndef UE4SS_SDK_Options_GameServerName_HPP
#define UE4SS_SDK_Options_GameServerName_HPP

class UOptions_GameServerName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_TextInputField_C* Basic_TextInputField;

    void UINeedsUpdate();
    void ShowOptions();
    void Construct();
    void BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature(FText Text, uint8 CommitMethod);
    void UpdateName(FString NewValue);
    void ExecuteUbergraph_Options_GameServerName(int32 EntryPoint);
};

#endif
