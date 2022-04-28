#ifndef UE4SS_SDK_Basic_BoolUserSetting_HPP
#define UE4SS_SDK_Basic_BoolUserSetting_HPP

class UBasic_BoolUserSetting_C : public UBasic_CheckBox_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoolUserSettingAsset* Setting;

    void SetValue(bool InValue);
    bool GetValue();
    void SetBoolUserSetting(class UBoolUserSettingAsset* InSetting);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnClicked(bool InChecked);
    void Refresh();
    void ExecuteUbergraph_Basic_BoolUserSetting(int32 EntryPoint);
};

#endif
