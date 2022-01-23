#ifndef UE4SS_SDK_ITM_Modding_ToolTip_Entry_HPP
#define UE4SS_SDK_ITM_Modding_ToolTip_Entry_HPP

class UITM_Modding_ToolTip_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Label_C* Approval_Label;
    class UWidgetSwitcher* HasMetaData_Switcher;
    class UBasic_Image_C* Installed_Image;
    class UCircularThrobber* ModName_Loading;
    class UBasic_Label_C* Name_Label;
    class UBasic_Image_C* Pending_Image;
    class UWidgetSwitcher* StatusSwitcher;
    bool Installed;
    FString Name;

    void SetMetaData(class UModioModInfoWrapper* InMetaData, EUGCApprovalStatus Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, bool CallFunc_IsValid_ReturnValue, FText K2Node_Select_Default, FText CallFunc_Conv_StringToText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_Modding_ToolTip_Entry(int32 EntryPoint, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool K2Node_Event_IsDesignTime, int32 CallFunc_SelectInt_ReturnValue, class UModioModInfoWrapper* CallFunc_K2_RequestModMetaData_outModInfo, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default);
};

#endif
