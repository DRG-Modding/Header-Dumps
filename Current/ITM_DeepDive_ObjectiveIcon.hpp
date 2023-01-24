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

    void SetTemplateIcon(class UITM_MisSel_MissionIcon_C* Icon, class UMissionTemplate* InMissionTemplate);
    void SetObjectiveIcon(class UUI_MaskedImage_C* Icon, TSubclassOf<class UObjective> Objective);
    void SetData(class UGeneratedMission* InMission);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDive_ObjectiveIcon(int32 EntryPoint);
};

#endif
