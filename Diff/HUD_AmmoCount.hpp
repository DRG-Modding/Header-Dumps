#ifndef UE4SS_SDK_HUD_AmmoCount_HPP
#define UE4SS_SDK_HUD_AmmoCount_HPP

class UHUD_AmmoCount_C : public UAmmoCountWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AmmoBox;
    class UTextBlock* DATA_Current;
    class UTextBlock* DATA_Total;

    void OnTotalChanged(int32 Total);
    void OnAmountChanged(int32 Count);
    void OnVisibleChanged(bool Visible, bool showClipCount);
    void Construct();
    void OnTotalVisibleChanged(bool Visible);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_AmmoCount(int32 EntryPoint);
};

#endif
