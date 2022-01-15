#ifndef UE4SS_SDK_ITM_Modding_ToolTip_Entry_HPP
#define UE4SS_SDK_ITM_Modding_ToolTip_Entry_HPP

class UITM_Modding_ToolTip_Entry_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Label_C* Approval_Label;
    UWidgetSwitcher* HasMetaData_Switcher;
    UBasic_Image_C* Installed_Image;
    UCircularThrobber* ModName_Loading;
    UBasic_Label_C* Name_Label;
    UBasic_Image_C* Pending_Image;
    UWidgetSwitcher* StatusSwitcher;
    bool Installed;
    FString Name;

    void SetMetaData(UModioModInfoWrapper* InMetaData, EUGCApprovalStatus Temp_byte_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, bool CallFunc_IsValid_ReturnValue, FText K2Node_Select_Default, FText CallFunc_Conv_StringToText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_Modding_ToolTip_Entry(int32 EntryPoint, bool Temp_bool_Variable, uint8 Temp_byte_Variable, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool K2Node_Event_IsDesignTime, int32 CallFunc_SelectInt_ReturnValue, UModioModInfoWrapper* CallFunc_K2_RequestModMetaData_outModInfo, uint8 Temp_byte_Variable_1, uint8 K2Node_Select_Default);
}

#endif
