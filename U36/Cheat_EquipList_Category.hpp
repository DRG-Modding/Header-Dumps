#ifndef UE4SS_SDK_Cheat_EquipList_Category_HPP
#define UE4SS_SDK_Cheat_EquipList_Category_HPP

class UCheat_EquipList_Category_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Image_C* Arrow_Image;
    class UBasic_Image_C* Background;
    class UVerticalBox* Entries_VerticalBox;
    class UBasic_Label_C* Name_Text;
    class UButton* OpenButton;
    class UVerticalBox* Owned_VerticalBox;
    FText Name;
    bool Open;

    void Refresh();
    void AddEntry(FText Name, FText Description, bool owned, bool Equipped, class UObject* Data, bool AlwaysOwned, bool SchematicOwned, bool HasSchematic, class UObject* contextObject, class UCheat_EquipList_Entry_C*& OutWidget);
    void Clear();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__OpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__OpenButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__OpenButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_EquipList_Category(int32 EntryPoint);
};

#endif
