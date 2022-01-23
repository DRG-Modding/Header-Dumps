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
    void ExecuteUbergraph_WeaponDisplay_CryoSpray_Ammo(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_CustomEvent_progress, float CallFunc_FClamp_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

#endif
