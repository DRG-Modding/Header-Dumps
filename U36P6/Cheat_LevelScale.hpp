#ifndef UE4SS_SDK_Cheat_LevelScale_HPP
#define UE4SS_SDK_Cheat_LevelScale_HPP

class UCheat_LevelScale_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_0;
    class UCollectableResourceData* Resource;

    void Construct();
    void BP_OnRefresh();
    void ExecuteUbergraph_Cheat_LevelScale(int32 EntryPoint);
};

#endif
