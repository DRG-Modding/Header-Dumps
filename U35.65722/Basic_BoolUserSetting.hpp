#ifndef UE4SS_SDK_Basic_BoolUserSetting_HPP
#define UE4SS_SDK_Basic_BoolUserSetting_HPP

class UBasic_BoolUserSetting_C : public UBasic_CheckBox_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoolUserSettingAsset* Setting;

    void SetValue(bool InValue, bool CallFunc_IsValid_ReturnValue);
    bool GetValue(bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetValue_ReturnValue);
    void SetBoolUserSetting(class UBoolUserSettingAsset* InSetting, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetUpperCased_UpperCase, bool CallFunc_GetValue_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnClicked(bool InChecked);
    void Refresh();
    void ExecuteUbergraph_Basic_BoolUserSetting(int32 EntryPoint, FExecuteUbergraph_Basic_BoolUserSettingK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool K2Node_Event_InChecked, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
};

#endif
