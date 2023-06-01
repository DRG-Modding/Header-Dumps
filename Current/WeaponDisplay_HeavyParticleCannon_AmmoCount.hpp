#ifndef UE4SS_SDK_WeaponDisplay_HeavyParticleCannon_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_HeavyParticleCannon_AmmoCount_HPP

class UWeaponDisplay_HeavyParticleCannon_AmmoCount_C : public UAmmoCountWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fire;
    class UWidgetAnimation* Idle;
    class UImage* Image;
    class UImage* Image_1;
    class UImage* Image_4;
    class UImage* Image_114;
    class UImage* Image_Reload;
    class UImage* outline;
    class UProgressBar* ProgressBar_Clip;
    class UProgressBar* ProgressBar_Total;
    class UTextBlock* Text_ClipCount;
    class UTextBlock* Text_TotalPercent;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_2;
    int32 ClipSize;
    int32 MaxAmmo;
    int32 ReserveAmmo;
    float ReloadDuration;
    int32 CurrClipAmmo;
    float alpha;
    float DelayBeforeCounting;
    class UAudioComponent* ChargingAudioComp;
    class UAudioComponent* FullyChargedAudioComp;
    float MappedAlpha;
    class AItem* Particle Weapon;

    void SetData(int32 ClipSize, float ReloadDuration, int32 MaxAmmo);
    void Construct();
    void OnReloadTimeChanged_Event(float Amount);
    void OnAmountChanged(int32 Count);
    void OnTotalChanged(int32 Total);
    void DoItemEquipped();
    void UpdateTotalInfo(float Percent);
    void UpdateClipInfo(float Percent);
    void Init(class AItem* ParticleWeapon);
    void OnUnequipped();
    void OnEquipped();
    void ExecuteUbergraph_WeaponDisplay_HeavyParticleCannon_AmmoCount(int32 EntryPoint);
};

#endif
