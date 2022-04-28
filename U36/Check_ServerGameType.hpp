#ifndef UE4SS_SDK_Check_ServerGameType_HPP
#define UE4SS_SDK_Check_ServerGameType_HPP

class UCheck_ServerGameType_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* CheckBox;
    FCheck_ServerGameType_COnCheckedChanged OnCheckedChanged;
    void OnCheckedChanged(bool IsChecked, EGameType Gametype);
    EGameType Gametype;
    bool SandboxMode;
    FText Name;

    void Verify(const TArray<EGameType>& InSelectedGameTypes);
    void Reset(bool InSandbox);
    bool IsInteractable();
    void GetIsChecked(bool& Checked);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void Construct();
    void ExecuteUbergraph_Check_ServerGameType(int32 EntryPoint);
    void OnCheckedChanged__DelegateSignature(bool IsChecked, EGameType Gametype);
};

#endif
