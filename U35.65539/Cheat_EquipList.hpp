#ifndef UE4SS_SDK_Cheat_EquipList_HPP
#define UE4SS_SDK_Cheat_EquipList_HPP

class UCheat_EquipList_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Label_C* Header_Text;
    UVerticalBox* List_Categories;
    UCheat_EquipList_Category_C* List_NoCategory;
    UScrollBox* List_ScrollBox;
    FText Title;
    TMap<FName, UCheat_EquipList_Category_C*> Categories;
    TArray<UCheat_EquipList_Entry_C*> Entries;
    FCheat_EquipList_COnEntryChanged OnEntryChanged;
    void OnEntryChanged();

    void Refresh();
    void SetTitle(FText Text);
    void GetEntries(TArray<UCheat_EquipList_Entry_C*>& OutEntries);
    void AddEntry(FText InName, FText InDescription, bool InOwned, bool InEquipped, UObject* InData, FText InCategory, UCheat_EquipList_Entry_C*& OutEntryWidget, FName CategoryID, UCheat_EquipList_Entry_C* EntryWidget, UCheat_EquipList_Category_C* CategoryWidget, bool CallFunc_IsValid_ReturnValue, UCheat_EquipList_Category_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UCheat_EquipList_Category_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, UCheat_EquipList_Category_C* K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, UCheat_EquipList_Entry_C* CallFunc_AddEntry_OutWidget);
    void Clear();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Cheat_EquipList(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
    void OnEntryChanged__DelegateSignature();
}

#endif
