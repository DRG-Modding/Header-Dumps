#ifndef UE4SS_SDK_Options_Scalability_AntiAliasingType_HPP
#define UE4SS_SDK_Options_Scalability_AntiAliasingType_HPP

class UOptions_Scalability_AntiAliasingType_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_OptionSwitcher_C* Basic_OptionSwitcher;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ExecuteUbergraph_Options_Scalability_AntiAliasingType(int32 EntryPoint, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, int32 CallFunc_GetAntiAliasingType_ReturnValue, FText K2Node_ComponentBoundEvent_Value, int32 K2Node_ComponentBoundEvent_Index, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1);
}

#endif
