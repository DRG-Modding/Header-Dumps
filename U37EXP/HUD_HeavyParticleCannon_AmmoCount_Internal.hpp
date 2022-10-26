#ifndef UE4SS_SDK_HUD_HeavyParticleCannon_AmmoCount_Internal_HPP
#define UE4SS_SDK_HUD_HeavyParticleCannon_AmmoCount_Internal_HPP

class UHUD_HeavyParticleCannon_AmmoCount_Internal_C : public UAmmoCountWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AmmoBox;
    class UTextBlock* DATA_Current;
    class UTextBlock* DATA_Total;
    int32 ClipSize;
    float ReloadDuration;
    int32 CurrClipAmmo;
    float alpha;
    float DelayBeforeCounting;
    int32 ReserveAmmo;
    float MappedAlpha;

    void OnTotalChanged(int32 Total);
    void OnAmountChanged(int32 Count);
    void OnVisibleChanged(bool Visible, bool showClipCount);
    void OnTotalVisibleChanged(bool Visible);
    void PreConstruct(bool IsDesignTime);
    void SetData(int32 ClipSize, float ReloadDuration);
    void OnReloadTimeChanged_Event(float Amount);
    void ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount_Internal(int32 EntryPoint);
};

#endif
