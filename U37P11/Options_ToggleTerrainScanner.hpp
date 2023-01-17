#ifndef UE4SS_SDK_Options_ToggleTerrainScanner_HPP
#define UE4SS_SDK_Options_ToggleTerrainScanner_HPP

class UOptions_ToggleTerrainScanner_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;

    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void UINeedsUpdate();
    void ShowOptions();
    void ExecuteUbergraph_Options_ToggleTerrainScanner(int32 EntryPoint);
};

#endif
