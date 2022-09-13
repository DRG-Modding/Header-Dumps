#ifndef UE4SS_SDK_Screen_BaseLoadLevel_HPP
#define UE4SS_SDK_Screen_BaseLoadLevel_HPP

class UScreen_BaseLoadLevel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartLoadSeq();
    void StopLoader();
    void ExecuteUbergraph_Screen_BaseLoadLevel(int32 EntryPoint);
};

#endif
