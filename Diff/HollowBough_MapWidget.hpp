#ifndef UE4SS_SDK_HollowBough_MapWidget_HPP
#define UE4SS_SDK_HollowBough_MapWidget_HPP

class UHollowBough_MapWidget_C : public UITM_MisSel_BiomeBase_C
{
    class UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    class UCanvasPanel* CanvasPanel_0;

    void GetBasePanel(class UCanvasPanel*& Panel);
};

#endif
