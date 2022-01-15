#ifndef UE4SS_SDK_ITM_MissionInfo_HPP
#define UE4SS_SDK_ITM_MissionInfo_HPP

class UITM_MissionInfo_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DataDifficultyName;
    UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;
    UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength;
    UITM_WarningAndMutator_C* ITM_WarningAndMutator;

    void UpdateMissionInfo(UGeneratedMission* mission, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, UMissionDNA* CallFunc_GetMissionDNA_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MissionInfo(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime);
}

#endif
