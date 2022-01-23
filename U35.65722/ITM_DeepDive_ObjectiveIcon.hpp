#ifndef UE4SS_SDK_ITM_DeepDive_ObjectiveIcon_HPP
#define UE4SS_SDK_ITM_DeepDive_ObjectiveIcon_HPP

class UITM_DeepDive_ObjectiveIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BG;
    class UITM_MisSel_MissionIcon_C* Icon_MissionTemplate;
    class UImage* IMG_MissionMainBG;
    class UImage* IMG_MissionSecondaryBG;
    class UITM_MisSel_MissionIcon_C* ITM_MisSel_MissionIcon_C_0;

    void SetTemplateIcon(class UITM_MisSel_MissionIcon_C* Icon, class UMissionTemplate* InMissionTemplate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetObjectiveIcon(class UUI_MaskedImage_C* Icon, TSubclassOf<class UObjective> Objective, bool CallFunc_IsValidClass_ReturnValue, class UTexture2D* CallFunc_GetObjectiveIconFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetData(class UGeneratedMission* InMission, bool CallFunc_IsValid_ReturnValue, FObjectiveMissionIcon CallFunc_GetSecondaryObjectiveIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FLinearColor CallFunc_SelectMenuColor_OutputColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
};

#endif
