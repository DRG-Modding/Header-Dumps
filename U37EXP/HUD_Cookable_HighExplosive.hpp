#ifndef UE4SS_SDK_HUD_Cookable_HighExplosive_HPP
#define UE4SS_SDK_HUD_Cookable_HighExplosive_HPP

class UHUD_Cookable_HighExplosive_C : public UHUD_Cookable_Crosshair_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_CircularProgressBar_C* UI_CircularProgressBar;

    void Construct();
    void UpdateCookTime(float Progress);
    void ExecuteUbergraph_HUD_Cookable_HighExplosive(int32 EntryPoint);
};

#endif
