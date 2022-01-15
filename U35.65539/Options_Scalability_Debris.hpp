#ifndef UE4SS_SDK_Options_Scalability_Debris_HPP
#define UE4SS_SDK_Options_Scalability_Debris_HPP

class UOptions_Scalability_Debris_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UComboBoxString* ComboBox_QualityLevel;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__ComboBox_QualityLevel_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, uint8 SelectionType);
    void ExecuteUbergraph_Options_Scalability_Debris(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, FString CallFunc_GetOptionAtIndex_ReturnValue, FString K2Node_ComponentBoundEvent_SelectedItem, uint8 K2Node_ComponentBoundEvent_SelectionType, UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, int32 CallFunc_FindOptionIndex_ReturnValue);
}

#endif
