#ifndef UE4SS_SDK_UI_Perks_Column_Unlocks_Arrow_HPP
#define UE4SS_SDK_UI_Perks_Column_Unlocks_Arrow_HPP

class UUI_Perks_Column_Unlocks_Arrow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Arrow01;
    bool IsUnlocked;

    void PreConstruct(bool IsDesignTime);
    void SetIsUnlocked(bool IsUnlocked);
    void ExecuteUbergraph_UI_Perks_Column_Unlocks_Arrow(int32 EntryPoint);
};

#endif
