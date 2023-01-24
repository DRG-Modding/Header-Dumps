#ifndef UE4SS_SDK_Cheat_DestroyAllFlares_HPP
#define UE4SS_SDK_Cheat_DestroyAllFlares_HPP

class UCheat_DestroyAllFlares_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_BasicButtonWText;

    void Construct();
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_Cheat_DestroyAllFlares(int32 EntryPoint);
};

#endif
