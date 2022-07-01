#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSlot_VictoryMoves_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSlot_VictoryMoves_HPP

class UITM_Wardrobe_ItemSlot_VictoryMoves_C : public UITM_Wardrobe_ItemSlot_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UVictoryPose*> VictoryPoses;
    class UWidget* SelectedWidget;

    void ReceiveGetNumberOfItems(int32& Num);
    void ReceiveEquipItem(int32 InIndex, bool& OutSuccess);
    void PreviewItem(class UVictoryPose* Item, bool Show, bool& OutSuccess);
    void ReceivePreviewItem(int32 Index, bool Show, bool& OutSuccess);
    void ReceiveItemNotificationData(int32 Index, TArray<class UObject*>& Array);
    void ReceiveInitialize(int32& AvailableItems);
    void ReceiveGetSelectedIndex(int32& OutIndex);
    void UpdateOrCreateItemWidget(class UVictoryPose* InVictoryMove, class UWidget* InReuseWidget, bool InShowToolTip, class UWidget*& OutWidget);
    void ReceiveGenerateItems(TArray<class UWidget*>& OutItemWidgets);
    void UpdateEquipped();
    void ReceivePreConstruct();
    void SetHovered(bool InSlotHovered);
    void ExecuteUbergraph_ITM_Wardrobe_ItemSlot_VictoryMoves(int32 EntryPoint);
};

#endif
