#ifndef UE4SS_SDK_Cheat_SimulatePlayerCount_HPP
#define UE4SS_SDK_Cheat_SimulatePlayerCount_HPP

class UCheat_SimulatePlayerCount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UComboBoxString* ComboBoxString_159;

    void Construct();
    void BndEvt__ComboBoxString_159_K2Node_ComponentBoundEvent_70_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_Cheat_SimulatePlayerCount(int32 EntryPoint, FString K2Node_ComponentBoundEvent_SelectedItem, TEnumAsByte<ESelectInfo::Type> K2Node_ComponentBoundEvent_SelectionType, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_SetSavedCheatValue_ReturnValue, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue_1, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue_2, int32 CallFunc_GetSavedCheatValue_ValueToGet, bool CallFunc_GetSavedCheatValue_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue);
};

#endif
