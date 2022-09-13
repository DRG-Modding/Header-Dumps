#ifndef UE4SS_SDK_ITM_MisSel_MissionIconBasic_HPP
#define UE4SS_SDK_ITM_MisSel_MissionIconBasic_HPP

class UITM_MisSel_MissionIconBasic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ICON_BG;
    class UImage* ICON_Frame;
    class UImage* ICON_MissionType;
    class UImage* ICON_Outline;
    class USizeBox* IconSize;
    class UBasic_ToolTip_C* ToolTip;
    bool ThickOutline;
    float Size;
    bool Show Frame;
    TEnumAsByte<ENUM_MenuColors::Type> Frame Color;
    bool Selected;
    FObjectiveMissionIcon MissionIcon;
    bool DataSet;

    void SetTemplate(class UMissionTemplate* Template, bool UseSimpleIcon);
    void SetSelected(bool InSelected);
    void SetMission(class UGeneratedMission* InMission);
    void PreConstruct(bool IsDesignTime);
    void SetData(const FObjectiveMissionIcon MissionIcon);
    void ExecuteUbergraph_ITM_MisSel_MissionIconBasic(int32 EntryPoint);
};

#endif
