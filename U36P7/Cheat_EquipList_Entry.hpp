#ifndef UE4SS_SDK_Cheat_EquipList_Entry_HPP
#define UE4SS_SDK_Cheat_EquipList_Entry_HPP

class UCheat_EquipList_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Label_C* Description_Text;
    class UButton* EquipButton;
    class UBorder* Equipped_Border;
    class UBasic_Label_C* Name_Text;
    class UBasic_Label_C* Owned_Text;
    class UButton* OwnedButton;
    class UButton* SchematicButton;
    class UBasic_Label_C* SchematicText;
    FText Name;
    FText Description;
    bool owned;
    bool Equipped;
    bool Hovered;
    class UObject* Data;
    FCheat_EquipList_Entry_COnEquipClicked OnEquipClicked;
    void OnEquipClicked(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped);
    FCheat_EquipList_Entry_COnOwnedClicked OnOwnedClicked;
    void OnOwnedClicked(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned);
    int32 Index;
    bool AlwaysOwned;
    FCheat_EquipList_Entry_COnSchematicClicked OnSchematicClicked;
    void OnSchematicClicked(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned);
    bool SchematicOwned;
    bool HasSchematic;
    class UObject* contextObject;

    void GetEquipped(bool& Equipped);
    void SetSchematicOwned(bool SchematicOwned);
    void SetOwnedData(TArray<class UObject*>& InOwnedData);
    void SetOwned(bool owned);
    void SetEquippedData(TArray<class UObject*>& InEquippedData);
    void SetEquipped(bool InEquipped);
    void GetValues(FText& Name, FText& Description, bool& owned, bool& Equipped, class UObject*& Data);
    void SetValues(FText Name, FText Description, bool owned, bool Equipped, class UObject* Data);
    void Refresh();
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__OwnedButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__EquipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Cheat_EquipList_Entry_SchematicButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_EquipList_Entry(int32 EntryPoint);
    void OnSchematicClicked__DelegateSignature(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned);
    void OnOwnedClicked__DelegateSignature(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InOwned);
    void OnEquipClicked__DelegateSignature(class UCheat_EquipList_Entry_C* InEntryWidget, class UObject* InData, bool InEquipped);
};

#endif
