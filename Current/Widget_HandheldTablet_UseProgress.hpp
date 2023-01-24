#ifndef UE4SS_SDK_Widget_HandheldTablet_UseProgress_HPP
#define UE4SS_SDK_Widget_HandheldTablet_UseProgress_HPP

class UWidget_HandheldTablet_UseProgress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    class UImage* UseImage;
    class UProgressBar* UseProgress;
    class APlayerCharacter* Character;
    class UUsableComponentBase* Usable;

    void UpdateIcon();
    void GetUsableIcon(class UTexture2D*& OutTexture);
    void UpdateProgress();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Widget_HandheldTablet_UseProgress(int32 EntryPoint);
};

#endif
