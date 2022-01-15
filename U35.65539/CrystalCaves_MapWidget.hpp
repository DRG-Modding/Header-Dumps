#ifndef UE4SS_SDK_CrystalCaves_MapWidget_HPP
#define UE4SS_SDK_CrystalCaves_MapWidget_HPP

class UCrystalCaves_MapWidget_C : UITM_MisSel_BiomeBase_C
{
    UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    UCanvasPanel* CanvasPanel_0;

    void GetBasePanel(UCanvasPanel*& Panel);
}

#endif
