#ifndef UE4SS_SDK_ProfileEntry_HPP
#define UE4SS_SDK_ProfileEntry_HPP

class UProfileEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Category;
    class UTextBlock* Context;
    class UTextBlock* TimeSpent;
    FProfileEntry Entry;

    void Construct();
    void ExecuteUbergraph_ProfileEntry(int32 EntryPoint);
};

#endif
