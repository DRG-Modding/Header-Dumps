#ifndef UE4SS_SDK_Cheat_SpawnEnemySingleWidget_HPP
#define UE4SS_SDK_Cheat_SpawnEnemySingleWidget_HPP

class UCheat_SpawnEnemySingleWidget_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBorder* Border_54;
    UTextBlock* ItemIn-GameName;
    UObject* Item;
    bool IsSelected;

    FLinearColor GetBrushColor_BG();
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void OnListItemObjectSet(UObject* ListItemObject);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void ExecuteUbergraph_Cheat_SpawnEnemySingleWidget(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_bIsExpanded, UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, FString CallFunc_GetDisplayName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
}

#endif
