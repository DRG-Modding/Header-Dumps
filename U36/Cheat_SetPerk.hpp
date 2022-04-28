#ifndef UE4SS_SDK_Cheat_SetPerk_HPP
#define UE4SS_SDK_Cheat_SetPerk_HPP

class UCheat_SetPerk_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UScrollBox* ScrollBox_79;
    TArray<class UCheat_SetPerk_Row_C*> Perk Rows;
    TArray<class UPerkAsset*> EquippedPerks;

    void Construct();
    void Set Perk In Row State(class UCheat_SetPerk_Row_C* Buff row to skip);
    void ExecuteUbergraph_Cheat_SetPerk(int32 EntryPoint);
};

#endif
