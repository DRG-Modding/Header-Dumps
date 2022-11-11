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

    void IsSchematicOwned(class UItemAquisitionBase* Aquisition, class UPlayerCharacterID* characterID, bool& IsOwned);
    void HasSchematic(class UItemAquisitionBase* Aquisition, class UPlayerCharacterID* characterID, bool& HasSchematic);
    void GetSchematicFromAquisition(class UItemAquisitionBase* Aquisition, class UPlayerCharacterID* characterID, class USchematic*& Schematic);
    void Refresh();
    void SetTitle(FText Text);
    void GetEntries(TArray<class UCheat_EquipList_Entry_C*>& OutEntries);
    void AddEntry(FText InName, FText InDescription, bool InOwned, bool InEquipped, class UObject* InData, FText InCategory, bool AlwaysOwned, bool SchematicOwned, bool HasSchematic, class UObject* contextObject, class UCheat_EquipList_Entry_C*& OutEntryWidget);
    void Clear();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Cheat_EquipList(int32 EntryPoint);
    void OnEntryChanged__DelegateSignature();
};

#endif
