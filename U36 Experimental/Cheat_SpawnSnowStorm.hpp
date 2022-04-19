#ifndef UE4SS_SDK_Cheat_SpawnSnowStorm_HPP
#define UE4SS_SDK_Cheat_SpawnSnowStorm_HPP

class UCheat_SpawnSnowStorm_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UTextBlock* TextBlock;
    FSoftClassPath NewVar_0;
    TSoftClassPtr<UObject> NewVar_1;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SpawnSnowStorm(int32 EntryPoint);
};

#endif
