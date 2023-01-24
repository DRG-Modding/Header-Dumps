#ifndef UE4SS_SDK_ITM_Pickaxe_Slot_HPP
#define UE4SS_SDK_ITM_Pickaxe_Slot_HPP

class UITM_Pickaxe_Slot_C : public UITM_Wardrobe_ItemSlot_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    FText CategoryText;
    TArray<class UPickaxePart*> Items;
    EPickaxePartLocation PickaxePartLocation;
    class UItemID* PickAxe;
    class UITM_GeneratedIcon_Item_C* EquippedWidget;

    void ReceiveGetNumberOfItems(int32& Num);
    void ReceiveItemDLC(int32 Index, class UDLCBase*& FromDLC);
    void Update Equipped Item();
    void ReceiveEquipItem(int32 InIndex, bool& OutSuccess);
    void ReceivePreviewItem(int32 Index, bool Show, bool& OutSuccess);
    void ReceiveItemNotificationData(int32 Index, TArray<class UObject*>& Array);
    void ReceiveGenerateItems(TArray<class UWidget*>& OutItemWidgets);
    void CreateItemWidget(class UPickaxePart* InPart, class UITM_GeneratedIcon_Item_C*& OutWidget);
    void ReceiveGetSelectedIndex(int32& OutIndex);
    void ReceiveInitialize(int32& AvailableItems);
    bool IsInteractable();
    void InitializePickAxe(class UPlayerCharacterID* InCharacter, class UItemID* InItem);
    void ReceivePreConstruct();
    void ReceiveReleaseResource(class UWidget* InWidget);
    void ReleaseResources();
    void On Initialized();
    void ExecuteUbergraph_ITM_Pickaxe_Slot(int32 EntryPoint);
};

#endif
