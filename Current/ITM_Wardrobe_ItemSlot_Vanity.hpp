#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSlot_Vanity_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSlot_Vanity_HPP

class UITM_Wardrobe_ItemSlot_Vanity_C : public UITM_Wardrobe_ItemSlot_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    EVanitySlot VanitySlot;
    class UITM_GeneratedIcon_Item_C* SelectedIcon;
    TArray<class UVanityItem*> VanityItems;
    class UVanityItem* DefaultItem;
    class UTexture2D* DefaultItemIcon;
    FText DefaultItemName;

    void GetVanityItemsForWidget(TArray<class UVanityItem*>& Items);
    void ReceiveGetNumberOfItems(int32& Num);
    void ReceiveItemDLC(int32 Index, class UDLCBase*& FromDLC);
    FText GetItemName(class UVanityItem* InVanityItem);
    void UpdateItemWidget(class UITM_GeneratedIcon_Item_C* InWidget, class UVanityItem* InVanityItem, bool In Show Tool Tip);
    void ReceiveEquipItem(int32 InIndex, bool& OutSuccess);
    void ReceivePreviewItem(int32 Index, bool Show, bool& OutSuccess);
    void ReceiveItemNotificationData(int32 Index, TArray<class UObject*>& Array);
    void ReceiveInitialize(int32& AvailableItems);
    void ReceiveGetSelectedIndex(int32& OutIndex);
    void CreateItemWidget(class UVanityItem* InVanityItem, bool InBackgroundVisible, bool InShowToolTip, class UITM_GeneratedIcon_Item_C*& OutItemWidget);
    void SetSelectedItem(class UVanityItem* Item, bool Equip);
    void ReceiveGenerateItems(TArray<class UWidget*>& OutItemWidgets);
    void ReceiveReleaseResource(class UWidget* InWidget);
    void ReceivePreConstruct();
    void On Initialized();
    void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_Vanity(int32 EntryPoint);
};

#endif
