#ifndef UE4SS_SDK_LoreScreen_MissionDuration_HPP
#define UE4SS_SDK_LoreScreen_MissionDuration_HPP

class ULoreScreen_MissionDuration_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* BiomeDescription;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UMissionTemplate* MissionTemplate;
    class UMissionDuration* MissionDuration;
    class UAudioComponent* HoverSound;

    void Construct();
    void ExecuteUbergraph_LoreScreen_MissionDuration(int32 EntryPoint, FObjectiveMissionIcon CallFunc_GetPrimaryObjectiveIcon_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
};

#endif
