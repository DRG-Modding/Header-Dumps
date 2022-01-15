#ifndef UE4SS_SDK_ITM_MisSel_MissionIcon_HPP
#define UE4SS_SDK_ITM_MisSel_MissionIcon_HPP

class UITM_MisSel_MissionIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic;
    UMissionTemplate* MissionTemplate;

    void SetIcon(const FObjectiveMissionIcon MissionIcon);
    void SetData(UMissionTemplate* InMissionTemplate);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_MissionIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue);
}

#endif
