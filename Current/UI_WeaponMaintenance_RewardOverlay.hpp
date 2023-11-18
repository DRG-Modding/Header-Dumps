#ifndef UE4SS_SDK_UI_WeaponMaintenance_RewardOverlay_HPP
#define UE4SS_SDK_UI_WeaponMaintenance_RewardOverlay_HPP

class UUI_WeaponMaintenance_RewardOverlay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_ItemIcon_C* ItemIcon_Left;
    class UITM_ItemIcon_C* ItemIcon_Right;
    class USizeBox* SizeBox_0;
    class UItemID* ItemID;
    float In Height Override;
    FMargin In Padding;

    void SetItemID(class UItemID* InItemID);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_WeaponMaintenance_RewardOverlay(int32 EntryPoint);
};

#endif
