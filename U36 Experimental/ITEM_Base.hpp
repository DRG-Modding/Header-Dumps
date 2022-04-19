#ifndef UE4SS_SDK_ITEM_Base_HPP
#define UE4SS_SDK_ITEM_Base_HPP

class UITEM_Base_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class AActor> itemClass;
    FITEM_Base_COnClicked OnClicked;
    void OnClicked(TSubclassOf<class AActor> Item);
    int32 ItemEquipIndex;
    EItemCategory ItemCategory;
    TSubclassOf<class APlayerCharacter> PlayerCharacter;

    void GetNumberOfItems(TSubclassOf<class APlayerCharacter> playerClass, int32& ItemCount);
    void GetItemCountString(TSubclassOf<class APlayerCharacter> playerClass, FText& Result);
    void Clear();
    void Construct();
    void OnClear();
    void UpdateEquipment(TSubclassOf<class APlayerCharacter> PlayerCharacter);
    void OnItemUpdated();
    void ExecuteUbergraph_ITEM_Base(int32 EntryPoint);
    void OnClicked__DelegateSignature(TSubclassOf<class AActor> Item);
};

#endif
