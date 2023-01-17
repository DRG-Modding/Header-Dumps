#ifndef UE4SS_SDK_HUD_Cookable_Crosshair_HPP
#define UE4SS_SDK_HUD_Cookable_Crosshair_HPP

class UHUD_Cookable_Crosshair_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;

    void UpdateCookTime(float Progress);
    void ExecuteUbergraph_HUD_Cookable_Crosshair(int32 EntryPoint);
};

#endif
