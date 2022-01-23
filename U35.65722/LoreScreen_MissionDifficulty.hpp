#ifndef UE4SS_SDK_LoreScreen_MissionDifficulty_HPP
#define UE4SS_SDK_LoreScreen_MissionDifficulty_HPP

class ULoreScreen_MissionDifficulty_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* BiomeDescription;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UDifficultySetting* Difficulty;
    bool IsHovering;
    class UAudioComponent* HoverSound;

    void Construct();
    void ExecuteUbergraph_LoreScreen_MissionDifficulty(int32 EntryPoint, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
};

#endif
