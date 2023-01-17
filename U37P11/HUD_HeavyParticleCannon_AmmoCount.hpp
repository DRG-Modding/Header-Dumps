#ifndef UE4SS_SDK_HUD_HeavyParticleCannon_AmmoCount_HPP
#define UE4SS_SDK_HUD_HeavyParticleCannon_AmmoCount_HPP

class UHUD_HeavyParticleCannon_AmmoCount_C : public UCustomAmmoCountWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UHUD_HeavyParticleCannon_AmmoCount_Internal_C* HUD_HeavyParticleCannon_AmmoCount_Internal;

    void ReceiveItemSet();
    void SetData(int32 ClipSize, float ReloadDuration);
    void ExecuteUbergraph_HUD_HeavyParticleCannon_AmmoCount(int32 EntryPoint);
};

#endif
