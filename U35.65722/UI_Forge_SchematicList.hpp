#ifndef UE4SS_SDK_UI_Forge_SchematicList_HPP
#define UE4SS_SDK_UI_Forge_SchematicList_HPP

class UUI_Forge_SchematicList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetSwitcher* ContentSwitcher;
    class UOverlay* EmptyOverlay;
    class UOverlay* FullOverlay;
    class UImage* Image_159;
    class UImage* Image_161;
    class UImage* Image_162;
    class URichTextBlock* RichTextBlock_251;
    class UVerticalBox* SchematicsBox;
    class UUI_ImageTinted_C* UI_ImageTinted;
    FUI_Forge_SchematicList_COnItemClicked OnItemClicked;
    void OnItemClicked(class UUI_Forge_Schematic_C* Item);
    TArray<class USchematic*> Schematics;
    int32 Index;
    FTimerHandle NextTimer;
    FText CurrentCategory;
    bool ShowHistory;

    void AddSeparator(FText Text, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FMargin K2Node_MakeStruct_Margin, class UUI_Forge_SchematicList_Separator_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
    void PopulateList(TArray<class USchematic*>& CallFunc_GetForgedSchematics_ReturnValue, FPopulateListK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, TArray<class USchematic*>& CallFunc_GetOwnedSchematicsSorted_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
    void TryAddSeparator(class USchematic* InNextSchematic, FText ThisCategory, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IgnoreCase_TextText_ReturnValue, int32 CallFunc_GetCategoryOrder_OutOrder, FText CallFunc_GetCategoryOrder_OutName, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void GetCategoryOrder(class USchematic* Schematic, int32& OutOrder, FText& OutName, class USchematicItem* Item, int32 ArrayIndex, TArray<class USchematicCategory*> OverclockTypes, class USchematicCategory* Category, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class USchematicCategory*>& K2Node_MakeArray_Array, class UVictoryPoseSchematicItem* K2Node_DynamicCast_AsVictory_Pose_Schematic_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Find_ReturnValue, class UResourceSchematicItem* K2Node_DynamicCast_AsResource_Schematic_Item, bool K2Node_DynamicCast_bSuccess_1, class UVanitySchematicItem* K2Node_DynamicCast_AsVanity_Schematic_Item, bool K2Node_DynamicCast_bSuccess_2, class USkinSchematicItem* K2Node_DynamicCast_AsSkin_Schematic_Item, bool K2Node_DynamicCast_bSuccess_3, class UOverclockShematicItem* K2Node_DynamicCast_AsOverclock_Shematic_Item, bool K2Node_DynamicCast_bSuccess_4);
    void AddNext(class USchematic* Schematic, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FAddNextK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Percent_IntInt_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 K2Node_Select_Default, class USchematic* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1);
    void Refresh(int32 Temp_int_Variable, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_Forge_Schematic_C* K2Node_DynamicCast_AsUI_Forge_Schematic, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void SortMethod(class USchematic* Schematic1, class USchematic* Schematic2, bool& FirstIsLarger, bool Afford2, bool Afford1, int32 CategoryOrder2, int32 CategoryOrder1, FText Title2, FText Title1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FText CallFunc_GetTitle_ReturnValue, FText CallFunc_GetTitle_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_CanAffordSchematic_ReturnValue, bool CallFunc_CanAffordSchematic_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_GetCategoryOrder_OutOrder, FText CallFunc_GetCategoryOrder_OutName, int32 CallFunc_GetCategoryOrder_OutOrder_1, FText CallFunc_GetCategoryOrder_OutName_1, bool CallFunc_TextGreaterThan_ReturnValue);
    void ItemClicked(class UUI_Forge_Schematic_C* Item);
    void AddSchematic(class USchematic* InSchematic, class UUI_Forge_Schematic_C* Entry, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasBeenForged_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FAddSchematicK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Forge_Schematic_C* CallFunc_Create_ReturnValue);
    void Clear(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UUI_Forge_Schematic_C* K2Node_DynamicCast_AsUI_Forge_Schematic, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* K2Node_Select_Default);
    void Construct();
    void ExecuteUbergraph_UI_Forge_SchematicList(int32 EntryPoint);
    void OnItemClicked__DelegateSignature(class UUI_Forge_Schematic_C* Item);
};

#endif
