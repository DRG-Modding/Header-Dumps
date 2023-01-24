#ifndef UE4SS_SDK_Cheat_GiveBeerBuff_HPP
#define UE4SS_SDK_Cheat_GiveBeerBuff_HPP

class UCheat_GiveBeerBuff_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UScrollBox* ScrollBox_79;
    TArray<class UTemporaryBuff*> BeerBuffList;
    TArray<class UCheat_GiveBeerBuff_Row_C*> my beer buff rows;

    void Construct();
    void set selected row active(class UCheat_GiveBeerBuff_Row_C* Buff row to skip);
    void ExecuteUbergraph_Cheat_GiveBeerBuff(int32 EntryPoint);
};

#endif
