#ifndef UE4SS_SDK_SaltlCaves_MapWidget_HPP
#define UE4SS_SDK_SaltlCaves_MapWidget_HPP

class USaltlCaves_MapWidget_C : public UITM_MisSel_BiomeBase_C
{
    class UAnimatedStaticOverlay_WithScanlines_C* AnimatedStaticOverlay_WithScanlines;
    class UCanvasPanel* CanvasPanel_0;

    void GetBasePanel(class UCanvasPanel*& Panel);
};

#endif
