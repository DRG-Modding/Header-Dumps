#ifndef UE4SS_SDK_CausticMire_MapWidget_HPP
#define UE4SS_SDK_CausticMire_MapWidget_HPP

class UCausticMire_MapWidget_C : UITM_MisSel_BiomeBase_C
{
    UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    UCanvasPanel* CanvasPanel_0;

    void GetBasePanel(UCanvasPanel*& Panel);
}

#endif