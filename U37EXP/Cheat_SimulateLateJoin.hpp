#ifndef UE4SS_SDK_Cheat_SimulateLateJoin_HPP
#define UE4SS_SDK_Cheat_SimulateLateJoin_HPP

class UCheat_SimulateLateJoin_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_BasicButtonWText;
    TSoftClassPtr<AActor> podClass;

    void OnLoaded_61EEE6104D62AB076A753A97DCFEB1FE(UClass* Loaded);
    void Construct();
    void Spawn pod and test(class APlayerCharacter* Character);
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_Cheat_SimulateLateJoin(int32 EntryPoint);
};

#endif
