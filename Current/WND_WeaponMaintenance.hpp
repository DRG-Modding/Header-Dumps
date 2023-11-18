#ifndef UE4SS_SDK_WND_WeaponMaintenance_HPP
#define UE4SS_SDK_WND_WeaponMaintenance_HPP

class UWND_WeaponMaintenance_C : public UWeaponMaintenanceTabWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URetainerBox* RetainerBox_BG;
    class UVerticalBox* RowBox;
    FWND_WeaponMaintenance_COnWeaponMaintenanceChanged OnWeaponMaintenanceChanged;
    void OnWeaponMaintenanceChanged();

    void Construct();
    void OnShown();
    void OnSavegameChanged();
    void ExecuteUbergraph_WND_WeaponMaintenance(int32 EntryPoint);
    void OnWeaponMaintenanceChanged__DelegateSignature();
};

#endif
