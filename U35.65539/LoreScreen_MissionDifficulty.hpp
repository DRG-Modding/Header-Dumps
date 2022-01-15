#ifndef UE4SS_SDK_LoreScreen_MissionDifficulty_HPP
#define UE4SS_SDK_LoreScreen_MissionDifficulty_HPP

class ULoreScreen_MissionDifficulty_C : ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* BiomeDescription;
    ULoreScreen_Template_C* LoreScreen_Template;
    UDifficultySetting* Difficulty;
    bool IsHovering;
    UAudioComponent* HoverSound;

    void Construct();
    void ExecuteUbergraph_LoreScreen_MissionDifficulty(int32 EntryPoint, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
}

#endif
