#ifndef UE4SS_SDK_Icon_ClassLevel_DUPL_1_HPP
#define UE4SS_SDK_Icon_ClassLevel_DUPL_1_HPP

class UIcon_ClassLevel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon_ClassLevel;
    class UImage* Icon_PlayerRank;
    class USizeBox* SizeBox_55;
    class UWidgetSwitcher* WidgetSwitcher_0;
    float IconSize;
    bool Player Rank;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Icon_ClassLevel(int32 EntryPoint);
};

#endif
