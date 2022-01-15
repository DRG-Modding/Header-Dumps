#ifndef UE4SS_SDK_Cheat_Resupply_HPP
#define UE4SS_SDK_Cheat_Resupply_HPP

class UCheat_Resupply_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCheatMenu_BasicButtonWText_C* CheatMenu_BasicButtonWText;

    void Construct();
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_Cheat_Resupply(int32 EntryPoint, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue);
}

#endif
