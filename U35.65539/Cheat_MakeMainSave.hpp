#ifndef UE4SS_SDK_Cheat_MakeMainSave_HPP
#define UE4SS_SDK_Cheat_MakeMainSave_HPP

class UCheat_MakeMainSave_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* MainButton;
    UTextBlock* TextBlock_3;
    FSoftClassPath NewVar_0;
    TSoftClassPtr<UObject> NewVar_1;
    ESteamBranch SelectedBranch;
    TArray<ESteamBranch> Branches;

    void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_MakeMainSave(int32 EntryPoint, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1);
}

#endif
