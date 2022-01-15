#ifndef UE4SS_SDK_Icon_ClassLevel_DUPL_1_HPP
#define UE4SS_SDK_Icon_ClassLevel_DUPL_1_HPP

class UIcon_ClassLevel_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Icon_ClassLevel;
    UImage* Icon_PlayerRank;
    USizeBox* SizeBox_55;
    UWidgetSwitcher* WidgetSwitcher_0;
    float IconSize;
    bool Player Rank;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Icon_ClassLevel(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, bool Temp_bool_Variable, int32 K2Node_Select_Default);
}

#endif
