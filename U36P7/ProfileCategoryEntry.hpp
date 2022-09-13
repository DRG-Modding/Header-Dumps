#ifndef UE4SS_SDK_ProfileCategoryEntry_HPP
#define UE4SS_SDK_ProfileCategoryEntry_HPP

class UProfileCategoryEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Category;
    class UTextBlock* TimeSpent;
    FProfileCategoryTiming Entry;

    void Construct();
    void ExecuteUbergraph_ProfileCategoryEntry(int32 EntryPoint);
};

#endif
