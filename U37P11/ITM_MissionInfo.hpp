#ifndef UE4SS_SDK_ITM_MissionInfo_HPP
#define UE4SS_SDK_ITM_MissionInfo_HPP

class UITM_MissionInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DataDifficultyName;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;
    class UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength;
    class UITM_WarningAndMutator_C* ITM_WarningAndMutator;

    void UpdateMissionInfo(class UGeneratedMission* mission);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MissionInfo(int32 EntryPoint);
};

#endif
