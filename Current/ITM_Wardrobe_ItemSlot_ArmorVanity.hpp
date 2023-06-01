#ifndef UE4SS_SDK_ITM_Wardrobe_ItemSlot_ArmorVanity_HPP
#define UE4SS_SDK_ITM_Wardrobe_ItemSlot_ArmorVanity_HPP

class UITM_Wardrobe_ItemSlot_ArmorVanity_C : public UITM_Wardrobe_ItemSlot_Vanity_C
{

    void ReceivePreviewItem(int32 Index, bool Show, bool& OutSuccess);
    void SetSelectedItem(class UVanityItem* Item, bool Equip);
    void ReceiveToggleType(bool& success);
};

#endif
