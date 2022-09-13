#ifndef UE4SS_SDK_Cheat_OverclockSelection_HPP
#define UE4SS_SDK_Cheat_OverclockSelection_HPP

class UCheat_OverclockSelection_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_0;
    class UScrollBox* SB_OverclockList;
    TArray<class UCheat_PerkListItem_C*> perklistItems;

    void Initiate widget(EItemCategory ItemCategory);
    void On state change(bool Is Checked, class UItemUpgrade* Item, EItemCategory Item Category);
    void ExecuteUbergraph_Cheat_OverclockSelection(int32 EntryPoint);
};

#endif
