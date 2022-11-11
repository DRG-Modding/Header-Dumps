#ifndef UE4SS_SDK_Setting_Modding_CheckVersion_HPP
#define UE4SS_SDK_Setting_Modding_CheckVersion_HPP

class USetting_Modding_CheckVersion_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* Basic_CheckBox;
    float TextWidth;

    class UWidget* GetBasicToolTipWidget();
    void Construct();
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Setting_Modding_CheckVersion(int32 EntryPoint);
};

#endif
