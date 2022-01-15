#ifndef UE4SS_SDK_ITM_DeepDive_ObjectiveIcon_HPP
#define UE4SS_SDK_ITM_DeepDive_ObjectiveIcon_HPP

class UITM_DeepDive_ObjectiveIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* BG;
    UITM_MisSel_MissionIcon_C* Icon_MissionTemplate;
    UImage* IMG_MissionMainBG;
    UImage* IMG_MissionSecondaryBG;
    UITM_MisSel_MissionIcon_C* ITM_MisSel_MissionIcon_C_0;

    void SetTemplateIcon(UITM_MisSel_MissionIcon_C* Icon, UMissionTemplate* InMissionTemplate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetObjectiveIcon(UUI_MaskedImage_C* Icon, TSubclassOf<UObjective> Objective, bool CallFunc_IsValidClass_ReturnValue, UTexture2D* CallFunc_GetObjectiveIconFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetData(UGeneratedMission* InMission, bool CallFunc_IsValid_ReturnValue, FObjectiveMissionIcon CallFunc_GetSecondaryObjectiveIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FLinearColor CallFunc_SelectMenuColor_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
}

#endif
