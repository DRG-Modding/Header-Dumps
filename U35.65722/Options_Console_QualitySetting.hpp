#ifndef UE4SS_SDK_Options_Console_QualitySetting_HPP
#define UE4SS_SDK_Options_Console_QualitySetting_HPP

class UOptions_Console_QualitySetting_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_OptionSwitcher_C* Basic_OptionSwitcher;
    FText CustomText;
    EConsoleGraphicsMode NewVar_0;

    void Construct();
    void UINeedsUpdate();
    void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_1_OnSelectionChanged__DelegateSignature(FText Value, int32 Index);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Options_Console_QualitySetting(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FText K2Node_ComponentBoundEvent_Value, int32 K2Node_ComponentBoundEvent_Index, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, EConsoleGraphicsMode CallFunc_GetConsoleGraphicsMode_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_ConsoleGraphicsModeAvailable_ReturnValue, int32 CallFunc_Add_Option_Index, int32 CallFunc_Add_Option_Index_1, int32 CallFunc_Add_Option_Index_2, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, int32 CallFunc_GetOptionCount_Count, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
};

#endif
