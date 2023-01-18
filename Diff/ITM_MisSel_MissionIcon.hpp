#ifndef UE4SS_SDK_ITM_MisSel_MissionIcon_HPP
#define UE4SS_SDK_ITM_MisSel_MissionIcon_HPP

class UITM_MisSel_MissionIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic;
    class UMissionTemplate* MissionTemplate;

    void SetIcon(const FObjectiveMissionIcon MissionIcon);
    void SetData(class UMissionTemplate* InMissionTemplate);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_MissionIcon(int32 EntryPoint);
};

#endif
