#ifndef UE4SS_SDK_Cheat_GemInfo_HPP
#define UE4SS_SDK_Cheat_GemInfo_HPP

class UCheat_GemInfo_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_Material;
    class UGemResourceData* GemResource;

    void Construct();
    void ExecuteUbergraph_Cheat_GemInfo(int32 EntryPoint);
};

#endif
