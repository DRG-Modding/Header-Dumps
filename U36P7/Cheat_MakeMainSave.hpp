#ifndef UE4SS_SDK_Cheat_MakeMainSave_HPP
#define UE4SS_SDK_Cheat_MakeMainSave_HPP

class UCheat_MakeMainSave_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* MainButton;
    class UTextBlock* TextBlock_3;
    FSoftClassPath NewVar_0;
    TSoftClassPtr<UObject> NewVar_1;
    ESteamBranch SelectedBranch;
    TArray<ESteamBranch> Branches;

    void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_MakeMainSave(int32 EntryPoint);
};

#endif
