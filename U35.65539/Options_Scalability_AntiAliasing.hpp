#ifndef UE4SS_SDK_Options_Scalability_AntiAliasing_HPP
#define UE4SS_SDK_Options_Scalability_AntiAliasing_HPP

class UOptions_Scalability_AntiAliasing_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_OptionSwitcher_C* Basic_OptionSwitcher;

    void Construct();
    void UINeedsUpdate();
    void ShowOptions();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_2_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void ExecuteUbergraph_Options_Scalability_AntiAliasing(int32 EntryPoint, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, FText K2Node_ComponentBoundEvent_Value, int32 K2Node_ComponentBoundEvent_Index);
}

#endif
