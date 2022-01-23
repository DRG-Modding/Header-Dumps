#ifndef UE4SS_SDK_Check_ServerGameType_HPP
#define UE4SS_SDK_Check_ServerGameType_HPP

class UCheck_ServerGameType_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* CheckBox;
    FCheck_ServerGameType_COnCheckedChanged OnCheckedChanged;
    void OnCheckedChanged(bool IsChecked, EGameType Gametype);
    EGameType Gametype;
    bool SandboxMode;
    FText Name;

    void Verify(const TArray<EGameType>& InSelectedGameTypes, bool CallFunc_Array_Contains_ReturnValue);
    void Reset(bool InSandbox, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetModdingServerFilterEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    bool IsInteractable();
    void GetIsChecked(bool& Checked, bool CallFunc_GetIsChecked_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void Construct();
    void ExecuteUbergraph_Check_ServerGameType(int32 EntryPoint, EGameType Temp_byte_Variable, bool CallFunc_GetIsChecked_ReturnValue, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, EGameType Temp_byte_Variable_1, FText Temp_text_Variable_4, FText Temp_text_Variable_5, FText Temp_text_Variable_6, FText Temp_text_Variable_7, bool K2Node_Event_IsDesignTime, bool K2Node_ComponentBoundEvent_IsChecked, FText K2Node_Select_Default, FText K2Node_Select_Default_1, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_GetIsChecked_ReturnValue_1);
    void OnCheckedChanged__DelegateSignature(bool IsChecked, EGameType Gametype);
};

#endif
