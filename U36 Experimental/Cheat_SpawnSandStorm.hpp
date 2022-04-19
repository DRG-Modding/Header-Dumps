#ifndef UE4SS_SDK_Cheat_SpawnSandStorm_HPP
#define UE4SS_SDK_Cheat_SpawnSandStorm_HPP

class UCheat_SpawnSandStorm_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UTextBlock* TextBlock;
    FSoftClassPath NewVar_0;
    TSoftClassPtr<UObject> NewVar_1;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SpawnSandStorm(int32 EntryPoint);
};

#endif
