#ifndef UE4SS_SDK_Cheat_SetDifficulty_HPP
#define UE4SS_SDK_Cheat_SetDifficulty_HPP

class UCheat_SetDifficulty_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UScrollBox* ScrollBox_0;
    TArray<class UDifficultySetting*> Difficulty;
    TArray<class UCheat_SetDifficultyRow_C*> myListItems;

    void Construct();
    void Build Difficulty List();
    void On Change diff();
    void ExecuteUbergraph_Cheat_SetDifficulty(int32 EntryPoint);
};

#endif
