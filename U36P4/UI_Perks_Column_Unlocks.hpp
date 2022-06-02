#ifndef UE4SS_SDK_UI_Perks_Column_Unlocks_HPP
#define UE4SS_SDK_UI_Perks_Column_Unlocks_HPP

class UUI_Perks_Column_Unlocks_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* ArrowBox;
    int32 ArrowCount;
    int32 UnlockedCount;
    TArray<class UUI_Perks_Column_Unlocks_Arrow_C*> ArrowWidgets;

    void IsUnlocked(bool& Unlocked);
    void PreConstruct(bool IsDesignTime);
    void Set Arrow Count(int32 ArrowCount, int32 UnlockedCount);
    void Set Unlocked Count(int32 UnlockedCount);
    void ExecuteUbergraph_UI_Perks_Column_Unlocks(int32 EntryPoint);
};

#endif
