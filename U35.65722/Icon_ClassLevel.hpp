#ifndef UE4SS_SDK_Icon_ClassLevel_HPP
#define UE4SS_SDK_Icon_ClassLevel_HPP

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
    void ExecuteUbergraph_Icon_ClassLevel(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, bool Temp_bool_Variable, int32 K2Node_Select_Default);
};

#endif
