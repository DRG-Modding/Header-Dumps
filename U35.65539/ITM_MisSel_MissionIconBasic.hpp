#ifndef UE4SS_SDK_ITM_MisSel_MissionIconBasic_HPP
#define UE4SS_SDK_ITM_MisSel_MissionIconBasic_HPP

class UITM_MisSel_MissionIconBasic_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Icon_BG;
    UImage* ICON_Frame;
    UImage* ICON_MissionType;
    UImage* ICON_Outline;
    USizeBox* IconSize;
    UBasic_ToolTip_C* ToolTip;
    bool ThickOutline;
    float Size;
    bool Show Frame;
    TEnumAsByte<ENUM_MenuColors::Type> Frame Color;
    bool Selected;
    FObjectiveMissionIcon MissionIcon;
    bool DataSet;

    void SetTemplate(UMissionTemplate* Template, bool UseSimpleIcon, bool CallFunc_IsValid_ReturnValue, FObjectiveMissionIcon CallFunc_GetPrimaryObjectiveIcon_ReturnValue);
    void SetSelected(bool inSelected);
    void SetMission(UGeneratedMission* InMission, bool CallFunc_IsValid_ReturnValue, FObjectiveMissionIcon CallFunc_GetPrimaryObjectiveIcon_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void SetData(const FObjectiveMissionIcon MissionIcon);
    void ExecuteUbergraph_ITM_MisSel_MissionIconBasic(int32 EntryPoint, float Temp_float_Variable, bool CallFunc_Not_PreBool_ReturnValue, float Temp_float_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_1, FLinearColor Temp_struct_Variable, bool Temp_bool_Variable_2, FLinearColor Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, const FObjectiveMissionIcon K2Node_CustomEvent_MissionIcon, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool Temp_bool_Variable_3, float K2Node_Select_Default, float K2Node_Select_Default_1, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, FLinearColor CallFunc_MenuColors_OutputColor_3, FLinearColor K2Node_Select_Default_2, FLinearColor K2Node_Select_Default_3);
}

#endif
