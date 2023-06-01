#ifndef UE4SS_SDK_WeaponDisplay_CryoSpray_Ammo_HPP
#define UE4SS_SDK_WeaponDisplay_CryoSpray_Ammo_HPP

class UWeaponDisplay_CryoSpray_Ammo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CircularProgressBar;
    class ACryosprayItem* CryoSpray;
    class UAmmoDriveWeaponAggregator* Aggregator;
    class UMaterialInstanceDynamic* ProgressMaterial;
    class AItem* Item;

    void Set Progress(float Progress);
    void Init(class AItem* Item);
    void OnItemUnequipped();
    void OnItemEquipped();
    void ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo(int32 EntryPoint);
};

#endif
