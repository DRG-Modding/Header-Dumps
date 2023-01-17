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

    void SetMetaData(class UModioModInfoWrapper* InMetaData);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_Modding_ToolTip_Entry(int32 EntryPoint);
};

#endif
