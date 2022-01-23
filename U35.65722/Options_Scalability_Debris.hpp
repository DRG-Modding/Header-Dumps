#ifndef UE4SS_SDK_Options_Scalability_Debris_HPP
#define UE4SS_SDK_Options_Scalability_Debris_HPP

class UOptions_Scalability_Debris_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UComboBoxString* ComboBox_QualityLevel;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__ComboBox_QualityLevel_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_Options_Scalability_Debris(int32 EntryPoint, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FExecuteUbergraph_Options_Scalability_DebrisK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, FString CallFunc_GetOptionAtIndex_ReturnValue, FString K2Node_ComponentBoundEvent_SelectedItem, TEnumAsByte<ESelectInfo::Type> K2Node_ComponentBoundEvent_SelectionType, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, int32 CallFunc_FindOptionIndex_ReturnValue);
};

#endif
