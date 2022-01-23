#ifndef UE4SS_SDK_ITM_MissionInfo_HPP
#define UE4SS_SDK_ITM_MissionInfo_HPP

class UITM_MissionInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DataDifficultyName;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;
    class UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength;
    class UITM_WarningAndMutator_C* ITM_WarningAndMutator;

    void UpdateMissionInfo(class UGeneratedMission* mission, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MissionInfo(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, bool K2Node_Event_IsDesignTime);
};

#endif
