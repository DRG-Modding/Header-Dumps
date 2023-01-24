#ifndef UE4SS_SDK_HUD_Crossbow_AmmoCount_HPP
#define UE4SS_SDK_HUD_Crossbow_AmmoCount_HPP

class UHUD_Crossbow_AmmoCount_C : public UCustomAmmoCountWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimSwap;
    class UHUD_Crossbow_AmmoCount_Row_C* Arrow_Active;
    class UHUD_Crossbow_AmmoCount_Row_C* Arrow_Inactive;
    class ACrossbow* Crossbow;
    class UAmmoDriveWeaponAggregator* AmmoAggregator;
    bool DefaultEquipped;
    bool HasSpecialArrow;

    void GetArrowIcon(bool InDefaultArrow, class UTexture2D*& OutTexture, bool& OutValid);
    void Refresh();
    void Finished_7D5D15E24B34D3D4466E3BA129F1FC49();
    void ReceiveItemSet();
    void OnAmmoCountChanged(int32 Amount);
    void OnArrowTypeChanged(bool InDefaultArrow);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Crossbow_AmmoCount(int32 EntryPoint);
};

#endif
