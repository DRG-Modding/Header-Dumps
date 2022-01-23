#ifndef UE4SS_SDK_Cheat_SpawnEnemySingleWidget_HPP
#define UE4SS_SDK_Cheat_SpawnEnemySingleWidget_HPP

class UCheat_SpawnEnemySingleWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_54;
    class UTextBlock* ItemIn-GameName;
    class UObject* Item;
    bool IsSelected;

    FLinearColor GetBrushColor_BG();
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void ExecuteUbergraph_Cheat_SpawnEnemySingleWidget(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_bIsExpanded, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, FString CallFunc_GetDisplayName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
};

#endif
