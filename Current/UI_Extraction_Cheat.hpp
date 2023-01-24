#ifndef UE4SS_SDK_UI_Extraction_Cheat_HPP
#define UE4SS_SDK_UI_Extraction_Cheat_HPP

class UUI_Extraction_Cheat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_FillMorkite;

    void BndEvt__CheatMenu_FillMorkite_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UCheatMenu_BasicButtonWText_C* Button);
    void ExecuteUbergraph_UI_Extraction_Cheat(int32 EntryPoint);
};

#endif
