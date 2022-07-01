#ifndef UE4SS_SDK_WeaponDisplay_CryoSpray_Ammo_HPP
#define UE4SS_SDK_WeaponDisplay_CryoSpray_Ammo_HPP

class UWeaponDisplay_CryoSpray_Ammo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* CircularProgressBar;
    class ACryosprayItem* CryoSpray;
    class UAmmoDriveWeaponAggregator* Aggregator;
    class UMaterialInstanceDynamic* ProgressMaterial;

    void Set Progress(float Progress);
    void ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo(int32 EntryPoint);
};

#endif
