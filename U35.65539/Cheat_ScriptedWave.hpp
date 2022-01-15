#ifndef UE4SS_SDK_Cheat_ScriptedWave_HPP
#define UE4SS_SDK_Cheat_ScriptedWave_HPP

class UCheat_ScriptedWave_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCheatMenu_BasicButtonWText_C* CheatMenu_BasicButtonWText;

    void Construct();
    void BndEvt__CheatMenu_BasicButtonWText_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_Cheat_ScriptedWave(int32 EntryPoint, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue);
}

#endif
