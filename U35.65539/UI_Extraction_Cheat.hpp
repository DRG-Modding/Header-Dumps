#ifndef UE4SS_SDK_UI_Extraction_Cheat_HPP
#define UE4SS_SDK_UI_Extraction_Cheat_HPP

class UUI_Extraction_Cheat_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCheatMenu_BasicButtonWText_C* CheatMenu_FillMorkite;

    void BndEvt__CheatMenu_FillMorkite_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_UI_Extraction_Cheat(int32 EntryPoint, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UObjective* CallFunc_GetPrimaryObjective_ReturnValue, UCheatMenu_BasicButtonWText_C* K2Node_ComponentBoundEvent_Button, UResourceObjective* K2Node_DynamicCast_AsResource_Objective, bool K2Node_DynamicCast_bSuccess, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue);
}

#endif
