#ifndef UE4SS_SDK_UI_FPS_HPP
#define UE4SS_SDK_UI_FPS_HPP

class UUI_FPS_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_FPS;
    FSlateFontInfo Font;
    TEnumAsByte<ETextJustify::Type> Justification;
    float SmoothedDeltaT;

    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void OnShowFPSChanged(bool NewValue);
    void ExecuteUbergraph_UI_FPS(int32 EntryPoint);
};

#endif
