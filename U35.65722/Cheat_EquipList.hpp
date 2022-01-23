#ifndef UE4SS_SDK_Cheat_EquipList_HPP
#define UE4SS_SDK_Cheat_EquipList_HPP

class UCheat_EquipList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Label_C* Header_Text;
    class UVerticalBox* List_Categories;
    class UCheat_EquipList_Category_C* List_NoCategory;
    class UScrollBox* List_ScrollBox;
    FText Title;
    TMap<class FName, class UCheat_EquipList_Category_C*> Categories;
    TArray<class UCheat_EquipList_Entry_C*> Entries;
    FCheat_EquipList_COnEntryChanged OnEntryChanged;
    void OnEntryChanged();

    void Refresh();
    void SetTitle(FText Text);
    void GetEntries(TArray<class UCheat_EquipList_Entry_C*>& OutEntries);
    void AddEntry(FText InName, FText InDescription, bool InOwned, bool InEquipped, class UObject* InData, FText InCategory, class UCheat_EquipList_Entry_C*& OutEntryWidget, FName CategoryID, class UCheat_EquipList_Entry_C* EntryWidget, class UCheat_EquipList_Category_C* CategoryWidget, bool CallFunc_IsValid_ReturnValue, class UCheat_EquipList_Category_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCheat_EquipList_Category_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, class UCheat_EquipList_Category_C* K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, class UCheat_EquipList_Entry_C* CallFunc_AddEntry_OutWidget);
    void Clear();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Cheat_EquipList(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
    void OnEntryChanged__DelegateSignature();
};

#endif
