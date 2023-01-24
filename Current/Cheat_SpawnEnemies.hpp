#ifndef UE4SS_SDK_Cheat_SpawnEnemies_HPP
#define UE4SS_SDK_Cheat_SpawnEnemies_HPP

class UCheat_SpawnEnemies_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheatMenu_BasicButtonWText_C* CheatMenu_BasicButtonWText;
    class UCheckBox* CheckBox_0;

    void Construct();
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_Cheat_SpawnEnemies(int32 EntryPoint);
};

#endif
